#include<iostream>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    int i=0;  
    while(i<n){
        int j=1; 
        while(j<=n){
            cout<<n*i+j<<" "; 
            j=j+1; 
        }
        cout<<endl;
        i=i+1; 
    }
}