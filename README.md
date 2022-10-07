# Student Data Manager

## A simple console program to manage student's official data.

Store records like student_id, name, course, department, phone no. etc.
It writes records into a .csv file that can be opened with any spreadsheet software like google sheets,microsoft excel,libreoffice calc.

>**Note**
> As I have used the linux/unix specific library *unistd.h* to use functions like `sleep()` and `system("clear")`, the cpp files will  only compile on linux/unix based operating systems. Soon I'll be adding detailed steps on **changes to be made to compile these files on other operating system like Windows.**

### Why .csv file?
As we all know, CSV(Comma Separated Values) files are easier to share as it can be opened with any spreadsheet software like Google Sheets, Microsoft Excel, Libreoffice calc etc. that makes it highly portable as you can share the datas for operation to anyone if needed. It doesn't need the same Student Manager Program to view the datas in easy table format, anyone can view it with other softwares mentioned. 

### Features available-
1. Add Student Records
   >> Duplicate id won't be added.
1. View All Records
   >> Total Records Table View.
1. Update Records
   >> You can update student records and there's an option to cancel all changes while updating.
1. Delete Records
   >> Delete Any Student's Records by Id.
1. Search
   >> View any  Student's Records by Id.

### Few screenshots of the program running in terminal-
![Admin's Menu](screenshots/admin_menu.png "Admin's Menu")
![Add Record](screenshots/add_record.png "Add Record")
![View Records](screenshots/view_record.png "View Records")
![Delete Record](screenshots/delete_record.png "Delete Record")

### To get and run this program, run these commands in your terminal:

1.  git clone git@github.com:Bishnukt/Student_Data_Manager.git
1.  cd Student_Data_Manager
1.  g++ -o sdm sdm.cpp admin.cpp load.cpp
1.  ./sdm
