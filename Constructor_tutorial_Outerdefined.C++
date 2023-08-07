#include<bits/stdc++.h>
using namespace std;	
class Constructor_tutorial_Outerdefined
{
public:
	string student_name;
 	string ID;
 	int roll_no;
 	char div;
 	string college_name; 
	Constructor_tutorial_Outerdefined();
	void display();	
};

Constructor_tutorial_Outerdefined::Constructor_tutorial_Outerdefined(){
		cin>>student_name>>ID>>roll_no>>div>>college_name;
}
void Constructor_tutorial_Outerdefined::display(){
	cout<<student_name<<"\n"<<ID<<"\n"<<roll_no<<"\n"<<div<<"\n"<<college_name<<endl;
}


int main(void){
	Constructor_tutorial_Outerdefined Student01;
	Student01.display();
 }