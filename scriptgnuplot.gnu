set term png enhanced linewidth 2 fontscale 1.75
set output 'plot3.png'
plot 'database.dat' w l ls 1 title 'base', 'datainh.dat' w l ls 2 title 'inherited'