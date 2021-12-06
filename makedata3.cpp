#include <cstdlib>
#include <iostream>
#include <fstream>
using std::ofstream;
#include "simpledatagenerator.h"
SimpleDataGenerator::SimpleDataGenerator(double min,double max,int np) {
  xmin=min;
  xmax=max;
  n=np;
  h=(xmax-xmin)/double(n-1);
}
void SimpleDataGenerator::ComputeAndSave(string oname) {
  ofstream ofil(oname.c_str());
  double x=xmin;
  for ( int i=0 ; i<n ; ++i) {
    ofil << x << " " << f(x) << '\n';
    x+=h;
  }
  ofil.close();
}