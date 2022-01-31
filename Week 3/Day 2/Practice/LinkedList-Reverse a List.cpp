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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* p=head;
        if(p->next==NULL){
            return p;
        }
        else if(p->next->next==NULL){
            ListNode* q=p->next;
            q->next=p;
            p->next=NULL;
            return q;
        }
        else{
            ListNode* q=p->next;
            ListNode* r=q->next;
            p->next=NULL;
            do{
                q->next=p;
                p=q;
                q=r;
                r=r->next;
            }while(r!=NULL);
            q->next=p;
            return q;
        }
    }
};