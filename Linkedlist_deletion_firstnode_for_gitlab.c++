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
	 ~Node(){
	 	int value=this->data;
	 	if(this->next!=NULL){
	 		delete next;
	 		this->next=NULL;
	 	}
	 	cout<<"This "<<value<<" is deleted"<<endl;
	 }
};

void deleteNode(int position, Node* &head){
	if(position==1){
		Node* node=head;
		head=head->next;
		node->next=NULL;
		delete node;
	}
	else{
		Node* prev=NULL;
		Node* curr=head;
		int cnt=1;
		while(cnt<position){
			prev=curr;
			curr=curr->next;
			cnt++;
		}

		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
	}
}

void insertAthead(int data, Node* &head){
	Node* node= new Node(data);
	node->next=head;
	head=node;
}
void insertAttail(int data, Node* &head){
	Node* node= new Node(data);
	head->next=node;
	head=head->next;
}
void insertAtanyposition(int data, int position, Node* & head){
	Node* node=head;
	int cnt=1;
	while(cnt<position-1){
		node=node->next;
		cnt++;
	}
	Node* insertAt= new Node(data);
	insertAt->next=node->next;
	node->next=insertAt;
}

int print(Node* &head){
	Node* node1=head;
	while(node1->next!=NULL){
		cout<<node1->data<<" ";
		node1=node1->next;
	}
	cout<<endl;
}

int main(void){
	int x;cin>>x;
	Node* node=new Node(100);
	Node* head=node;
	 insertAthead(200,head);
	 print(head);
	 insertAthead(201,head);
	 print(head);
	 insertAthead(202,head);
	 print(head);
	 insertAthead(203,head);
	 print(head);deleteNode(x,head);
	 print(head);


	// insertAttail(200,head);
	// print(head);
	// insertAttail(201,head);
	// print(head);
	// insertAttail(202,head);
	// print(head);
	// insertAttail(203,head);
	// print(head);
	// insertAttail(204,head);
	// print(head);
	// insertAttail(205,head);
	// print(head);

	 }