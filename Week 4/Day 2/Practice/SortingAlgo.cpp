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

vector<int>CountSort(vector<int>v){
    int mx=INT_MIN;
    for(int i=0;i<v.size();i++){
        mx=max(mx,v[i]);
    }
    int count[mx+1]={0};
    for(int i=0;i<v.size();i++){
        count[v[i]]++;
    }
    for(int i=1;i<=mx;i++){
        count[i]+=count[i-1];
    }
    vector<int>ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        ans[--count[v[i]]]=v[i];
    }
    return ans;
}

vector<int>RadixSort(vector<int>v){
    int mx=INT_MIN;
    for(int i=0;i<v.size();i++){
        mx=max(mx,v[i]);
    }
    vector<int>ans=v;
    int digits=ceil(log10(mx));
    for(int i=1;i<=digits;i++){
        vector<int>temp(ans.size());
        int count[10]={0};
        for(int i=0;i<ans.size();i++){
            int val=(int)(ans[i]/pow(10,i-1))%10;
            count[val]++;
        }
        for(int i=1;i<10;i++){
            count[i]+=count[i-1];
        }
        for(int i=ans.size()-1;i>=0;i--){
            int val=(int)(ans[i]/pow(10,i-1))%10;
            temp[--count[val]]=ans[i];
        }
        ans=temp;
    }
    return ans;
}

vector<int>BubbleSort(vector<int>v){
    int n=v.size();
    bool changed=false;
    for(int i=0;i<n-1;i++){
        changed=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                changed=true;
            }
        }
        if(!changed) break;
    }
    return v;
}

vector<int>SelectionSort(vector<int>v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int mn=i;
        for(int j=i+1;i<n;i++){
            if(v[j]<v[mn]){
                mn=j;
            }
        }
        swap(v[i],v[mn]);
    }
    return v;
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
    ans=CountSort(v);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout <<"Count Sort Duration is "<<duration.count()<<" ms " << endl;

    start = high_resolution_clock::now();
    ans=RadixSort(v);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout <<"Radix Sort Duration is "<<duration.count()<<" ms " << endl;

    start = high_resolution_clock::now();
    ans=BubbleSort(v);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout <<"Bubble Sort Duration is "<<duration.count()<<" ms " << endl;

    start = high_resolution_clock::now();
    ans=SelectionSort(v);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout <<"Selection Sort Duration is "<<duration.count()<<" ms " << endl;

    // printAns(ans);
    

}
