#include <iostream>
int main()
{
    int N;
    int sum=0;
    int p=1;
std::cout << "vedi N";
std::cin >> N;
for(int i=1; i<=N; i++)
{
 sum=sum+i;
 p=p*i;
    std::cout << "Sum:" << sum << ' ';
    std::cout << '\n'<< "Proizvedenie:" << p << ' ';
}
    return 0;
}