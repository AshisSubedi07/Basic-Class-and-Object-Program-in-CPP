#include<iostream>
using namespace std;
class school{
	public:
		int studentid;
		char studentname[20];
		string address;
		float lastGPA;
	//taking data from User	
	void getdata(){
		cout<<"Enter student id, student name, address and last obtained GPA of the student"<<endl;
		cin>>studentid>>studentname>>address>>lastGPA;
	}
	void showdata(){
		cout<<"Student insert "<<studentid<<" as his student id"<<endl<<studentname<<" as his student name"<<endl<<address<<" as his address"<<endl<<lastGPA<<" as his last GPA"<<endl;
	}
};
int main(){
	school student;
	student.getdata();
	student.showdata();
	return(0);
}
