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
using namespace std::chrono;

void heapify(int a[], int n, int i){
    int left=2*i+1;
    int right=2*i+2;
    int current=i;

    if(left<n && a[left]>a[current]){
        current=left;
    }
    if(right<n && a[right]>a[current]){
        current=right;  
    }
    swap(a[i],a[current]);
    if(i!=current) heapify(a,n,current);
}

void heapSort(int a[], int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }

}

signed main() {
    
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heapSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
