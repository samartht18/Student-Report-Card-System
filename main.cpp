#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<process.h>
#include<windows.h>

using namespace std;

void Password();
void Teacher();
void Student();
void Public();

class STUDENT{
      private:
      char name[50];
      char fname[50];
      char mname[50];
      char date[15];
      int sclass;
      char div;
      int rno;
      char stream;
      float marks[4];
      char sec_code[5];
      float per;
      char grade;


      void getper()
      {
           per=((marks[0]+marks[1]+marks[2]+marks[3])/4);
      }
      void getgrade()
      {
           if(per>=85)
           grade='A';
           else if((per>=70)&&(per<=84))
           grade='B';
           else if((per>=55)&&(per<=69))
           grade='C';
           else if((per>=40)&&(per<=54))
           grade='D';
           else if(per<40)
           grade='E';
      }
      public:
      void enter()
      {
           cout<<"\t\t\t  -------------------------------"<<"\n";
           cout<<"\t\t\t     ENTER THE STUDENT DETAILS"<<"\n";
           cout<<"\t\t\t  -------------------------------"<<"\n\n";
           cout<<"\t\tNAME OF THE STUDENT    : ";
           cin.ignore();
           cin.getline(name,50);
           cout<<"\t\tFATHER'S NAME          : ";
           cin.getline(fname,50);
           cout<<"\t\tMOTHER'S NAME          : ";
           cin.getline(mname,50);
           cout<<"\t\tDATE OF BIRTH(DD/MM/YY): ";
           cin.getline(date,15);
           cout<<"\t\tSECURITY CODE          : ";
           cin.getline(sec_code,5);
           cout<<"\t\tYEAR OF STUDY          : ";
           cin>>sclass;
           cout<<"\t\tDIVISION               : ";
           cin>>div;
           cout<<"\t\tROLL NUMBER            : ";
           cin>>rno;
           cout<<"\n\t\t( ENTER C FOR COMPUTER SCIENCE ;\n";
           cout<<"\t\t         M FOR MECHANICAL ;\n";
           cout<<"\t\t         I FOR IT ;\n";
           cout<<"\t\t         P FOR PRODUCTION ;\n";
           cout<<"\t\t         E FOR E&TC ;\n";
           cout<<"\t\t         S FOR INSTRUMENTATION ; )\n\n";
           cout<<"\t\tBRANCH                 : ";
           cin>>stream;
           cout<<"\n\n";


        if(stream=='C')
           {
              cout<<"\t\t\t  SELECTED BRANCH IS COMPUTER SCIENCE..."<<"\n\n";
              cout<<"\t\t\t  -----------------------------"<<"\n";
              cout<<"\t\t\t     ENTER THE SUBJECT MARKS"<<"\n";
              cout<<"\t\t\t  -----------------------------"<<"\n\n";
              cout<<"\t\t\t       DATA STRUCTURES   : ";
              cin>>marks[0];
              cout<<"\t\t\t       COMPUTER ARCHITECHURE & OPERATING SYSTEMS   : ";
              cin>>marks[1];
              cout<<"\t\t\t       DATA COMUNICATION AND NETWORKS   : ";
              cin>>marks[2];
              cout<<"\t\t\t       OBJECT ORIENTED PROGRAMMING   : ";
              cin>>marks[3];
              cout<<"\n\t\t\t    RECORD SAVED SUCCESSFULLY !!!\n";
           }

        else if(stream=='M')
           {
               cout<<"\t\t\t  SELECTED BRANCH IS MECHANICAL..."<<"\n";
              cout<<"\t\t\t  -----------------------------"<<"\n";
              cout<<"\t\t\t     ENTER THE SUBJECT MARKS"<<"\n";
              cout<<"\t\t\t  -----------------------------"<<"\n\n";
              cout<<"\t\tFLUID ENGINEERING   : ";
              cin>>marks[0];
              cout<<"\t\tMACHINE DESIGN   : ";
              cin>>marks[1];
              cout<<"\t\tTHERMODYNAMICS   : ";
              cin>>marks[2];
              cout<<"\t\tANALYSIS & SIMULATION OF MACHINE AND MECHANISMS   : ";
              cin>>marks[3];
              cout<<"\n\t\t\t    RECORD SAVED SUCCESSFULLY !!!\n";
           }
         else if(stream=='I')
           {
               cout<<"\t\t\t  SELECTED BRANCH IS IT..."<<"\n";
              cout<<"\t\t\t  ---------------------------------------"<<"\n";
           cout<<"\t\t\t        ENTER THE SUBJECT MARKS"<<"\n";
           cout<<"\t\t\t  ---------------------------------------"<<"\n\n";
           cout<<"\t\t\t       APPLIED ELECTRONICS   : ";
           cin>>marks[0];
           cout<<"\t\t\t       DATA SCIENCE   : ";
           cin>>marks[1];
           cout<<"\t\t\t       MECHANICAL AND SYSTEM ENGINEERING   : ";
           cin>>marks[2];
           cout<<"\t\t\t       OBJECT ORIENTED PROGRAMMING   : ";
           cin>>marks[3];
           cout<<"\n\t\t\t    RECORD SAVED SUCCESSFULLY !!!\n";

           }
           else if(stream=='P')
           {
               cout<<"\t\t\t  SELECTED BRANCH IS PRODUCTION..."<<"\n";
              cout<<"\t\t\t  ---------------------------------------"<<"\n";
           cout<<"\t\t\t        ENTER THE SUBJECT MARKS"<<"\n";
           cout<<"\t\t\t  ---------------------------------------"<<"\n\n";
           cout<<"\t\t\t       MANUFACTURING TECHNOLOGY   : ";
           cin>>marks[0];
           cout<<"\t\t\t       KINEMATICS & THERMOFLUID MACHINES   : ";
           cin>>marks[1];
           cout<<"\t\t\t       MECHANICAL DESIGN   : ";
           cin>>marks[2];
           cout<<"\t\t\t       OBJECT ORIENTED PROGRAMMING   : ";
           cin>>marks[3];
           cout<<"\n\t\t\t    RECORD SAVED SUCCESSFULLY !!!\n";

           }
           else if(stream=='E')
           {
               cout<<"\t\t\t  SELECTED BRANCH IS E&TC..."<<"\n";
              cout<<"\t\t\t  ---------------------------------------"<<"\n";
           cout<<"\t\t\t        ENTER THE SUBJECT MARKS"<<"\n";
           cout<<"\t\t\t  ---------------------------------------"<<"\n\n";
           cout<<"\t\t\t       DATA STRUCTURES   : ";
           cin>>marks[0];
           cout<<"\t\t\t     COMPUTER ARCHITECTURE AND OPERATING SYSTEMS   : ";
           cin>>marks[1];
           cout<<"\t\t\t       COMMUNICATION ENGINEERING   : ";
           cin>>marks[2];
           cout<<"\t\t\t       OBJECT ORIENTED PROGRAMMING   : ";
           cin>>marks[3];
           cout<<"\n\t\t\t    RECORD SAVED SUCCESSFULLY !!!\n";

           }
           else if(stream=='S')
           {
               cout<<"\t\t\t  SELECTED BRANCH IS INSTRUMENTATION..."<<"\n";
           cout<<"\t\t\t  ---------------------------------------"<<"\n";
           cout<<"\t\t\t        ENTER THE SUBJECT MARKS"<<"\n";
           cout<<"\t\t\t  ---------------------------------------"<<"\n\n";
           cout<<"\t\t\t       DATA STRUCTURES   : ";
           cin>>marks[0];
           cout<<"\t\t\t     COMPUTER ARCHITECTURE AND OPERATING SYSTEMS   : ";
           cin>>marks[1];
           cout<<"\t\t\t       SIGNAL AND IMAGE PROCESSING   : ";
           cin>>marks[2];
           cout<<"\t\t\t       OBJECT ORIENTED PROGRAMMING   : ";
           cin>>marks[3];
           cout<<"\n\t\t\t    RECORD SAVED SUCCESSFULLY !!!\n";

           }

           else {
                cout<<"\t\t\t  SELECTED BRANCH IS COMMON SY..."<<"\n";
           cout<<"\t\t\t  ---------------------------------------"<<"\n";
           cout<<"\t\t\t        ENTER THE SUBJECT MARKS"<<"\n";
           cout<<"\t\t\t  ---------------------------------------"<<"\n\n";
           cout<<"\t\t\t       APPLIED ELECTRONICS           : ";
           cin>>marks[0];
           cout<<"\t\t\t       DATA SCIENCE                  : ";
           cin>>marks[1];
           cout<<"\t\t\t       MASE                          : ";
           cin>>marks[2];
           cout<<"\t\t\t       OBJECT ORIENTED PROGRAMMING   : ";
           cin>>marks[3];
           cout<<"\n\t\t\t    RECORD SAVED SUCCESSFULLY !!!\n";

           }

           getper();
           getgrade();
      }
      void display_report()
      {
           cout<<"----------------------------------------";
           cout<<"---------------------------------------\n";
           cout<<"                        VISHWAKARMA INSTITUTE OF TECHNOLOGY\n\n";
           cout<<"                               STUDENT REPORT CARD\n";
           cout<<"----------------------------------------";
           cout<<"---------------------------------------\n\n";
           cout<<"                         ------------------------\n";
           cout<<"                             PERSONAL DETAILS\n";
           cout<<"                         ------------------------\n\n";
           cout<<"NAME: "<<name<<"\t\t";
           cout<<"YEAR OF STUDY: "<<sclass<<"\t";
           //cout<<"BRANCH:"<<stream<<"\t";
            if(stream=='C')
           {
               cout<<"BRANCH : "<<"COMPUTER"<<"\t";
           }
           else if(stream=='M')
           {
                cout<<"BRANCH: "<<"MECHANICAL"<<"\t";
           }
           else if(stream=='I')
           {
                cout<<"BRANCH: "<<"IT"<<"\t";
           }
            else if(stream=='P')
           {
                cout<<"BRANCH: "<<"PRODUCTION"<<"\t";
           }
           else if(stream=='E')
           {
                cout<<"BRANCH: "<<"E&TC"<<"\t";
           }
           else if(stream=='S')
           {
                cout<<"BRANCH: "<<"INSTRUMENTATION"<<"\t";
           }
           else{
            cout<<"BRANCH: "<<"COMMON SY"<<"\t";
           }
           cout<<"DIV: "<<div<<"\n";
           cout<<"ROLL NO: "<<rno<<"\n";
           cout<<"DATE OF BIRTH: "<<date<<"\n";

           cout<<"FATHERS NAME: "<<fname<<"\t";
           cout<<"MOTHERS NAME: "<<mname<<"\n\n";
           cout<<"                        ----------------------------\n";
           cout<<"                            ACADEMIC PERFORMANCE\n";
           cout<<"                        ----------------------------\n\n";
           cout<<"                 -------------------------------------------------\n";
           cout<<"                     SUBJECTS                             MARKS\n";
           cout<<"                 -------------------------------------------------\n";
           if(stream=='C')
           {

               cout<<"\t\tDATA STRUCTURES                            : "<<marks[0]<<"\n";
               cout<<"\t\tCOMPUTER ARCHITECHURE & OPERATING SYSTEMS  : "<<marks[1]<<"\n";
               cout<<"\t\tDATA COMUNICATION AND NETWORKS             : "<<marks[2]<<"\n";
               cout<<"\t\tOBJECT ORIENTED PROGRAMMING                : "<<marks[3]<<"\n";

           }
           else if(stream=='M')
           {

               cout<<"\t\tFLUID ENGINEERING                          : "<<marks[0]<<"\n";
               cout<<"\t\tMACHINE DESIGN                             : "<<marks[1]<<"\n";
               cout<<"\t\tTHERMODYNAMICS                             : "<<marks[2]<<"\n";
               cout<<"\t\tANALYSIS&SIMULATION OF MACHINE & MECHANISMS: "<<marks[3]<<"\n";

           }
           else if(stream=='I')
           {
               cout<<"\t\tAPPLIED ELECTRONICS                         : "<<marks[0]<<"\n";
               cout<<"\t\tDATA SCIENCE                                : "<<marks[1]<<"\n";
               cout<<"\t\tMECHANICAL AND SYSTEM ENGINEERING           : "<<marks[2]<<"\n";
               cout<<"\t\tOBJECT ORIENTED PROGRAMMING                 : "<<marks[3]<<"\n";

           }
           else if(stream=='P')
           {
               cout<<"\t\tMANUFACTURING TECHNOLOGY                    : "<<marks[0]<<"\n";
               cout<<"\t\tKINEMATICS & THERMOFLUID MACHINES           : "<<marks[1]<<"\n";
               cout<<"\t\tMECHANICAL DESIGN                           : "<<marks[2]<<"\n";
               cout<<"\t\tOBJECT ORIENTED PROGRAMMING                 : "<<marks[3]<<"\n";

           }
           else if(stream=='E')
           {
               cout<<"\t\tDATA STRUCTURES                              : "<<marks[0]<<"\n";
               cout<<"\t\tCOMPUTER ARCHITECTURE AND OPERATING SYSTEMS  : "<<marks[1]<<"\n";
               cout<<"\t\tCOMMUNICATION ENGINEERING                    : "<<marks[2]<<"\n";
               cout<<"\t\tOBJECT ORIENTED PROGRAMMING                  : "<<marks[3]<<"\n";

           }
           else if(stream=='S')
           {
               cout<<"\t\tDATA STRUCTURES                              : "<<marks[0]<<"\n";
               cout<<"\t\tCOMPUTER ARCHITECTURE AND OPERATING SYSTEMS  : "<<marks[1]<<"\n";
               cout<<"\t\tSIGNAL AND IMAGE PROCESSING                  : "<<marks[2]<<"\n";
               cout<<"\t\tOBJECT ORIENTED PROGRAMMING                  : "<<marks[3]<<"\n";

           }
           else {

           cout<<"\t\tAPPLIED ELECTRONICS                           : "<<marks[0]<<"\n";
           cout<<"\t\tDATA SCIENCE                                  : "<<marks[1]<<"\n";
           cout<<"\t\tMECHANICAL AND SYSTEM ENGINEERING             : "<<marks[2]<<"\n";
           cout<<"\t\tOBJECT ORIENTED PROGRAMMING                   : "<<marks[3]<<"\n\n";

           }

           cout<<"\n                -------------------        ------------\n";
           cout<<"                 PERCENTAGE: "<<per<<"%"<<"           "<<"GRADE: "<<grade<<"\n";
           cout<<"                -------------------        ------------\n\n";

           cout<<"----------------------------------------";
           cout<<"---------------------------------------\n";
      }
      void display_all()
      {
           cout<<"\t\tNAME: "<<name<<"\n";
           cout<<"\t\tFATHER NAME: "<<fname<<"\t"<<"MOTHER NAME: "<<mname<<"\n";
           cout<<"\t\tROLL NO: "<<rno<<"\t\t"<<"SECURE CODE: "<<sec_code<<"\n";
           cout<<"\t\tYEAR OF STUDY: "<<sclass<<"\t"<<"DIV: "<<div<<"\t\n";
           //cout<<"\t\tBRANCH: "<<stream<<"\n";

          if(stream=='C')
           {
               cout<<"\t\tBRANCH : "<<"COMPUTER"<<"\t";
           }
           else if(stream=='M')
           {
                cout<<"\t\tBRANCH: "<<"MECHANICAL"<<"\t";
           }
           else if(stream=='I')
           {
                cout<<"\t\tBRANCH: "<<"IT"<<"\t";
           }
            else if(stream=='P')
           {
                cout<<"\t\tBRANCH: "<<"PRODUCTION"<<"\t";
           }
           else if(stream=='E')
           {
                cout<<"\t\tBRANCH: "<<"E&TC"<<"\t";
           }
           else if(stream=='S')
           {
                cout<<"\t\tBRANCH: "<<"INSTRUMENTATION"<<"\t";
           }
           else{
            cout<<"\t\tBRANCH: "<<"COMMON SY"<<"\t";
           }

           cout<<"\n\t\t                     MARKS"<<"\n\n";
           if(stream=='C')
           {
               cout<<"\t\t        DS\tCAOS\tDCAN\tOOP"<<"\n";
           cout<<"\t\t        "<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<marks[3]<<"\n\n";
           cout<<"\t\tPERCENTAGE: "<<per<<"%\t\t"<<"GRADE: "<<grade<<"\n";
           }
           else if(stream=='M')
           {
                cout<<"\t\t        FE\tMD\tTHER\tASMM"<<"\n";
           cout<<"\t\t        "<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<marks[3]<<"\n\n";
           cout<<"\t\tPERCENTAGE: "<<per<<"%\t\t"<<"GRADE: "<<grade<<"\n";
           }
           else if(stream=='I')
           {
                cout<<"\t\t        AE\tDS\tMASE\tOOP"<<"\n";
           cout<<"\t\t        "<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<marks[3]<<"\n\n";
           cout<<"\t\tPERCENTAGE: "<<per<<"%\t\t"<<"GRADE: "<<grade<<"\n";
           }
            else if(stream=='P')
           {
                cout<<"\t\t        MT\tKTFM\tMD\tOOP"<<"\n";
           cout<<"\t\t        "<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<marks[3]<<"\n\n";
           cout<<"\t\tPERCENTAGE: "<<per<<"%\t\t"<<"GRADE: "<<grade<<"\n";
           }
           else if(stream=='E')
           {
                cout<<"\t\t        DS\tCAOS\tCE\tOOP"<<"\n";
           cout<<"\t\t        "<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<marks[3]<<"\n\n";
           cout<<"\t\tPERCENTAGE: "<<per<<"%\t\t"<<"GRADE: "<<grade<<"\n";
           }
           else if(stream=='S')
           {
                cout<<"\t\t        DS\tCAOS\tSIP\tOOP"<<"\n";
           cout<<"\t\t        "<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<marks[3]<<"\n\n";
           cout<<"\t\tPERCENTAGE: "<<per<<"%\t\t"<<"GRADE: "<<grade<<"\n";
           }
           else{
           cout<<"\t\t        AE\tDS\tMASE\tOOP"<<"\n";
           cout<<"\t\t        "<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<marks[3]<<"\n\n";
           cout<<"\t\tPERCENTAGE: "<<per<<"%\t\t"<<"GRADE: "<<grade<<"\n";
           }

      }

      void check_list()
      {
           cout<<"\t   "<<per<<" % \t"<<name<<"\n";

      }

      friend void del();
      friend void modify();
      friend void search();
      friend void search_student();
      friend void sort();
      friend void sortmark();
      friend void checklist();
      friend void sortper();
};


void add()
{
     STUDENT s;
     ofstream f("Record.txt",ios::binary|ios::app);
     s.enter();
     f.write((char*)&s,sizeof(s));
     f.close();
}


void dispall()
{
     STUDENT s;
     ifstream f("Record.txt");
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\t\t\t  ---------------------------"<<"\n";
         cout<<"\t\t\t     LIST OF CLASS RECORDS"<<"\n";
         cout<<"\t\t\t  ---------------------------"<<"\n\n";
         while(f.read((char*)&s,sizeof(s)))
         {
             s.display_all();
             cout<<"\n\n\n\t\t---------------------------------------------\n\n\n";
         }
     }
     f.close();
}


void del()
{
     STUDENT s;
     ifstream f1("Record.txt");
     ofstream f2("Temp.txt",ios::binary);
     int n,flag=0;
     if(!f1)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
         cin>>n;
         system("cls");
         while(f1.read((char*)&s,sizeof(s)))
         {
             if(n!=s.rno)
             {
                 f2.write((char*)&s,sizeof(s));
                 flag=1;
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
         else
         {
              cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
              cout<<"THE RECORD WAS DELETED SUCCESSFULLY";
              cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f1.close();
     f2.close();
     remove("Record.txt");
     rename("Temp.txt","Record.txt");
}


void modify()
{
     STUDENT s;
     ifstream f1("Record.txt");
     ofstream f2("Temp.txt",ios::binary);
     int n,flag=0;
     if(!f1)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
         cin>>n;
         system("cls");
         while(f1.read((char*)&s,sizeof(s)))
         {
             if(n==s.rno)
             {
                 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
                 cout<<"ENTER THE MODIFIED DETAILS OF THE STUDENT";
                 Sleep(1000);
                 system("cls");
                 s.enter();

                 f2.write((char*)&s,sizeof(s));
                 flag=1;
             }
             else
             {
                 f2.write((char*)&s,sizeof(s));
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f1.close();
     f2.close();
     remove("Record.txt");
     rename("Temp.txt","Record.txt");
}


void search()
{
     STUDENT s;
     ifstream f("Record.txt");
     int n,flag=0;
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
         cout<<"ENTER THE ROLL NUMBER OF THE STUDENT: ";
         cin>>n;
         system("cls");
         while(f.read((char*)&s,sizeof(s)))
         {
             if(n==s.rno)
             {
                 flag=1;
                 s.display_report();
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f.close();
}


void search_student()
{
     STUDENT s;
     ifstream f("Record.txt");
     int n,flag=0;
     char a[5];
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         cout<<"\n\n\n\n\n\n\n\n\n\t\t\t";
         cout<<"ENTER YOUR ROLL NUMBER: ";
         cin>>n;
         cout<<"\n\t\t\t";
         cout<<"ENTER YOUR SECURE CODE: ";
         cin.ignore();
         cin.getline(a,5);
         system("cls");
         while(f.read((char*)&s,sizeof(s)))
         {
             if((n==s.rno) && (strcmp(a,s.sec_code)==0))
             {
                 flag=1;
                 s.display_report();
             }
         }
         if(flag==0)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
             cout<<"\n\n\n\n\n\n\n\n";
         }
     }
     f.close();
}


void sortper()
{
     STUDENT s,t[100],temp;
     ifstream f("Record.txt");
     int n=0;
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         {
             while(f.read((char*)&s,sizeof(s)))
             {
                 t[n++]=s;
             }
         }
         f.close();

         for(int i=0;i< n; i++)
         {
             for(int j=0;j<n-1;j++)
             {
                 if(t[j].per<t[j+1].per)
                 {
                     temp=t[j];
                     t[j]=t[j+1];
                     t[j+1]=temp;
                 }
             }
         }


         cout<<"\t\t\t  -----------------------------------"<<"\n";
         cout<<"\t\t\t     LIST OF CLASS RECORDS(SORTED)"<<"\n";
         cout<<"\t\t\t  -----------------------------------"<<"\n\n";
         for(int i=0;i<n;i++)
         {
             t[i].display_all();
             cout<<"\n\n\n\t\t---------------------------------------------\n\n\n";
         }
         getch();
     }
}

void checklist()
{
     STUDENT s,t[100],temp;
     ifstream f("Record.txt");
     int n=0;
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         {
             while(f.read((char*)&s,sizeof(s)))
             {
                 t[n++]=s;
             }
         }
         f.close();

         for(int i=0;i< n; i++)
         {
             for(int j=0;j<n-1;j++)
             {
                 if(t[j].per<t[j+1].per)
                 {
                     temp=t[j];
                     t[j]=t[j+1];
                     t[j+1]=temp;
                 }
             }
         }


         cout<<"\t\t     -----------------------------------"<<"\n";
         cout<<"\t\t        LIST OF CLASS RECORDS(SORTED)"<<"\n";
         cout<<"\t\t     -----------------------------------"<<"\n";
         cout<<"\t\t"<<"---------------------------------------------"<<"\n";
         cout<<"\t\t"<<"   Sr. NO:"<<"\t"<<"PERCENTAGE"<<"\t"<<"NAME"<<"\n";
         cout<<"\t\t"<<"---------------------------------------------"<<"\n\n";
         for(int i=0;i<n;i++)
         {
             cout<<"\t\t   ";
             cout<<i+1<<". "<<"\t";
             t[i].check_list();
             cout<<"\n\t\t---------------------------------------------\n\n\n";
         }
         getch();
     }
}







void sortmark()
{
     STUDENT s,t[100],temp;
     ifstream f("Record.txt");
     int x,y,n=0;
     //char ch[25];
     if(!f)
     {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
         cout<<"\n\n\n\n\n\n\n\n";
     }
     else
     {
         {
             while(f.read((char*)&s,sizeof(s)))
             {
                 t[n++]=s;
             }
         }
         f.close();

         cout<<"\n\n\n\n\n\n";
         cout<<"\t\t\t  ----------------------"<<"\n";
         cout<<"\t\t\t     SELECT A SUBJECT"<<"\n";
         cout<<"\t\t\t  ----------------------"<<"\n";
         cout<<"\t\t\t       1. AE"<<"\n";
         cout<<"\t\t\t       2. DS"<<"\n";
         cout<<"\t\t\t       3. MASE"<<"\n";
         cout<<"\t\t\t       4. OOP"<<"\n\n";
         cout<<"\t\t\t     ENTER YOUR OPTION: ";
         cin>>y;
         system("cls");
         cout<<endl;
         if(y>5)
         {
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION !";
             cout<<"\n\n\n\n\n\n\n\n";
         }
         else
         x=y-1;

         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n-1;j++)
             {
                 if(t[j].marks[x]<t[j+1].marks[x])
                 {
                     temp=t[j];
                     t[j]=t[j+1];
                     t[j+1]=temp;
                 }
             }
         }


         cout<<"\n\n\n\n\n\n";
         cout<<"\t\t\t"<<"-------------------------------"<<"\n";
         cout<<"\t\t\t"<<"   SL. NO:"<<"\t"<<"MARKS"<<"\t"<<"NAME"<<"\n";
         cout<<"\t\t\t"<<"-------------------------------"<<"\n\n";
         for(int i=0;i<5;++i)
         {
             cout<<"\t\t\t   ";
             cout<<i+1<<". "<<"\t\t";
             cout<<t[i].marks[x]<<"\t"<<t[i].name;
             cout<<endl;
         }
         cout<<"\n\n\n";
     }
}

void statistics()
{
     int n;
     cout<<"\n\n\n\n\n\n\n";
     cout<<"\t\t              ----------------"<<"\n";
     cout<<"\t\t                 STATISTICS"<<"\n";
     cout<<"\t\t              ----------------"<<"\n";
     cout<<"\t\t   1. VIEW DESCENDING ORDER OF PERCENTAGE"<<"\n\n";
     cout<<"\t\t   2. CHECK TOPPERS LIST WITH PERCENTAGE"<<"\n\n";
     //cout<<"\t\t   3. VIEW TOP FIVE MARKS IN EACH SUBJECT"<<"\n\n\n";
     cout<<"\t\t           ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: sortper();
                      break;
              case 2: checklist();
                      break;
              case 3: sortmark();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
}









void Intro()
{

     system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tREPORT CARD MANAGEMENT SYSTEM";
     Sleep(2000);
     system("cls");
}


void menu()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n";
     cout<<"\t\t\t      ---------------"<<"\n";
     cout<<"\t\t\t         MAIN MENU"<<"\n";
     cout<<"\t\t\t      ---------------"<<"\n\n\n";
     cout<<"\t\t\t     SELECT YOUR DESIGNATION"<<"\n\n";
     cout<<"\t\t\t--------------------------"<<"\n";
     cout<<"\t\t               1. ADMIN / TEACHER\n";
     cout<<"\t\t               2. STUDENT\n";
     cout<<"\t\t               3. PUBLIC\n";
     cout<<"\t\t\t--------------------------"<<"\n\n";
     cout<<"\t\t             Enter 4 TO EXIT "<<"\n\n\n";
     cout<<"\t\t       ENTER AN OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: system("cls");
                      Password();
                      break;
              case 2: Student();
                      break;
              case 3: Public();
                      break;
              case 4: exit(0);
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
                      system("PAUSE");
     }
     goto start;
}


void Teacher()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n";
     cout<<"\t\t\t  ---------------------------"<<"\n";
     cout<<"\t\t\t     ADMIN / TEACHER MENU"<<"\n";
     cout<<"\t\t\t  ---------------------------"<<"\n\n";
     cout<<"\t\t\t     1. ADD A NEW RECORD"<<"\n\n";
     cout<<"\t\t\t     2. SEARCH FOR A RECORD"<<"\n\n";
     cout<<"\t\t\t     3. MODIFY A RECORD"<<"\n\n";
     cout<<"\t\t\t     4. DELETE A RECORD"<<"\n\n";
     cout<<"\t\t\t     5. DISPLAY ALL THE RECORDS"<<"\n\n";
     cout<<"\t\t\t     6. CLASS STATISTICS"<<"\n\n";
     cout<<"\t\t\t     7. GO TO MAIN MENU"<<"\n\n";
     cout<<"\t\t\t     8. EXIT"<<"\n\n\n";
     cout<<"\t\t\t     ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: add();
                      break;
              case 2: search();
                      break;
              case 3: modify();
                      break;
              case 4: del();
                      break;
              case 5: dispall();
                      break;
              case 6: statistics();
                      break;
              case 7: menu();
                      break;
              case 8: exit(0);
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}


void Student()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n\n";
     cout<<"\t\t\t -----------------------------"<<"\n";
     cout<<"\t\t\t         STUDENT MENU"<<"\n";
     cout<<"\t\t\t -----------------------------"<<"\n\n";
     cout<<"\t\t\t   1. SEARCH FOR YOUR RECORD"<<"\n\n";
     cout<<"\t\t\t   2. VIEW CLASS STATISTICS"<<"\n\n";
     cout<<"\t\t\t   3. GO TO MAIN MENU"<<"\n\n";
     cout<<"\t\t\t   4. EXIT"<<"\n\n\n";
     cout<<"\t\t\t   ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1:search_student();
                     break;
              case 2:statistics();
                     break;
              case 3:menu();
                     break;
              case 4:exit(0);
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}


void Public()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n";
     cout<<"\t\t\t-------------------------"<<"\n";
     cout<<"\t\t\t\tPUBLIC MENU"<<"\n";
     cout<<"\t\t\t-------------------------"<<"\n\n";
     cout<<"\t\t\t   1. VIEW CLASS STATISTICS"<<"\n\n";
     cout<<"\t\t\t   2. GO TO MAIN MENU"<<"\n\n";
     cout<<"\t\t\t   3. EXIT"<<"\n\n\n";
     cout<<"\t\t\t   ENTER AN OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: statistics();
                      break;
              case 2: menu();
                      break;
              case 3: exit(0);
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}


void Password()
{
     char pass[6];
     pass[5]='\0';
     int t=0;
     start:
     cout<<"\n\n\n\n\n\n\n\n\n\t\t\tENTER THE PASSWORD: ";
     for(int i=0;i<5;++i)
     {
             pass[i]=getch();
             cout<<"*";
     }
     cout<<"\n\n";
     if(strcmp(pass,"ADMIN")==0)
     {
         cout<<"\t\t\t      ACCESS GRANTED";
         Sleep(1000);
         system("cls");
         Teacher();
     }
     else
     {
         if(t==2)
         {
             cout<<"\t\t\t      ACCESS DENIED"<<"\n\n\n\n\n\n\n\n";
             system("PAUSE");
             system("cls");
             menu();
         }
         cout<<"\t\t\t      TRY AGAIN";
         ++t;
         Sleep(2000);
         system("cls");
         goto start;
     }
}







void SEQ()
{
     Intro();
     menu();
}









int main()
{
     system("title REPORT CARD MANAGEMENT SYSTEM");
     system("COLOR 30");
     SEQ();
     getch();
     return 0;
}

