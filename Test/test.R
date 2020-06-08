library(Rcpp)

cppFunction('int add(int x, int y, int z) {
  int sum = x + y + z;
  return sum;
}')

add

add(1,2,3)

cppFunction('int one() {
  return 1;
}')

one()


# 25.2.3 remark: mainly, it's hard to know ahead of time what functions C++ has.

# ++i instead of i++

cppFunction('double sumC(NumericVector x) {
  int n = x.size();
  double total = 0;
  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total;
}')

sumR <- ?function(x) {
  total <- 0
  for (i in seq_along(x)) {
    total <- total + x[i]
  }
  total
}

x <- runif(1e3)
bench::mark(
  sum(x),
  sumC(x),
  sumR(x)
)[1:6]


# 25.2.5

getwd()
Rcpp::sourceCpp("R/test.cpp")

x <- runif(1e5)

bench::mark(
  mean(x),
  meanC(x)
)[1:6]
