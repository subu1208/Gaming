#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char hch;
int count=0;
void timedelay()   //FOR DELAYING THE EXECUTION OF THE PROGRAM
{
 long int a,d;
 d=1;
 for(a=0;a<d;a++);
}
void timedelay2()  //FOR DELAYING THE EXECUTION OF THE PROGRAM
{
 long int a,d;
 d=1;
 for(a=0;a<d;a++);
}
void error(char err[40])
{
 for(int i=0;i<3;i++)
 {
  cout<<"           ";
  timedelay2();
  cout<<err;
  timedelay2();
  timedelay();
 }
}
void border()   //BORDER FOR PASSWORD PAGE
{
 cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
 cout<<"@                                                                               ";
 cout<<"@            @@@@@@@ @@@@@@@ @@@@@@@@@ @@@@@@@@@ @      @ @@@@@@@               ";
 cout<<"@            @       @     @ @   @   @     @     @@     @ @                     ";
 cout<<"@            @       @     @ @   @   @     @     @ @    @ @                     ";
 cout<<"@            @       @     @ @   @   @     @     @  @   @ @                     ";
 cout<<"@            @   @@@ @@@@@@@ @   @   @     @     @   @  @ @   @@@               ";
 cout<<"@            @     @ @     @ @   @   @     @     @    @ @ @     @               ";
 cout<<"@            @     @ @     @ @       @     @     @     @@ @     @               ";
 cout<<"@            @     @ @     @ @       @     @     @      @ @     @               ";
 cout<<"@            @@@@@@@ @     @ @       @ @@@@@@@@@ @      @ @@@@@@@               ";
 cout<<"@                                                                               ";
 cout<<"@            @@@@@@@ @@@@@@@ @       @ @@@@@@@@@ @@@@@@@  @@@@@@@               ";
 cout<<"@            @       @       @@      @     @     @        @     @               ";
 cout<<"@            @       @       @ @     @     @     @        @     @               ";
 cout<<"@            @       @       @  @    @     @     @        @     @               ";
 cout<<"@            @       @@@@@@@ @   @   @     @     @@@@@@@  @@@@@@@               ";
 cout<<"@            @       @       @    @  @     @     @        @ @                   ";
 cout<<"@            @       @       @     @ @     @     @        @  @                  ";
 cout<<"@            @       @       @      @@     @     @        @   @                 ";
 cout<<"@            @@@@@@@ @@@@@@@ @       @     @     @@@@@@@  @    @                ";
 cout<<"@                                                                               ";
 cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
}
void timedelay3()
{
 long int a;
 for(a=0;a<1;a++);
}
void space(int s) //FOR DELAYING THE EXECUTION OF THE PROGRAM
{
 int i;
 for(i=0;i<s;i++)
 cout<<' ';
}
void homepage()  //MODULE FOR OPENING PAGE
{
 clrscr;
 cout<<"                                |WELCOME|                              \n";
 cout<<"-------------------------------------------------------------------------";
 cout<<"                                         |TO|                          \n";
 cout<<"-------------------------------------------------------------------------";
 cout<<"                                   |GAMING SYSYTEM|                    \n";
 cout<<"\n          ================================================.            ";
 cout<<"\n               .-.   .-.     .--.                         |            ";
 cout<<"\n              | OO| | OO|   / _.-' .-.   .-.  .-.   .''.  |            ";
 cout<<"\n	      |   | |   |    \  '-. '-'   '-'  '-'   '..'  |                  ";
 cout<<"\n              '^^^' '^^^'    '--'                         |            ";
 cout<<"\n          ===============.  .-.  .================.  .-.  |            ";
 cout<<"\n                         | |   | |                |  '-'  |            ";
 cout<<"\n                         | |   | |                |       |            ";
 cout<<"\n                         | ':-:' |                |  .-.  |            ";
 cout<<"\n          l42            |  '-'  |                |  '-'  |            ";
 cout<<"\n          ==============='       '================'       |            ";
 timedelay3();
 cout<<endl;
 cout<<"\nPress any key to continue..." <<endl;
 getche();
}
class games   //GAMES CLASS MODULE
{
 int gameno;
 char gamename[20];
 char gamedetails[200];
 char platform[20];
 public:
 void create();
 void search();
 void update();
 void del();
}
gam;   //CLASS VARIABLE
void games::create()   //CREATE
{
 ofstream f;
 ifstream f1;
 f.open("games.dat",ios::binary|ios::app);
 if(!f)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 games gam;
 char ch;
 cout<<"\nEnter the details of the games...\n";
 do
 {
  cout<<"\nEnter Game number: ";
  cin>>gam.gameno;
  int count1=0;
  check1:
  cout<<" ";
  cout<<"\nEnter Game name: ";
  gets(gam.gamename);
  for(count1=0;count1<=strlen(gam.gamename)-1;count1++)
  {
	if(!isalpha(gam.gamename[count1])&&gam.gamename[count1]!=' ')   //Game Details Validation
	{
	 cout<<"\nPlease enter the details of the game using letters only: ";
	 goto check1;
	}
  }
  int count2=0;
  check2:
  cout<<" ";
  cout<<"\nEnter Game details: ";
  gets(gam.gamedetails);
  for(count2=0;count2<=strlen(gam.gamedetails)-1;count2++)
  {
	if(!isalpha(gam.gamedetails[count2])&&gam.gamedetails[count2]!=' ')   //Game Details Validation
	{
	 cout<<"\nPlease enter the details of the game using letters only: ";
	 goto check2;
	}
  }
  int count3=0;
  check3:
  cout<<" ";
  cout<<"\nEnter Game Platform: ";
  gets(gam.platform);
  for(count3=0;count3<=strlen(gam.platform)-1;count3++)
  {
	if(!isalpha(gam.platform[count3])&&gam.platform[count3]!=' ')   //Game Application Validation
	{
	 cout<<"\nPlease enter the platform of the game using letters only: ";
	 goto check3;
	}
  }
  f.write((char*)&gam,sizeof(gam));
  cout<<"\nThe Game has been successfully created.\n"<<endl;
  cout<<"\nDo you want a New Game?(y/n): ";
  cin>>ch;
 }
 while(ch=='y'||ch=='Y');
}
void games::search()   //SEARCH
{
 clrscr();
 int mode,found1=0,found2=0,found3=0;
 long int g_no;
 char g_name[30];   //Game Name
 char g_app[20];
 ifstream g;
 g.open("games.dat",ios::binary|ios::app);
 if(!g)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 clrscr();
 cout<<"\nPlease select the mode by which you want to search.";
 cout<<"\n";   //To allow the user to search according to his/her needs
 cout<<"\n1.GAME NUMBER";
 cout<<"\n2.GAME NAME";
 cout<<"\n3.GAME PLATFORM";
 cout<<"\nEnter your choice: ";
 cin>>mode;
 clrscr();
 if(mode==1)
 {
  cout<<"\nENTER GAME NUMBER: ";
  cin>>g_no;
  while(g.read((char*)&gam,sizeof(gam)))
  {
	if(gam.gameno==g_no)
	{
	 found1=1;
	 cout<<"\nTHE GAME EXISTS.";
	 cout<<"\nTHE DETAILS OF THE GAME ARE: ";
	 cout<<"\nGAME NUMBER: "<<gam.gameno;
	 cout<<"\nGAME NAME: "<<gam.gamename;
	 cout<<"\nGAME DETAILS: "<<gam.gamedetails;
	 cout<<"\nGAME PLATFORM: "<<gam.platform;
	}
  }
  if(found1==0)
  cout<<"\nTHE GAME WITH THE GIVEN NUMBER DOES NOT EXIST.";
 }
 else if(mode==2)
 {
  clrscr();
  cout<<"\nENTER GAME NAME: ";
  cin>>g_name;
  while(g.read((char*)&gam,sizeof(gam)))
  {
	if(strcmpi(g_name,gam.gamename)==0)
	{
	 found2=1;
	 cout<<"\nTHE GAME EXISTS.";
	 cout<<"\nTHE DETAILS OF THE GAME ARE: ";
	 cout<<"\nGAME NUMBER: "<<gam.gameno;
	 cout<<"\nGAME NAME: "<<gam.gamename;
	 cout<<"\nGAME DETAILS: "<<gam.gamedetails;
	 cout<<"\nGAME PLATFORM: "<<gam.platform;
	}
  }
  if(found2==0)
  cout<<"\nTHE GAME WITH THE GIVEN NAME DOES NOT EXIST.\n";
 }
 else if(mode==3)
 {
  clrscr();
  cout<<"\nENTER GAME PLATFORM: ";
  gets(g_app);
  while(g.read((char*)&gam,sizeof(gam)));
  {
	if(strcmpi(g_app,gam.platform)==0)
	{
	 found3=1;
	 cout<<"\nTHE GAME EXISTS: ";
	 cout<<"\nTHE DETAILS OF THE GAME ARE: ";
	 cout<<"\nGAME NUMBER: "<<gam.gameno;
	 cout<<"\nGAME NAME: "<<gam.gamename;
	 cout<<"\nGAME DETAILS: "<<gam.gamedetails;
	 cout<<"\nGAME PLATFORM: "<<gam.platform;
	}
  }
  if(found3==0)
  cout<<"\nTHE GAME WITH THE GIVEN PLATFORM DOES NOT EXIST.";
 }
 else
 {
  clrscr();
  cout<<"\nYou have entered an invalid choice.";
  exit(0);
  g.close();
 }
}
void games::update()   //UPDATE
{
 int gameno1;
 char gamename1[20];
 char gamedetails1[200];
 char platform1[20];
 ifstream g;
 ofstream m;          //For writing a file
 g.open("games.dat",ios::binary);
 m.open("mod.dat",ios::binary|ios::app);
 if(!g||!m)
 {
  cerr<<"\nCannot Open";
  exit(1);
 }
 cout<<"\nYou have chosen to update a GAME. ";
 int z=0;
 long number;
 cout<<"\nPlease enter the game number of the file that needs to be updated: ";
 cin>>number;
 while(g.read((char*)&gam,sizeof(gam)))
 {
  if(gam.gameno==number)
  {
	cout<<"\nOld values are: ";
	cout<<"\nGAME NUMBER: "<<gam.gameno;
	cout<<"\nGAME NAME: " <<gam.gamename;
	cout<<"\nGAME DETAILS: "<<gam.gamedetails;
	cout<<"\nGAME PLATFORM: "<<gam.platform;
	cout<<"\nENTER THE VALUES TO BE UPDATED: \n";
	cout<<"\nEnter Game number: ";
	cin>>gameno1;
	cout<<"\nEnter Game name: ";
	gets(gamename1);
	cout<<"\nEnter Game Details: ";
	gets(gamedetails1);
	cout<<"\nEnter Game platform: ";
	gets(platform1);
	gam.gameno=gameno1;
	strcpy(gam.gamename,gamename1);
	strcpy(gam.gamedetails,gamedetails1);
	strcpy(gam.platform,platform1);
	m.write((char*)&gam,sizeof(gam));
	z=1;
  }
  else
  m.write((char*)&gam,sizeof(gam));
 }
 g.close();
 m.close();
 remove("games.dat");
 rename("mod.dat","games.dat");
 if(z!=0)
 cout<<"\nThe Game details have been successfully updated.";
 else
 cout<<"\nThe Game details have NOT been found.";
 ifstream f;
 f.open("games.dat",ios::binary);
 if(!f)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 cout<<"\nGAME NUMBER: "<<gameno1;
 cout<<"\nGAME NAME: "<<gamename1;
 cout<<"\nGAME DETAILS: "<<gamedetails1;
 cout<<"\nGAME PLATFORM: "<<platform1;
 f.close();
}
void games::del()   //DELETE
{
 ifstream f;
 ofstream g;
 f.open("games.dat",ios::binary|ios::app);
 g.open("mod.dat",ios::binary|ios::app);
 if(!f||!g)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 int found=0;
 int no;
 cout<<"\nPlease enter the number of the game you want to delete: ";
 cin>>no;
 while(f.read((char*)&gam,sizeof(gam)))
 {
  if(no==gam.gameno)
  {
	found=1;
  }
  else
  g.write((char*)&gam,sizeof(gam));
 }
 f.close();
 g.close();
 remove("games.dat");
 rename("mod.dat","games.dat");
 if(found!=0)
 cout<<"\nThe game you have chosen has been deleted.\n";
 else
 cout<<"\nThe game you have chosen has NOT been deleted.\n";
 ifstream m;
 m.open("games.dat",ios::binary|ios::app);
 if(!m)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 m.close();
}
class subscriber   //SUBSCRIBER CLASS MODULE
{
 long int subscriberno;
 char subscribername[20];
 char subscriberemailid[40];
 char subscriberstatus[10];
 char newsletterstatus[10];
 public:
 void create();
 void search();
 void update();
 void del();
}sub;
void subscriber::create()   //CREATE
{
 ofstream f1;
 f1.open("subscriber.dat",ios::binary|ios::app);
 if(!f1)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 subscriber sub;
 char ch;
 do
 {
  cout<<" ";
  cout<<"\nEnter the Subscriber number: ";
  cin>>sub.subscriberno;
  int c1=0;
  start1:    //Goto Variable
  cout<<" ";
  cout<<"\nEnter Subscriber Name: ";
  gets(sub.subscribername);
  for(c1=0;c1<strlen(sub.subscribername)-1;c1++)
  {
	if(!isalpha(sub.subscribername[c1])&&sub.subscribername[c1]!=' ')   //Subscriber Name
	{
	 cout<<"\nPlease enter the name of the Subscriber using letters only: ";
	 goto start1;
	}
  }
  cout<<"\nEnter Subscriber Email ID: ";
  gets(sub.subscriberemailid);
  int c3=0;
  start3:   //Goto variable
  cout<<" ";
  cout<<"\nEnter the status of the subscriber(Active/CLosed): ";
  gets(sub.subscriberstatus);
  for(c3=0;c3<strlen(sub.subscriberstatus)-1;c3++)
  {
	if(strcmpi(sub.subscriberstatus,"active")==0||strcmpi(sub.subscriberstatus,"closed")==0)   //Subscriber Status Validation
	{
	 cout<<" ";
	}
	else
	{
	 cout<<"\nPlease enter the status of the subscriber using the 2 options given: ";
	 goto start3;
	}
  }
  int c4=0;
  start4:   //Goto Variable
  cout<<" ";
  cout<<"\nEnter the Status of the Newsletter(Sent/Returned): ";
  gets(sub.newsletterstatus);
  if(strcmpi(sub.newsletterstatus,"returned")==0)
  {
	count=1;
  }
  for(c4=0;c4<strlen(sub.newsletterstatus)-1;c4++)
  {
	if(strcmpi(sub.newsletterstatus,"sent")==0||strcmpi(sub.newsletterstatus,"returned")==0)
	{
	 cout<<" ";
	}
	else
	{
	 cout<<"\nPlease enter the newsletter status of the subscriber using the 2 options given: ";
	 goto start4;
	}
  }
  f1.write((char*)&sub,sizeof(sub));
  cout<<"\nDo you want to create a NEW SUBSCRIBER?(y/n):";
  cin>>ch;
 }
 while(ch=='y'||ch=='Y');
}
void subscriber::update()   //UPDATE
{
 int subscriberno1;
 char subscribername1[20];
 char subscriberemailid1[40];
 char subscriberstatus1[10];
 char newsletterstatus1[10];
 ifstream subfile;
 ofstream tsubfile;
 subfile.open("subscriber.dat",ios::binary);
 tsubfile.open("tsubscriber.dat",ios::binary|ios::app);
 if(!subfile||!tsubfile)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 cout<<"\nYou have chosen to update a subscriber.";
 int flag=0;
 long usubscribernumber;
 cout<<"\nPlease enter the Subscriber Number of the file that needs to be updated: ";
 cin>>usubscribernumber;
 while(subfile.read((char*)&sub,sizeof(sub)))
 {
  if(sub.subscriberno==usubscribernumber)
  {
	cout<<"\nOld values are:\n";
	cout<<"\nSUBSCRIBER NUMBER: "<<sub.subscriberno<<"\n";
	cout<<"\nSUBSCRIBER NAME: "<<sub.subscribername<<"\n";
	cout<<"\nSUBSCRIBER EMAIL ID: "<<sub.subscriberemailid<<"\n";
	cout<<"\nSUBSCRIBER STATUS: "<<sub.subscriberstatus<<"\n";
	cout<<"\nNEWSLETTER STATUS: "<<sub.newsletterstatus<<"\n";
	cout<<"\nENTER THE VALUES TO BE UPDATED:\n";
	cout<<"\nEnter Subscriber Number: ";
	cin>>subscriberno1;
	cout<<"\nEnter Subscriber Name: ";
	gets(subscribername1);
	cout<<"\nEnter Email ID: ";
	gets(subscriberemailid1);
	cout<<"\nEnter Subscriber Status (Active/Closed): ";
	gets(subscriberstatus1);
	cout<<"\nEnter Newsletter Status (Sent/Returned): ";
	gets(newsletterstatus1);
	sub.subscriberno=subscriberno1;
	strcpy(sub.subscribername,subscribername1);
	strcpy(sub.subscriberemailid,subscriberemailid1);
	strcpy(sub.subscriberstatus,subscriberstatus1);
	strcpy(sub.newsletterstatus,newsletterstatus1);
	tsubfile.write((char*)&sub,sizeof(sub));
	flag=1;
  }
  else
  tsubfile.write((char*)&sub,sizeof(sub));
 }
 subfile.close();
 tsubfile.close();
 remove("subscriber.dat");
 rename("tsubscriber.dat","subscriber.dat");
 if(flag!=0)
 cout<<"\nThe subscriber details have been successfully updated.";
 else
 cout<<"\nThe subscriber details have NOT been found.";
 ifstream f;
 f.open("subscriber.dat",ios::binary);
 if(!f)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 cout<<"\nSUBSCRIBER NUMBER: "<<subscriberno1<<"\n";
 cout<<"\nSUBSCRIBER NAME: "<<subscribername1<<"\n";
 cout<<"\nSUBSCRIBER EMAIL ID: "<<subscriberemailid1<<"\n";
 cout<<"\nSUBSCRIBER STATUS: "<<subscriberstatus1<<"\n";
 cout<<"\nNEWSLETTER STATUS: "<<newsletterstatus1<<"\n";
 f.close();
}
void subscriber::search()   //SEARCH
{
 clrscr();
 int mode,flag1=0,flag2=0,flag3=0,flag4=0;
 long s_no;
 char s_name[30];
 char s_status[10];
 char s_nstatus[10];
 cout<<"\nPlease select the mode by which you want to search: ";
 cout<<"\n";
 cout<<"\n1.SUBSCRIBER NUMBER";
 cout<<"\n2.SUBSCRIBER NAME";
 cout<<"\n3.SUBSCRIBER STATUS";
 cout<<"\n4.NEWSLETTER STATUS";
 cout<<"\nEnter your choice: ";
 cin>>mode;
 ifstream f;
 f.open("subscriber.dat",ios::binary|ios::app);
 if(!f)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 clrscr();
 if(mode==1)
 {
  cout<<"\nENTER SUBSCRIBER NUMBER: ";
  cin>>s_no;
  while(f.read((char*)&sub,sizeof(sub)))
  {
	if(sub.subscriberno==s_no)
	{
	 flag1=1;
	 clrscr();
	 cout<<"\nThe Subscriber exists.";
	 cout<<"\nThe Subscriber details are: "<<"\n";
	 cout<<"\nSUBSCRIBER NUMBER: "<<sub.subscriberno<<"\n";
	 cout<<"\nSUBSCRIBER NAME: "<<sub.subscribername<<"\n";
	 cout<<"\nSUBSCRIBER EMAIL ID: "<<sub.subscriberemailid<<"\n";
	 cout<<"\nSUBSCRIBER STATUS: "<<sub.subscriberstatus<<"\n";
	 cout<<"\nNEWSLETTER STATUS: "<<sub.newsletterstatus<<"\n";
	}
  }
  if(flag1==0)
  cout<<"\nTHE SUBSCRIBER WITH THE GIVEN NUMBER DOES NOT EXIST.";
 }
 else if(mode==2)
 {
  clrscr();
  cout<<"\nENTER SUBSCRIBER NAME: ";
  cin>>s_name;
  while(f.read((char*)&sub,sizeof(sub)))
  {
	if(strcmpi(s_name,sub.subscribername)==0)
	{
	 flag2=1;
	 clrscr();
	 cout<<"\nThe Subscriber exists.";
	 cout<<"\nThe Subscriber details are: "<<"\n";
	 cout<<"\nSUBSCRIBER NUMBER: "<<sub.subscriberno<<"\n";
	 cout<<"\nSUBSCRIBER NAME: "<<sub.subscribername<<"\n";
	 cout<<"\nSUBSCRIBER EMAIL ID: "<<sub.subscriberemailid<<"\n";
	 cout<<"\nSUBSCRIBER STATUS: "<<sub.subscriberstatus<<"\n";
	 cout<<"\nNEWSLETTER STATUS: "<<sub.newsletterstatus<<"\n";
	}
  }
  if(flag2==0)
  cout<<"\nTHE SUBSCRIBER WITH THE GIVEN NAME DOES NOT EXIST.";
 }
 else if(mode==3)
 {
 cout<<"\nENTER SUBSCRIBER STATUS: ";
 cin>>s_status;
 while(f.read((char*)&sub,sizeof(sub)))
 {
  if(strcmpi(s_status,sub.subscriberstatus)==0)
  {
	flag3=1;
	cout<<"\nThe Subscriber exists.";
	cout<<"\nThe Subscriber details are: "<<"\n";
	cout<<"\nSUBSCRIBER NUMBER: "<<sub.subscriberno<<"\n";
	cout<<"\nSUBSCRIBER NAME: "<<sub.subscribername<<"\n";
	cout<<"\nSUBSCRIBER EMAIL ID: "<<sub.subscriberemailid<<"\n";
	cout<<"\nSUBSCRIBER STATUS: "<<sub.subscriberstatus<<"\n";
	cout<<"\nNEWSLETTER STATUS: "<<sub.newsletterstatus<<"\n";
  }
 }
 if(flag3==0)
 cout<<"\nThe subscriber does not exist.";
 }
 else if(mode==4)
 {
  cout<<"\nENTER NEWSLETTER STATUS: ";
  cin>>s_nstatus;
  while(f.read((char*)&sub,sizeof(sub)))
  {
	if(strcmpi(s_nstatus,sub.newsletterstatus)==0)
	{
	 flag4=1;
	 cout<<"\nThe Subscriber exists.";
	 cout<<"\nThe Subscriber details are: "<<"\n";
	 cout<<"\nSUBSCRIBER NUMBER: "<<sub.subscriberno<<"\n";
	 cout<<"\nSUBSCRIBER NAME: "<<sub.subscribername<<"\n";
	 cout<<"\nSUBSCRIBER EMAIL ID: "<<sub.subscriberemailid<<"\n";
	 cout<<"\nSUBSCRIBER STATUS: "<<sub.subscriberstatus<<"\n";
	 cout<<"\nNEWSLETTER STATUS: "<<sub.newsletterstatus<<"\n";
	}
  }
  if(flag4==0)
  cout<<"\nTHE SUBSCRIBER WITH THE GIVEN NEWSLETTER STATUS DOES NOT EXIST.";
 }
 else
 {
  clrscr();
  cout<<"\nYou Have Entered An Invalid Character.";
  f.close();
 }
}
void subscriber::del()   //DELETE
{
 ifstream subfile;
 ofstream tsubfile;
 subfile.open("subscriber.dat",ios::binary|ios::app);
 tsubfile.open("tsubscriber.dat",ios::binary|ios::app);
 if(!subfile||!tsubfile)
 {
  cerr<<"\nCannot open";
  exit(0);
 }
 int found=0;
 int dsubscribernumber;
 cout<<"\nEnter the Subscriber Number of the file to be deleted: ";
 cin>>dsubscribernumber;
 while(subfile.read((char*)&sub,sizeof(sub)))
 {
  if(sub.subscriberno==dsubscribernumber)
  {
	found=1;
  }
  else
  {
	tsubfile.write((char*)&sub,sizeof(sub));
  }
 }
 if(!found)
 {
  cout<<"\nThe file you have chosen has NOT been deleted: ";
 }
 else
 {
  cout<<"\nThe file you have chosen has been deleted.";
 }
 subfile.close();
 tsubfile.close();
 remove("subscriber.dat");
 rename("tsubscriber.dat","subscriber.dat");
 ifstream f;
 f.open("subscriber.dat",ios::binary|ios::app);
 if(!f)
 {
  cerr<<"\nCannot open";
  exit(1);
 }
 f.close();
}
void main()   //MAIN
{
 homepage();
 clrscr();
 border();
 cout<<"\n                                   |WELCOME| ";
 cout<<"\n                    NOW, YOU ARE A PART OF THIS GAMING WORLD ";
 cout<<"\n                    TO ENTER THE ADMIN ZONE, ENTER PASSWORD: ";
 for(int d=1;d<4;d++)
 {
  int i=-1;   // to encrypt and check the PASSWORD
  char pw[11];
  do
  {
	i++;
	pw[i]=getch();
	if(i!=11&&pw[i]!='\b')
	cout<<'*';
	else if(pw[i]=='\b')
	{
	 cout<<'\b';
	 i-=2;
	}
	if(i==11)
	pw[i]='\0';
  }
  while(pw[i]!='\n'&&i<11);
  if(strcmpi(pw,"gamescenter")==0)
  {
	for(int a=0;a<1;a++)
	cout<<"             ";
	clrscr();
	cout<<"\npassword matched.\n";
	break;
  }
  else
  {
	cout<<"\nIncorrect password!";
	cout<<3-d<<"attempts left";
	if(d==3)
	exit(0);
  }
 }
 abc:
 {
  clrscr();
  int schoice;
  cout<<"\nWelcome to the ADMIN ZONE...\n";
  up1:  //Goto variable
  cout<<"\nWhich MODULE would you like to access?\n";
  cout<<"\n1.GAMING SECTION\n";
  cout<<"\n2.SUBSCRIBER SECTION\n";
  cout<<"\nEnter your choice: ";
  cin>>schoice;
  clrscr();
  switch(schoice)   //Switch Statement for the Gaming Section
  {
	case 1:
	cout<<"\nYou have entered into the GAMING SECTION\n";
	cout<<"\nWhat would you like to do?\n";
	cout<<"\n1.Create a GAME";
	cout<<"\n2.Delete a GAME";
	cout<<"\n3.Search a GAME";
	cout<<"\nEnter your choice: ";
	cin>>schoice;
	switch(schoice)   //Switch Statement for Creating,Deleting and Searching a game entry
	{
	 case 1:clrscr();
	 {
	  cout<<"\nYou have chosen to create a GAME.\n";
	  {
		ofstream g;
		g.open("games.dat",ios::binary|ios::app);
		if(!g)
		{
		 cerr<<"\nCannot open";
		 exit(1);
		}
		gam.create();
		g.write((char*)&gam,sizeof(gam));
	  }
	 }
	 cout<<"\nPress 'h' to return to HOMEPAGE or 'e' to EXIT..."; //To return to the homepage
	 cin>>hch;
	 if(hch=='h'||hch=='H')
	 {
	  goto abc;
	 }
	 break;
	 case 2:
	 {
	  cout<<"\nYou have chosen to delete a GAME.";
	  gam.del();
	 }
	 cout<<"\nPress 'h' to return to HOMEPAGE or 'e' to EXIT...";
	 cin>>hch;
	 if(hch=='h'||hch=='H')
	 {
	  goto abc;
	 }
	 break;
	 case 3:
	 {
	  cout<<"\nYou have chosen to search for a GAME.";
	  gam.search();
	  char gchoice;
	  cout<<"\nDo you want to update a game?(y/n): ";
	  cin>>gchoice;
	  if(gchoice=='n')
	  {
		cout<<"\nPress 'h' to return to HOMEPAGE or 'e' to EXIT...";
		cin>>hch;
		if(hch=='h'||hch=='H')
		{
		 goto abc;
		}
	  }
	  else
	  {
	  gam.update();
	  }
	 }
	 break;
	 default: clrscr();   //Default statement for an invalid choice
	 cout<<"\nYou have entered an INVALID CHOICE.\n";
	 cout<<"\nPlease try again.\n";
	 goto up1;
	}
	break;
	case 2:
	up2:
	cout<<"\nYou have entered into the SUBSCRIBER SECTION\n";
	int tchoice;
	cout<<"\nWhat would you like to do?\n";
	cout<<"\n1.Create a SUBSCRIBER\n";
	cout<<"\n2.Delete a SUBSCRIBER\n";
	cout<<"\n3.Search a SUBSCRIBER\n";
	cout<<"\nEnter your choice: ";
	cin>>tchoice;
	switch(tchoice)   //Switch statement for Creating,Deleting and Searching for a Subscriber Entry
	{
	 case 1: clrscr();
	 {
	  cout<<"\nYou have chosen to create a SUBSCRIBER.\n";
	  {
		ofstream f;
		f.open("subscriber.dat",ios::binary|ios::app);
		if(!f)
		{
		 cerr<<"\nCannot open";
		 exit(1);
		}
		sub.create();
		f.write((char*)&sub,sizeof(sub));
	  }
	 }
	 cout<<"\nPress 'h' to return to the homepage or'e' to EXIT..."; //To return to the homepage
	 cin>>hch;
	 if(hch=='h'||hch=='H')
	 {
	  goto abc;
	 }
	 break;
	 case 2:
	 {
	  cout<<"\nYou have chosen to delete a SUBSCRIBER.";
	  sub.del();
	 }
	 cout<<"\nPress 'h' to return to the homepage or'e' to EXIT...";   //To return to the homepage
	 cin>>hch;
	 if(hch=='h'||hch=='H')
	 {
	  goto abc;
	 }
	 break;
	 case 3:
	 {
	  cout<<"\nYou have chosen to search for a SUBSCRIBER.";
	  sub.search();
	  char schoice;
	  cout<<"\nDo you want to update a subscriber?(y/n): ";
	  cin>>schoice;
	  if (schoice=='n')
	  {
		cout<<"\nPress h to return to homepage or 'e' to EXIT...";     //To return to the homepage
		cin>>hch;
		if(hch=='h'||hch=='H')
		{
		 goto abc;
		}
	  }
	  sub.update();
	  {
		cout<<"\nPress h to return to homepage or 'e' to EXIT...";     //To return to the homepage
		cin>>hch;
		if(hch=='h'||hch=='H')
		{
		 goto abc;
		}
	  }
	  break;
	  default:	//Default statement for an Invalid choice
	  cout<<"\nYou have entered an invalid choice.\n";
	  cout<<"\nPlease try again.\n";
	  goto up1;
	 }
	}
  }
 }
}
