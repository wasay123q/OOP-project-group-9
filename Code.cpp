#include <iostream>
#include <fstream>
#include<iomanip>
#include <conio.h>
#include<windows.h>
#include<cstdlib>

using namespace std;

class Student 
{
private:
	
    string fname;
    string lname;
    string father_name;
    int roll;
    int age;
    string _class;
    char section;
    string b_grp;
    string phone_num;
    string cnic;
    float fee;
    
public:

    void add_students() 
	{
		system("cls");
		
		int n;
		
		cout<<"Enter how many student you want to enter: ";
		cin>>n;
		cout<<endl<<endl;
		
		start:
		
		for(int i=0;i<n;i++)
		{
			cout<<"Enter the details of student "<<i+1<<endl;
			cout<<"First Name: ";
			cin>>fname;
			cout<<"Last name: ";
			cin>>lname;
			cout<<"Father's name (e.g first_name.last_name): ";
			cin>>father_name;
			
			r1:
			cout<<"Roll number (6-digit): ";
			cin>>roll;		
			if(roll>999999)
			{
				cout<<endl;
				cout<<"Invalid input"<<endl;
				cout<<"Enter Roll number again:";
				cout<<endl;
				cout<<endl;
				goto r1;
			}
			
			cout<<"Age: ";
			cin>>age;
			
			cout<<"Class: ";
			cin>>_class;
			if(_class=="1st" || _class=="2nd" || _class=="3rd" || _class=="4th" || _class=="5th")
			{
				cout<<endl;
			}
			else
			{
				cout<<endl;
				cout<<"Class not found"<<endl;
				cout<<"Available classes are: "<<endl;
				cout<<"\t1st"<<endl;
				cout<<"\t2nd"<<endl;
				cout<<"\t3rd"<<endl;
				cout<<"\t4th"<<endl;
				cout<<"\t5th"<<endl;
				cout<<"Enter again: ";
				cin>>_class;
				cout<<endl;
			}
			
			
			cout<<"Section: ";
			cin>>section;
			if(section=='A' || section=='B' || section=='C' || section=='D')
			{
				cout<<endl;
			}
			else
			{
				cout<<endl;
				cout<<"Section not found"<<endl;
				cout<<"Available Sections are: "<<endl;
				cout<<"\tA"<<endl;
				cout<<"\tB"<<endl;
				cout<<"\tC"<<endl;
				cout<<"\tD"<<endl;
				cout<<"Enter again: ";
				cin>>section;
				cout<<endl;
				cout<<endl;
			}
			
			
			cout<<"Blood group: ";
			cin>>b_grp;
			if(b_grp=="A+" || b_grp=="B+" || b_grp=="O+" || b_grp=="AB+" || b_grp=="A-" || b_grp=="B-" || b_grp=="O-" || b_grp=="AB-")
			{
				cout<<endl;
			}
			else
			{
				cout<<endl;
				cout<<"Invalid blood group!!"<<endl;
				cout<<"Enter valid blood group: ";
				cin>>b_grp;
				cout<<endl;
				cout<<endl;
			}
			
			p1:
			cout<<"Phone number: ";
			cin>>phone_num;
			if(phone_num.length()>11)
			{
				cout<<endl;
				cout<<"Invalid mobile number"<<endl;
				cout<<"Enter a vaild phone number (11-digits)"<<endl;
				cout<<endl;
				cout<<endl;
				goto p1;
			}
			
			
			c2:
			cout<<"CNIC: ";
			cin>>cnic;
			if(cnic.length()>13)
			{
				cout<<endl;
				cout<<"Invalid CNIC"<<endl;
				cout<<"Enter a vaild CNIC (13-digits , wihout dashes)"<<endl;
				cout<<endl;
				cout<<endl;
				goto c2;
			}
			
		
			cout<<"Fee: ";
			cin>>fee;
			
			
			if(_class=="1st")
			{
				fstream file("class1.txt", ios::out | ios::app);
				if (file.is_open()) 
				{
							
	            	file<<fname<<endl;
	            	file<<lname<<endl;
	            	file<<father_name<<endl;
	            	file<<roll<<endl;
	            	file<<age<<endl;
	            	file<<_class<<endl;
	            	file<<section<<endl;
	            	file<<b_grp<<endl;
	            	file<<phone_num<<endl;
	        		file<<cnic<<endl;
	            	file<<fee<<endl<<endl;
	            
	            	file.close();
	            
	            	cout<<endl<<endl;
	            	cout<<"Student record saved successfully!"<<endl<<endl;
	        	} 
				else 
				{
	            	cout<<"Unable to open file!"<<endl;
	        	}
			}
			
			else if(_class=="2nd")
			{
				fstream file("class2.txt", ios::out | ios::app);
				if (file.is_open()) 
				{
							
	            	file<<fname<<endl;
	            	file<<lname<<endl;
	            	file<<father_name<<endl;
	            	file<<roll<<endl;
	            	file<<age<<endl;
	            	file<<_class<<endl;
	            	file<<section<<endl;
	            	file<<b_grp<<endl;
	            	file<<phone_num<<endl;
	        		file<<cnic<<endl;
	            	file<<fee<<endl<<endl;
	            
	            	file.close();
	            
	            	cout<<endl<<endl;
	            	cout<<"Student record saved successfully!"<<endl<<endl;
	        	} 
				else 
				{
	            	cout<<"Unable to open file!"<<endl;
	        	}
			}
			
			
			else if(_class=="3rd")
			{
				fstream file("class3.txt", ios::out | ios::app);
				if (file.is_open()) 
				{
							
	            	file<<fname<<endl;
	            	file<<lname<<endl;
	            	file<<father_name<<endl;
	            	file<<roll<<endl;
	            	file<<age<<endl;
	            	file<<_class<<endl;
	            	file<<section<<endl;
	            	file<<b_grp<<endl;
	            	file<<phone_num<<endl;
	        		file<<cnic<<endl;
	            	file<<fee<<endl<<endl;
	            
	            	file.close();
	            
	            	cout<<endl<<endl;
	            	cout<<"Student record saved successfully!"<<endl<<endl;
	        	} 
				else 
				{
	            	cout<<"Unable to open file!"<<endl;
	        	}
			}
			
			
			else if(_class=="4th")
			{
				fstream file("class4.txt", ios::out | ios::app);
				if (file.is_open()) 
				{
							
	            	file<<fname<<endl;
	            	file<<lname<<endl;
	            	file<<father_name<<endl;
	            	file<<roll<<endl;
	            	file<<age<<endl;
	            	file<<_class<<endl;
	            	file<<section<<endl;
	            	file<<b_grp<<endl;
	            	file<<phone_num<<endl;
	        		file<<cnic<<endl;
	            	file<<fee<<endl<<endl;
	            
	            	file.close();
	            
	            	cout<<endl<<endl;
	            	cout<<"Student record saved successfully!"<<endl<<endl;
	        	} 
				else 
				{
	            	cout<<"Unable to open file!"<<endl;
	        	}
			}
			
			
			else if(_class=="5th")
			{
				fstream file("class5.txt", ios::out | ios::app);
				if (file.is_open()) 
				{
							
	            	file<<fname<<endl;
	            	file<<lname<<endl;
	            	file<<father_name<<endl;
	            	file<<roll<<endl;
	            	file<<age<<endl;
	            	file<<_class<<endl;
	            	file<<section<<endl;
	            	file<<b_grp<<endl;
	            	file<<phone_num<<endl;
	        		file<<cnic<<endl;
	            	file<<fee<<endl<<endl;
	            
	            	file.close();
	            
	            	cout<<endl<<endl;
	            	cout<<"Student record saved successfully!"<<endl<<endl;
	        	} 
				else 
				{
	            	cout<<"Unable to open file!"<<endl;
	        	}
			}
			
			else
			{
				cout<<"No such class exists"<<endl;
				cout<<"Please enter the data again.....classes are: "<<endl;
				cout<<"\t1st"<<endl;
				cout<<"\t2nd"<<endl;
				cout<<"\t3rd"<<endl;
				cout<<"\t4th"<<endl;
				cout<<"\t5th"<<endl<<endl;
				system("cls");
				sleep(2000);
				
				goto start;
			}
		}
    }


    void display_record() 
	{	
	
		system("cls");

		cout<<"student's records: "<<endl<<endl;
		cout<<endl;
		
		
		cout<<"CLASS 1: "<<endl<<endl;
		
		fstream file("class1.txt", ios::in);
    	if (file.is_open()) 
		{
			while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
        	{
				cout<<"\tName: "<<fname<<" "<<lname<<endl;
				cout<<"\tFather name: "<<father_name<<endl;
            	cout<<"\tRoll number: "<<roll<<endl;
            	cout<<"\tAge: "<<age<<endl;
            	cout<<"\tClass: "<<_class<<endl;
            	cout<<"\tSection: "<<section<<endl;
            	cout<<"\tBlood group: "<<b_grp<<endl;
            	cout<<"\tPhone number: "<<phone_num<<endl;
            	cout<<"\tCNIC: "<<cnic<<endl;
            	cout<<"\tFee: "<<fee<<endl;
				cout<<endl<<endl;
			}
			
        	file.close();
        } 
		else 
		{
        	cout<<"Unable to open file!"<<endl;
    	} 	
    	
    	
    	
    	cout<<"CLASS 2: "<<endl<<endl;
		
		fstream file1("class2.txt", ios::in);
    	if (file1.is_open()) 
		{
			while(file1>>fname && file1>>lname && file1>>father_name && file1>>roll && file1>>age && file1>>_class 
			&& file1>>section && file1>>b_grp && file1>>phone_num && file1>>cnic && file1>>fee)
        	{
				cout<<"\tName: "<<fname<<" "<<lname<<endl;
				cout<<"\tFather name: "<<father_name<<endl;
            	cout<<"\tRoll number: "<<roll<<endl;
            	cout<<"\tAge: "<<age<<endl;
            	cout<<"\tClass: "<<_class<<endl;
            	cout<<"\tSection: "<<section<<endl;
            	cout<<"\tBlood group: "<<b_grp<<endl;
            	cout<<"\tPhone number: "<<phone_num<<endl;
            	cout<<"\tCNIC: "<<cnic<<endl;
            	cout<<"\tFee: "<<fee<<endl;
				cout<<endl<<endl;
			}
			
        	file1.close();
        } 
		else 
		{
        	cout<<"Unable to open file!"<<endl;
    	}
    	
    	
    	cout<<"CLASS 3: "<<endl<<endl;
		
		fstream file2("class3.txt", ios::in);
    	if (file2.is_open()) 
		{
			while(file2>>fname && file2>>lname && file2>>father_name && file2>>roll && file2>>age && file2>>_class 
			&& file2>>section && file2>>b_grp && file2>>phone_num && file2>>cnic && file2>>fee)
        	{
				cout<<"\tName: "<<fname<<" "<<lname<<endl;
				cout<<"\tFather name: "<<father_name<<endl;
            	cout<<"\tRoll number: "<<roll<<endl;
            	cout<<"\tAge: "<<age<<endl;
            	cout<<"\tClass: "<<_class<<endl;
            	cout<<"\tSection: "<<section<<endl;
            	cout<<"\tBlood group: "<<b_grp<<endl;
            	cout<<"\tPhone number: "<<phone_num<<endl;
            	cout<<"\tCNIC: "<<cnic<<endl;
            	cout<<"\tFee: "<<fee<<endl;
				cout<<endl<<endl;
			}
			
        	file2.close();
        } 
		else 
		{
        	cout<<"Unable to open file!"<<endl;
    	}
    	
    	
    	cout<<"CLASS 4: "<<endl<<endl;
		
		fstream file3("class4.txt", ios::in);
    	if (file3.is_open()) 
		{
			while(file3>>fname && file3>>lname && file3>>father_name && file3>>roll && file3>>age && file3>>_class 
			&& file3>>section && file3>>b_grp && file3>>phone_num && file3>>cnic && file3>>fee)
        	{
				cout<<"\tName: "<<fname<<" "<<lname<<endl;
				cout<<"\tFather name: "<<father_name<<endl;
            	cout<<"\tRoll number: "<<roll<<endl;
            	cout<<"\tAge: "<<age<<endl;
            	cout<<"\tClass: "<<_class<<endl;
            	cout<<"\tSection: "<<section<<endl;
            	cout<<"\tBlood group: "<<b_grp<<endl;
            	cout<<"\tPhone number: "<<phone_num<<endl;
            	cout<<"\tCNIC: "<<cnic<<endl;
            	cout<<"\tFee: "<<fee<<endl;
				cout<<endl<<endl;
			}
			
        	file3.close();
        }
        
        
        cout<<"CLASS 5: "<<endl<<endl;
		
		fstream file4("class5.txt", ios::in);
    	if (file4.is_open()) 
		{
			while(file4>>fname && file4>>lname && file4>>father_name && file4>>roll && file4>>age && file4>>_class 
			&& file4>>section && file4>>b_grp && file4>>phone_num && file4>>cnic && file4>>fee)
        	{
				cout<<"\tName: "<<fname<<" "<<lname<<endl;
				cout<<"\tFather name: "<<father_name<<endl;
            	cout<<"\tRoll number: "<<roll<<endl;
            	cout<<"\tAge: "<<age<<endl;
            	cout<<"\tClass: "<<_class<<endl;
            	cout<<"\tSection: "<<section<<endl;
            	cout<<"\tBlood group: "<<b_grp<<endl;
            	cout<<"\tPhone number: "<<phone_num<<endl;
            	cout<<"\tCNIC: "<<cnic<<endl;
            	cout<<"\tFee: "<<fee<<endl;
				cout<<endl<<endl;
			}
			
        	file4.close();
        }
	}
	
	
	void search()
	{
		system("cls");
		
		string u_class;
		cout<<"Enter the class from which to search for the student: ";
		cin>>u_class;
		
		if(u_class=="1st")
		{
			bool condition=false;
    		int u_roll;
    		cout<<"Enter the student roll number to search: "<<endl;
    		cin>>u_roll;

    		cout<<endl<<endl;

    		fstream file;
    		file.open("class1.txt" , ios::in);

    		if(!file.is_open())
    		{
        		cout << "Error opening file" << endl;
        		return;
    		}

    		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
    		{
        		if(u_roll == roll)
        		{
            		cout<<"\tName: "<<fname<<" "<<lname<<endl;
					cout<<"\tFather name: "<<father_name<<endl;
            		cout<<"\tRoll number: "<<roll<<endl;
            		cout<<"\tAge: "<<age<<endl;
            		cout<<"\tClass: "<<_class<<endl;
            		cout<<"\tSection: "<<section<<endl;
            		cout<<"\tBlood group: "<<b_grp<<endl;
            		cout<<"\tPhone number: "<<phone_num<<endl;
            		cout<<"\tCNIC: "<<cnic<<endl;
            		cout<<"\tfee: "<<fee<<endl;
					cout<<endl<<endl;
            		condition=true;
        		}
    		}

    		file.close();

    		if (condition==false)
    		{
    		
        		cout << "Record not found......" << endl;
        		cout << "Please first enter the record" << endl;
    		}
		}
		
		
		else if(u_class=="2nd")
		{
			bool condition=false;
    		int u_roll;
    		cout<<"Enter the student roll number to search: "<<endl;
    		cin>>u_roll;

    		cout<<endl<<endl;

    		fstream file;
    		file.open("class2.txt" , ios::in);

    		if(!file.is_open())
    		{
        		cout << "Error opening file" << endl;
        		return;
    		}

    		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
    		{
        		if(u_roll == roll)
        		{
            		cout<<"\tName: "<<fname<<" "<<lname<<endl;
					cout<<"\tFather name: "<<father_name<<endl;
            		cout<<"\tRoll number: "<<roll<<endl;
            		cout<<"\tAge: "<<age<<endl;
            		cout<<"\tClass: "<<_class<<endl;
            		cout<<"\tSection: "<<section<<endl;
            		cout<<"\tBlood group: "<<b_grp<<endl;
            		cout<<"\tPhone number: "<<phone_num<<endl;
            		cout<<"\tCNIC: "<<cnic<<endl;
            		cout<<"\tfee: "<<fee<<endl;
					cout<<endl<<endl;
            		condition=true;
        		}
    		}

    		file.close();

    		if (condition==false)
    		{
    		
        		cout << "Record not found......" << endl;
        		cout << "Please first enter the record" << endl;
    		}
		}
		
		
		else if(u_class=="3rd")
		{
			bool condition=false;
    		int u_roll;
    		cout<<"Enter the student roll number to search: "<<endl;
    		cin>>u_roll;

    		cout<<endl<<endl;

    		fstream file;
    		file.open("class1.txt" , ios::in);

    		if(!file.is_open())
    		{
        		cout << "Error opening file" << endl;
        		return;
    		}

    		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
    		{
        		if(u_roll == roll)
        		{
            		cout<<"\tName: "<<fname<<" "<<lname<<endl;
					cout<<"\tFather name: "<<father_name<<endl;
            		cout<<"\tRoll number: "<<roll<<endl;
            		cout<<"\tAge: "<<age<<endl;
            		cout<<"\tClass: "<<_class<<endl;
            		cout<<"\tSection: "<<section<<endl;
            		cout<<"\tBlood group: "<<b_grp<<endl;
            		cout<<"\tPhone number: "<<phone_num<<endl;
            		cout<<"\tCNIC: "<<cnic<<endl;
            		cout<<"\tfee: "<<fee<<endl;
					cout<<endl<<endl;
            		condition=true;
        		}
    		}

    		file.close();

    		if (condition==false)
    		{
    		
        		cout << "Record not found......" << endl;
        		cout << "Please first enter the record" << endl;
    		}
		}
		
		
		else if(u_class=="4th")
		{
			bool condition=false;
    		int u_roll;
    		cout<<"Enter the student roll number to search: "<<endl;
    		cin>>u_roll;

    		cout<<endl<<endl;

    		fstream file;
    		file.open("class4.txt" , ios::in);

    		if(!file.is_open())
    		{
        		cout << "Error opening file" << endl;
        		return;
    		}

    		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
    		{
        		if(u_roll == roll)
        		{
            		cout<<"\tName: "<<fname<<" "<<lname<<endl;
					cout<<"\tFather name: "<<father_name<<endl;
            		cout<<"\tRoll number: "<<roll<<endl;
            		cout<<"\tAge: "<<age<<endl;
            		cout<<"\tClass: "<<_class<<endl;
            		cout<<"\tSection: "<<section<<endl;
            		cout<<"\tBlood group: "<<b_grp<<endl;
            		cout<<"\tPhone number: "<<phone_num<<endl;
            		cout<<"\tCNIC: "<<cnic<<endl;
            		cout<<"\tfee: "<<fee<<endl;
					cout<<endl<<endl;
            		condition=true;
        		}
    		}

    		file.close();

    		if (condition==false)
    		{
    		
        		cout << "Record not found......" << endl;
        		cout << "Please first enter the record" << endl;
    		}
		}
		
		
		else if(u_class=="5th")
		{
			bool condition=false;
    		int u_roll;
    		cout<<"Enter the student roll number to search: "<<endl;
    		cin>>u_roll;

    		cout<<endl<<endl;

    		fstream file;
    		file.open("class5.txt" , ios::in);

    		if(!file.is_open())
    		{
        		cout << "Error opening file" << endl;
        		return;
    		}

    		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
    		{
        		if(u_roll == roll)
        		{
            		cout<<"\tName: "<<fname<<" "<<lname<<endl;
					cout<<"\tFather name: "<<father_name<<endl;
            		cout<<"\tRoll number: "<<roll<<endl;
            		cout<<"\tAge: "<<age<<endl;
            		cout<<"\tClass: "<<_class<<endl;
            		cout<<"\tSection: "<<section<<endl;
            		cout<<"\tBlood group: "<<b_grp<<endl;
            		cout<<"\tPhone number: "<<phone_num<<endl;
            		cout<<"\tCNIC: "<<cnic<<endl;
            		cout<<"\tfee: "<<fee<<endl;
					cout<<endl<<endl;
            		condition=true;
        		}
    		}

    		file.close();

    		if (condition==false)
    		{
    		
        		cout << "Record not found......" << endl;
        		cout << "Please first enter the record" << endl;
    		}
		}
		
		
		else
		{
			cout<<"No such class exists"<<endl;
			cout<<"classes are....: "<<endl;
			cout<<"\t1st"<<endl;
			cout<<"\t2nd"<<endl;
			cout<<"\t3rd"<<endl;
			cout<<"\t4th"<<endl;
			cout<<"\t5th"<<endl;
		}
	}
	
	
	void attendence()
	{
		system("cls");
		
		char att;
		string u_class;
		cout<<"Enter the class whose attendence you wish to mark: ";
		cin>>u_class;
		
		if(u_class=="1st")
		{
			fstream file("class1.txt" , ios::in);
		
			while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
			{
				cout<<fname<<" "<<lname<<"(P/A): ";
				cin>>att;
			
				if(att=='p' || att=='P' || att=='a' || att=='A')
				{
					fstream file1("attendence class 1.txt", ios::out | ios::app);
				
					if(file1.is_open())
					{
						file1<<fname<<endl;
						file1<<lname<<endl;
						file1<<att<<endl;
//						file1<<att<<endl;
					}
					else
					{
						cout<<"File cannot be opened"<<endl;
					}
					file1.close();
				}
				
				else
				{
					cout<<"Invaild input"<<endl;
					cout<<"Please try again..."<<endl;
					cin>>att;
				}
			}
		}
		
		
		else if(u_class=="2nd")
		{
			fstream file("class2.txt" , ios::in);
		
			while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
			{
				cout<<fname<<" "<<lname<<endl;
				cin>>att;
			
				if(att=='p' || att=='P' || att=='a' || att=='A')
				{
					fstream file1("attendence class 2.txt", ios::out | ios::app);
				
					if(file1.is_open())
					{
						file1<<fname<<endl;
						file1<<lname<<endl;
						file1<<att<<endl;
					}
					else
					{
						cout<<"File cannot be opened"<<endl;
					}
					file1.close();
				}
				
				else
				{
					cout<<"Invaild input"<<endl;
					cout<<"Please try again..."<<endl;
					cin>>att;
				}
			}
		}
		
		
		else if(u_class=="3rd")
		{
			fstream file("class3.txt" , ios::in);
		
			while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
			{
				cout<<fname<<" "<<lname<<endl;
				cin>>att;
			
				if(att=='p' || att=='P' || att=='a' || att=='A')
				{
					fstream file1("attendence class 3.txt", ios::out | ios::app);
				
					if(file1.is_open())
					{
						file1<<fname<<endl;
						file1<<lname<<endl;
						file1<<att<<endl;
					}
					else
					{
						cout<<"File cannot be opened"<<endl;
					}
					file1.close();
				}
				
				else
				{
					cout<<"Invaild input"<<endl;
					cout<<"Please try again..."<<endl;
					cin>>att;
				}
			}
		}
		
		
		else if(u_class=="4th")
		{
			fstream file("class4.txt" , ios::in);
		
			while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
			{
				cout<<fname<<" "<<lname<<endl;
				cin>>att;
			
				if(att=='p' || att=='P' || att=='a' || att=='A')
				{
					fstream file1("attendence class 4.txt", ios::out | ios::app);
				
					if(file1.is_open())
					{
						file1<<fname<<endl;
						file1<<lname<<endl;
						file1<<att<<endl;
					}
					else
					{
						cout<<"File cannot be opened"<<endl;
					}
					file1.close();
				}
				
				else
				{
					cout<<"Invaild input"<<endl;
					cout<<"Please try again..."<<endl;
					cin>>att;
				}
			}
		}
		
		
		else if(u_class=="5th")
		{
			fstream file("class5.txt" , ios::in);
		
			while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
			&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
			{
				cout<<fname<<" "<<lname<<endl;
				cin>>att;
			
				if(att=='p' || att=='P' || att=='a' || att=='A')
				{
					fstream file1("attendence class 5.txt", ios::out | ios::app);
				
					if(file1.is_open())
					{
						file1<<fname<<endl;
						file1<<lname<<endl;
						file1<<att<<endl;
					}
					else
					{
						cout<<"File cannot be opened"<<endl;
					}
					file1.close();
				}
				
				else
				{
					cout<<"Invaild input"<<endl;
					cout<<"Please try again..."<<endl;
					cin>>att;
				}
			}
		}
		
		else
		{
			cout<<"No such class exists...."<<endl;
			cout<<"classes are....: "<<endl;
			cout<<"\t1st"<<endl;
			cout<<"\t2nd"<<endl;
			cout<<"\t3rd"<<endl;
			cout<<"\t4th"<<endl;
			cout<<"\t5th"<<endl;
			cout<<"Enter one of these classes: "<<endl;
			cin>>u_class;
		}
	}

	
	void attendence_record()
	{
		system("cls");
		
		string u_class;
		char att;
			
		s2:
		
		cout<<"Enter the claas to show its attendence record: ";
		cin>>u_class;
		
		
		if(u_class=="1st")
		{
//			char att;
		
			cout<<"Attendence records: "<<endl<<endl;
		
			fstream file1("attendence class 1.txt", ios::in);
    		if (file1.is_open()) 
			{
				while(file1>>fname>>lname>>att)
        		{
					cout<<fname<<" "<<lname<<" "<<att;
					cout<<endl;
				}
			
        		file1.close();
        	}
			
			else
			{
        		cout<<"Unable to open file!"<<endl;
    		}
		}
		
		else if(u_class=="2nd")
		{
//			char att;
		
			cout<<"Attendence records: "<<endl<<endl;
		
			fstream file1("attendence class 2.txt", ios::in);
    		if (file1.is_open()) 
			{
				while(file1>>fname>>lname>>att)
        		{
					cout<<fname<<" "<<lname<<" "<<att<<"\n";
					cout<<endl;
				}
			
        		file1.close();
        	}
        	
        	else
        	{
        		cout<<"Unable to open file!"<<endl;
    		}
		}
		
		
		else if(u_class=="3rd")
		{
//			char att;
		
			cout<<"Attendence records: "<<endl<<endl;
		
			fstream file1("attendence class 3.txt", ios::in);
    		if (file1.is_open()) 
			{
				while(file1>>fname>>lname>>att)
        		{
					cout<<fname<<" "<<lname<<" "<<att<<"\n";
					cout<<endl;
				}
			
        		file1.close();
        	}
        	
        	else
        	{
        		cout<<"Unable to open file!"<<endl;
    		}
		}
		
		else if(u_class=="4th")
		{
//			char att;
		
			cout<<"Attendence records: "<<endl<<endl;
		
			fstream file1("attendence class 4.txt", ios::in);
    		if (file1.is_open()) 
			{
				while(file1>>fname>>lname>>att)
        		{
					cout<<fname<<" "<<lname<<" "<<att<<"\n";
					cout<<endl;
				}
			
        		file1.close();
        	}
        	
        	else
        	{
        		cout<<"Unable to open file!"<<endl;
    		}	
    	}
    	
    	
    	else if(u_class=="5th")
		{
//			char att;
		
			cout<<"Attendence records: "<<endl<<endl;
		
			fstream file1("attendence class 5.txt", ios::in);
    		if (file1.is_open()) 
			{
				while(file1>>fname>>lname>>att)
        		{
					cout<<fname<<" "<<lname<<" "<<att<<"\n";
					cout<<endl;
				}
			
        		file1.close();
        	}
        	
        	else
        	{
        		cout<<"Unable to open file!"<<endl;
    		}	
    	}
    	
    	else
    	{
    		goto s2;
		}
	}
	
	
	void remove_student()
	{
		system("cls");
		
		string u_class;
		cout<<"Enter the class of the student you want to remove: ";
		cin>>u_class;
		
		
		if(u_class=="1st")
		{
			int delete_s;
			bool condition = false;
			cout << "Enter student's roll nmuber to remove: ";
			cin >> delete_s;
		
			ifstream file;
			file.open("class1.txt");
		
			ofstream file1;
			file1.open("delete class 1.txt");
		
			if (!file.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
	    	if (!file1.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
			while (file>>fname>>lname>>father_name>>roll>>age>>_class>>section>>b_grp>>phone_num>>cnic>>fee)
			{
		    	if (delete_s!=roll)
		    	{
		        	file1<<fname<<endl;
		        	file1<<lname<<endl;
		        	file1<<father_name<<endl;
		        	file1<<roll<<endl;
		        	file1<<age<<endl;
		        	file1<<_class<<endl;
		    		file1<<section<<endl;
		        	file1<<b_grp<<endl;
		        	file1<<phone_num<<endl;
		        	file1<<cnic<<endl;
		        	file1<<fee<<endl;
		        	cout<<endl<<endl;
		    	}
		    	else
		    	{
		        	condition=true;
		    	}
			}	
		
			file.close();
			file1.close();
		
			remove("class1.txt");
			rename("delete class 1.txt", "class1.txt");
		
			if (condition==false)
			{
		    	cout<<"There is no data of any Student with this roll number."<<endl;
			}
			else
			{
		    	cout<<"Data Deleted Successfully."<<endl;
			}
		}
		
		
		else if(u_class=="2nd")
		{
			int delete_s;
			bool condition = false;
			cout << "Enter student's roll nmuber to remove: ";
			cin >> delete_s;
		
			ifstream file;
			file.open("class2.txt");
		
			ofstream file1;
			file1.open("delete class 2.txt");
		
			if (!file.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
	    	if (!file1.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
			while (file>>fname>>lname>>father_name>>roll>>age>>_class>>section>>b_grp>>phone_num>>cnic>>fee)
			{
		    	if (delete_s!=roll)
		    	{
		        	file1<<fname<<endl;
		        	file1<<lname<<endl;
		        	file1<<father_name<<endl;
		        	file1<<roll<<endl;
		        	file1<<age<<endl;
		        	file1<<_class<<endl;
		    		file1<<section<<endl;
		        	file1<<b_grp<<endl;
		        	file1<<phone_num<<endl;
		        	file1<<cnic<<endl;
		        	file1<<fee<<endl;
		        	cout<<endl<<endl;
		    	}
		    	else
		    	{
		        	condition=true;
		    	}
			}	
		
			file.close();
			file1.close();
		
			remove("class2.txt");
			rename("delete class 2.txt", "class2.txt");
		
			if (condition==false)
			{
		    	cout<<"There is no data of any Student with this roll number."<<endl;
			}
			else
			{
		    	cout<<"Data Deleted Successfully."<<endl;
			}
		}
		
		
		else if(u_class=="3rd")
		{
			int delete_s;
			bool condition = false;
			cout << "Enter student's roll nmuber to remove: ";
			cin >> delete_s;
		
			ifstream file;
			file.open("class3.txt");
		
			ofstream file1;
			file1.open("delete class 3.txt");
		
			if (!file.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
	    	if (!file1.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
			while (file>>fname>>lname>>father_name>>roll>>age>>_class>>section>>b_grp>>phone_num>>cnic>>fee)
			{
		    	if (delete_s!=roll)
		    	{
		        	file1<<fname<<endl;
		        	file1<<lname<<endl;
		        	file1<<father_name<<endl;
		        	file1<<roll<<endl;
		        	file1<<age<<endl;
		        	file1<<_class<<endl;
		    		file1<<section<<endl;
		        	file1<<b_grp<<endl;
		        	file1<<phone_num<<endl;
		        	file1<<cnic<<endl;
		        	file1<<fee<<endl;
		        	cout<<endl<<endl;
		    	}
		    	else
		    	{
		        	condition=true;
		    	}
			}	
		
			file.close();
			file1.close();
		
			remove("class3.txt");
			rename("delete class 3.txt", "class3.txt");
		
			if (condition==false)
			{
		    	cout<<"There is no data of any Student with this roll number."<<endl;
			}
			else
			{
		    	cout<<"Data Deleted Successfully."<<endl;
			}
		}
		
		
		
		else if(u_class=="4th")
		{
			int delete_s;
			bool condition = false;
			cout << "Enter student's roll nmuber to remove: ";
			cin >> delete_s;
		
			ifstream file;
			file.open("class4.txt");
		
			ofstream file1;
			file1.open("delete class 4.txt");
		
			if (!file.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
	    	if (!file1.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
			while (file>>fname>>lname>>father_name>>roll>>age>>_class>>section>>b_grp>>phone_num>>cnic>>fee)
			{
		    	if (delete_s!=roll)
		    	{
		        	file1<<fname<<endl;
		        	file1<<lname<<endl;
		        	file1<<father_name<<endl;
		        	file1<<roll<<endl;
		        	file1<<age<<endl;
		        	file1<<_class<<endl;
		    		file1<<section<<endl;
		        	file1<<b_grp<<endl;
		        	file1<<phone_num<<endl;
		        	file1<<cnic<<endl;
		        	file1<<fee<<endl;
		        	cout<<endl<<endl;
		    	}
		    	else
		    	{
		        	condition=true;
		    	}
			}	
		
			file.close();
			file1.close();
		
			remove("class4.txt");
			rename("delete class 4.txt", "class4.txt");
		
			if (condition==false)
			{
		    	cout<<"There is no data of any Student with this roll number."<<endl;
			}
			else
			{
		    	cout<<"Data Deleted Successfully."<<endl;
			}
		}
		
		
		
		else if(u_class=="5th")
		{
			int delete_s;
			bool condition = false;
			cout << "Enter student's roll nmuber to remove: ";
			cin >> delete_s;
		
			ifstream file;
			file.open("class5.txt");
		
			ofstream file1;
			file1.open("delete class 5.txt");
		
			if (!file.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
	    	if (!file1.is_open())
			{
		    	cout<<"file cannot be opened"<<endl;
			}
		
			while (file>>fname>>lname>>father_name>>roll>>age>>_class>>section>>b_grp>>phone_num>>cnic>>fee)
			{
		    	if (delete_s!=roll)
		    	{
		        	file1<<fname<<endl;
		        	file1<<lname<<endl;
		        	file1<<father_name<<endl;
		        	file1<<roll<<endl;
		        	file1<<age<<endl;
		        	file1<<_class<<endl;
		    		file1<<section<<endl;
		        	file1<<b_grp<<endl;
		        	file1<<phone_num<<endl;
		        	file1<<cnic<<endl;
		        	file1<<fee<<endl;
		        	cout<<endl<<endl;
		    	}
		    	else
		    	{
		        	condition=true;
		    	}
			}	
		
			file.close();
			file1.close();
		
			remove("class5.txt");
			rename("delete class 5.txt", "class5.txt");
		
			if (condition==false)
			{
		    	cout<<"There is no data of any Student with this roll number."<<endl;
			}
			else
			{
		    	cout<<"Data Deleted Successfully."<<endl;
			}
		}
		
		else
		{
			cout<<"No such class exists...."<<endl;
			cout<<"classes are....: "<<endl;
			cout<<"\t1st"<<endl;
			cout<<"\t2nd"<<endl;
			cout<<"\t3rd"<<endl;
			cout<<"\t4th"<<endl;
			cout<<"\t5th"<<endl;
			cout<<"Enter one of these classes: "<<endl;
			cin>>u_class;
		}		
	}
	
	
	void fee_payment()
{
	system("cls");
	
	string u_class;
	string status;
	
	fee1:
	
	cout<<"Enter the student's class: ";
	cin>>u_class;
	
	if(u_class=="1st")
	{
		fstream file("class1.txt",ios::in);
		
		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
		&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
		{
			cout<<fname<<" "<<lname<<endl;
			cin>>status;
			
			if(status=="paid" || status=="unpaid")
			{
				fstream file1("fee class 1.txt", ios::out | ios::app);
				
				if(file1.is_open())
				{
					file1<<fname<<endl;
					file1<<lname<<endl;
					file1<<status<<endl;
				}
				else
				{
					cout<<"File cannot be opened.."<<endl;
				}
				file1.close();
			}
			
			else
			{
				cout<<"Invaild input"<<endl;
				cout<<"Please try again..."<<endl;
				goto fee1;
			}
		}				
	}
	
	else if(u_class=="2nd")
	{
		fstream file("class2.txt",ios::in);
		
		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
		&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
		{
			cout<<fname<<" "<<lname<<endl;
			cin>>status;
			
			if(status=="paid" || status=="unpaid")
			{
				fstream file1("fee class 2.txt", ios::out | ios::app);
				
				if(file1.is_open())
				{
					file1<<fname<<endl;
					file1<<lname<<endl;
					file1<<status<<endl;
				}
				else
				{
					cout<<"File cannot be opened.."<<endl;
				}
				file1.close();
			}
			
			else
			{
				cout<<"Invaild input"<<endl;
				cout<<"Please try again..."<<endl;
				goto fee1;
			}
		}				
	}
	
	else if(u_class=="3rd")
	{
		fstream file("class3.txt",ios::in);
		
		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
		&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
		{
			cout<<fname<<" "<<lname<<endl;
			cin>>status;
			
			if(status=="paid" || status=="unpaid")
			{
				fstream file1("fee class 3.txt", ios::out | ios::app);
				
				if(file1.is_open())
				{
					file1<<fname<<endl;
					file1<<lname<<endl;
					file1<<status<<endl;
				}
				else
				{
					cout<<"File cannot be opened.."<<endl;
				}
				file1.close();
			}
			
			else
			{
				cout<<"Invaild input"<<endl;
				cout<<"Please try again..."<<endl;
				goto fee1;
			}
		}				
	}
	
	else if(u_class=="4th")
	{
		fstream file("class4.txt",ios::in);
		
		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
		&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
		{
			cout<<fname<<" "<<lname<<endl;
			cin>>status;
			
			if(status=="paid" || status=="unpaid")
			{
				fstream file1("fee class 4.txt", ios::out | ios::app);
				
				if(file1.is_open())
				{
					file1<<fname<<endl;
					file1<<lname<<endl;
					file1<<status<<endl;
				}
				else
				{
					cout<<"File cannot be opened.."<<endl;
				}
				file1.close();
			}
			
			else
			{
				cout<<"Invaild input"<<endl;
				cout<<"Please try again..."<<endl;
				goto fee1;
			}
		}				
	}
	
	else if(u_class=="5th")
	{
		fstream file("class5.txt",ios::in);
		
		while(file>>fname && file>>lname && file>>father_name && file>>roll && file>>age && file>>_class 
		&& file>>section && file>>b_grp && file>>phone_num && file>>cnic && file>>fee)
		{
			cout<<fname<<" "<<lname<<endl;
			cin>>status;
			
			if(status=="paid" || status=="unpaid")
			{
				fstream file1("fee class 5.txt", ios::out | ios::app);
				
				if(file1.is_open())
				{
					file1<<fname<<endl;
					file1<<lname<<endl;
					file1<<status<<endl;
				}
				else
				{
					cout<<"File cannot be opened.."<<endl;
				}
				file1.close();
			}
			
			else
			{
				cout<<"Invaild input"<<endl;
				cout<<"Please try again..."<<endl;
				goto fee1;
			}
		}				
	}
	
	else
	{
		cout<<"Please try again..."<<endl;
		goto fee1;
	}
}
	
	
void fee_record()
{
	system("cls");
	
	string u_class;
	string status;
	
	fee2:
	
	cout<<"Enter the student's class: ";
	cin>>u_class;
	
	if(u_class=="1st")
	{
		cout<<"Fee Record: "<<endl;
		
		fstream file("fee class 1.txt",ios::in);
		
		if(file.is_open())
		{
			while(file>>fname>>lname>>status)
			{
				cout<<fname<<" "<<lname<<endl;
				cout<<status;
				cout<<endl<<endl;
			}
			
			file.close();
		}
		
		else
		{
			cout<<"unable to open file..."<<endl;
		}
	}
	
	else if(u_class=="2nd")
	{
		cout<<"Fee Record: "<<endl;
		
		fstream file("fee class 2.txt",ios::in);
		
		if(file.is_open())
		{
			while(file>>fname>>lname>>status)
			{
				cout<<fname<<" "<<lname<<endl;
				cout<<status;
				cout<<endl<<endl;
			}
			
			file.close();
		}
		
		else
		{
			cout<<"unable to open file..."<<endl;
		}
	}
	
	else if(u_class=="3rd")
	{
		cout<<"Fee Record: "<<endl;
		
		fstream file("fee class 3.txt",ios::in);
		
		if(file.is_open())
		{
			while(file>>fname>>lname>>status)
			{
				cout<<fname<<" "<<lname<<endl;
				cout<<status;
				cout<<endl<<endl;
			}
			
			file.close();
		}
		
		else
		{
			cout<<"unable to open file..."<<endl;
		}
	}
	
	else if(u_class=="4th")
	{
		cout<<"Fee Record: "<<endl;
		
		fstream file("fee class 4.txt",ios::in);
		
		if(file.is_open())
		{
			while(file>>fname>>lname>>status)
			{
				cout<<fname<<" "<<lname<<endl;
				cout<<status;
				cout<<endl<<endl;
			}
			
			file.close();
		}
		
		else
		{
			cout<<"unable to open file..."<<endl;
		}
	}
	
	
	else if(u_class=="5th")
	{
		cout<<"Fee Record: "<<endl;
		
		fstream file("fee class 5.txt",ios::in);
		
		if(file.is_open())
		{
			while(file>>fname>>lname>>status)
			{
				cout<<fname<<" "<<lname<<endl;
				cout<<status;
				cout<<endl<<endl;
			}
			
			file.close();
		}
		
		else
		{
			cout<<"unable to open file..."<<endl;
		}
	}
	
	else
	{
		cout<<"Please try again..."<<endl;
		goto fee2;
	}
}
	
	

	
	
	void student_signup()
	{
	    system("CLS");
	    
	    
	    cout<<"\t\t\t*****************************"<<endl;
	    cout<<"\t\t\t      Student Sign-up"<<endl;
	    cout<<"\t\t\t*****************************"<<endl;
	    
	    cout<<endl;
	    
	    
		string username;
		string password;
		
		cout<<endl;
		
		begin:
		
		cout<<endl;
		cout<<"\tEnter Username (e.g: first_name.last_name):  ";      
		
		cin>>username;
		
		if(username.length()<=6)    
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of more than six characters ";
			cout<<endl;
			goto begin;        
		}
		else if(username.length()>=20)     
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of less than twenty characters "; 
			cout<<endl;
			goto begin;
		}
		
		
		
		cout<<endl;
		cout<<"\tEnter Password : ";
		char c;
		
		while((c=getch ())!='\r') 	     //loop will execute for each character until enter is pressed
		{
			
			if(c>=32 && c<=126)
	        {
	            cout<<'*';
	            password.push_back(c);   		  	//will add new character.
	        }
	        
	        else if(c==6 && password.length()>0)  //dealing with if backspace is pressed
	        {
                password.pop_back();       				 //will remove last charcter
	            cout<<"\b \b";                            
	        }
	        
	        else
	        {
	            cin.ignore();
			}
        }
    
   
    
		fstream file("students password.txt",ios::out | ios::app);
		
		if(!file.is_open())
		{
			cout<<"\tError opening file.";
		}
		
		else
		{
			
			file<<username<<endl;
			file<<password<<endl;
			cout<<endl<<endl;
			cout<<"\t\t**************************************"<<endl;
			cout<<"\t\t      Your ID HAS BEEN CREATED !!!"<<endl;
			cout<<"\t\t**************************************"<<endl; 
		}
		
		file.close();
    }
 


void student_login()
	{
		            //start point will come here in case of logging out
		system("ClS");
		
		string u_username;
		string u_password,password,username;
		
		bool found=false;                         //bool found used to check conditions
		
		
		 
	    cout<<"\t\t\t*****************************"<<endl;
	    cout<<"\t\t\t       Student Log-in"<<endl;
	    cout<<"\t\t\t*****************************"<<endl;
	    
	    start: 
	    
	    cout<<endl<<endl;
		
	    cout<<"\tEnter Username (e.g: first_name.last_name):  ";
	    
	    cin>>u_username;
	    
	    if(u_username.length()<=6)    
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of more than six characters ";
			cout<<endl;
			goto start;    
		}
		else if(u_username.length()>=20)     
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of less than twenty characters ";
			cout<<endl;
			goto start;
		}
	    
	    
		cout<<endl;
		cout<<"\tEnter Password : ";
	    char c;
	    
	    while((c=getch ()) !='\r')
	    {
		    if(c>=32 && c<=126)
           {
                cout<<'*';
                u_password.push_back(c);            
           }
           
            else if(c==8 && u_password.length()>0)     
           {
               u_password.pop_back();                       
               cout<<"\b \b";
           }
	    }
	    
	    cout<<endl;;
	    
        ifstream file;
	    file.open("students password.txt");
	    
	    if(!file.is_open())
	    {
	    	cout<<"\t Error opening file ";
		}
	    
	    while (file>>username && file>>password)
	    {  
	        if (username==u_username && password==u_password)
	        {	  
				found=true;
				break;
			}
			
			file.ignore(132, '\n');    //setting a limit of ignoring unwanted characters until newline characters(removes input buffer)
		}
		file.close();
		
		if(found==true)
		{
			char key;
			int choice;
			
			system("cls");
			
			cout<<"\t\t\t*****************************"<<endl;
			cout<<"\t\t\t       Student Log-in"<<endl;
	    	cout<<"\t\t\t*****************************"<<endl;
	    
	    	cout<<endl<<endl;
			
			do
			{
				cout<<"Enter your choice: "<<endl<<endl;
				cout<<"\t1---See your own record"<<endl;
				cout<<"\t2---See your attendence record"<<endl;
				cout<<"\t3---Return to login"<<endl;
				cout<<"\t4---Return to sign up"<<endl;
				cout<<"\t5---Exit"<<endl;
				s1:
			
				cin>>choice;
			
				switch(choice)
				{
					case 1:
					search();
					break;
				
					case 2:
					attendence_record();
					break;
				
					case 3:
					student_login();
					break;
				
					case 4:
					student_signup();
					break;
				
					case 5:
					break;
				
					default:
					cout<<"Enter a valid choice :";
					goto s1;
					break;
				}
				
				cout<<endl;
				cout<<"Do you want to continue? (Y/N): ";
				cin>>key;
				system("cls");
			}
			while(key=='Y' || key=='y');
		}
	}
	
};




class Faculty
{
private:
	string fname;
	string lname;
	string phone_num;
	int age;
	int id;
	string designation;
	float salary;
	Student s;
public:
	
	void add_faculty_member()
	{
		system("cls");
		
		int n;
		cout<<"Enter how many faculty members you want to enter: ";
		cin>>n;
		cout<<endl<<endl;
		
		for(int i=0;i<n;i++)
		{
			cout<<"Enter the details of faculity member "<<i+1<<endl;
			cout<<"First Name: ";
			cin>>fname;
			cout<<"Last name: ";
			cin>>lname;
			
			p2:
			cout<<"Phone number: ";
			cin>>phone_num;
			if(phone_num.length()>11)
			{
				cout<<endl;
				cout<<"Invalid mobile number"<<endl;
				cout<<"Enter a vaild phone number (11-digits)"<<endl;
				cout<<endl;
				cout<<endl;
				goto p2;
			}
			
			cout<<"Age: ";
			cin>>age;
			
			
			
			cout<<"ID number (5-digits): ";
			cin>>id;
//			while(cin.fail())
//			{
//				cout<<"Error"<<endl;
//				cin>>id;
//			}

			
			
			cout<<"Designation: ";
			cin>>designation;
			
			
			r2:
			cout<<"Salary: ";
			cin>>salary;	
			while(cin.fail())
			{
				cout<<"Error...enter again"<<endl;
				cin.clear();
				goto r2;
			}

			
			fstream file("faculty.txt", ios::out | ios::app);
			if (file.is_open()) 
			{
							
	            file<<fname<<endl;
	            file<<lname<<endl;
				file<<phone_num<<endl;
	            file<<age<<endl;
	            file<<id<<endl;
	            file<<designation<<endl;
	            file<<salary<<endl;
	            
	            file.close();
	            
	            cout<<endl<<endl;
	            cout<<"Record saved successfully!"<<endl<<endl;
	        } 
			else 
			{
	            cout<<"Unable to open file!"<<endl;
	        }
		}
	}
	
	
	void Faculty_record()
	{
		system("cls");
		
		cout<<"Fcaulty records: "<<endl<<endl;
		
		fstream file("faculty.txt", ios::in | ios::app);
    	if (file.is_open()) 
		{
			while(file>>fname && file>>lname && file>>phone_num && file>>age && file>>id && file>>designation && file>>salary)
        	{
				cout<<"\tName: "<<fname<<" "<<lname<<endl;
				cout<<"\tPhone number: "<<phone_num<<endl;
            	cout<<"\tAge: "<<age<<endl;
            	cout<<"\tID number: "<<id<<endl;
            	cout<<"\tDesignation: "<<designation<<endl;
            	cout<<"\tSalary: "<<salary<<endl;
				cout<<endl<<endl;
			}
			
        	file.close();
        } 
		else 
		{
        	cout<<"Unable to open file!"<<endl;
    	}
	}
	
	
	void search_faculty_member()
	{
		system("cls");
		
		bool condition=false;
    	int u_id;
    	cout<<"Enter the faculty member's ID number to search: "<<endl;
    	cin>>u_id;

    	cout<<endl<<endl;

    	fstream file;
    	file.open("faculty.txt" , ios::in);

    	if(!file.is_open())
    	{
        	cout << "Error opening file" << endl;
        	return;
    	}
    	

    	while(file>>fname && file>>lname && file>>phone_num && file>>age && file>>id && file>>designation && file>>salary)
    	{
        	if(u_id==id)
        	{
            	cout<<"\tName: "<<fname<<" "<<lname<<endl;
				cout<<"\tPhone number: "<<phone_num<<endl;
            	cout<<"\tAge: "<<age<<endl;
            	cout<<"\tID number: "<<id<<endl;
            	cout<<"\tDesignation: "<<designation<<endl;
            	cout<<"\tSalary: "<<salary<<endl;
            	
				cout<<endl<<endl;
            	condition=true;
        	}
    	}

    	file.close();

    	if (condition==false)
    	{
    		
        	cout << "Record not found......" << endl;
        	cout << "Please first enter the record" << endl;
    	}
	}
	
	
	void remove_faculty()
	{
		system("cls");
		
		int delete_f;
		bool condition = false;
		cout<<"Enter faculty member's ID to remove: ";
		cin>>delete_f;
		
		ifstream file;
		file.open("faculty.txt");
		
		ofstream file1;
		file1.open("delete1.txt");
		
		if (!file.is_open())
		{
		    cout<<"file cannot be opened"<<endl;
		}
		
	    if (!file1.is_open())
		{
		    cout<<"file cannot be opened"<<endl;
		}
		
		while(file>>fname>>lname>>phone_num>>age>>id>>designation>>salary)
		{
		    if (delete_f!=id)
		    {
		        file1<<fname<<endl;
	            file1<<lname<<endl;
				file1<<phone_num<<endl;
	            file1<<age<<endl;
	            file1<<id<<endl;
	            file1<<designation<<endl;
	            file1<<salary<<endl;
		        cout<<endl<<endl;
		    }
		    else
		    {
		        condition=true;
		    }
		}
		
		file.close();
		file1.close();
		
		remove("faculty.txt");
		rename("delete1.txt", "faculty.txt");
		
		if (condition==false)
		{
		    cout<<"There is no data of any faculty member with this ID."<<endl;
		}
		else
		{
		    cout<<"Data Deleted Successfully."<<endl;
		}
	}
	
	
	
	
	void faculty_signup()
	{
	                
	    system("CLS");
	    
		string username;
		string password;
		
		
		cout<<"\t\t\t*****************************"<<endl;
	    cout<<"\t\t\t        Faculty Sign-up"<<endl;
	    cout<<"\t\t\t*****************************"<<endl;
	    
	    begin:  
	    
	    cout<<endl<<endl;
		
		cout<<"\tEnter Username (e.g: first_name.last_name): ";
		
		cin>>username;
		if(username.length()<=6)    
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of more than six characters ";
			cout<<endl;
			goto begin;     
		}
		else if(username.length()>=20)     
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of less than twenty characters ";
			cout<<endl;
			goto begin;
		}
		
		
		cout<<endl;
		cout<<"\tEnter Password : ";
		char c;
		
		while((c=getch())!='\r') 	     //loop will execute for each character until enter is pressed
		{
			
			if(c>=32 && c<=126)
	        {
	            cout<<'*';
	            password.push_back(c);   		  	//will add new character.
	        }
	        
	        else if(c==8 && password.length()>0)  //dealing with if backspace is pressed
	        {
                password.pop_back();       				 //will remove last charcter
	            cout<<"\b \b";                            
	        }
	        
	        else
	        {
	            cin.ignore();
			}
        }
    
		fstream file("faculty password.txt",ios::out | ios::app);
		
		if(!file.is_open())
		{
			cout<<"\tError opening file.";
		}
			
		file<<username<<endl;
		file<<password<<endl;
		
		file.close();
		
		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t**************************************"<<endl;
		cout<<"\t\t      Your ID HAS BEEN CREATED !!!"<<endl;
		cout<<"\t\t**************************************"<<endl;
	}
	
	
	

	void faculty_login()
	{
		system("ClS");
		
		string u_username;
		string u_password,password,username;
		
		bool found=false;
		
		
		
		cout<<"\t\t\t*****************************"<<endl;
	    cout<<"\t\t\t        Faculty Log-in"<<endl;
	    cout<<"\t\t\t*****************************"<<endl;
	    
	    start:
	    
	    cout<<endl<<endl;
		
	    cout<<"\tEnter Username (e.g: first_name.last_name):  ";
	    
	    cin>>u_username;
	    
	    if(u_username.length()<=6)    
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of more than six characters ";
			cout<<endl;
			goto start;        
		}
		else if(u_username.length()>=20)     
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of less than twenty characters ";
			cout<<endl;
			goto start;
		}
	    
		cout<<endl;
		cout<<"\tEnter Password : ";
	    char c;
	    
	    while((c=getch ()) !='\r')
	    {
		    if(c>=32 && c<=126)
           {
                cout<<'*';
                u_password.push_back(c);            
           }
           
            else if(c==8 && u_password.length()>0)     
           {
               u_password.pop_back();                       
               cout<<"\b \b";
           }
	    }
	    
	    cout<<endl;;
	    
        ifstream file;
	    file.open("faculty password.txt");
	    
	    if(!file.is_open())
	    {
	    	cout<<"\t Error opening file ";
		}
	    
	    while (file>>username && file>>password)
	    {  
	        if (username==u_username && password==u_password)
	        {	  
				found=true;
				break;
			}
			
			file.ignore(132, '\n');    //setting a limit of ignoring unwanted characters until newline characters(removes input buffer)
		}
		file.close();
		
		if(found==true)
		{
			char key;
			
			do
			{
				int choice;
	
				system("cls");
				
				
				cout<<"\t\t\t*****************************"<<endl;
	    		cout<<"\t\t\t       Faculty Log-in"<<endl;
				cout<<"\t\t\t*****************************"<<endl;
	    
	    		cout<<endl<<endl;
				
				
				cout<<"Enter your choice: "<<endl<<endl;
				cout<<"\t1---Search your record"<<endl;
				cout<<"\t2---Mark attendence"<<endl;
				cout<<"\t3---Show attendence record"<<endl;
				cout<<"\t4---Add new student"<<endl;
				cout<<"\t5---View student data"<<endl;
				cout<<"\t6---Seacrh student record"<<endl;
				cout<<"\t7---Delete student record"<<endl;
				cout<<"\t8---Fee payment"<<endl;
				cout<<"\t9---Fee record"<<endl<<endl<<endl;
				cout<<"\t10---Return to login"<<endl;
				cout<<"\t11---Return to sign up"<<endl;
				cout<<"\t12---Exit"<<endl;			
				s2:
			
				cin>>choice;
			
				switch(choice)
				{
				
					case 1:
					search_faculty_member();
					break;
				
					case 2:
					s.attendence();
					break;
				
					case 3:
					s.attendence_record();
					break;
				
					case 4:
					s.add_students();
					break;
				
					case 5:
					s.display_record();
					break;
				
					case 6:
					s.search();
					break;
				
					case 7:
					s.remove_student();
					break;
				
					case 8:
					s.fee_payment();
					break;
				
					case 9:
					s.fee_record();
					break;
					
					case 10:
					faculty_login();
					break;
					
					case 11:
					faculty_signup();
					break;
					
					case 12:
					break;
				
					default:
					cout<<"Enter a valid choice :";
					goto s2;
					break;
				}
				
				cout<<endl;
				cout<<"Do you want to continue? (Y/N): ";
				cin>>key;
				system("cls");
			}
			while(key=='Y' || key=='y');
		}
		
		
	}
};


class admin
{
private:
	
	Student s;
	Faculty f;
	
public:
	
	
	void s_signup()
	{
		s.student_signup();
	}
	
	void s_login()
	{
		s.student_login();
	}
	
	void f_signup()
	{
		f.faculty_signup();
	}
	
	void f_login()
	{
		f.faculty_login();
	}
	
	
	void admin_signup()
	{
	    system("CLS");
	    
		string username;
		string password;
	
	
		cout<<"\t\t\t**************************"<<endl;
	    cout<<"\t\t\t      Admin Sign-up"<<endl;
	    cout<<"\t\t\t**************************"<<endl;
	    
	    begin:
	    
	    cout<<endl;
		
		cout<<"\tEnter Username (e.g: first_name.last_name): ";
		
		cin>>username;
		
		if(username.length()<=6)    
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of more than six characters ";
			cout<<endl;
			goto begin;       
		}
		else if(username.length()>=20)     
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of less than twenty characters ";
			cout<<endl;
			goto begin; 
		}
		
		
		
		cout<<endl;
		cout<<"\tEnter Password : ";
		
		char c;
		
		while((c=getch ())!='\r') 	     //loop will execute for each character until enter is pressed
		{
			
			if(c>=32 && c<=126)
	        {
	            cout<<'*';
	            password.push_back(c);   		  	//will add new character.
	        }
	        
	        else if(c==8 && password.length()>0)  //dealing with if backspace is pressed
	        {
                password.pop_back();       				 //will remove last charcter
	            cout<<"\b \b";                            
	        }
	        
	        else
	        {
	            cin.ignore();
			}
        }
    
		fstream file("admin password.txt",ios::out | ios::app);
		
		if(!file.is_open())
		{
			cout<<"\tError opening file.";
		}
			
		file<<username<<endl;
		file<<password<<endl;
		
		file.close();
		
			
		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t**************************************"<<endl;
		cout<<"\t\t      Your ID HAS BEEN CREATED !!!"<<endl;
		cout<<"\t\t**************************************"<<endl;
	}
	
	
	void admin_login()
	{
		
		system("ClS");
		
		
		
		
		string u_username;
		string u_password,password,username;
		
		bool found=false;                         //bool found used to check conditions
		 
		start: 
	    cout<<"\t\t\t**************************"<<endl;
	    cout<<"\t\t\t       Admin Log-in"<<endl;
	    cout<<"\t\t\t**************************"<<endl;
	    
	    
	    
	    cout<<endl<<endl;
		
	    cout<<"\tEnter Username (e.g: first_name.last_name):  ";
	    
	    cin>>u_username;
	    
	    if(u_username.length()<=6)    
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of more than six characters ";
			cout<<endl;
			goto start;          
		}
		else if(u_username.length()>=20)     
		{
			system("cls");
			cout<<endl;
			cout<<"\tThe username must consist of less than twenty characters ";
			cout<<endl;
			goto start;  
		}
	    
	    
	    cout<<endl;
		cout<<"\tEnter Password : ";
	    char c;
	    
	    while((c=getch ()) !='\r')
	    {
		    if(c>=32 && c<=126)
			{
                cout<<'*';
                u_password.push_back(c);            
			}
           
            else if(c==8 && u_password.length()>0)     
            {
               u_password.pop_back();                       
               cout<<"\b \b";
            }
	    }
	    
	    cout<<endl;;
	    
        ifstream file;
	    file.open("admin password.txt");
	    
	    if(!file.is_open())
	    {
	    	cout<<"\t Error opening file ";
		}
	    
	    while (file>>username && file>>password)
	    {  
	        if (username==u_username && password==u_password)
	        {	  
				found=true;
				break;
			}
			
			file.ignore(132, '\n');    //setting a limit of ignoring unwanted characters until newline characters(removes input buffer)
		}
		file.close();
		
		if(found==true)
		{
			char key;
			
			cout<<"\t\t\t**************************"<<endl;
			cout<<"\t\t\t       Admin Log-in"<<endl;
	    	cout<<"\t\t\t**************************"<<endl;
	    
	    	cout<<endl<<endl;
			
			do
			{
				int choice;
	
				system("cls");
				
				cout<<"\t\t\t**************************"<<endl;
				cout<<"\t\t\t       Admin Log-in"<<endl;
	    		cout<<"\t\t\t**************************"<<endl;
	    
	    		cout<<endl<<endl;
				
				cout<<"Enter your choice: "<<endl<<endl;
				cout<<"\t1---Add faculty member"<<endl;
				cout<<"\t2---Faculty record"<<endl;
				cout<<"\t3---Search your record"<<endl;
				cout<<"\t4---Remove faculty member"<<endl;
				cout<<"\t5---Show attendence record"<<endl;
				cout<<"\t6---Add new student"<<endl;
				cout<<"\t7---View student data"<<endl;
				cout<<"\t8---Seacrh student record"<<endl;
				cout<<"\t9---Delete student record"<<endl;
				cout<<"\t10---Fee record"<<endl<<endl<<endl;
				cout<<"\t\t11---Return to login"<<endl;
				cout<<"\t\t12---Return to sign up"<<endl;
				cout<<"\t\t13---Exit"<<endl;
			
				s2:
			
				cin>>choice;
			
				switch(choice)
				{
					case 1:
					f.add_faculty_member();
					break;
					
					case 2:
					f.Faculty_record();
					break;
				
					case 3:
					f.search_faculty_member();
					break;
				
					case 4:
					f.remove_faculty();
					break;
				
					case 5:
					s.attendence();
					break;
				
				
					case 6:
					s.add_students();
					break;
				
					case 7:
					s.display_record();
					break;
				
					case 8:
					s.search();
					break;
				
					case 9:
					s.remove_student();
					break;
				
					case 10:
					s.fee_record();
					break;
					
					case 11:
					system("cls");
					goto start;
					break;
					
					
					case 12:
					char s;
					cout<<"Do you waant to go back to sign up (Y/N): ";
					cin>>s;
		
					if(s=='Y' || s=='y')
					{
						f.faculty_signup();
					}
					else
					{
						system("cls");
						goto start;
					}
					break;
				
					case 13:
					break;
				
					default:
					cout<<"Enter a valid choice :";
					goto s2;
					break;
				}
				
				cout<<endl;
				cout<<"Do you want to continue? (Y/N): ";
				cin>>key;
				system("cls");
			}
			while(key=='Y' || key=='y');
		}
	}
};





int main()
{
	char key;
	admin a;
	
	
	do
	{
		int choice;
		
		cout<<endl;
		cout<<"\t\t\t\t******************************************************"<<endl;
		cout<<"\t\t\t\t|                                                    |"<<endl;
		cout<<"\t\t\t\t|             School Management System               |"<<endl;
		cout<<"\t\t\t\t|                                                    |"<<endl;
		cout<<"\t\t\t\t******************************************************"<<endl;
		
		
		
		cout<<endl<<endl;
		
		
		s:
		cout<<"\t\t_____________________________________________________________________________"<<endl;
		cout<<"\t\t|                                                                           |"<<endl;
		cout<<"\t\t|    *********"<<setw(45)<<" ********"<<"                 |"<<endl;	
		cout<<"\t\t|     Sign-up "<<setw(45)<<"  Log-in "<<"                 |"<<endl;
		cout<<"\t\t|    *********"<<setw(45)<<" ********"<<"                 |"<<endl;
		cout<<"\t\t|                                                                           |"<<endl;
		cout<<"\t\t|                                                                           |"<<endl;
		cout<<"\t\t|  1---Student sign-up"<<setw(45)<<"4---Student login"<<"         |"<<endl;
		cout<<"\t\t|  2---Faculty sign-up"<<setw(45)<<"5---Faculty login"<<"         |"<<endl;
		cout<<"\t\t|  3---Admin sign-up"<<setw(45)<<"6---Admin login"<<"           |"<<endl;
		cout<<"\t\t|                                                                           |"<<endl;
		cout<<"\t\t|___________________________________________________________________________|"<<endl;
		
		
		cout<<endl<<endl;
		cout<<"\t\t\"ENTER YOUR CHOICE\" : ";
		cin>>choice;
	
		system("cls");
	
		switch(choice)
		{
			case 1:
			a.s_signup();
			break;
			
			case 2:
			a.f_signup();
			break;
			
			case 3:
			a.admin_signup();
			break;
			
			case 4:
			a.s_login();
			break;
			
			case 5:
			a.f_login();
			break;
			
			case 6:
			a.admin_login();
			break;
			
			default:
			cout<<"Enter a valid choice!!"<<endl;
			cout<<"Please enter your choice again"<<endl;
			goto s;
			break;
		}
		
	
		cout<<endl;
		cout<<"Do you want to return to main menu? (Y/N): ";
		cin>>key;
		system("cls");
	}
	while(key=='Y' || key=='y');
    
    
    
    return 0;
}