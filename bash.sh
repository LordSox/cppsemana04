#!/bin/bash
g++ -std=c++11 -c makedata3.cpp -o makedata3.o &&\
  g++ -std=c++11 -c simpledatagenerator.cpp -o simpledatagenerator.o &&\
  g++ makedata3.o simpledatagenerator.o -o makedata3 &&\
  gnuplot -e " set term png enhauced linewidth 2 fontscale 1.75; set output 'plot3.png';plot 'database.dat' 2 l ls 1 title 'base', 'dataingh.dat' w l ls 2 title 'inherited'"