#!/bin/sh
FT_LINE1=8
FT_LINE2=16
cat /etc/passwd | grep -v "#" | sed -n '1,${n;p;}' | cut -d: -f1 | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr "\n" "," | sed 's/,/, /g' | rev | sed 's/$/./'
