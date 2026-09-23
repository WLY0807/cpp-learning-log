#include <iostream>
int main() {
    int sum = 0,b = 0;
    std::cout << "enter a number:" << std::endl;
    std::cin >> b;
    for (int a = 1; a <= b; ++a) 
    {
        sum += a;
    }//这个for循环里只有一句内容，也可以不加{}，但是加上{}可以让代码更清晰易读。
    std::cout << "Sum of numbers from 1 to " << b << " is: " << sum << std::endl;
    return 0;
}//这个程序和learning-3.cpp的功能一样，都是计算任意你给出的正整数的1到这个数的和，不过这个程序使用了for循环来实现，而learning-3.cpp使用了while循环。
//++a与a++虽然最终结果是一样的，但是中间的过程是不一样的，运算符	名称	执行顺序	                    返回值	           本质
                                                     //a++	后置自增	先返回 a 的原值，再让 a 自增 1	返回自增前的旧值	先取值，后加 1
                                                     //++a	前置自增	先让 a 自增 1，再返回 a 的新值	返回自增后的新值	先加 1，后取值
                                                     //无特殊情况，优先使用++a