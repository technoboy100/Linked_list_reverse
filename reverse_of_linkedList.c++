#include<bits/stdc++.h>
using namespace std;
 class Node{
 public:
 	int data;
 	Node* next;
 	 Node(int data){
 	 	this->data=data;
 	 	this->next=NULL;
 	 }
 };

 void insertAthead(int data, Node* &head){
 	Node* node=new Node(data);
 	node->next=head;
 	head=node;

 }

void print(Node* &head){
 	Node* node= head;
 	while(node->next!=NULL){
 		cout<<node->data<<"->";
 		node=node->next;
 	}
 	cout<<"NULL"<<endl;
 	{
 		
 	};;
 }

Node* reverse_print(Node* &head){
	Node* prev=NULL;
	Node* curr=head;
	Node* forward=NULL;
	while(curr->next!=NULL){
		forward=curr->next;
		//A pointer
		curr->next=prev;
		prev=curr;
		//B pointer
		curr=forward;
		
	}
	cout<<"NULL";
	while(prev!=NULL){
		
		cout<<"->"<<prev->data;
		prev=prev->next;
	}
	cout<<endl;
}
 int main(){
 	Node* node=new Node(100);
 	Node* head=node;
 	insertAthead(101,head);
 	insertAthead(102,head);
 	insertAthead(103,head);
 	insertAthead(104,head);
 	insertAthead(105,head);
 	insertAthead(106,head);
 	cout<<"The Linked-List"<<endl;
 	print(head);
 	cout<<"Reverse the Linked-List"<<endl;
 	reverse_print(head);

 }