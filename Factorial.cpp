#include <iostream>
using namespace std;

int factorial(int number){
    if(number <= 1){
        return 1;

    }
    return number * factorial(number - 1);

}

int main(){

    int number;
    cout<< "Enter the number: ";
    cin>> number;

    cout<<"factorial: "<<factorial(number);

    return 0;
}
