#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter an Alphabet..";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Entered Alphabet is a VOWEL";
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"Entered Alphabet is VOWEL";
    }
    else{
        cout<<"Entered Alphabet is a Consonent";
    }
    return 0;
}