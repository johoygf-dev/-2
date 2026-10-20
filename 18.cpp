#include <iostream>
using namespace std;
    int sum ( int a, int b)
    {
        return a + b ;
    }
    int diffence( int a,  int b)
   {
    return a - b;
   }
    int product( int a,  int b)
   {
    return a * b;
   }
   int main ()
    {
        int x;
        int y;
        std:: cout << "Vedi 2 chisla";
        std::cin >> x >> y ;

        int result1 = sum (x,y);
        int result2 = diffence (x,y);
        int result3 = product (x,y);

        std::cout << "Sum:" << result1<<'\n';
        std::cout << "Diffence:" << result2<<'\n';
        std::cout << "Product:" << result3<<'\n';

    return 0;

    }