#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("CLS");
     cout<<"\t"<<"\t"<<"\t"<<"C++ PROGRAM QUIZ GAME"<<"\n";
     cout<<"\n"<<"\t"<<"\t"<<"________________________________________";

     cout<<"\n"<<"\t"<<"\t"<<"\t"<<"   WELCOME ";
     cout<<"\n"<<"\t"<<"\t"<<"\t"<<"      to ";
     cout<<"\n"<<"\t"<<"\t"<<"\t"<<"  THE GAME ";
     cout<<"\n"<<"\t"<<"\t"<<"________________________________________";
     cout<<"\n"<<"\t"<<"\t"<<"________________________________________";
     cout<<"\n"<<"\t"<<"\t"<<"   BECOME A MILLIONAIRE!!!!!!!!!!!      ";
     cout<<"\n"<<"\t"<<"\t"<<"________________________________________";
     cout<<"\n"<<"\t"<<"\t"<<"________________________________________";
     cout<<"\n"<<"\t"<<"\t"<<" > Press S to start the game";
     cout<<"\n"<<"\t"<<"\t"<<" > Press V to view the highest score    ";
     cout<<"\n"<<"\t"<<"\t"<<" > Press R to reset score";
     cout<<"\n"<<"\t"<<"\t"<<" > press H for help            ";
     cout<<"\n"<<"\t"<<"\t"<<" > press Q to quit             ";
     cout<<"\n"<<"\t"<<"\t"<<"________________________________________\n"<<"\n";
     
     choice=toupper(getch());

     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	  getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(0);
    else if(choice=='S')
    {
     system("cls");

    cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\t"<<"\t"<<"\t"<<"Resister your name:";
     gets(playername);

    system("cls");
    cout<<"\n"<<" ------------------  Welcome to C Program Quiz Game --------------------------",playername;
    cout<<"\n"<<"\n"<<" Here are some tips you might wanna know before playing:";
    cout<<"\n"<<" -------------------------------------------------------------------------";
    cout<<"\n"<<" >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND";
    cout<<"\n"<<" >> In warmup round you will be asked a total of 3 questions to test your";
    cout<<"\n"<<"    general knowledge. You are eligible to play the game if you give atleast 2";
    cout<<"\n"<<"    right answers, otherwise you can't proceed further to the Challenge Round.";
    cout<<"\n"<<" >> Your game starts with CHALLANGE ROUND. In this round you will be asked a";
    cout<<"\n"<<"    total of 10 questions. Each right answer will be awarded $100,000!";
    cout<<"\n"<<"    By this way you can win upto ONE MILLION cash prize!!!!!..........";
    cout<<"\n"<<" >> You will be given 4 options and you have to press A, B ,C or D for the";
    cout<<"\n"<<"    right option.";
    cout<<"\n"<<"You will be asked questions continuously, till right answers are given";
    cout<<"\n"<<" >> No negative marking for wrong answers!";
    cout<<"\n"<<"\n"<<"\t"<<"!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!";
    cout<<"\n"<<"\n"<<"\n"<<" Press Y  to start the game!"<<"\n";
    cout<<"\n"<<"Press any other key to return to the main menu!";
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		cout<<"\n"<<"\n"<<"Which of the following is a Palindrome number?";
		cout<<"\n"<<"\n"<<"A.42042"<<"\t"<<"\t"<<"B.101010"<<"\n"<<"\n"<<"C.23232"<<"\t"<<"\t"<<"D.01234";
		if (toupper(getch())=='C')
			{
			    cout<<"\n"<<"\n"<<"Correct!!!";count++;
			      getch();
			    break;
}
		else
		       {
		           cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is C.23232";
		           getch();  
		       break;
		       }

        case 2:
		cout<<"\n"<<"\n"<<"\n"<<"The country with the highest environmental performance index is...";
		cout<<"\n"<<"\n"<<"A.France"<<"\t"<<"\t"<<"B.Denmark"<<"\n"<<"\n"<<"C.Switzerland"<<"\t"<<"\t"<<"D.Finland";
		if (toupper(getch())  =='C')
			{cout<<"\n"<<"\n"<<"Correct!!!";count++;
			  getch();
			break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is C.Switzerland";
		       getch();  
		       break;}

        case 3:
		cout<<"\n"<<"\n"<<"\n"<<"Which animal laughs like human being?";
		cout<<"\n"<<"\n"<<"A.Polar Bear"<<"\t"<<"\t"<<"B.Hyena"<<"\n"<<"\n"<<"C.Donkey"<<"\t"<<"\t"<<"D.Chimpanzee";
		if (toupper(getch())=='B')
			{cout<<"\n"<<"\n"<<"Correct!!!";count++;
			  getch();
			break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is B.Hyena";
		        getch(); 
		       break;} }
		       }
	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	cout<<"\n"<<"\n"<<"SORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME";
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     cout<<"\n"<<"\n"<<"\t"<<"*** CONGRATULATION you are eligible to play the Game ***",playername;
     cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\t"<<"!Press any key to Start the Game!";
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		cout<<"\n"<<"\n"<<"What is the National Game of England?";
		cout<<"\n"<<"\n"<<"A.Football"<<"\t"<<"\t"<<"B.Basketball"<<"\n"<<"\n"<<"C.Cricket"<<"\t"<<"\t"<<"D.Baseball";
		if (toupper(getch())=='C')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++;getch();
		
			 break;getch();  }
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is C.Cricket";  getch();
		       goto score;
		       break;}

		case 2:
		cout<<"\n"<<"\n"<<"\n"<<"Study of Earthquake is called............,";
		cout<<"\n"<<"\n"<<"A.Seismology"<<"\t"<<"\t"<<"B.Cosmology"<<"\n"<<"\n"<<"C.Orology"<<"\t"<<"\t"<<"D.Etimology";
		if (toupper(getch())=='A')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++;getch(); 
			 break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is A.Seismology";getch();
		      goto score;
		       break;
		       }

        case 3:
		cout<<"\n"<<"\n"<<"\n"<<"Among the top 10 highest peaks in the world, how many lie in Nepal? ";
		cout<<"\n"<<"\n"<<"A.6"<<"\t"<<"\t"<<"B.7"<<"\n"<<"\n"<<"C.8"<<"\t"<<"\t"<<"D.9";
		if (toupper(getch())=='C')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++; getch(); 
			 break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is C.8";getch(); 
		       goto score;
		       break;}

        case 4:
		cout<<"\n"<<"\n"<<"\n"<<"The Laws of Electromagnetic Induction were given by?";
		cout<<"\n"<<"\n"<<"A.Faraday"<<"\t"<<"\t"<<"B.Tesla"<<"\n"<<"\n"<<"C.Maxwell"<<"\t"<<"\t"<<"D.Coulomb";
		if (toupper(getch())=='A')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++; getch();
			 break;}
		else
		       {
                cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is A.Faraday"; getch(); 
		       goto score;
		       break;
		       }

        case 5:
		cout<<"\n"<<"\n"<<"\n"<<"In what unit is electric power measured?";
		cout<<"\n"<<"\n"<<"A.Coulomb"<<"\t"<<"\t"<<"B.Watt"<<"\n"<<"\n"<<"C.Power"<<"\t"<<"\t"<<"D.Units";
		if (toupper(getch())=='B')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++;getch();
		    break;}
		else
		       {
		           cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is B.Power";getch();
		       goto score;
		       break;
		       }

		case 6:
		cout<<"\n"<<"\n"<<"\n"<<"Which element is found in Vitamin B12?";
		cout<<"\n"<<"\n"<<"A.Zinc"<<"\t"<<"\t"<<"B.Cobalt"<<"\n"<<"\n"<<"C.Calcium"<<"\t"<<"\t"<<"D.Iron";
		if (toupper(getch())=='B' )
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++;getch();
			 break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is B.Cobalt";goto score;getch();
		       break;}

        case 7:
		cout<<"\n"<<"\n"<<"\n"<<"What is the National Name of Japan?";
		cout<<"\n"<<"\n"<<"A.Polska"<<"\t"<<"\t"<<"B.Hellas"<<"\n"<<"\n"<<"C.Drukyul"<<"\t"<<"\t"<<"D.Nippon";
		if (toupper(getch())=='D')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++;getch();
			 break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is D.Nippon";getch();  
		       goto score;
		       break;}

        case 8:
		cout<<"\n"<<"\n"<<"\n"<<"How many times a piece of paper can be folded at the most?";
		cout<<"\n"<<"\n"<<"A.6"<<"\t"<<"\t"<<"B.7"<<"\n"<<"\n"<<"C.8"<<"\t"<<"\t"<<"D.Depends on the size of paper";
		if (toupper(getch())=='B')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++;getch();
			break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is B.7";getch();
		       goto score;
		       break;}

        case 9:
		cout<<"\n"<<"\n"<<"\n"<<"What is the capital of Denmark?";
		cout<<"\n"<<"\n"<<"A.Copenhagen"<<"\t"<<"\t"<<"B.Helsinki"<<"\n"<<"\n"<<"C.Ajax"<<"\t"<<"\t"<<"D.Galatasaray";
		if (toupper(getch())=='A')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++; getch();  
			break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is A.Copenhagen";getch();  
		       goto score;
		       break;}

        case 10:
		cout<<"\n"<<"\n"<<"\n"<<"Which is the longest River in the world?";
		cout<<"\n"<<"\n"<<"A.Nile"<<"\t"<<"\t"<<"B.Koshi"<<"\n"<<"\n"<<"C.Ganga"<<"\t"<<"\t"<<"D.Amazon";
		if (toupper(getch())=='A')
			{cout<<"\n"<<"\n"<<"Correct!!!";countr++;getch();
			break;}
		else
		       {cout<<"\n"<<"\n"<<"Wrong!!! The correct answer is A.Nile";getch();
			   break;goto score;}
}}
	score:
    system("CLS");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   cout<<"\n"<<"\n"<<"\t"<<"\t"<<"**************** CONGRATULATION *****************";
	     cout<<"\n"<<"\t"<<" You won rs  "<<score;goto go;}

	 else if(score==1000000.00)
	{
	    cout<<"\n"<<"\n"<<"\n"<<" \t"<<"\t"<<"**************** CONGRATULATION ****************";
	    cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<< "YOU ARE A MILLIONAIRE!!!!!!!!!";
	    cout<<"\n"<<"\t"<<"\t"<<" You won rs  "<<score;
	    cout<<"\t"<<"\t"<<" Thank You!!";
	}
	 else
{
	 cout<<"\n"<<"\n"<<"\t"<<"******** SORRY YOU DIDN'T WIN ANY CASH ********";
	    cout<<"\n"<<"\t"<<"\t"<<" Thanks for your participation";
	    cout<<"\n"<<"\t"<<"\t"<<" TRY AGAIN";goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("CLS");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	cout<<"\n"<<"\n"<<"\t"<<"\t"<<"*************************************************************";
	cout<<"\n"<<"\n"<<"\t"<<"\t"<<name<<" has secured the Highest Score :"<<scr;
	cout<<"\n"<<"\n"<<"\t"<<"\t"<<"*************************************************************";
	fclose(f);
	getch();
	  }

void reset_score()
    {system("CLS");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    cout<<"\n"<<"\n"<<"                              HELP";
    cout<<"\n"<<" -------------------------------------------------------------------------";
    cout<<"\n"<<" ......................... C program Quiz Game...........";
    cout<<"\n"<<" >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND";
    cout<<"\n"<<" >> In warmup round you will be asked a total of 3 questions to test your general";
    cout<<"\n"<<"    knowledge. You will be eligible to play the game if you can give atleast 2";
    cout<<"\n"<<"    right answers otherwise you can't play the Game...........";
    cout<<"\n"<<" >> Your game starts with the CHALLANGE ROUND. In this round you will be asked";
    cout<<"\n"<<"    total 10 questions each right answer will be awarded $100,000.";
    cout<<"\n"<<"    By this way you can win upto ONE MILLION cash prize in USD...............";
    cout<<"\n"<<" >> You will be given 4 options and you have to press A, B ,C or D for the";
    cout<<"\n"<<"    right option";
    cout<<"\n"<<" >> You will be asked questions continuously if you keep giving the right answers.";
    cout<<"\n"<<" >> No negative marking for wrong answers";

	cout<<"\n"<<"\n"<<"\t"<<"*********************BEST OF LUCK*********************************";
	cout<<"\n"<<"\n"<<"\t"<<"*****C PROGRAM QUIZ GAME is developed by Bhavi Tarun Chintala********";}
void edit_score(float score, char plnm[20])
	{system("CLS");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
