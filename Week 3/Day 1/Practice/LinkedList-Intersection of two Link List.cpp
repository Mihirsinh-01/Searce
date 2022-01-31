/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *h1=headA;
        ListNode *h2=headB;
        int l1=1,l2=1;
        while(h1->next!=NULL){
            l1++;
            h1=h1->next;
        }
        while(h2->next!=NULL){
            l2++;
            h2=h2->next;
        }
            while(l1>l2){
                headA=headA->next;
                l1--;
            }
            while(l2>l1){
                headB=headB->next;
                l2--;
            }
        while(headA!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};