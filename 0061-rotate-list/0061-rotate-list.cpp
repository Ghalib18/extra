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
        ListNode* temp=head;
        ListNode* tail=NULL;
        int n=0;
        if(temp==NULL||temp->next==NULL) return head;
        while(temp!=NULL){
            if(temp->next==NULL) tail=temp;
            n++;
            temp=temp->next;
        }
        k=k%n;
        if(k==0) return head;
        ListNode* tmp=head;
        for(int i=0;i<n-k-1;i++){
             tmp=tmp->next;
        }
        ListNode* newHead=tmp->next;
        tmp->next=NULL;
        tail->next=head;
        return newHead;
        
    }
};