
class Node {
public:
  int val;
  int key;
  Node *next;
  Node *prev;
  Node() { next = prev = nullptr; }
  Node(int v, int k) {
    val = v;
    key = k;
    next = prev = nullptr;
  }
};

class LRUCache {
  int size = 0;
  int cap = 0;
  Node *head;
  Node *tail;
  std::unordered_map<int, Node *> m;

public:
  LRUCache(int capacity) {
    cap = capacity;
    head = tail = nullptr;
  }

  int get(int key) {
    if (m[key]) {
      Node *node = m[key];
      // if this node is tail
      if (node == tail) {
        cout << "coming from size==cap " << node->val << endl;
        return node->val;
      }

      // i this node is head
      if (node == head) {
        node->next->prev = nullptr;
        head = head->next;
        tail->next = node;
        node->prev = tail;
        tail = node;
        cout << "the head is: " << head->val
             << "and current node is: " << node->val << endl;
        return node->val;
      }
      // if this node is head and tail // do nothing
      if (node == head && node == tail)
        return node->val;
      // if this node is in between two nodes
      if (node->next && node->prev) {
        node->prev->next = node->next;
        node->next->prev = node->prev;

        tail->next = node;
        node->prev = tail;
        tail = node;
        return node->val;
      }
    }
    return -1;
  }

  void put(int key, int value) {

    // handle if we already have this node
    if (m[key] != nullptr) {
      m[key]->val = value;

      Node *node = m[key];
      // if this node is tail
      if (node == tail)
        return;

      // i this node is head
      if (node == head) {
        node->next->prev = nullptr;
        head = head->next;
        tail->next = node;
        node->prev = tail;
        tail = node;
        return;
      }
      // if this node is head and tail // do nothing
      if (node == head && node == tail)
        return;
      // if this node is in between two nodes
      if (node->next && node->prev) {
        node->prev->next = node->next;
        node->next->prev = node->prev;

        tail->next = node;
        node->prev = tail;
        tail = node;
        return;
      }

      return;
    }

    Node *newNode = new Node(value, key);

    // handle edge case
    if (size == 0) {
      head = tail = newNode;
      size++;
      m[key] = newNode;
      return;
    }

    // handle if we reached maximum
    if (size == cap) {
      Node *temp = head;

      head = head->next;
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
      m.erase(temp->key);
      delete temp;
      m[key] = newNode;
      return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    size++;
    m[key] = newNode;
  }
};
