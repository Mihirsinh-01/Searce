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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0 || head->next==NULL){
            // cout<<"HI"<<endl;
            return head;
        }
        int l=0;
        ListNode* p=head;
        while(p){
            l++;
            p=p->next;
        }
        k=k%l;
        if(k==0) return head;
        int n=l-k;
        p=head;
        ListNode* q;
        cout<<n<<endl;
        // n--;
        while(n--){
            q=p;
            p=p->next;
        }
        ListNode* tmp=p;
        q->next=NULL;
        while(p->next){
            p=p->next;
        }
        p->next=head;
        return  tmp;
    }
};