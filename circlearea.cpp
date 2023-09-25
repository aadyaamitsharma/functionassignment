#include<iostream>
using namespace std;
float circlearea(int r){
    float area;
    area = 3.14 * r * r;
    return area;
}
int main(){
    int r;
    cout<<"Enter radius : ";
    cin>>r;
    cout<<"Area of the given circle is : "<<circlearea(r);
}