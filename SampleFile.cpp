#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    if(n<=k){
        cout<<(2);
    }
    else{
        if(n%(k+1)==0){
            cout<<(2*n/(k+1));
        }
        else{
            cout<<(2+2*n/(k+1));
        }
	}// your code goes here
	return 0;
}
