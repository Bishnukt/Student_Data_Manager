#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include<fstream>
#include<cstdio>
#include<unistd.h>
#include<vector>
#include<set>
#include<map>
//#include<iomanip>
#include"load.h"
#define s1 10
#define s2 8
#define s3 11

using namespace std;

struct Student{
	string id,name,course,dep,gender,age,ph_no;
};

class Admin{
	private:
		int choice;
		int sp[7] = {22, 24, 26,32, 27, 23, 0};
		Student student;
		ifstream in;
		ofstream out;
		vector<string> split(string str);
		void menu();
		void print(vector<string> &line);
		void add_data();
		void delete_date();
		void update_data();
	public:
		Admin();
		//~Admin();
		static void adds(int t,int n=0);
		void view_data();
};

#endif
