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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* lo=new ListNode(100);
        ListNode* tl=lo;
        ListNode* hi=new ListNode(200);
        ListNode* th=hi;
        ListNode* t=head;
        while(t!=NULL){
            if(t->val<x){
                tl->next=t;
                t=t->next;
                tl=tl->next;
            }
            else if(t->val>=x){
                th->next=t;
                t=t->next;
                th=th->next;
            }
            
            
        }
        th->next=NULL;
       
        
        
        tl->next=hi->next;
        return lo->next;
    }
};
