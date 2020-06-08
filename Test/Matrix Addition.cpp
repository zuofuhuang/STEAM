#include <Rcpp.h>
#include <random>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
std::vector< std::vector<double>> matrix_addition(std::vector< std::vector<double>> A; std::vector< std::vector<double>> B){
  int A2 = A.size(); // column
  int A1 = A[0].size();
  int B2 = B.size();
  int B1 = B[0].size();

  assert (A1 == B1);
  assert (A2 == B2);

  for (int i = 0; i < A2; ++i){
    for (int j = 0; j < A1; ++j){
      A[i][j] += B[i][j];
    }
  }
  std::

  return A;
}
