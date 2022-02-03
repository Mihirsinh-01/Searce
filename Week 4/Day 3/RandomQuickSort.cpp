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


int partition(int a[], int l, int r){
    int random = l + rand() % (r - l);
    swap(a[random], a[r]);   
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<=pivot){
            swap(a[++i],a[j]);
        }        
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void QuickSort(int a[], int l, int r){
    if(l<r){        
        int pivot=partition(a,l,r);
        QuickSort(a,l,pivot-1);
        QuickSort(a,pivot+1,r);
    }
}

signed main() {

    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}#include<bits/stdc++.h>
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


int partition(int a[], int l, int r){
    int random = l + rand() % (r - l);
    swap(a[random], a[r]);   
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<=pivot){
            swap(a[++i],a[j]);
        }        
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void QuickSort(int a[], int l, int r){
    if(l<r){        
        int pivot=partition(a,l,r);
        QuickSort(a,l,pivot-1);
        QuickSort(a,pivot+1,r);
    }
}

signed main() {

    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}