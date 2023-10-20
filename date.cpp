/*Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.
*/
#include<iostream>
using namespace std;
class date{
	private: int dd,mm,yy;
	public:
		date(){
			cout<<"--default_date---"<<endl;
			dd=11;
			mm=6;
			yy=22;
		}
		date(int dd,int mm,int yy){
			cout<<"--para_date--"<<endl;
			this->dd=dd;
			this->mm=mm;
			this->yy=yy;
		}
		void display(){
			cout<<dd<<" "<<mm<<" "<<yy<<" "<<endl;
		}
		//getters
		int getyy(){
			return yy;
		}
		void setmm(int mm){
			this->mm=mm;
		}
};

int main3(){
	date d1;
	d1.display();
	d1.setmm(7);
	d1.display();
	cout<<"year is "<<d1.getyy()<<endl;
	date d2(4,4,23);
	d2.display();
	return 0;
	
}
