/*write a program to create class employee(eid,ename,department,salary)*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
class employee
{
	private:
		int eid;
		char ename[20];
		char department[20];
		float salary;
	public:
		//constructor
		employee(int id,char name[20],char dept[20],float sal)
		{
			eid=id;
			strcpy(ename,name);
			strcpy(department,dept);
			salary=sal;
		}
		//method to display employee data
		void display()
		{
			cout<<"employee id:"<<eid<<endl;
			cout<<"employee name:"<<ename<<endl;
			cout<<"department:"<<department<<endl;
			cout<<"salary:"<<salary<<endl;
		}
		//method to get employee name
		const char* getname()
		{
			return ename;
		}
};
int main()
{
	int bool;
	//array to store 5 employee object
	clrscr();
	employee employee[5]={
		employee(1,"harsh","finance",40000),
		employee(2,"sajid","HR",50000),
		employee(3,"nilay","IT",70000),
		employee(4,"nirav","marketing",60000),
		employee(5,"sujal","sales",30000)
		};
	//display all employee records
	int j;
	cout<<"employee records:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"\n employee"<<i+1<<":"<<endl;
		employee[i].display();
	}
	//searching an employee by name
	char searchname;
	 int found=0;
	for(j=0;j<5;j++)
	{
		if(strcmp(employee[j].getname(),searchname)==0)
		{
			cout<<"\n employee found:"<<endl;
			employee[j].display();
			found=1;
			break;
		}
	}
	if(found==0)
	{
		cout<<"\n employee not found"<<endl;
	}
	getch();
	return 0;
}



