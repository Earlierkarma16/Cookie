#include <iostream>
using namespace std;
int main()
//initializes variables
{ const double sugarAmount =1.5/48;
    const double butterAmount=1.0/48;
    const double flourAmount=2.75/48;
//prompts user for number of cookies
    int numberCookies;
    std::cout << "How many cookies would you like to make?";
    std::cin>>numberCookies;
//calulates required amounts
    double sugarNeeded = sugarAmount * numberCookies;
    double butterNeeded = butterAmount * numberCookies;
    double flourNeeded = flourAmount * numberCookies;
//displays output
    std::cout << "You will need: "<< sugarNeeded <<" cups of sugar "<< endl;
    std::cout << butterNeeded << " cups of butter " <<endl;
    std::cout << flourNeeded << "cups of flour" <<endl;
    std::cout << "to make "<< numberCookies<< " cookies."<< endl;
    return 0;
}