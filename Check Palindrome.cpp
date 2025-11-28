#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool reverse(int n){
    int sum=0,temp=n;
    while(n){
        sum=sum*10+(n%10);
        n/=10;
    }
    return sum==temp;
}
int main() {
    int n;
    cin>>n;
    cout<<reverse(n);

    return 0;
}
