#!/usr/local/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'binary.1.png'
set key fixed right top vertical Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
unset parametric
set hidden3d back offset 1 trianglepattern 3 undefined 1 altdiagonal bentover
set style data lines
set xyplane relative 0
set title "Hidden line removal of explicit binary surfaces" 
set xrange [ -3.00000 : 3.00000 ] noreverse nowriteback
set x2range [ * : * ] noreverse writeback
set yrange [ -2.00000 : 2.00000 ] noreverse nowriteback
set y2range [ * : * ] noreverse writeback
set zrange [ * : * ] noreverse writeback
set cbrange [ * : * ] noreverse writeback
set rrange [ * : * ] noreverse writeback
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
NO_ANIMATION = 1
## Last datafile plotted: "binary1"
splot "binary1" binary
