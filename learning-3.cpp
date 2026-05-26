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
}