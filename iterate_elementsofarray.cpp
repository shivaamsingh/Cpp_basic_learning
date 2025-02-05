#include <iostream>
int main(){
    //std::string  students[]={"SpongeBob","Patrick","squidWard","sandy"};


    char grades[]={'a','b','v','r','u'};

    for (int i = 0; i < sizeof(grades)/sizeof(char); i++)
    {
       std::cout<<grades[i]<<'\n';
    }
    















    /*for (int i = 0; i <sizeof(students)/sizeof(std::string); i++)
    {
        std::cout<<students[i]<<'\n';
    }*/
    
















    //std::cout<<students[0]<<'\n';
    //std::cout<<students[1]<<'\n';
    //std::cout<<students[2]<<'\n';











    return 0;
}