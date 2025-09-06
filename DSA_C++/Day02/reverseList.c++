#include<iostream>
using namespace std;
//  cout<<"reverse the singly ll iterative and recursive approaches"<<endl;

class Node{
  public:
int data;
Node*next;

public:
Node(int val){
  this->data =val;
  this->next =nullptr;
}

~Node(){
  cout<<"memory free of node with data"<<" "<<data<<endl;
}
};


void printList(Node*&head){
   
  if(head==nullptr){
      cout<<" list is empty"<<endl;
      return;
  }

  Node*temp =head;
  while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp =temp->next;
  }
  cout<<"Null"<<endl;
}


// ///#1 iterative reversal approach
//   Node*ReverseList(Node*&head,Node*&tail){

//     //empty case  or //only one node case
//     if(head==nullptr||head->next==nullptr){
//       return head;
//     }
//     //more than one node case
//     Node*prev =nullptr;
//     Node*curr =head;
//     Node*forward=curr;

//     while(curr!=nullptr){
//       forward =curr->next;
//       curr->next=prev;
//         prev =curr;
//         curr =forward;
//     }

//     tail =head;
//     head =prev;

//     return head;
//   }





// //#2 recursive reversal approach
// Node* ReverseList(Node*& head, Node*& tail) {
    
//       // Node*prev =nullptr;
//       Node*curr =head;
//       Node*forward =curr->next;
      
//       //base case 
//       if(curr==nullptr||curr->next==nullptr){
//         tail =head;
//          return head;
//       }

//       Node*newHead =ReverseList(forward,tail);
//       forward->next  =curr;
//       curr->next =nullptr;  
          
//       tail =head;
//      return newHead;

// }


// #3 recursive reversal approach
Node* ReverseList(Node*& head, Node*& tail) {
    // Base case: 0 or 1 node
    if (head == nullptr || head->next == nullptr) {
        tail = head;  // The last node becomes the tail
        return head;  // It’s also the new head after reversal
    }

    // Recursive call to reverse the rest of the list
    Node* newHead = ReverseList(head->next, tail);

    // Reverse the current node's link
    head->next->next = head;
    head->next = nullptr;
     tail =head;
    return newHead;
}




int main(){

  cout<<"reverse the singly ll iterative and recursive approaches"<<endl;

  Node*head =nullptr;
  Node*tail =nullptr;

 
  Node*newNode =new Node(10);
  head =newNode;
  tail =newNode;
  newNode->next =new Node(20);
  tail =newNode->next;
  newNode->next->next =new Node(30);
  tail =newNode->next->next;
  newNode->next->next->next =new Node(40);
  tail =newNode->next->next->next;
  newNode->next->next->next->next =new Node(50);
  tail =newNode->next->next->next->next;

   printList(head);
   cout<<"head is "<<" "<<head->data<<" "<<"tail is "<<" "<<tail->data<<endl;
   cout<<" after reverse"<<endl;

   head =ReverseList(head,tail);
   printList(head);
   cout<<"head is "<<" "<<head->data<<" "<<"tail is "<<" "<<tail->data<<endl;
   
   return 0;
}