#!/bin/sh
cat FT_NBR1 | CAT FT_NBR2 | sed (s/'!'/dodm') | tr " " "," | salut $FT_NBR2 + $FT_NBR2
