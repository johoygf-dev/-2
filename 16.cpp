#include <iostream>
using namespace std;
int main(){
    int  N;
    int cout=0;
     int sum=0;
    std::cout << " vedi N ";
    std::cin >> N;
    while(N>0){
sum+= N % 10;
   cout++;
   N/=10;
    }
    std::cout  << "cout" << cout<<'\n';
    std::cout  << "Sum" << sum <<'\n';
    return 0;
}