#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void divisors(int n,vector<int>&v){
    int i;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i)
            v.push_back(n/i);
        }
    }
}
int main() {
int n;
vector<int>v;
cin>>n;
divisors(n,v);
sort(v.begin(),v.end());
for(auto it:v){
    cout<<it<<" ";
}
    return 0;
}
