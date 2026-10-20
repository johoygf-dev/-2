#include <iostream>
using namespace std;
void printLine (int lengt, char symbol){
    for (int i=0; i< lengt; i++){
        std::cout <<symbol;
    }
    cout<< '\n';
}

int main(){
    printLine(20, '=');
    cout <<"PROGRAM\n";
    printLine(20, '=');

    return 0;
}