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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode *temp=head;
       ListNode *list=NULL;
       unordered_set<int> s;
       while(temp!=NULL)
       {
           if(s.find(temp->val)!=s.end())
           {
               list->next=temp->next;
               delete(temp);
           }
           else{
               s.insert(temp->val);
               list=temp;
           }
           temp=list->next;
       } 
       return head;
    }
};