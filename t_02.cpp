//给定整数n，取若干个1到n的整数可求和等于整数m，编程求出所有组合的个数。
//比如当n=6，m=8时，有四种组合：[2,6], [3,5], [1,2,5], [1,3,4]。限定n和m小于120

#include <iostream>
using namespace std;

int CountNum(int n, int m) {
  if(m==0 && n>=0){
    return 1;
  }else if(n<0){
    return 0;
  }

  if (m >= n) {
    return CountNum(n - 1, m - n) + CountNum(n - 1, m);
  } else {
    return CountNum(n-1,m);  
  }
}

int main(int argc, char const *argv[]) {
  int n, m;
  int res;
  while (cin >> n >> m) {
    res = CountNum(n, m);
    cout << res << endl;
  }
  return 0;
}
