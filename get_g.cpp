#include <Rcpp.h>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]

double get_g(DataFrame anc.pairs, double start_a = 0, double start_b = 1, double start_g = 10){
  CharacterVector anc_pairs_vec = lacorr["anc"];
  std::unique(anc_pairs_vec.begin(),anc_pairs_vec.end());
  Data

}
