#!/bin/sh
groups $FT_USER | tr ' ' ',' | sed 's/ ,$//'
