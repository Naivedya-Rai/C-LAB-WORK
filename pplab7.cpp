#include <iostream>
#define MAX 50
using namespace std;

class student
{
	private:
		char firstname[MAX];
		char lastname[MAX];
		int prn;
		//subjects taken
		int fds;
		int asd;
		int dmpt;
		int pp;
		int co;
		int deld;
	public:
		void details();
		void percent();
};

void student::details()
{
		cout("Enter your first name: ");
		cin("%s",&firstname);	
		cout("Enter your last name: ");
		cin("%s",&lastname);	
	
		cout("____________________________________________________________");
		cout("\n");
		cout("\nEnter your marks in FDS: ");
		cin("%d",&fds);
		cout("\nEnter your marks in ASD: ");
		cin("%d",&asd);
		cout("\nEnter your marks in DMPT: ");
		cin("%d",&dmpt);
		cout("\nEnter your marks in PP: ");
		cin("%d",&pp);
		cout("\nEnter your marks in CO: ");
		cin("%d",&co);
		cout("\nEnter your marks in DELD: ");
		cin("%d",&deld);
}

void student::percent()
{
	float percent=((fds+asd+dmpt+pp+co+deld)/6);
	cout("\n\nThe percentage achieved by %s %s for the courses FDS(%d), ASD(%d), DMPT(%d), PP(%d), CO(%d), DELD(%d) is %.3f",firstname,lastname,fds,asd,dmpt,pp,co,deld,percent);
}

int main(void)
{
	student s1;
	s1.details();
	s1.percent();
}
