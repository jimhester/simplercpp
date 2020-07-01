#include <cpp11/doubles.hpp>
using namespace cpp11;

[[cpp11::register]]
double add_cpp11(double x, double y) {
  return x + y;
}

[[cpp11::register]]
double mul_cpp11(double x, double y) {
  return x * y;
}
