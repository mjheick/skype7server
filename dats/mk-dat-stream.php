<?php
$dir = dir(".");
while (false != ($entry = $dir->read())) {
	if (($entry == '.') || ($entry == '..')) { continue; }
	if (strpos($entry, '.dat') === false) { continue; }
	$filename = pathinfo($entry, PATHINFO_FILENAME);
	$size = filesize($entry);
	$data = file_get_contents($entry);
	$newdata = '';

	for ($x = 0; $x < strlen($data); $x++) {
		if ( substr($data, $x, 4) == chr(0) . chr(0x20) . chr(0x80) . chr(0x12) ) {
			$x = $x + 4;
			$x = $x + 10;
			$newdata = $newdata . substr($data, $x, 20);
			$x = $x + 20;
		}
	}
	file_put_contents($filename . '.stream', $newdata);
}
