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
        
        if(head == NULL)
            return NULL;
        
        ListNode* second;
        ListNode* temp;
        ListNode *first=head;
        second = first->next;
        
        
        
        while(second != NULL){
            
            temp = second->next;
            second->next = first;
            first = second;
            second = temp;
            
            
        }
        head->next=NULL;
        head = first;
        
        return head;
    }
    
};
