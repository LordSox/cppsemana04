#include <string>
#include <cmath>
#include "simpledatagenerator.h"

class MyDataGenerator: public SimpleDataGenerator {
public:
  MyDataGenerator(double min, double max, int np)
    : SimpleDataGenerator(min,max,np) {}
  double f(double x) {return (sin(x)/x); }
};

int main (int argc,char *argv[]) {
  if ( argc<4 ) {
    std::cout << "Not enough arguments !\n";
    return EXIT_FAILURE;
  }
  double xmin=std::stod(string(argv[1]));
  double xmax=std::stod(string(argv[2]));
  int n=std::stod(string(argv[3]));
  std::cout << "xmin: " << xmin << '\n';
  std::cout << "xman: " << xmax << '\n';
  std::cout << "n: " << n << '\n';
  SimpleDataGenerator dgb(xmin,xmax,n);
  dgb.ComputeAndSave(string("database.dat"));
  MyDataGenerator dgh(xmin,xmax,n);
  dgh.ComputeAndSave(string("datainh.dat"));
  return EXIT_SUCCESS;
}