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
 
   ListNode* removeElements(ListNode* head, int val) {
          if(head==nullptr)return nullptr;
          
               while(head!=nullptr&&head->data==val){
               ListNode*nodeTodelete =head;
               head =head->next;
                delete nodeTodelete;
            }

          ListNode*curr  =head;
          ListNode*prev =nullptr;
      
          while(curr){
             
                  if(curr->data==val){
              ListNode*nodeTodelete =curr;
              prev->next =curr->next;
              curr =curr->next;
              delete nodeTodelete;
           }else{
            prev =curr;
            curr =curr->next;
           }
    }
    return head;
  }

    int main(){

      ListNode*head =nullptr;
      head = new ListNode(1);
      head->next =new ListNode(2);
      ListNode*Intersect =new ListNode(6);
       head->next->next= Intersect;
      Intersect->next=new ListNode(3);
      Intersect->next->next=new ListNode(4);
     Intersect->next->next->next=new ListNode(5);
    Intersect->next->next->next->next=new ListNode(6);

    int val  =6;
      
            printList(head);
            removeElements(head,val);
            printList(head);
       
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