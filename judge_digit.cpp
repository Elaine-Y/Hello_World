// 判断一个数（小于10位）的位数。
// 输入999，则输出 “它是个3位的数！”

#include <iostream>

int main(int argc, char const *argv[])
{
    int num;
    int count = 0;
    std::cout << "plz input a num less equal than 999999999:" ;
    std::cin >> num;
    if(num >= 0 && num <= 999999999) {
        while(num!=0) {
            count++;
            num = num/10;
        }
        std::cout << "its position num is:" << count << std::endl;
    } else {
        std::cout << "input is wrong!" << std::endl;
    }
    return 0;
}
