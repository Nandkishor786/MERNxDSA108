#include<iostream>
using namespace std;
#include <unordered_set>

class ListNode{

  public:
  int data;
  ListNode*next;
  public:
  ListNode(int val){
    this->data =val;
    this->next =nullptr;
  }

  ~ListNode(){
    cout<<"node is memory free with data "<<data<<endl;
  }
};

void printList(ListNode*head){
  if(head==nullptr){
    cout<<"list is empty"<<endl;
    return;
  }
   unordered_set<ListNode*>Visited;
   ListNode*temp =head;
   while(temp!=nullptr){
    if(Visited.count(temp)){
      cout<<temp->data <<" back to Node"<<endl;
    return ;
    }
    cout<<temp->data<<"->";
    Visited.insert(temp);
    temp =temp->next;
   }
   

}

bool hasCycle(ListNode *head) {
          
    if(head==nullptr){
      return true;
    }

    ListNode*slow =head;
    ListNode*fast =head;

    while(fast&&fast->next){
      fast =fast->next->next;
      slow =slow->next; 
      if(slow==fast)return true;          

    }
    
    return false;

    }

    int main(){

      ListNode*head =nullptr;
      head = new ListNode(1);
      head->next =new ListNode(2);
      head->next->next =new ListNode(4);
      head->next->next->next=head->next;


          printList(head);
         bool result = hasCycle(head);
          if(result){
            cout<<"cycle is present "<<endl;
          }else{
            cout<<"cycle is  not present "<<endl;
          }


          //  // memoryfreecode
          // if(head!=nullptr){
          //      ListNode*temp =head;
          //      while(temp!=nullptr){
          //        ListNode*next =temp->next;
          //        delete temp;
          //        temp =next;
          //      } 
          // }

      return 0;
    }