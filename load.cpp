#include "load.h"

void start_load()
{
//	system("clear");
	Admin::adds(5,5);
	cout << "|| WELCOME TO STUDENT DATA MANAGER ||" << endl;
	Admin::adds(5,1);
	cout << "Press Enter to proceed..." << endl;
	getchar();
	system("clear");
}

void end_load()
{
	system("clear");
	Admin::adds(5,5);
	cout << "|| CLOSING STUDENT DATA MANAGER ||" << endl;
	Admin::adds(5,1);
	cout<< "ADIOS, AMIGO ";
	fflush(stdout);
	sleep(1);
	cout<<":";
	fflush(stdout);
	sleep(1);
	cout<<"-";
	fflush(stdout);
	sleep(1);
	cout<<")"<<endl;
	fflush(stdout);
	sleep(1);
	system("clear");
}

void print_label(int n)
{
	Admin::adds(s1,2);
	switch (n)
	{
	case 0:
		cout << "------------------"<<endl;
		Admin::adds(s1);
		cout << "|| ADMIN'S MENU ||"<< endl;
		Admin::adds(s1);
		cout<< "------------------\n"<<endl;
		break;
	case 1:
		cout << "------------------------" << endl;
		Admin::adds(s1);
		cout << "|| ADD STUDENT RECORD ||" << endl;
		Admin::adds(s1);
		cout << "------------------------" << endl;
		break;
	case 2:
		cout << "---------------------------" << endl;
		Admin::adds(s1);
		cout << "|| TOTAL STUDENT RECORDS ||" << endl;
		Admin::adds(s1);
		cout << "---------------------------" << endl;
		break;
	case 3:
		cout << "---------------------------" << endl;
		Admin::adds(s1);
		cout << "|| DELETE STUDENT RECORD ||" << endl;
		Admin::adds(s1);
		cout << "---------------------------" << endl;
		break;
	case 4:
		cout << "---------------------------" << endl;
		Admin::adds(s1);
		cout << "|| UPDATE STUDENT RECORD ||" << endl;
		Admin::adds(s1);
		cout << "---------------------------" << endl;
		break;
	case 5:
		cout<<"------------------"<<endl;
		Admin::adds(s1);
		cout<<"|| SEARCH BY ID ||"<<endl;
		Admin::adds(s1);
		cout<<"------------------"<<endl;
		break;
	default:
		return;
	}
//	Admin::adds(s2);
}

void load_view(int tot)
{
	cout << "ID";
	Admin::adds(5);
	cout << "NAME";
	Admin::adds(5);
	cout << "COURSE";
	Admin::adds(3);
	cout << "DEPARTMENT";
	Admin::adds(3);
	cout << "GENDER";
	Admin::adds(2);
	cout << "  AGE";
	Admin::adds(2);
	cout << " PH_No." << endl;
	for (int i = 0; i < tot + 12; i++)
		cout << "-";
	cout << "\n"
		 << endl;
}