#include <iostream>

int myNum = 3;
void printNum();

int main()
{
    // local variable = declared inside a function or block{}
    // global variables=  declared outside of all functions
    int myNum=1;
    printNum();
    std::cout<<::myNum<< '\n';

    return 0;
}
void printNum()
{
    int myNum=2;
    std::cout << ::myNum<<'\n';
}