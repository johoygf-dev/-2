#include <iostream>
#include <cmath>
using namespace std;
//проверка на четность
bool isEven(int  n)
{
    return n%2==0;
}
//проверка на положительность
bool isPositive(int  n)
{
    return n>0;
}
//ф-ция вычисления суммы цифр
int digitSum(int n){
    int temp=abs(n);
    int sum=0;
    if( temp==0) return 0;
    while(temp>0){
        sum+=temp %10;
        temp/=10;
    }
    return sum;
}
//ф-ция вычисления кол-во цифр
int digitCount(int n){
    int temp=abs(n);
    int count=0;
    if( temp==0) return 1;
    while(temp>0){
       count++;
        temp/=10;
    }
    return count;
}
//ф-ция проверки на простое число
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
    int choice;
    do{
        std::cout << " vedi n ";
    std::cin >> n;
    std::cout << " Even: "<<(isEven(n) ? "yes" : "no") <<'\n';
    std::cout << " Positive: "<<(isPositive(n) ? "yes" : "no") <<'\n';
    std::cout << " Digit sum "<<(digitSum(n) ? "yes" : "no") <<'\n';
    std::cout << " Digit count: "<<(digitCount(n) ? "yes" : "no") <<'\n';
    std::cout << " Prime: "<<(isPrime(n) ? "yes" : "no") <<'\n';

std::cout << "Continue? (1-yes, 0-no):" ; 
std::cin >> choice;
    } while(choice !=0);
    return 0;
}