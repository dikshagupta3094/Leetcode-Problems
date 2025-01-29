

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

   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // reverseNode(l1,l2);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        int carry = 0;
        stack<int>st;
        while(temp1!=NULL || temp2!=NULL || carry){
            int sum = 0;
              if(temp1!=NULL){
                sum += temp1->val;
                temp1 = temp1->next;
            }

              if(temp2!=NULL){
                sum += temp2->val;
                temp2 = temp2->next;
              }
              sum += carry;
              carry = sum/10;
            
            ListNode* node = new ListNode(sum%10);

            temp->next = node;
            temp  = temp->next;      
        }


        return dummyNode->next;
    }
};
