#include <iostream>
int main()
{
    // fill() = fills a range of elements with a specific value
    //         fill (begin,end ,value)

    const int SIZE=99;




    std::string foods[SIZE];
    fill(foods, foods + (SIZE/3) , "pizza");
    fill(foods+(SIZE/3),foods+(SIZE/3)*2,"hamburger");
    fill(foods+(SIZE/3)*2,foods+SIZE,"hotdog");

    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}