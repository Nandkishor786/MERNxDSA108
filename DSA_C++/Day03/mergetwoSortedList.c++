#include<iostream>
using namespace std;

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
  ListNode*temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp =temp->next;
  }
  cout<<"Null"<<endl;
}
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
 
       ListNode*dummy =new ListNode(-1);
       ListNode*temp =dummy;
       while(list1&&list2){

        if(list1->data>=list2->data){
            temp->next =list2;
            list2 =list2->next;
                       
        }else{
          temp->next =list1;
          list1 =list1->next;
        }
       temp =temp->next;

       }
    temp->next  =(list1 ? list1:list2);

       return dummy->next;

}

    int main(){

      ListNode*head1 =nullptr;
      head1 = new ListNode(1);
      head1->next =new ListNode(2);
      head1->next->next =new ListNode(4);

      ListNode*head2 =nullptr;
      head2 = new ListNode(1);
      head2->next =new ListNode(3);
      head2->next->next =new ListNode(4);
          printList(head1);
          printList(head2);

         ListNode*head= mergeTwoLists(head1,head2);
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