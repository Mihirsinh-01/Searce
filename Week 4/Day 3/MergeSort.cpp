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

int pow(int a, int b){
    int s=1;
    while(b--){
        s*=a;
    }
    return s;
}

vector<int>merge(vector<int>left, vector<int>right){
    vector<int>ans;
    int i=0,j=0;
    while(i<left.size() && j<right.size()){
        if(left[i]<right[j]){
            ans.push_back(left[i++]);
        }
        else{
            ans.push_back(right[j++]);
        }
    }
    while(i<left.size()){
        ans.push_back(left[i++]);
    }
    while(j<right.size()){
        ans.push_back(right[j++]);
    }
    return ans;
}

vector<int>MergeSort(vector<int>v){
    if(v.size()==1) return v;

    int l=0,r=v.size()-1;
    int m=(l+r)/2;

    vector<int>left;
    for(int i=l;i<=m;i++){
        left.push_back(v[i]);
    }

    vector<int>right;
    for(int i=m+1;i<=r;i++){
        right.push_back(v[i]);
    }

    left=MergeSort(left);
    right=MergeSort(right);
    vector<int>ans=merge(left,right);
    return ans;
}

void printAns(vector<int>ans){
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}


signed main() {
    
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans;
    auto start = high_resolution_clock::now();
    ans=MergeSort(v);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout <<"Merge Sort Duration is "<<duration.count()<<" ms " << endl;

    printAns(ans);
    

}
