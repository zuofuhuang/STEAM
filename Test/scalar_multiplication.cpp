#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
std::vector< std::vector<double>> scalar_multiplication(std::vector< std::vector<double>> A, double scalar){
  int A2 = A.size(); // column
  int A1 = A[0].size(); // row

  for (int i = 0; i < A2; ++i){ // The order?
    for (int j = 0; j < A1; ++j){
      A[j][i] *= scalar;
    }
  }

  return A;
}
