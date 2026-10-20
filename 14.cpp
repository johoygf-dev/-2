#include <iostream>
using namespace std;
int main()
{
    int  N;
    int sum=0;
    int cout=0;
    std::cout << " vedi N: ";
    std::cin >> N;
   while (N !=0)
   {
    /*  da da on bil dobric malil */
    sum+=N;
    cout++;

    std::cout << " vedi N: ";
    std::cin >> N;

   }
   std::cout << " Cout: "<< cout << endl;
      std::cout << " Sum: "<< sum << endl;
    return 0;
}