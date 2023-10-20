/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.
*/
#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		int marks1;
		int marks2;
		int marks3;
		
		public: void acceptinfo(){
			cout<<"enter rollno:";
			cin>>rollno;
			cout<<"enter marks1:";
			cin>>marks1;
			cout<<"enter marks2:";
			cin>>marks2;
			cout<<"enter marks3:";
			cin>>marks3;
		}
		void display(){
				cout<<"rollno is "<<rollno;
				double total;
				double percentage;
				total = marks1+marks2+marks3;
				percentage=(total/300)*100;
				cout<<"percentage is:"<<percentage;
				
				if(percentage>=90){
					cout<<"grade A"<<endl;
					}
					else if(percentage<=90&&percentage>=80){
						cout<<"grade B"<<endl;
					}
					else if(percentage<=80&&percentage>=70){
						cout<<"grade c"<<endl;
					}
					else if(percentage<=70&&percentage>=60){
						cout<<"grade d"<<endl;
					}
					else
						cout<<"fail"<<endl;
					
			}
					
				
		
			
		
};
int main1()
{
    student stud1;
	stud1.acceptinfo();
	stud1.display();
	
	return 0;
}
