class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int remainning = 0;
    ListNode *res = new ListNode();
    ListNode *temp = res;
    while (l1 != nullptr || l2 != nullptr) {
      int sum;
      ListNode *newNode = new ListNode();
      if (l1 == nullptr) {
        sum = l2->val;
        l2 = l2->next;
      }
      else if (l2 == nullptr) {
        sum = l1->val;
        l1 = l1->next;
      } else {
        sum = l1->val + l2->val;
        l1 = l1->next;
        l2 = l2->next;
      }
      if ((sum + remainning) > 9) {
        newNode->val = (sum + remainning) % 10;
        std::cout << newNode->val <<endl;
        remainning = 1;
        temp->next = newNode;
        temp = temp->next;
        continue;
      }
      newNode->val = sum + remainning;
      remainning = 0;
      temp->next = newNode;
      temp = temp->next;
      std::cout << sum << remainning;
    }
    if (remainning) {
      ListNode *newNode = new ListNode(1);
      temp->next = newNode;
    }
    return res->next;
  }
};

