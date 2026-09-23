#include <iostream>
int main() {
    int currval = 0, val = 0;     //currval用来保存当前正在统计的数，val用来保存每次输入的数。
    if (std::cin >> currval){     //首先输入一个数，来初始化currval，如果输入失败了，那么就没有必要统计了。
       int cnt = 1;              //cnt用来统计currval出现的次数，既然currval已经出现了一次了，所以初始化为1。
        while(std::cin >> val){   //每次输入一个数，如果输入失败了，那么就没有必要统计了。
            if (val == currval)  //如果输入的数和currval相等，那么就说明currval又出现了一次了，所以cnt加1                
                ++cnt; 
            else{
                std::cout << currval << " appears " << cnt << " times" << std::endl;  //如果输入的数和currval不相等，那么就说明currval已经统计完了，输出统计结果，
                currval = val;                                                        //然后把currval更新为输入的数
                cnt = 1;                                                              //cnt重新初始化为1
            }
            }
    std::cout << currval << " appears " << cnt << " times" << std::endl;  //当输入结束了，那么最后一个数的统计结果还没有输出，所以在循环结束后再输出一次。
        }
        return 0 ;
    } //这个方法其实比较笨，因为他只能对来连续的相同的数进行统计，如果输入的数是1 2 3 1 2 3，那么这个程序就会输出1 appears 1 times, 2 appears 1 times, 3 appears 1 times, 1 appears 1 times, 2 appears 1 times, 3 appears 1 times，而不是输出1 appears 2 times, 2 appears 2 times, 3 appears 2 times。如果后续有更聪明的方法会写出的
//这个程序的功能是统计输入的数中每个数出现的次数，直到输入结束了。