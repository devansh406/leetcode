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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 1;
        ListNode* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
            count++;
        }
        int del=count-n;
        ListNode* dele=head;
        ListNode* prev=NULL;

        if(count==1 && n==1){
            head=NULL;
            return head;
            
        }

        if(del==0){
            head=head->next;
            return head;
        }
        while(del>0){
            prev=dele;
            dele=dele->next;
            del--;
        }
        prev->next=dele->next;
        dele->next=NULL;
        delete dele;
        return head;
    }
};