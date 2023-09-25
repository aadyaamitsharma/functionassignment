#include<iostream>
using namespace std;
void square(int n){
    int sq;
    for(int i=1; i<=n; i++){
        sq = i*i;
        cout<<sq<<endl;    
    }
}
int main(){
    int n;
    cout<<"Enter no. : ";
    cin>>n;
    cout<<"Squares of first "<<n<<" natural no.s are : "<<endl;
    square(n);
}