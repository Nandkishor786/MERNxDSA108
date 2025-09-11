#include<iostream>
using namespace std;
#include <unordered_map>

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
    ListNode*temp =head;
   while(temp!=nullptr){
    cout<<temp->data<<"->";
     temp =temp->next;
    }
    cout<<"null"<<endl;

}
  

   ListNode* middleNode(ListNode* head) {

    if(head==nullptr||head->next==nullptr){
      return head;
    }
     ListNode*slow =head;
     ListNode*fast =head;
     while(fast!=nullptr&&fast->next!=nullptr){
      slow =slow->next;
      fast =fast->next->next;
     }
     return slow;
    }
 
 
    int main(){

      ListNode*head =nullptr;
      head = new ListNode(1);
      head->next =new ListNode(2);
      ListNode*Intersect =new ListNode(3);
       head->next->next= Intersect;
      Intersect->next=new ListNode(4);
      Intersect->next->next=new ListNode(5);
    //  Intersect->next->next->next=new ListNode(6);
 
       
            printList(head);
            ListNode*Mid =middleNode(head);
            cout<<" mid is "<<Mid->data<<endl;
          
           // memoryfreecode
          if(head!=nullptr){
               ListNode*temp =head;
               while(temp!=nullptr){
                 ListNode*next =temp->next;
                 delete temp;
                 temp =next;
               } 
          }

      return 0;
    }