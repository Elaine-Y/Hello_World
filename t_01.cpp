//输入一个有符号整数，输出该整数的反转值。  
//输入123 输出321/输入-123 输出-321/输入900 输出9

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int abs_num;
    int out_num;
    string str_num;

    while (cin >> num)
    {
        abs_num = abs(num);
        str_num = to_string(abs_num);  //将整数转换成string c++11
        reverse(str_num.begin(), str_num.end());  //string倒置
        out_num = stoi(str_num);  //string to int
        if (num < 0)
        {
            out_num = 0 - out_num;
        }
        cout << out_num << endl;
    }
    return 0;
}
