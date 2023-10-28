#include <iostream>
using namespace std;

int exponentiation(int base, int power){

    if(power <= 0){
        return 1;
    }
    return base * exponentiation(base, power - 1);

}

int main(){

    int base,power;
    cout<<"Enter the base: ";
    cin>> base;
    cout<<"Enter the power: ";
    cin>> power;

    cout<<"Result: "<<exponentiation(base, power);

    return 0;
}
