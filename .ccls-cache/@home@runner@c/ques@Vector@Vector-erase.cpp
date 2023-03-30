// https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a;
    cin>>a;
    v.erase(v.begin()+(a-1));
    int b,c;
    cin>>b>>c;
    v.erase(v.begin()+(b-1), v.begin()+(c-1));
    int x=v.size();
    cout<<x<<endl;
    for(int i=0; i<x;i++){
        cout<<v[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
