#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
void display(){
	cout<<"           -----------------------------------------\n";
	cout<<"          |            CGPA CALCULATOR              |\n";
	cout<<"           -----------------------------------------\n";
}
void gradepoint(){
	cout<<"You can use this table for :\n\nConverting GRADE and MARKS into to GRADE POINT\n";
	cout<<"\n____________________________________\n";
	cout<<"| GRADE | MARKS RANGE | GRADE POINT |\n";
	cout<<"-------------------------------------\n";
	cout<<"|   A+  |    91-100   |     10      |\n";
	cout<<"|   A   |    81-90    |     9       |\n";
	cout<<"|   B+  |    71-80    |     8       |\n";
	cout<<"|   B   |    61-70    |     7       |\n";
	cout<<"|   C+  |    51-60    |     6       |\n";
	cout<<"|   C   |    41-50    |     5       |\n";
	cout<<"|   D   |    31-40    |     4       |\n";
	cout<<"|   F   |    <=30     |     0       |\n";
	cout<<"-------------------------------------\n\n";
}
int main(){
	display();
	// Table of grade,marks and grade point
	gradepoint();
	int sem,sub;
	int credit,grade;
	//total score and total credit to calculate CGPA
	float tscore = 0;
	float tcredit = 0;
	//semester total score and semester total credit SGPA
	float sscore=0;
	float scredit=0;
	cout<<"--> NO. OF SEMESTERS:";
	cin>>sem;
	for(int i=1;i<=sem;i++){
	
		cout<<"\n*************************************************\n\n";
		cout<<"               --------------\n";
		cout<<"               |    SEM "<<i<<"   |\n";
		cout<<"               --------------\n\n";
		cout<<"NO. OF SUBJECT IN THE SEMESTER " <<i<<" :- ";
		cin>>sub;
		cout<<"\n------------------------------------------------";
		for(int j=1;j<=sub;j++){
        cout<<"\nEnter The Credit Of Sub "<<j<<":- ";
		cin>>credit;
		while(credit<0){
			cout<<"\nInvalid input! credit can't be negative ,try again:";
			cin>>credit;
		}
		scredit+=credit;
		tcredit+=credit;
		cout<<"Enter The Grade Point Of Sub "<<j<<":- ";
		cin>>grade;
		while(grade<0 || grade>10){
			cout<<"\nInvalid input! Grade point must in range of  0-10 ,try again:";
			cin>>grade;
		}
		sscore+=(credit*grade);
		tscore+=(credit*grade);
		cout<<"------------------------------------------------";
		}

		float sgpa;
		sgpa=sscore/scredit;
		cout<<"\n\n--> SEM "<<i<<" SGPA IS "<<fixed<<setprecision(2)<<sgpa<<endl;
	     sscore=0;
	     scredit=0;
	}
	float cgpa;
	cgpa=tscore/tcredit;
	cout<<"\n*************************************************\n\n";
	cout<<"YOUR CGPA IS "<<fixed<<setprecision(2)<<cgpa;
	cout<<"\n\n*************************************************\n\n";

}
