#include <iostream>
int main() {
    int sum = 0, a = 0;
    while (std::cin >> a)//此时的std::cin用来表示条件，执行while循环的条件就是看()的内容是否为真，而std::cin就是作为一个istream(输入流)，变为检测输入流的状态
    {
        sum += a;
    }
    std::cout << "sum is" << sum << std::endl;
    return 0;
}//这个程序是对你输入的所有的整数进行求和，直到你结束整个数据流或者，输入的数字不是整数；结束的标志就是Ctrl + D。