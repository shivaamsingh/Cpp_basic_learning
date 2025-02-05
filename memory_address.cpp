#include <iostream>

int main() {
    //memory address= a location in memory where data is stored
    //a memory address can accessed with &(adress-of operator)


    std::string name="Bro";
    int age=21;
    bool student =true;


    std::cout<<&name<<'\n';
    std::cout<<&student<<'\n';
    std::cout<<&age<<'\n';




    return 0;
}