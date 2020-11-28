<?php
	$cfg['blowfish_secret'] = 'Chop your own wood and it will warm you twice.';

	$i=0;
	$i++;
	$cfg['Servers'][$i]['auth_type'] = 'cookie';

	$cfg['Servers'][$i]['host'] = 'mysql:3306';
	$cfg['Servers'][$i]['compress'] = false;
	$cfg['Servers'][$i]['AllowNoPassword'] = false;

	$cfg['UploadDir'] = '';
	$cfg['SaveDir'] = '';
?>