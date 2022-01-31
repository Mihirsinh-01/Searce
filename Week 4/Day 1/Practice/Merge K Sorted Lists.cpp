/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>>pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL)
                pq.push({lists[i]->val,lists[i]});
        }
        ListNode* head=NULL;
        ListNode* tail=head;
        while(!pq.empty()){
            auto p=pq.top();
            ListNode* temp=p.second;
            pq.pop();
            if(temp->next) pq.push({temp->next->val,temp->next});
            if(head==NULL){
                head=temp;
                tail=temp;
                tail->next=NULL;
            }
            else{
                tail->next=temp;
                tail=tail->next;
                tail->next=NULL;
            }
        }
        return head;
    }
};