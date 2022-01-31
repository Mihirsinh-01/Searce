#include<bits/stdc++.h>
#define int long long
#define ld long double
#define pb push_back
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define pb   push_back
#define mp   make_pair
#define ff   first
#define ss   second
#define pop  pop_back
#define mii  map<int,int>
#define in(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define out(a,n) for(int i=0;i<n;i++)   cout<<a[i]<<" ";cout<<endl;
#define test int t;cin>>t;while(t--)
#define all(v) v.begin(),v.end()
#define endl "\n"
#define MOD 1000000007
using namespace std;

const int SIZE=7;

vector<int>bucket(SIZE,-1);

void insert(int val, int i){
    // Linear Probing
    // bucket(x)=(hash(x)+i)%SIZE
    int v=(val+i)%SIZE;
    if(bucket[v]==-1){
        bucket[v]=val;
    }
    else{        
        i++;
        insert(val,i);
    }
}

void printBucket(){
	for(int i=0;i<SIZE;i++){
	    cout<<i+1<<" ---> ";
	    if(bucket[i]!=-1) cout<<bucket[i]<<endl;
	    else cout<<"NULL"<<endl;
	}
}

signed main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insert(val,0);
    }
    printBucket();
}
