#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include<fstream>
#include<cstdio>
#include<unistd.h>
#include<vector>
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
		map<string,vector<string>> file;
		char choice;
		int tot;
		int sp[7] = {22, 24, 18,24, 15, 11, 0};
		ifstream in;
		ofstream out;
		vector<string> split(string str);
		void menu();
		void load_dat();
		void write_dat();
		void print(vector<string> &line);
		void add_data();
		void delete_data();
		void update_data();
		void search();
	public:
		Admin();
		//~Admin();
		static void adds(int t,int n=0);
		void view_data();
};

#endif
