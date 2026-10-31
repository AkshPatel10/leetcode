// Last updated: 31/10/2026, 11:04:32
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        ListNode* dummy = new ListNode(0);
15        dummy->next = head;
16
17        // two pointers
18        ListNode* first = dummy;
19        ListNode* second = dummy;
20
21        // keep n space bw two pointers
22        for(int i = 0; i < n; i++){
23            second = second->next;
24        }
25
26        // move both until second pointer's next is null
27        while(second->next != nullptr){
28            first = first->next;
29            second = second->next;
30        }
31
32        // remove first pointer's next node
33        first->next = first->next->next;
34
35        return dummy->next;
36    }
37};