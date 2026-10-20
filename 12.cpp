
#include <iostream>
int main()
{
    int N;
std::cout <<"vedi N";
std::cin >> N;
for( int i=2; i<=N; i+=2)
{
    std::cout << i <<' ';
}
for( int i=1; i<=N; i+=2)
{
    std::cout << i  << ' ';
}
    return 0;
}