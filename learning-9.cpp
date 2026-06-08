#include <iostream>

int reused = 42; // reuesd拥有全局作用域
int main() {
    int unique = 0; 
    std::cout << reused << " " << unique << std::endl;// unique拥有main函数的局部作用域；输出42 0
    
    int reused = 0; // 这里重新定义了一个局部变量reused，覆盖了全局变量reused；输出0 0
    std::cout << reused << " " << unique << std::endl;

    std::cout << ::reused << " " << unique << std::endl; // 使用作用域解析运算符访问全局变量reused;输出42 0
    return 0;
}