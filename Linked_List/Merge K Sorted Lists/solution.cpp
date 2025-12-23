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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*tmp = nullptr;
        if(lists.empty()) return tmp;
        int idx = 0;
        int min = 9999;
        int siz = lists.size();
        ListNode* res = new ListNode();
        ListNode* temp = res;
        map<int,int>cache;
        map<ListNode*,int>finished;
        int done = 0;
        // [1,2,4]
        // [1,3,5]
        // [3,6]

        // [-4,-2,1,3,5]
        // [-1,24,25]
        // [7]
        // [8]
        // [7],
        // [6],
        // [-7]
        // [-8]
        // [-7],
        // [-6]
        while(done != siz){
            ListNode* curr = lists[idx];
            if(finished[curr]){
                idx++;
                // if(idx == 10)return res->next;
                if(idx == siz){
                 ListNode* newNode = new ListNode(min);
                temp->next = newNode;
                temp = newNode;

                if(lists[cache[min]]->next == nullptr) {
                    done ++;
                    finished[lists[cache[min]]]  = 1;
                    if(done == siz) return res->next;
                }
                else
                    lists[cache[min]] = lists[cache[min]]->next;
                idx = 0;
                min = 9999;
                };
                continue;
            } ;
            // cout << curr->val << endl;
            if(curr->val < min){
                min = curr->val; // 1
                cache[min] = idx; // cache[1] = 0
            }
            idx++;
            if(idx  == siz){
                ListNode* newNode = new ListNode(min);
                temp->next = newNode;
                temp = newNode;

                if(lists[cache[min]]->next == nullptr) {
                    done ++;
                    finished[lists[cache[min]]]  = 1;
                    if(done == siz) return res->next;
                }
                else
                    lists[cache[min]] = lists[cache[min]]->next;
                idx = 0;
                min = 9999;
            }
        }
        return tmp;
    }
};


