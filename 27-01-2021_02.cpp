#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(vector<string> &t){
    for(int i=0;i<t.size();i++){
        cout<<t.at(i)<<" ";
    }cout<<endl;
}
int main(){
    string a;
    cin>>a;
    cout<<a;
    vector<string> st;
    st.push_back("Hello");
    st.push_back("World");
    display(st);
    return 0;
}