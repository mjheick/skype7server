<?php
/* Packets start with 00 20 80 12 */
$dir = dir(".");
while (false != ($entry = $dir->read())) {
	if (($entry == '.') || ($entry == '..')) { continue; }

	$size = filesize($entry);
	$data = file_get_contents($entry);

	$packet = 0;
	for ($x = 0; $x < strlen($data); $x++) {
		/* Test if 4 bytes are "new packet" */
		if ( substr($data, $x, 4) == chr(0) . chr(0x20) . chr(0x80) . chr(0x12) ) {
			$packet++;
			if ($packet == 400) { next; }
			echo "\n";
			echo implode(',', [$entry, $packet] );
		}
		echo ',';
		$i = ord(substr($data, $x, 1));
		if ($i < 16) { echo '0'; }
		echo dechex($i);
	}
	echo "\n";
}
?>
