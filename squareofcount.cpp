#include<iostream>
using namespace std;
int squareOFcount(int n){
    int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    return count*count;
}
int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    cout<<squareOFcount(n);
}