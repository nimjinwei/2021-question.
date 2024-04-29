#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
    int a,n;

    cout<<"Please input a number as the first number of sequence: ";
    cin>>a;
    cout<<"Please input the n term: ";
    cin>>n;
    for(int i=0; i<n;i++){
        a=5*a+7;
    }
    cout<<a;
    return 0;
}