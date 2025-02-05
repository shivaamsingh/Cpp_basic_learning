#include <iostream>
#include<vector>
//typedef std::vector<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;
int main(){
   text_t firstName ="Shivam";
   number_t age =20;
   std::cout<<firstName<<'\n';
    std::cout<<age<<'\n';

   
    // typedef= reserved keyword used to create an additional name 
    //           (alias) for another data type in C++.
    //           new identifier for an existing data type.
    //           helps with readability and reduces typos 
    //          use when there is a clear benefit 
    //          replaced with "using" (work better w/ templates)    


    return 0;
}