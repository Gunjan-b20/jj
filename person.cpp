/*Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 
*/
#include<iostream>
using namespace std;
class person{
private:string name;
    	string city;
    	int age;
	public:
		person()
		{
			cout<<"------default--person-----"<<endl;
			name="tara";
			age=21;
			city="pune";
		}
		person(string name,int age,string city){
			cout<<"----parameerized--person----"<<endl;
			this->name=name;
			this->age=age;
			this->city=city;
		}
		void display(){
			cout<<name<<"  "<<age<<" "<<city<<"  "<<endl;
		}
		int getage( )
	   	{
	   	return age;
		}
		void setName(string name){
	   	this->name=name;
		   }
};
int main2(){
	person pr1;
	pr1.display();
	pr1.setName("nima");
    cout<<"age is"<<pr1.getage()<<endl;
	pr1.display();
	person pr2("roja",22,"goa");
	pr2.display();
	
	return 0;
}
