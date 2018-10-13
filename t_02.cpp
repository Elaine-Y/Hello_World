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
