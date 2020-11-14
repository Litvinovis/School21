<?php
 /**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://codex.wordpress.org/Editing_wp-config.php
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'site_db' );

/** MySQL database username */
define( 'DB_USER', 'resther' );

/** MySQL database password */
define( 'DB_PASSWORD', '17771' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define('AUTH_KEY',         '5^Fbe|+dEN(;6O3v2fF3</kD<~VG~4K*8.vh^{bLBs>V/CO,?cC,npB=u!BauGNf');
define('SECURE_AUTH_KEY',  '!6{v:qMqQr-myAU7{uMeQwmDHTHn g%L-[MH88?7L lN4Z-n>2U=V;I[e`R=y:3k');
define('LOGGED_IN_KEY',    '<+g4X9j`lXa*v/Y`JW2:a2(xM}4*KA-mItw=?*}I Vq*_JOysK{y+(~ f;C)LUc=');
define('NONCE_KEY',        'N9r*5VcNOBKF)sV.--$v.2-s0,|26HxX)}By/i#Wv3U<-`K:2=D2E|1!w]z!tAJN');
define('AUTH_SALT',        ')K&kK ^S,oG-&o&7#0|(?p{(7cRn-g1oxub-kLOT2g4-vSY_I+8 -REB=S[;mO8N');
define('SECURE_AUTH_SALT', '%%0CF/z#M+*#YGaIIUojtWX(}BJ%$-FO}w4|=:Su $2# MDZ03to]!:Yn`GEkCQB');
define('LOGGED_IN_SALT',   '|iL(txnXB{;F2LCKCAAOubIn$P+~o?ID[J!7h|SSq]TOG!B/GRfQdXvTQ@;+bzTS');
define('NONCE_SALT',       'V}ai/nb9+Q[j&+H1fc#R.`<!q`}a<ZDkkP/IRqFt*C[+N1&Xpr!bAq=ve-K/2v|P');

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the Codex.
 *
 * @link https://codex.wordpress.org/Debugging_in_WordPress
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', dirname( __FILE__ ) . '/' );
}

/** Sets up WordPress vars and included files. */
require_once( ABSPATH . 'wp-settings.php' );
