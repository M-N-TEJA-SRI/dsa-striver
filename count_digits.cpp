#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int digit(int n){
    return log10(n)+1;
}
int main() {
    int n;
    cin>>n;
    cout<<digit(n);

    return 0;
}
