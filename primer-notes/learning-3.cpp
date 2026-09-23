#include<iostream>
int main(){
    int sum = 0,a = 1,b = 0;
    std::cout <<"enter a number:" << std::endl;
    std::cin >> b;
    while(a <= b){
        sum += a;
        a++;
    }
    std::cout << "Sum of numbers from 1 to " << b << " is: " << sum << std::endl;   
    return 0;
}//这个程序主要是算任意你给出的正整数的1到这个数的和，比如你输入5，那么程序就会计算1+2+3+4+5的和，并输出结果15。