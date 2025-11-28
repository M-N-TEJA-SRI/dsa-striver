#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void print(int n,string s){
    if(n>0){
        print(n-1,s);
        cout<<s<<"\t";
    }
}
int main() {
    string s;
int n;
cin>>n;
getline(cin,s);
print(n,s);
    return 0;
}
