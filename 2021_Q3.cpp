#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
    int N,sum=0;

    cout<<"Please input a number: ";
    cin>>N;

    for(int i=1;i<=N;i++){
        if(N%i==0){
            sum+=i;
        }
    }
    cout<<"The sum of factor is "<<sum;
return 0;
}