#include<bits/stdc++.h>
using namespace std;

stack<int>s;
int mx=0;


int getMax(){
    return mx;
}

// Logic - If current element < Global Mx the push current in stack
// Else push Global Mx + Current value in stack 
// While Popping if the Top < Mx the simply pop
// Else update the Global Mx by Top-Mx
signed main(){

    // Inputting number of queries
    int n;
    cin>>n;
    
    while(n--){
        int q;
        cin>>q;
        if(q==1){
            // q==1 provides extra input
            int x; cin>>x;
            if(s.empty()){
                s.push(x);
                mx=x;
            }                        
            else if(x>=mx){
                s.push(x+mx);
                mx=x;
            }
            else{
                s.push(x);
            }
        }
        else if(q==2){
            // POP operation
            if(s.empty()){
                cout<<"Stack is Empty"<<endl;
            }
            else if(s.top()<mx){
                s.pop();
            }
            else{
                mx=s.top()-mx;
                s.pop();
            }
        }
        else{
            if(s.empty()){
                cout<<"Stack is Empty"<<endl;
            }
            else{
                cout<<getMax()<<endl;
            }
        }
    }
}