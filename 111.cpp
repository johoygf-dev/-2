#include <iostream>
using namespace std;
bool  isPrime (int n)
{
    if (n<2) return false;
    for (int i=2; i*i <= n; i++)
    {
       if( n % i==0){
        return false;
    }
    }
    return true;
}

int main(){
    int  n;
    std::cout << " vedi N ";
    std::cin >> n;

   for(int i=2; i<=n; i++){
    if (isPrime(i)){
        std::cout <<i<<' ';
    }
   }
    std::cout << '\n';
    return 0;
}