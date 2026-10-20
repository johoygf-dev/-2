#include <iostream>
using namespace std;
int main()
{
int n;
cout <<" Vedi n:";
cin >> n;
do
{
   cout << " Vedi 1 ot 100" <<' ';
   cin  >>  n;
} 
while (n <1 || n>100);
cout <<"Accepted\n";
    return 0;
}