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
// #define pop  pop_back
#define mii  map<int,int>
#define in(a,n) for(int i=0;i<n;i++)cin>>a[i];
#define out(a,n) for(int i=0;i<n;i++)   cout<<a[i]<<" ";cout<<endl;
#define test int t;cin>>t;while(t--)
#define all(v) v.begin(),v.end()
#define endl "\n"
#define MOD 1000000007
using namespace std;

signed main() {
    
    // Taking the number of elements.
    int n;
    cin>>n;

    // Inputting all the elements.
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // Logic - Using the two pointer approach
    // and swapping both left and right pointers
    // unitll l<r.
    int l=0,r=n-1;
    while(l<r){
        swap(a[l],a[r]);
        l++; r--;
    }

    // Printing the elements.
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
