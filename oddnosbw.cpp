#include<iostream>
using namespace std;


int oddnos(int a, int b){
    if(a<b){
        for(int i=a; i<=b; i++){
            if(i%2!=0){
                cout<<i<<endl;
            }
        }
    }
    else{
        for(int i=b; i<=a; i++){
            if(i%2!=0){
                cout<<i<<endl;
            }
        }
    }
}
int main(){
    int a, b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Odd no.s between "<<a<<" and "<<b<<" are : "<<endl;
    oddnos(a,b);

}