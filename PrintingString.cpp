//Program to Reverse a String using Recursion 
#include <iostream>
using namespace std;

void reverse(string &word, int index){
    if(index >= word.length()){
        return;
    }
    reverse(word, index + 1);
    cout<<word[index];
}


int main(){

    string word;
    cout<<"Enter a string : ";
    getline(cin,word);

    cout<< "Original: "<<word << "\n";
    cout<< "Reversed: ";
    reverse(word, 0);
    cout<< "\n";

    return 0;
}
