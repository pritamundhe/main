//Even/ODD number Check

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter any integer : ";
    cin>>a;

    if(a%2==0){
        cout<<"Entered integer is Even";
    }
    else{
        cout<<"Entered integer is Odd";
    }
    return 0;
}