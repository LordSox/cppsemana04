#!/bin/bash
g++ -std=c++11 -c makedata3.cpp -o makedata3.o &&\
  g++ -std=c++11 -c simpledatagenerator.cpp -o simpledatagenerator.o &&\
  g++ makedata3.o simpledatagenerator.o -o makedata3 &&\
  ./makedata3 -5.0 5.0 100 &&\
  gnuplot -e " set term png enhanced linewidth 2 fontscale 1.75; set output 'plot3.png';plot 'database.dat' w l ls 1 title 'base', 'datainh.dat' w l ls 2 title 'inherited'"