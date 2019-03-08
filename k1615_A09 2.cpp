#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class login
{   
    char user[30];
	char password[30];
    public:
		void data1()
		{
			char usr[]="Akhil_11609804";
			char pass[]="9440791666";
			int i,k=0;
	        char ch;  
	        int count=0;
			p:	cout<<"\n\n\n"<<"ENTER THE USER NAME ::";
	        cin>>user;
	        cout<<"\n"<<"ENTER THE PASSWORD ::";
			for(i=0;i<10;i++)
	       {
		      ch=getch();
		      password[i]=ch;
		      ch='*';
		      cout<<ch; 
	        }
	        password[i]='\0';
			if(strcmp(user,usr)==0)
			{
				for(i=0;i<10;i++)
				{
				if(password[i]==pass[i])
				k++;
			    }
			    if(k==10)
			    {
			    	system("cls");
			      cout<<"\n"<<"SUCCESFULLY LOGGED IN...."<<endl;
		      }
			else
			{
			cout<<"\n"<<"YOUR PASSWORD OR USERNAME IS WRONG ...  PLEASE CHECK AGAIN"<<endl;
			cout<<"RE-TRY"<<endl;
			if(count==3)
			{
				system("cls");
				cout<<"YOU HAVE EXCEEDED THE MINIMUM TRIES"<<endl;
				cout<<"TRY AGAIN AFTER SOME TIME"<<endl;
				exit(0);
			}
			else
			{
				count++;
				goto p;
			}	
			}
		}
		}
		void data2()
		{
			char usr[]="Akki_11609804";
			char pass[]="7888707093";
			int i,k=0;
	        char ch;  
	        int count=0;
			p:	cout<<"\n\n\n"<<"ENTER THE USER NAME ::";
	        cin>>user;
	        cout<<"\n"<<"ENTER THE PASSWORD ::";
			for(i=0;i<10;i++)
	       {
		      ch=getch();
		      password[i]=ch;
		      ch='*';
		      cout<<ch; 
	        }
	        password[i]='\0';
			if(strcmp(user,usr)==0)
			{
				for(i=0;i<10;i++)
				{
				if(password[i]==pass[i])
				k++;
			    }
			    if(k==10)
			    {
			    	system("cls");
			      cout<<"\n"<<"SUCCESFULLY LOGGED IN...."<<endl;
		      }
			else
			{
			cout<<"\n"<<"YOUR PASSWORD OR USERNAME IS WRONG ...  PLEASE CHECK AGAIN"<<endl;
			cout<<"RE-TRY"<<endl;
			if(count==3)
			{
				system("cls");
				cout<<"YOU HAVE EXCEEDED THE MINIMUM TRIES"<<endl;
				cout<<"TRY AGAIN AFTER SOME TIME"<<endl;
				exit(0);
			}
			else
			{
				count++;
				goto p;
			}	
			}
		}
		}
};
class students
{
	protected:
    int roll;
   	char name[30],temp[30];
   	long int regno,reg;
    int ca,tca;
	int mte,tmte;
	int ete,tete;
	char sup,tsup;
	int total,ttot;
    float cgpa,tcgp;
   public:
   	friend void sort(students s[],int p,int e);
   	friend void disp(students s[],int p,int e);
   	friend void supw(students s[],int p,int e);
   	friend void search(students s[],int p,int e);
   	friend void update(students s[],int p,int e);
   	void details()
   	{
   	  	 cout<<"ENTER THE ROLL NUMBER ::";
		 cin>>roll;
		 cout<<"ENTER THE REGISTRATION NUMBER ::";
		 cin>>regno;
		 cout<<"ENTER THE NAME ::";
		 cin>>name;
		 cout<<"ENTER  CA MARKS ::";
		 cin>>ca;
		 cout<<"ENTER  MTE MARKS ::";
		 cin>>mte;
		 cout<<"ENTER ETE MARKS ::";
		 cin>>ete;
		 cout<<"ENTER SUPW GRADE ::";
		 cin>>sup;
		 total=(ca+mte+ete);
	     cgpa=(ca+mte+ete)/10;
	}
	void display()
    		{
				    cout<<"\t"<<roll;
				    cout<<"\t\t"<<regno;
				    cout<<"\t\t"<<name;
				    cout<<"\t\t"<<ca;
				    cout<<"\t\t"<<mte;
				    cout<<"\t\t"<<ete;
				    cout<<"\t\t"<<sup<<endl;
			}
			void displaymark()
			{
				    cout<<"\t"<<roll;
				    cout<<"\t\t"<<ca;
				    cout<<"\t\t"<<mte;
				    cout<<"\t\t"<<ete;
				    cout<<"\t\t"<<total;
				    cout<<"\t\t"<<cgpa;
			}
			void displayrep()
			{
			        cout<<"\t"<<roll;
				    cout<<"\t\t"<<regno;
				    cout<<"\t\t"<<name;
				    cout<<"\t\t"<<ca;
				    cout<<"\t\t"<<mte;
				    cout<<"\t\t"<<ete;
				    cout<<"\t\t"<<total;
				    cout<<"\t\t"<<cgpa;
				    cout<<"\t\t"<<sup;	
			}
			void datasaved()
			{
				ofstream d;
				d.open("report.txt",ios::app);
				    d<<"\t"<<roll;
				    d<<"\t\t"<<regno;
				    d<<"\t\t"<<name;
				    d<<"\t\t"<<ca;
				    d<<"\t\t"<<mte;
				    d<<"\t\t"<<ete;
				    d<<"\t\t"<<total;
				    d<<"\t\t"<<cgpa;
				    d<<"\t\t"<<sup<<endl;
				    d.close();
			}			 
};
void update(students s[],int p,int e)
{
	int i;
	if(p==1)
	{
		int r;
		cout<<"\tENTER THE ROLL NUMBER OF THE STUDENT YOU WANT TO DELETE"<<endl;
		cout<<"\t->>";
		cin>>r;
		for(i=r-1;i<e;i++)
		{
			s[i].roll=s[i+1].roll;
			s[i].roll--;
			strcpy(s[i].name,s[i+1].name);
			s[i].regno=s[i+1].regno;
			s[i].ca=s[i+1].ca;
			s[i].mte=s[i+1].mte;
			s[i].ete=s[i+1].ete;
			s[i].total=s[i+1].total;
			s[i].cgpa=s[i+1].cgpa;
			s[i].sup=s[i+1].sup;
		}
		cout<<"\tNEW DATA"<<endl;
		for(i=0;i<(e-1);i++)
		{
			cout<<"\t------------------------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------------------"<<endl;
		   s[i].display();
	    }
	}
	if(p==2)
	{
		int r,o;
		cout<<"\tGIVE THE ROLL NUMBER OF THE STUDENT FOR CORRECTION"<<endl;
		cout<<"\t->>";
		cin>>r;
		cout<<"\t\tSELECT WHICH BLOCK YOU WANT TO CORRECT"<<endl;
		cout<<"\t1.NAME"<<endl;
		cout<<"\t2.REGISTRATION NUMBER"<<endl;
		cout<<"\t3.CA MARKS"<<endl;
		cout<<"\t4.MTE MARKS"<<endl;
		cout<<"\t5.ETE MARKS"<<endl;
		cout<<"\t6.SUPW GRADE"<<endl;
		cout<<"\tENTER THE OPTION"<<endl;
		cout<<"\t->>";
		cin>>o;
		if(o==1)
		{
			char ch[30];
			cout<<"\tenter the new name:"<<endl;
			cout<<"\t->>";
			cin>>ch;
			strcpy(s[r-1].name,ch);
			cout<<"\t\tDATA CORRECTED"<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			  cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			  cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			for(i=0;i<3;i++)
			s[i].display();
		}
		if(o==2)
		{
			long int rg;
			cout<<"\tenter the new registration number:"<<endl;
			cout<<"\t->>";
			cin>>rg;
			s[r-1].regno=rg;
			cout<<"\t\tDATA CORRECTED"<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			  cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			  cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			for(i=0;i<3;i++)
			s[i].display();
		}
		if(o==3)
		{
			int c;
			cout<<"\tenter the new ca marks:"<<endl;
			cout<<"\t->>";
			cin>>c;
			s[r-1].ca=c;
			cout<<"\t\tDATA CORRECTED"<<endl;
			for(i=0;i<3;i++)
			s[i].display();
		}
		if(o==4)
		{
			int m;
			cout<<"\tenter the new mte marks:"<<endl;
			cout<<"\t->>";
			cin>>m;
			s[r-1].mte=m;
			cout<<"\t\tDATA CORRECTED"<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			  cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			  cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			for(i=0;i<3;i++)
			s[i].display();
		}
		if(o==5)
		{
			int e;
			cout<<"\tenter the new ete marks:"<<endl;
			cout<<"\t->>";
			cin>>e;
			s[r-1].ete=e;
			cout<<"\t\tDATA CORRECTED"<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			for(i=0;i<3;i++)
			s[i].display();
		}
		if(o==6)
		{
			char ch;
			cout<<"\tenter the new supw grade:"<<endl;
			cout<<"\t->>";
			cin>>ch;
			s[r-1].sup=ch;
			cout<<"\t\tDATA CORRECTED"<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			for(i=0;i<3;i++)
			s[i].display();
		}
	}
}
void search(students s[],int p,int e)
{
	int i;
	if(p==1)
	{
		char name2[30];
		cout<<"\tENTER THE NAME OF THE STUDENT"<<endl;
		cin>>name2;
		for(i=0;i<e;i++)
		{
			try
			{
		    if(strcmp(name2,s[i].name)==0)
		    {
		    	cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			    cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			    cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
		       s[i].display();
		   }
		    else
		    throw 123;
	   }
		   catch(int a)
		{
		    cout<<"\tTHERE IS NO STUDENT WITH THAT REGITRATION NUMBER IN YOUR CLASS"<<endl;
        }
	   }
	}
	if(p==2)
	{
		int roll2;
		cout<<"\tENTER THE ROLL NUMBER OF THE STUDENT"<<endl;
		cin>>roll2;
		for(i=0;i<e;i++)
		{
			try
			{
		    if(roll2==s[i].roll)
		    {
		       cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			   cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			   cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
		       s[i].display();
		    }
		    else
		     throw 123;
          }
		  catch(int a)
		{
		    cout<<"\tTHERE IS NO STUDENT WITH THAT REGITRATION NUMBER IN YOUR CLASS"<<endl;
        } 
	   }
	}
	else if(p==3)
	{
		long int regno2;
		cout<<"\tENTER THE REGISTRATION NUMBER OF THE STUDENT"<<endl;
		cin>>regno2;
		for(i=0;i<e;i++)
		{
			try
			{
		    if(regno2==s[i].regno)
		    {
		       cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			   cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			   cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
		       s[i].display();
		    }
		    else
		    throw 123;
		}
		catch(int a)
		{
		    cout<<"\tTHERE IS NO STUDENT WITH THAT REGITRATION NUMBER IN YOUR CLASS"<<endl;
        }
	   }
	}
}
void supw(students s[],int p,int e)
			{
			   int i;
			   for(i=0;i<e;i++)
			   {
			   	  if(i==(p-1))
			   	  {
			   	    if(s[i].sup=='A')
					cout<<"\tVERY GOOD\n";
					if(s[i].sup=='B')
					cout<<"\tVERY GOOD\n";
					if(s[i].sup=='C')
					cout<<"\t NOT BAD\n";
					if(s[i].sup=='D')
					cout<<"\tVERY POOR\n";	
				  }
				}		
			}
void disp(students s[],int p,int e)
{
	int i;
	for(i=0;i<e;i++)
	{
	 if(i==(p-1))
	 {
	 	cout<<"\t------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tTOTAL\t\tCGPA\t\tSUPW"<<endl;
		cout<<"\t------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	    s[i].displayrep();
    }
  }
	if(p==4)
	{
		ofstream d;
	    d.open("report.txt",ios::app);
		d<<"\t--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		d<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tTOTAL\t\tCGPA\t\tSUPW"<<endl;
		d<<"\t--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	    d.close();
		for(i=0;i<3;i++)	
		s[i].datasaved();
	}
}
void sort(students s[],int p,int e)
{
	int i,j;
	students t;
	if(p==1)
	{
	for(i=0;i<e;i++)
	{
		for(j=0;j<(e-i-1);j++)
		{
		if(strcmp(s[j].name,s[j+1].name)>0)
		{
			strcpy(t.temp,s[j].name);
			strcpy(s[j].name,s[j+1].name);
			strcpy(s[j+1].name,t.temp);
			t.reg=s[j].regno;
			s[j].regno=s[j+1].regno;
			s[j+1].regno=t.reg;
			t.tsup=s[j].sup;
			s[j].sup=s[j+1].sup;
			s[j+1].sup=t.tsup;
			t.tca=s[j].ca;
			s[j].ca=s[j+1].ca;
			s[j+1].ca=t.tca;
            t.tmte=s[j].mte;
			s[j].mte=s[j+1].mte;
			s[j+1].mte=t.tmte;
			t.tete=s[j].ete;
			s[j].ete=s[j+1].ete;
			s[j+1].ete=t.tete;		
		}
	  }
	}
   }
   if(p==2)
   {
   	  for(i=0;i<e;i++)
	{
		for(j=0;j<(e-i-1);j++)
		{
		if(s[j].ca<
		s[j+1].ca)
		{
			strcpy(t.temp,s[j].name);
			strcpy(s[j].name,s[j+1].name);
			strcpy(s[j+1].name,t.temp);
			t.reg=s[j].regno;
			s[j].regno=s[j+1].regno;
			s[j+1].regno=t.reg;
			t.tsup=s[j].sup;
			s[j].sup=s[j+1].sup;
			s[j+1].sup=t.tsup;
			t.tca=s[j].ca;
			s[j].ca=s[j+1].ca;
			s[j+1].ca=t.tca;
            t.tmte=s[j].mte;
			s[j].mte=s[j+1].mte;
			s[j+1].mte=t.tmte;
			t.tete=s[j].ete;
			s[j].ete=s[j+1].ete;
			s[j+1].ete=t.tete;		
		}
	  }
	}
   }
   if(p==3)
   {
   	  for(i=0;i<e;i++)
	{
		for(j=0;j<(e-i-1);j++)
		{
		if(s[j].mte<s[j+1].mte)
		{
			strcpy(t.temp,s[j].name);
			strcpy(s[j].name,s[j+1].name);
			strcpy(s[j+1].name,t.temp);
			t.reg=s[j].regno;
			s[j].regno=s[j+1].regno;
			s[j+1].regno=t.reg;
			t.tsup=s[j].sup;
			s[j].sup=s[j+1].sup;
			s[j+1].sup=t.tsup;
			t.tca=s[j].ca;
			s[j].ca=s[j+1].ca;
			s[j+1].ca=t.tca;
            t.tmte=s[j].mte;
			s[j].mte=s[j+1].mte;
			s[j+1].mte=t.tmte;
			t.tete=s[j].ete;
			s[j].ete=s[j+1].ete;
			s[j+1].ete=t.tete;		
		}
	  }
	}
   }
   if(p==4)
   {
   	   for(i=0;i<e;i++)
	{
		for(j=0;j<(e-i-1);j++)
		{
		if(s[j].ete<s[j+1].ete)
		{
			strcpy(t.temp,s[j].name);
			strcpy(s[j].name,s[j+1].name);
			strcpy(s[j+1].name,t.temp);
			t.reg=s[j].regno;
			s[j].regno=s[j+1].regno;
			s[j+1].regno=t.reg;
			t.tsup=s[j].sup;
			s[j].sup=s[j+1].sup;
			s[j+1].sup=t.tsup;
			t.tca=s[j].ca;
			s[j].ca=s[j+1].ca;
			s[j+1].ca=t.tca;
            t.tmte=s[j].mte;
			s[j].mte=s[j+1].mte;
			s[j+1].mte=t.tmte;
			t.tete=s[j].ete;
			s[j].ete=s[j+1].ete;
			s[j+1].ete=t.tete;		
		}
	  }
	}
   }
}
int main()
{
	login l;
	int i,e,z;
	students s[z],su;
	system("color 1c");
	cout<<"\t========================================================================================================================"<<endl;
	cout<<"\n\t----------------------------------------------* WELCOME TO 'ARMS' *----------------------------------------"<<endl;
	cout<<"\t========================================================================================================================"<<endl;
	cout<<"\n\t PLEASE SELECT THE RESPECTIVE CLASS FROM THE BELOW"<<endl;
	cout<<"\t1.k1615"<<endl;
	cout<<"\t2.k1614"<<endl;
	cout<<"\n\t->>";
	cin>>e;
	if(e==1)
	{
    system("cls");
	system("color 2a");
	cout<<"\n\n\n\t\t"<<"PLEASE ENTER YOUR RESPECTIVE DETAILS TO HAVE A CONTROL OF THE SEVICES"<<endl;
//	l.data1();
c:	cout<<"\t========================================================================================================================"<<endl;
	cout<<"\n\t----------------------------------------------* WELCOME TO 'ARMS' *----------------------------------------"<<endl;
	cout<<"\t========================================================================================================================"<<endl;
	cout<<"\n\n\n\t\t"<<"CLASS: k1615"<<endl;
	cout<<"\tENTER THE STRENGTH OF THE CLASS\n";
	cout<<"\t->>";
	cin>>z;
	cout<<"\n\n"<<"PLEASE ENTER THE STUDENT DETAILS :"<<endl;
	for(i=0;i<z;i++)
	s[i].details();
	cout<<"SUCCESFULLY SAVED THE DATA OF THE STUDENTS"<<endl;
m:  system("cls");
	system("color 5f");
	cout<<"\t========================================================================================================================"<<endl;
	cout<<"\n\t----------------------------------------------* WELCOME TO 'ARMS' *----------------------------------------"<<endl;
	cout<<"\t========================================================================================================================"<<endl;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t1.STUDENTS DETAILS "<<endl;
	cout<<"\n\t\t\t\t\t\t2.STUDENTS ACEDEMIC DETAILS"<<endl;
	cout<<"\n\t\t\t\t\t\t3.STUDENTS NEW DATA ENTRY"<<endl;
	cout<<"\n\t\t\t\t\t\t4.STUDENTS BEHAVIOUR"<<endl;
	cout<<"\n\t\t\t\t\t\t5.STUDENTS SEARCH"<<endl;
	cout<<"\n\t\t\t\t\t\t6.STUDENTS REPORT CARDS"<<endl;
	cout<<"\n\t\t\t\t\t\t7.EXIT"<<endl;
	cout<<"\t\t\t==============================================================================";
	int n; 
	cout<<"\n\n\tENTER THE DESIRED OPTION FROM THE ABOVE"<<endl;
	cout<<"\t->>";
	cin>>n;
	switch(n)
	{
		case 1:
			{
			  system("cls");
			  system("color 1d");
			  int o,i,j,a;
			  cout<<"\n\t# STUDENTD DETAILS "<<endl;
			  cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			  cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			  cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			  for(i=0;i<z;i++)
			  s[i].display();
			  cout<<"\tFOR SORTING THE DATA ACCORDING TO FOLLOWING ENTER YOUR OPTION"<<endl;
			  cout<<"\t\t1.NAME"<<endl;
			  cout<<"\t\t2.HIGHEST IN CA"<<endl;
			  cout<<"\t\t3.HIGHEST IN MTE"<<endl;
			  cout<<"\t\t4.HIGHEST IN ETE"<<endl;
			  cout<<"->>";
			  cin>>a;
			  cout<<"\tAFTER SORTING"<<endl;
			  cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			  cout<<"\tRoll No.\tRegNo.\t\tName\t\tCA\t\tMTE\t\tETE\t\tSUPW"<<endl;
			  cout<<"\t------------------------------------------------------------------------------------------------------------------"<<endl;
			  	sort(s,a,z);
		      for(i=0;i<z;i++)
			  s[i].display();
			  cout<<"\tFOR GOING BACK TO THE MAIN PAGE PLEASE PRESS '1' AND '0' PRESS FOR EXIT"<<endl;
			  cout<<"->>";
			  cin>>o;
			  if(o==1)
			  goto m;
			  if(o==0)
			  exit(0);   	
			}
			break;
			case 2:
				{
					int m;
n:					system("cls");
					system("color 3e");
					cout<<"\n\t--------------------------------------------------------------------"<<endl;
					cout<<"\n\t\tSELECT FROM THE BELOW OPTIONS "<<endl;
					cout<<"\t--------------------------------------------------------------------";
					cout<<"\n\t1.SEE THE MARKS OF THE STUDENTS"<<endl;
					cout<<"\n\t2.SEE MARKS ACCORDING TO ROLL NO.."<<endl;
					cout<<"\n\t3.HOME PAGE"<<endl;
					cout<<"\n\t4.EXIT"<<endl;
					cout<<"\n\tENTER THE OPTION"<<endl;
					cout<<"\t->>";
					cin>>m;
					switch(m)
					{
							case 1:
							{
								system("cls");
								int i,o,a;
							    cout<<"\tFOR DISPLAYING THE MARKS ENTER 1 OR TO GO TO HOME PAGE PRESS 0 FOR WRONG ENTRY YOU WILL BE EXITED "<<endl;
							    cout<<"\t->>";
							    cin>>o;
							       cout<<"\t------------------------------------------------------------------------------"<<endl;
			                       cout<<"\tRoll No.\t\tCA\t\tMTE\t\tETE\t\ttotal\t\tcgpa"<<endl;
			                       cout<<"\t------------------------------------------------------------------------------"<<endl;
							    if(o==1)
							    {
							    	for(i=0;i<z;i++)
							   {
							   	   cout<<"\t"<<i+1;
							       s[i].displaymark();
							    }
							      cout<<"\t\nenter 1 to goto main menu 0 to exit\n";
							  cout<<"\t->>";
							  cin>>a;
							  if(a==1)
							  goto m;
							  if(a==0)
							  exit(0);
								}
								if(o==0)
								goto m;
							}
							break;
							case  2:
								{
									system("cls");
								   int o,a;
								   cout<<"ENTER THE ROLL NO.."<<endl;
								   cout<<"\t->>";
								   cin>>o;
								   cout<<"\t-----------------------------------------------------------"<<endl;
			                       cout<<"\tRoll No.\tCA\tMTE\tETE\ttotal\tcgpa"<<endl;
			                       cout<<"\t------------------------------------------------------------"<<endl;
							    if(o==1)
							    {
							       cout<<"\t"<<o;
							       s[0].displaymark();
								   	cout<<"\t\nenter 1 to goto main menu 0 to exit\n";
							  cout<<"\t->>";
							  cin>>a;
							  if(a==1)
							  goto m;
							  if(a==0)
							  exit(0);
								}
								if(o==2)
							    {
							    	cout<<"\t"<<o;
							       s[1].displaymark();
							       cout<<"\t\nenter 1 to goto main menu 0 to exit\n";
							  cout<<"\t->>";
							  cin>>a;
							  if(a==1)
							  goto m;
							  if(a==0)
							  exit(0);
								}
								if(o==3)
							    {
							    	cout<<"\t"<<o;
							       s[2].displaymark();
							       cout<<"\t\nenter 1 to goto main menu 0 to exit\n";
							  cout<<"\t->>";
							  cin>>a;
							  if(a==1)
							  goto m;
							  if(a==0)
							  exit(0);
								}
								}
							case 3:
							{
								goto m;
						    }
								break;
						    case 4:
								exit(0);
								break;
						  default:
						  {
						  	goto n;
								  }		
					}
					break;
						case 3:
							{
							  int o,a;	
							  system("cls");
							  cout<<"\t\t\tSELECT ONE FROM THE BELOW::"<<endl;
							  cout<<"\t1.DELETE THE STUDENT TOTAL DATA"<<endl;
							  cout<<"\t2.CORRECTION OF STUDENT  DATA"<<endl;
							  cout<<"\t->>";
							  cin>>o;
							  update(s,o,z);
							  cout<<"\t\nenter 1 to goto main menu 0 to exit\n";
							  cout<<"\t->>";
							  cin>>a;
							  if(a==1)
							  goto m;
							  if(a==0)
							  exit(0);	
							}
							break;
						case 4:
						{
							system("cls");
							system("color 1e");
							int i,o,a;
							cout<<"\n\t\t---------------------------------------------"<<endl;
							cout<<"\n\n\t\t\t\t'STUDENTS ACEDEMIC BEHAVIOUR'";
							cout<<"\n\t\t---------------------------------------------"<<endl;
							cout<<"\tFOR DISPLAYING THE PRESENT CONDITION OF THE STUDENT ENTER THE ROLL NO. OF THE STUDENT"<<endl;
							    cout<<"\t->>";
							    cin>>o;
							    supw(s,o,z);
							    cout<<"\t\nenter 1 to goto main menu 0 to exit\n";
							  cout<<"\t->>";
							  cin>>a;
							  if(a==1)
							  goto m;
							  if(a==0)
							  exit(0);	
							}
							break;
							case 5:
							{   
							    system("cls");
								cout<<"\tLET US KNOW WHAT U KNOW ABOUT THE STUDENT, ACCORDING THE INFORMATION THE SEARCH WILL BE DONE"<<endl;
								cout<<"\n\n\tSELECT ONE FROM THE BELOW"<<endl;
								cout<<"\t\t1.NAME"<<endl;
								cout<<"\t\t2.ROLL NUMBER"<<endl;
								cout<<"\t\t3.REGISTRATION NUMBER"<<endl;
								int o,a;
								cout<<"\t->>";
								cin>>o;
								search(s,o,z);
								cout<<"\t\nenter 1 to goto main menu 0 to exit\n";
							  cout<<"\t->>";
							  cin>>a;
							  if(a==1)
							  goto m;
							  if(a==0)
							  exit(0);	
								}
								break;
							case 6:
								{
									system("cls");
									system("color 2e");
									cout<<"\n\n\t\t\tENTER THE ROLL NO: OF THE STUDENT TO GENERATE THE REPORT CARD 'or' IF YOU WANT THE REPORT OF WHOLE CLASS AND SAVED TO THE SERVERS PRESS 4"<<endl;
									int i,o,a;
									cout<<"\t->>";
									cin>>o;
						            disp(s,o,z);
						            cout<<"\t\nenter 1 to goto main menu 0 to exit\n";
							  cout<<"\t->>";
							  cin>>a;
							  if(a==1)
							  goto m;
							  if(a==0)
							  exit(0);	
								}
								break;
								case 7:
									exit(0);
									break;
								default:
								{
									cout<<"\t\t\tWRONG ENTRY\n";
									cout<<"\t\t\tTRY AGAIN AFTER SOME TIME";
									exit(0);
									}	
				}
	}
}
if(e==2)
{
  system("cls");
	system("color 2a");
	cout<<"\n\n\n\t\t"<<"PLEASE ENTER YOUR RESPECTIVE DETAILS TO HAVE A CONTROL OF THE SEVICES"<<endl;
	l.data1();
    goto c;
}
	return 0;
	getch();
}
