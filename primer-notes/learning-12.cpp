#include <iostream>
int main() {
   int i =42;
   const int o =40;
   const int *q = &o;
   const int *p= &i;
   i = 1;
   std::cout << "i: " << i << std::endl;
   std::cout << "p: " << p << std::endl;
   std::cout << "q: " << q << std::endl;
   return 0;
}//这段程序主要是用来区别指针常量的对象,指针常量的对象不一定非得是常量
 //指针常量的对象可以是变量,但是指针常量的对象不能被修改,而指针常量的对象可以被修改.
 //但常量想要被指针，那么指针必须是指向常量的指针，即const int *p; 这样就可以通过指针来访问常量对象，但不能修改它的值。
 //引用也是如此，const int &p = i; 这样就可以通过引用来访问常量对象，但不能修改它的值。