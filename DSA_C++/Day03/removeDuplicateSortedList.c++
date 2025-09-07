#include<iostream>
#include<map>
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
 

// ListNode* deleteDuplicates(ListNode* head) {
           
//          if(head==nullptr){
//           return head;
//          }
//         map<int,bool>Visited;
//         ListNode*curr =head;
//         ListNode*prev =nullptr;
//         while(curr!=nullptr){
           
//           if(Visited[curr->data]){
//              prev->next =curr->next;
//                 ListNode*NodeToDelete= curr; 
//                 curr =curr->next;
//                 delete NodeToDelete;  
//           }
//           else{
//             Visited[curr->data] =true;
//              prev =curr;
//              curr =curr->next;
//           }
//         }   
//         return head;
//     }

    //optimised

    ListNode* deleteDuplicates(ListNode* head) {
           
         if(head==nullptr){
          return head;
         }
 
        ListNode*curr =head;
         while(curr&&curr->next){
             
              if(curr->data==curr->next->data){
                 ListNode*NodeToDelete =curr->next;
                 curr->next =curr->next->next;
                 delete NodeToDelete;
              }
              else{
                curr =curr->next;
              }
         }
        return head;
    }


    int main(){

      ListNode*head =nullptr;
      head = new ListNode(1);
      head->next =new ListNode(1);
      head->next->next =new ListNode(2);
          printList(head);

          deleteDuplicates(head);

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