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
        if(!k || !head)
            return head;
        int c = 0;
        ListNode * tail;
        ListNode * curr = head;
        
        while(curr)
        {
            c++;
            curr = curr->next;
            if(curr && !curr->next)
                tail = curr;
        }
        
        k = k%c;
        tail->next = head;
        
        curr = head;
        int cn = 1;
        while(cn<c-k)
        {
            curr = curr->next;
            cn++;
        }
        head = curr->next;
        curr->next = NULL;
        
        return head;
    }
};
