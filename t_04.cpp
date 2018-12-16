//用x,y表示一个整数范围区间，现在输入一组这样的范围区间(用空格隔开)，
//请输出这些区间的合并。（并集）
//1,3 2,5--->1,5    1,3 2,5 6,9 12,17--->1,5 6,9 12,17

#include <iostream>
using namespace std;

//数轴上求解
int main(int argc, char const *argv[])
{
    //输入数据左右边界 ch--- ，
    int a,b;
    char ch; 
    int arr[1024] = {0};

    while(cin>>a>>ch>>b){
        for(int i = a;i<b;++i){
            arr[i] = 1;
        }
    }
    int flag = 0;
    for(int j = 0;j<sizeof(arr)/sizeof(int);++j){
        if(0==flag && 1==arr[j]){
            cout << j << ",";
            flag = 1;
        }
        else if(1==flag && 0==arr[j]){
            cout << j << " ";
            flag = 0;
        }

    }

    return 0;
}
