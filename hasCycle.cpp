#include <iostream>
#include <algorithm>


class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};


bool HasCycle(SinglyLinkedListNode* head) {
  //Base Case
  if(head == nullptr)
    return false;
  SinglyLinkedListNode* fast = head->next,*slow = head;

  while(fast != nullptr || fast->next != nullptr){//Neither can be null
    fast = fast->next;
    slow = slow->next;
    if(fast == slow)
      return true;
  }

  return false;//No cycle found
}

int main(){
  return 0;
}
