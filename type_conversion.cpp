#include<iostream>
int main(){

    // type conversion = conversion a value of one data type to another 
    //                   implicit= automatically
    //                  explicit= precede value with new data type (int) value
    

   int correct = 8;
   int questions = 10;
   double score = correct / (double)questions*100;
   std::cout<<score<<"%" <<'\n';

    
    return 0;
}