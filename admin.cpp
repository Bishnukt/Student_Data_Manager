#include "admin.h"
void Admin::add_data()
{
	ofstream out("sdm_dat.csv", ios_base::app);
	if (out.is_open())
	{
//		system("clear");
		cin.ignore();
		adds(5,5);
		cout << "ENTER STUDENT'S DETAILS-" << endl;
		adds(5);
		cout << "------------------------"<<endl;
		adds(5);cout << "NAME: ";
		getline(cin, student.name);
		adds(5);
		cout << "GENDER[M/F/Other]: ";
		cin >> student.gender;
		adds(5);
		cout << "AGE: ";
		cin >> student.age;
		cin.ignore();
		adds(5);
		cout << "COURSE: ";
		getline(cin, student.course);
		adds(5);
		cout<<"DEPARTMENT: ";
		getline(cin,student.dep);
		adds(5);
		cout << "Student Id.: ";
		getline(cin,student.id);
		adds(5);
		cout << "PHONE No.: ";
		cin >> student.ph_no;
		out << student.id << "," << student.name << "," << student.course << "," <<student.dep<<","<< student.gender << "," << student.age << "," << student.ph_no << endl;
		// out.write((char *)this, sizeof(this));
		out.close();
	}
	else
	{
		cout << "Can't open file" << endl;
		exit(1);
	}
}

void Admin::view_data()
{
	/*
	 *
	 *
//	in.open("sdm_dat.csv",ios_base::in|ios_base::binary);
//	if(!in.is_open())
//	{
//		cout<<"Can't open data file."<<endl;
//		exit(1);
//	}

//	Student student;
//	cout<<"struct created"<<endl;
//	while(in.read((char *)&student,sizeof(student)))
//	in.read((char *)&student,sizeof(student));
//	getchar();
//	{
//		cout<<student.name<<endl;
//		cout<<student.id<<endl;
//		cout<<student.ph_no<<endl;
//		getchar();
	//	in.read((char *)&student,sizeof(student));
	//{
//		cout<<student.name<<endl;
//		cout<<student.id<<endl;
//		cout<<student.ph_no<<endl;
//	}
//}
//	in.close();
//
//	*/

	string str, s = "                    ";
	// cout<<"Id\8Name\t\tCourse\t\tGender\t\tAge\t\tPh_No.\n"<<endl;
	int tot=0;
	for(auto it:sp) tot+=it;
	adds(0, 5);
//	for(int i=0;i<tot+50;i++) cout<<"-";
//	cout<<endl;
	cout << "\t\tID" << s << "NAME" << s << "COURSE" << s << "DEPARTMENT" <<s << "GENDER" << s << "  AGE" << s << " PH_No."<<endl;
	cout << "\t\t";
	for(int i=0;i<tot+6;i++) cout<<"-";
	cout<< "\n"<< endl;
	in.open("sdm_dat.csv", ios_base::in | ios_base::binary);
	if (in.is_open())
	{
		while (getline(in, str))
		{
			vector<string> line;
			line = split(str);
			print(line);
		}
	}
	else
		cout << "File opening failed." << endl;

	in.close();
}

void Admin::print(vector<string> &line)
{
	cout << "\t\t";
	for (int i = 0; i < line.size(); i++)
	{
		cout << line[i];
		int n = abs(int(sp[i] - line[i].size()));
		for (int j = 0; j < n; j++)
			cout << " ";
	}
	cout << "\n"
		 << endl;
}

vector<string> Admin::split(string str)
{
	string s;
	vector<string> temp;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ',')
			s.push_back(str[i]);
		else
		{
			temp.push_back(s);
			s.clear();
		}
	}
	temp.push_back(s);
	return temp;
}

void Admin::menu()
{
	char ch;
	do
	{
		system("clear");
		adds(10, 5);
		cout << "||ADMIN'S MENU||\n\n"
			 << endl;

		// cout<<ss<<"1. Add Student Record\n"<<ss<<"2. View Records\n"<<ss<<"3.Delete Student Record\n"<<ss<<"4. Update Student Record\n"<<endl;
		adds(s2);
		cout << "1. ADD STUDENT RECORD\n\n";
		adds(s2);
		cout << "2. VIEW RECORDS\n\n";
		adds(s2);
		cout << "3. DELETE STUDENT RECORD\n\n";
		adds(s2);
		cout << "4. UPDATE RECORD\n\n";
		adds(8);
		cout << "5. Exit\n\n"
			 << endl;
		adds(s2);
		cout << "ENTER YOUR CHOICE: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			do
			{
				system("clear");
				print_label(1);
				add_data();
				cout << "ADD MORE RECORDS ? (Y/N): ";
				cin >> ch;
			} while (ch != 'n' && ch != 'N');
			break;
		case 2:
			system("clear");
			print_label(2);
			view_data();
			break;
		case 3:
			cout << "SORRY, THIS FEATURE IS NOT AVAILABLE NOW.\n"
				 << endl;
			break;
		case 4:
			cout << "SORRY, THIS FEATURE IS NOT AVAILABLE NOW.\n"
				 << endl;
			break;
		case 5:
			break;
		default:
			cout << "PLEASE ENTER A VALID CHOICE: ";
		}
		if (choice == 5)
			break;
		//		cin.ignore();
		cout << "\n\tRETURN TO MAIN MENU OR EXIT? (Y/N) : ";
		cin >> ch;
	} while (ch != 'n' && ch != 'N');
}

Admin::Admin()
{
	menu();
}

// Admin::~Admin()
//{
// end_load();
//}

void Admin::adds(int t, int n)
{
	for (int i = 0; i < n; i++)
		cout << "\n";
	for (int i = 0; i < t; i++)
		cout << "\t";
}
