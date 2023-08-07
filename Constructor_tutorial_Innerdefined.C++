#include<bits/stdc++.h>
using namespace std;
//  Inner class constructor
 class Constructor_tutorial{
 	string student_name;
 	string ID;
 	int roll_no;
 	char div;
 	string college_name; 
 	public:
 	Constructor_tutorial(){
 		cin>>student_name>>ID>>roll_no>>div>>college_name;
 	}
 	void display(){
 		cout<<student_name<<"\n"<<ID<<"\n"<<roll_no<<"\n"<<div<<"\n"<<college_name;
 	}
 };

int main(void){
	Constructor_tutorial student_I;
	student_I.display();
}