#include <bits/stdc++.h>

using namespace std;
vector<string>g;
string swap(string s,int i,int j){
    char t=s[i];
    s[i]=s[j];
    s[j]=t;
    return s;
}
void per(string v,int i,int j){
    if(i==j){
        g.push_back(v);
    }
    else{
        for(int k=i;k<j;k++){
            v=swap(v,k,i);
            per(v,k+1,j);
            v=swap(v,k,i);
        }
    }
}
int main() {
    int n;
    cin>>n;
    string v;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        v=v+c;
    }
    per(v,0,n-1);
    sort(g.begin(),g.end());
    string s;
    cin>>s;
    int m=g.size();
    for(int i=0;i<m;i++){
        if(s==g[i]){
            cout<<(i+1);
            break;
        }
    }
    return 0;
}