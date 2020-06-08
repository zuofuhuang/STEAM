#include "Rcpp.h"
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
double meanC(Rcpp::NumericVector x) {
  int n = x.size();
  double total = 0;

  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total / n;
}

