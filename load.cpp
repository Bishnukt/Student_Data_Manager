#include "load.h"

void start_load()
{
	system("clear");
	Admin::adds(10, 10);
	cout << "|| W E L C O M E ||" << endl;
	cout << "Press Enter to continue..." << endl;
	getchar();
	system("clear");
}

void end_load()
{
	// system("clear");
	cout << "\n\n\t\t||THANK YOU||" << endl;
	sleep(2);
}

void print_label(int n)
{
	Admin::adds(s1,2);
	switch (n)
	{
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
	default:
		return;
	}
//	Admin::adds(s2);
}