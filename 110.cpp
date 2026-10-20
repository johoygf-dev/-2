#include <iostream>
using namespace std;
long long factorial (int n)
{
    long long result = 1;
    for ( int i=1; i<=n; i++)
    {
        result *=i;
    }
        return result;
}

int main()
{
    int  n;
    std::cout << " vedi N ";
    std::cin >> n;
  
    std::cout << "factorial" << factorial(n) <<'\n';
    return 0;
}