#include<bits/stdc++.h>
#define int long long

using namespace std;

// Logic - Here we will use priority queue in which we will store pair wise
// elements where the priority will be decided based in the cooking time 
// of item and well pop the top most element and insert the other elements
// based on the price.

int getMinAvg(vector<pair<int,int>>cust){

    // Priority queue which will provide smallest elemtent o the top.
    priority_queue<int,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    int time=cust[0].first;
    int wait=0,i=0;

    // Push the customers item in which current time has been exceeded with their arrival time.
    for(i=0;i<cust.size();i++){
        if(cust[i].first<=time){
            pq.push({cust[i].second,cust[i].first});
        }
        else break;
    }
    while(i<cust.size() || !pq.empty()){
        if(pq.empty()){
            time=cust[i].first;
        }
        else{
            pair<int,int>p=pq.top();
            pq.pop();
            time+=p.first;
            wait+=time-p.second;
        }

        // Updated the current time and waiting time and push the new items in th Queue.
        while(i<cust.size() && cust[i].first<=time){
            pq.push({cust[i].second,cust[i].first});
            i++;
        }
    }

    // We'll divide the total waiting time by total customers for average.
    return wait/cust.size();
}

signed main(){
    int n;
    cin>>n;
    vector<pair<int,int>>cust;
    for(int i=0;i<n;i++){
        int arvl,time;
        cin>>arvl>>time;
        cust.push_back({arvl,time});
    }
    sort(cust.begin(),cust.end());
    cout<<getMinAvg(cust)<<endl;
}