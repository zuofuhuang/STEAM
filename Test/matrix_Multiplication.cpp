#include <Rcpp.h>
#include <iostream>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
std::vector< std::vector<double>> multiply(std::vector< std::vector<double>> A, std::vector< std::vector<double>> B){
  int A2 = A.size();
  int A1 = A[0].size();
  int B2 = B.size();
  int B1 = B[0].size();
  assert (A2 == B1);
  std::vector<std::vector<double>> result;

  for (int i = 0; i < A1; ++i){ // Rows inside are more efficient?
    for (int j = 0; j < B2; ++j){
      for (int k = 0; k < A2; ++k){
        result[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return result;
}
