#include <iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20],rollno;
int total=0;
	




int main()
 {
 	int value;
 	cout<<"press 1 to enter data"<<endl;
 	cout<<"press 2 to show data"<<endl;
	cout<<"press 3 to search data"<<endl;
	cout<<"press 4 update data"<<endl;
	cout<<"press 5 delete data"<<endl;
	cout<<"press 6 to exit"<<endl;
	cin>>value;
	switch(value)
	{
		case 1:
			int choice;
	cout<<"How many students do you want to enter: ";
	cin>>choice;
	total=total+choice;
	for(int i=0;i<choice;i++)
	{
		cout<<"\nEnter data of the student: ";
		cout<<"Enter name: ";
		cin>>arr1[i];
		cout<<"Enter roll number: ";
		cin>>arr2[i];
		cout<<"Enter course: ";
		cin>>arr3[i];
		cout<<"Enter class: ";
		cin>>arr4[i];
		cout<<"Enter contact: ";
		cin>>arr5[i];
	}  
			break;
			
			
			
			
		case 2:
			for(int i=0;i<total;i++)
	{
		cout<<"Data of  student: "<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i];
		cout<<"Rollno: "<<arr2[i];
		cout<<"Course: "<<arr3[i];
		cout<<"Class: "<<arr4[i];
		cout<<"Contact: "<<arr5[i];
	}
			break;
			
			
			
		case 3:
			
	cout<<"Enter rollno of student which you want to search: ";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			
		   cout<<"Data of the student: "<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i];
		cout<<"Rollno: "<<arr2[i];
		cout<<"Course: "<<arr3[i];
		cout<<"Class: "<<arr4[i];
		cout<<"Contact: "<<arr5[i];
		
		}
	}
			break;
			
			
			
		case 4:
				
	cout<<"Enter rollno of student which you want to search: ";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"previous data"<<endl<<endl;
			
		   cout<<"Data of the student: "<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i];
		cout<<"Rollno: "<<arr2[i];
		cout<<"Course: "<<arr3[i];
		cout<<"Class: "<<arr4[i];
		cout<<"Contact: "<<arr5[i];
		cout<<"\nEnter new data"<<endl;
		cout<<"\nEnter name: ";
		cin>>arr1[i];
		cout<<"\nEnter rollno: ";
		cin>>arr2[i];
		cout<<"Enter course: ";
		cin>>arr3[i];
		cout<<"Enter class: ";
		cin>>arr4[i];
		cout<<"Enter contact: ";
		cin>>arr5[i];
		
		}
	}
			break;
			
			

	     default:
			cout<<"invalid input"<<endl;
			break;
			
	}
	 
	return 0;
}
