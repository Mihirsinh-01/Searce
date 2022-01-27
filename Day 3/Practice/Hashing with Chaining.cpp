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

class Node {
public:
    int data;
    Node* next;
};

Node* head=NULL;
vector<Node*>bucket(SIZE,NULL);

Node* create(int val){
    Node* temp=new Node();
    temp->data=val;
    temp->next=NULL;
    return temp;
}

void insert(int val){
    int v=val%SIZE;
    Node* a=create(val);
    if(bucket[v]==NULL){
        bucket[v]=a;
    }
    else{
        Node* temp=bucket[v];
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=a;
    }
}

void printLL(Node* hd){
	Node* temp=hd;
	while(temp){
		cout<<temp->data<<" ----> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

void printBucket(){
	for(int i=0;i<SIZE;i++){
	    cout<<i<<" || ";
	    printLL(bucket[i]);
	    cout<<endl;
	}
}

signed main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insert(val);
    }
    cout<<endl<<endl;
    printBucket();
}
