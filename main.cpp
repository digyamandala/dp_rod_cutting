#include <iostream>
#include <cstdlib>
using namespace std;

/*
  find maximum profit to cut rod into half
  using dynamic programming
  formula:

  f[0] = 0;
  f[x] = max(f[x-1]+p[0], f(x-2)+p[1],..., f(x-n)+p[n-1])

  cause price index starts from 0
*/

int max(int a, int b){
  if(a > b) return a;
  return b;
}

int* generateDpRotCuttingTable(int* price, int n) {
  int* c = (int*) malloc(1000); 

  c[0] = 0;
  for(int i = 1 ; i <= n ; i++) {
    c[i] = 0;
    for(int j = 0 ; j < n ; j++) {
        if(i-(j+1) >= 0)
          c[i] = max(c[i], c[i-(j+1)] + price[j]);
    }
  }
  return c;
}

int main() {

  int price[1000];
  price[0] = 1;
  price[1] = 5;
  price[2] = 8;
  price[3] = 9;
  price[4] = 10;
  price[5] = 17;
  price[6] = 17;
  price[7] = 20;

  int n = 8;

  int* c = generateDpRotCuttingTable(price, n);

  cout << c[n] << endl;

  return 0;
}