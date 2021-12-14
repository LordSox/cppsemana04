#ifndef _SIMPLEDATAGENERATOR_H_
#define _SIMPLEDATAGENERATOR_H_
#include <iostream>
#include <string>
using std::string;
class SimpleDataGenerator {
public :
  virtual double f(double x) { return 0.01e0*x*x; }
  SimpleDataGenerator () {}
  SimpleDataGenerator (double min, double max, int np);
  void ComputeAndSave (string oname);
protected:
  int n; //The number of points to plot
  double xmin,xmax;
  double h;
};
#endif /* _SIMPLEDATAGENERATOR_H_ ./m*/


