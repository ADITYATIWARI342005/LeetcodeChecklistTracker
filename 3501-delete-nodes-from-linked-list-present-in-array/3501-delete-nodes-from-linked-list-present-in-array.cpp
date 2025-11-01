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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            if(s.find(curr->val)!=s.end()){
                if(prev==nullptr){
                    head=curr->next;
                }else{
                    prev->next=curr->next;
                }
                curr=curr->next;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")

static int x = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();