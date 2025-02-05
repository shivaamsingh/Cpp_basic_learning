#include <iostream>
int main(){
    // size of()= determines the size in bytes of a:
    //            variables , data ,type , class, objects,etc.


    double gpa = 2.5;
    std::string name="bro code is awsm";
    char grade='A';
    bool isStudent=true;
    char grades[]={'A','B','C','D','Z','E'};

    std::string students[]={"SpongeBob","patrick","squidWard","sandy"};


    std::cout<<sizeof(double)<<" bytes\n";
    std::cout<<sizeof(name)<<" bytes\n";
    std::cout<<sizeof(grade)<<" bytes\n";
    std::cout<<sizeof(isStudent)<<" bytes\n";
    std::cout<<sizeof(grades)/sizeof(char)<<" elements\n";
    std::cout<<sizeof(students)/sizeof(std::string)<<" elements\n";







    return 0;
}