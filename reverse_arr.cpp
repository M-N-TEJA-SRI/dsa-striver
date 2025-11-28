#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void reverse(int *a,int i,int j){
    if(i<j){
        swap(a[i++],a[j--]);
        reverse(a,i,j);
    }
}
int main() {
int n;
cin>>n;
int a[n],i;
for(i=0;i<n;i++){
    cin>>a[i];
}
reverse(a,0,n-1);
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}
