# skype7server
This is an attempt to build a Skype 7 Server to be able to listen to voicemails. The proposed steps would be the following
- Set up specific hostfiles that will redirect all Skype traffic to a destination machine
- Set up a destination machine w/ SSL termination
- On any login from the Skype client give a +OK (maybe save username?)
- Have "pending" messages that would be downloaded voicemails that could be played in the client

# How to Skype 7
Firstly I've done the following:
- Using [Oracle VM VirtualBox](https://www.virtualbox.org/) i've installed Windows XP SP3 in a virtualized environment
- Installed [Google Chrome 49.0.2623.112](https://archive.org/download/49.0.2623.112ChromeInstaller/49.0.2623.112_chrome_installer.exe) for downloading
- Installed [Skype skype_7.0.0.102](http://www.skaip.org/skype-7-0-0-102-for-windows) as my Client
- Installed [Wireshark 1.10.14](https://2.na.dl.wireshark.org/win32/all-versions/Wireshark-win32-1.10.14.exe) for packet inspection

and i've made sure that all of those programs run and happily execute.

# Setting up the Server
Currently this is what is in development. At this juncture we're at packet capture.
