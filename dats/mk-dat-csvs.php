<?php
$dir = dir(".");
while (false != ($entry = $dir->read())) {
	if (($entry == '.') || ($entry == '..')) { continue; }

	$size = filesize($entry);

	/* Cut at M */
	list($fn_v, $fn_m, $fn_d) = explode('M', $entry);
	list($fn_d_1, $fn_d_2) = explode('D', $fn_d);

	$data = file_get_contents($entry);
	echo implode(',', [$entry, $fn_v, $fn_m, $fn_d_1, $fn_d_2, $size, dechex($size)] );
	for ($x = 0; $x < 64; $x++) {
		echo ',';
		$i = ord(substr($data, $x, 1));
		if ($i < 16) { echo '0'; }
		echo dechex($i);
	}
	echo "\n";
}
?>
