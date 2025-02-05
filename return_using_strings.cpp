#include <iostream>
std::string concatStrings(std::string string1,std::string string2);
int main(){
    std::string firstname="Bro";
    std::string lastname="Code";
    std::string fullName=concatStrings(firstname, lastname);

    std::cout<<"hello "<<fullName<<'\n';
    return 0;
}
std::string concatStrings(std::string string1,std::string string2)
{
    return string1+" " + string2;
}