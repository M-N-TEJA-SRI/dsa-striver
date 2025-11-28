#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int arm(int n){
    int sum=0,temp=n,len=log10(n)+1;
    while(n){
        sum+=pow(n%10,len);
        n/=10;
    }
    return sum==temp;
}
int main() {
int n;
cin>>n;
cout<<arm(n);

    return 0;
}
