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

class Node {
public:
    int data;
    Node* next;
};

void printLinkList(Node* head){
	Node* temp=head;
	while(temp){
		cout<<temp->data<<" ----> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

signed main() {
    
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
 
    head = new Node();
    second = new Node();
    third = new Node();
 
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;
 
    third->data = 3;
    third->next = NULL;

    printLinkList(head);

    
}