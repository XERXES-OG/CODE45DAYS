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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        n=n-1;
        int res=0;
        for(auto k:v)
        {
            res=res+(k*pow(2,n));
            n--;
        }
        return res;
    }
};