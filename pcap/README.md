# PCAP files
We use these to attempt to reverse-engineer the Skype Protocol. The goal would be to authenticate any user that logs in (since it's our server) and then to be able to provide a user that would be the source of all voicemail messages.

# Program Launch
The application resolves the following domains:
- apps.skypeassets.com
- a.config.skype.com
- b.config.skype.com
- zuul-test.cloudapp.net
- zuul-test.cloudapp.net<system search list domains>

It makes an https connection to apps.skypeassets.com to grab data. The server (currently) fails at TLS Handshake.

It makes an https connection to a.config.skype.com and b.config.skype.com to grab data. The server immediately fails connection.

apps.skypeassets.com = cname:apps.skypeassets.com.edgekey.net, cname:e1855.b.akamaiedge.net, addr 104.66.225.249

a.config.skype.com = cname:skypeecs-prod-edge-a.trafficmanager.net, cname:l-0007.config.skype.com, cname:config-edge-skype.l-0007.l-msedge.net, cname:l-0007.l-msedge.net, addr 13.107.42.16

b.config.skype.com = cname:skypeecs-prod-edge-b.trafficmanager.net, cname:l-0007.config.skype.com

# Authentication
The application resolves the following domains:
- dsn10.d.skype.net
- dsn13.d.skype.net

dns13.d.skype.net resolves to dns13.skype-dsn.akadns.net (127.80.50.80).

dns10.d.skype.net resolves to dns10.skype-dsn.akadns.net (127.80.50.80).

Application then makes a monumental amount of UDP outbound requests with port 33033 to:
- 111.221.74.12-38
- 111.221.77.140-166
- 157.55.130.140-166
- 157.55.235.142-166
- 157.55.56.140-166
- 157.56.52.12-38
- 213.199.179.140-166
- 64.4.23.141-166
- 65.55.223.12-38

This activity seems to correctly match what I found in [skype1_4.pdf](../docs/skype1_4.pdf)
