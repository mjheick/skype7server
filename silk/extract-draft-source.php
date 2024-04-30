<?php
/**
 * Extracting source from draft-vos-silk-02.txt
 * Contents neatened up a bit so I can programmatically acquire things
 * Filenames found via grep -P '^A\.\d+\.' draft-vos-silk-02.txt
 * interface/ src/ test/ need to be created cause yolo
 */

$src = fopen('draft-vos-silk-02.txt', 'rt');
$filename = '';
$contents = []; /* gonna explode() it into the file with EOLs */
do {
	$line = fgets($src);
	if (strlen(trim($line)) == 0) {
		continue;
	}
	$line = rtrim($line, "\r\n"); /* Santitization */
	/* Check if we've got a filename in the form of A.#.\s+\w+ */
	if (preg_match('/^A\.\d+\.\s+(.*)/', $line, $matches) === 1) {
		$fn = trim($matches[1]);
		echo "Filename: " . $fn . "\n";
		if ($filename == '') {
			/* First filename */
			$filename = $fn;
		} else {
			/* New filename. Write contents, clear things up, and then trudge along */
			file_put_contents($filename, implode(PHP_EOL, $contents));
			$filename = $fn;
			$contents = [];
		}
	} else {
		$contents[] = $line;
	}
} while (!feof($src));
fclose($src);
/* At end of file just write last file */
file_put_contents($filename, implode(PHP_EOL, $contents));
