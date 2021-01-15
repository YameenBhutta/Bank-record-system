
#include<conio.h>
#include<iostream>
#include<fstream>
#include<Windows.h>
#include<dos.h>
#include<cctype>
#include<sstream>
#include<string>
using namespace std;
bool check = true;
struct node    
{
 int ac_number;
 int cnic;
 int dbo;
 char name[20];
 char fname[20];
 int amount;
 node *next;
}*head,*lastptr;

void add()   
{
 node *p;
 p=new node;
 cout<<"Enter the account number:"<<endl;
 cin>>p->ac_number;
 fflush(stdin);
 cout<<"Enter the name:"<<endl;
 gets(p->name);
 fflush(stdin);
 cout<<"Enter the father name :"<<endl;
 gets(p->fname);
 fflush(stdin);
 cout<<"Enter the CNIC number:"<<endl;
 cin>>p->cnic;
 fflush(stdin);cout<<"Enter date of birth:"<<endl;
 cin>>p->dbo;
 fflush(stdin);
 cout<<"Enter the amount:"<<endl;
 cin>>p->amount;
 fflush(stdin);
 p->next=NULL;

 if(check)
 {
  head = p;
  lastptr = p;
  check = false;
 }
 else
 {
  lastptr->next=p;
  lastptr=p;
 }
 cout<<endl<<"Recored add succesfully............ ";
 getch();
}
void modify()   //modifies record of student//
{
 node *ptr;
 node *prev=NULL;
 node *current=NULL;
 int ac_number;
 cout<<"Enter account for search:"<<endl;
 cin>>ac_number;
 prev=head;
 current=head;
 while(current->ac_number!=ac_number)
 {
  prev=current;
  current=current->next;
 }
 ptr=new node;
 fflush(stdin);
 cout<<"Enter account number :"<<endl;
 cin>>ptr->ac_number;
 fflush(stdin);
 cout<<"Enter the name :"<<endl;
 gets(ptr->name);
 fflush(stdin);
 cout<<"Enter the father name :"<<endl;
 gets(ptr->fname);
 fflush(stdin);
 cout<<"Enter CNIC number :"<<endl;
 cin>>ptr->cnic;
 fflush(stdin);cout<<"Enter date of birth  :"<<endl;
 cin>>ptr->dbo;
 fflush(stdin);
 cout<<"Enter amount"<<endl;
 cin>>ptr->amount;
 fflush(stdin);
 prev->next=ptr;
 ptr->next=current->next;
 current->next=NULL;
 delete current;
 cout<<endl<<"Recored Updated succesfully..............";
 getch();
}
void search()   //searches record of student//
{
 node *prev=NULL;
 node *current=NULL;
 int ac_number;
 cout<<"Enter account number for searching:"<<endl;
 cin>>ac_number;
 prev=head;
 current=head;
 while(current->ac_number!=ac_number)
 {
  prev=current;
  current=current->next;
 }
 cout<<"\nname: ";
 puts(current->name);
 cout<<"\nfathername:";
 puts(current->fname);
  cout<<"\nAccount number:";
 cout<<current->ac_number;
 cout<<"\nCNIC number:";
 cout<<current->cnic;
 cout<<"\nDAte of birth:";
 cout<<current->dbo;
 cout<<"\nAmount:";
 cout<<current->amount;
 getch();
}
void del()    //deletes record of a student//
{
 node *ptr=NULL;
 node *prev=NULL;
 node *current=NULL;
 int ac_number;
 cout<<"Enter Account Number to Delete:"<<endl;
 cin>>ac_number;
 prev=head;
 current=head;
 while(current->ac_number!=ac_number)
 {
  prev=current;
  current=current->next;
 }
 prev->next = current->next;
 current->next=NULL;
 delete current;
 cout<<endl<<"Recored Deleted succesfully...............";
 getch();
}

int main()
{
 char x;
 cout<<""<<endl;
 cout<<"\t**             ** ****** *          ****      **    ***     *** ********       "<<endl;
 cout<<"\t**             ** *      *        **   **   **  **  ** *   * ** *              "<<endl;
 cout<<"\t**     ***     ** *      *       **        **    ** **  * *  ** *              "<<endl;
 cout<<"\t**   *** ***   ** ****   *        **       **    ** **   *   ** ******         "<<endl;
 cout<<"\t** ***     *** ** *      *         **  **   **  **  **       ** *              "<<endl;
 cout<<"\t***           *** ****** *******     ***      **    **       ** ********       "<<endl;
 cout<<""<<endl;
 cout<<""<<endl;
 cout<<""<<endl;
 cout<<"\t\t ********************************* \t\t\t"<<endl;
 cout<<"\t\t ********************************* \t\t\t"<<endl;
 cout<<"\t\t ****BANK RECORD sSYSTEM \t\t\t"<<endl;
 cout<<"\t\t ********************************* \t\t"<<endl;
 cout<<"\t\t ********************************* \t\t"<<endl;
 cout<<"\n\nPress Any Key To Continue . . . ."<<endl;
 getch();
 do
 {
  system("cls");
  cout<<"1--->Press '1' to add New record:"<<endl;
  cout<<"2--->Press '2' to search a record:"<<endl;
  cout<<"3--->Press '3' to modify a record:"<<endl;
  cout<<"4--->Press '4' to delete a record:"<<endl;
  cout<<"5--->Press '5' to exit:"<<endl;
  x=getch();
  if(x=='1')
  {
   system("cls");
   add();
  }
  else if(x=='2')
  {
   system("cls");
   search();
  }
  else if(x=='3')
  {
   system("cls");
   modify();
  }
  else if(x=='4')
  {
   system("cls");
   del();
  }
  else if(x=='5')
  {
   exit(0);
  }
  else
  {
  }
 }while(x != 27);
 getch();
}

