#include<iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main(){
    using std :: cout;

   
    
        // Namespace = provides a solution for preventing name conflicts
        // in large projects.Each entity needs a unique name entities 
        // as long as the namespace are different.
        //int x=0;
        //std::cout<<first::x<<'\n';
        //std::cout<<second::x <<'\n';
        //std::cout<<x<<'\n';



    return 0;
}