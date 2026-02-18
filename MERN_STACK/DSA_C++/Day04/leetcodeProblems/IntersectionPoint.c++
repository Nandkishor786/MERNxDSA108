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
 
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
       ListNode*curr1=headA;
       ListNode*curr2 =headB;
       unordered_map<ListNode*,int>VisitedCount;

        while(curr1){  
             VisitedCount[curr1] =1;
             curr1 =curr1->next;
         }

         while(curr2){
          if(VisitedCount[curr2]==1){
            return curr2;
          }
          curr2 =curr2->next;
         }
        return nullptr;
    }

    int main(){

      ListNode*head =nullptr;
      head = new ListNode(4);
      head->next =new ListNode(1);
      ListNode*Intersect =new ListNode(8);
       head->next->next= Intersect;
      Intersect->next=new ListNode(4);
      Intersect->next->next=new ListNode(5);
      
      ListNode*head1 =nullptr;
      head1 = new ListNode(5);
      head1->next =new ListNode(6);
      head1->next->next =new ListNode(1);
      head1->next->next->next=Intersect;
   

          printList(head);
          printList(head1);
   
          ListNode*IntersectNode =getIntersectionNode(head,head1);

          if(IntersectNode){
            
          cout<<"intersection at node "<<IntersectNode->data<<endl;
          }else{
              cout<<"intersection not exist"<<endl;
          }
        
           // memoryfreecode
          if(head1!=nullptr){
               ListNode*temp =head;
               while(temp!=nullptr){
                 ListNode*next =temp->next;
                 delete temp;
                 temp =next;
               } 
          }

      return 0;
    }