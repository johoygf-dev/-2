#include <iostream>
#include <cmath>
using namespace std;
bool isPositive(int  N)
{
    return N>0;
}

bool isThreeDigit(int  N)
{
    int absNum = abs(N);
    return absNum>= 100 && absNum <=999;
}

int main()
{
    int N;
    std::cout << " vedi N ";
    std::cin >> N;
   
     std::cout << "Possitive " <<' ' << (isPositive(N)? "yes" : "no") <<  '\n';

    std::cout << "Treshznachnoe " << ' ' << (isThreeDigit(N)? "yes" : "no") <<  '\n';

    return 0;
}