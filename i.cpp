#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a;
    b=a/10/10%10; //179=1 59=0 1=0
    c=a%100/10; //      7    5    0
    d=a%10;//           9    9    1
    cout<<b+c+d; 
}