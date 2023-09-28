#include <iostream>
#include <iomanip>
using namespace std;

class student
{
	private:
		string firstname;
		string lastname;
		int prn;
		int Eng;
		int Math;
		int Hist;
		int Geo;
		int EVS;
		int CS;
	public:
		void details();
		void percent();
};

void student::details()
{
		printf("Enter your first name: ");
		cin>>firstname;
		printf("Enter your last name: ");
		cin>>lastname;	
	
		printf("_________________________________________________________");
		printf("\n");
		printf("\nEnter marks in English: ");
		cin>>Eng;
		printf("\nEnter marks in Math: ");
		cin>>Math;
		printf("\nEnter marks in History: ");
		cin>>Hist;
		printf("\nEnter marks in Geography: ");
		cin>>Geo;
		printf("\nEnter marks in EVS: ");
		cin>>EVS;
		printf("\nEnter marks in Computer Science: ");
		cin>>CS;
        printf("_________________________________________________________");
}

void student::percent()
{
	float percent=((Eng+Math+Hist+Geo+EVS+CS)/6);
	cout<<endl<<"The percentage achieved by "<<firstname<<" "<<lastname<<" for the courses Eng("<<Eng<<"), Math("<<Math<<"), Hist("<<Hist<<"), Geo("<<Geo<<"), EVS("<<EVS<<"), CS("<<CS<<") is "<<setprecision(2)<<fixed<<percent<<"."<<endl;
}

int main(void)
{
	student s1;
	s1.details();
	s1.percent();
}
