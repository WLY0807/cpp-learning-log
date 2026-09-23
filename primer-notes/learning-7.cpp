#include "Sales_item.h"
#include <iostream>
int main(){
Sales_item item1, item2;                     //Sales_item 是 Sales_item.h 头文件里的一种类型，与int float 等作用一样，定义变量类型
std::cin >> item1 >> item2;                  //首先检查item1 , item2是不是表示相同的书
if (item1.isbn() == item2.isbn()){           
    std::cout << item1 + item2 << std::endl;
        return 0;                           //表示成功
}
else{
    std::cerr << "Data must refer to same ISBN" << std::endl;
    return -1;                             //表示失败
}
}