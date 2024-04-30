<!doctype html>
<html lang='en'>
<head><title>voicemail dat thing</title></head>
<body>
<table border='1'>
<tr>
<th>Filename</th>
<th>File Size<br />(hex)</th>
<th>0x20 bytes </th>
</tr>
<?php
$dir = dir(".");
while (false != ($entry = $dir->read())) {
	if (($entry == '.') || ($entry == '..')) { continue; }

	$size = filesize($entry);

	echo "<tr>";
	echo "<td>";
	echo $entry;
	/* Cut at M */
	list($fn_v, $fn_m, $fn_d) = explode('M', $entry);
	echo '<br />';
	echo $fn_v . '<br />';
	echo $fn_m . '<br />';
	list($fn_d_1, $fn_d_2) = explode('D', $fn_d);
	echo $fn_d_1 . ' ' . $fn_d_2;
	echo "</td>";

	echo "<td>" . $size . "<br />" . dechex($size) . "</td>";
	echo "<td><pre>";

	$data = file_get_contents($entry);
	$sp = 0;
	for ($x = 0; $x < 256; $x++) {
		if (($x % 32) == 0) { echo '<br />'; }
		$i = ord(substr($data, $x, 1));
		echo '<span title="' .$x . '">';
		if ($i < 16) { echo '0'; }
		echo dechex($i);
		echo '</span>';
		$sp++;
		if ($sp == 4) {
			echo ' ';
			$sp = 0;
		}
	}
	echo "</pre></td>";
	echo "</tr>";
}
?>
</table>
</body>
</html>
