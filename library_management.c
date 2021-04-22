#include<stdio.h>

int process();
int mra();
int btech();
int bba();
int bca();
int mtech();
int mba();
int mra1();
int mra3();
int mra4();
int mra5();
int mra6();
int semestercse();
int semesterit();
int semesterme();
int semesterce();
int semesteree();
int semesterece();
int sem1();
int sem2();
int sem3();
int sem4();
int sem5();
int sem6();
int sem7();
int sem8();
int main()
{
	printf("CENTRAL LIBRARY\n");
	printf("\nThe Central library conforms with the international standards where access time for collection,leading, and returning of book is minimum. ");
	printf("Every student is identified by his own library ID card issued by the central library.it has been network with the DELNET and we are member of british council, kolkata");
	printf("to facilitate the resource sharing with our other institute libraries and ILL(Inter Library LAN),the library provides 53733 volume of books");
	printf("7200 titles,96 journals apart from 2260 e-journal and 1400 CDs,the library also provide books on GATE ,GRE,MAT,IES,IAS as guide book for compitative examination");
	process();
}
int process()
{
	int d;
	printf("\nYOUR COURSE \n1-B.TECH \n2-BBA \n3-BCA \n4-M.TECH \n5-MBA\n");
	scanf("%d",&d);
	if(d==1)
	{
		btech();
	}
}
int btech()
{
	int d2;
	printf("\nSELECT YOUR STREAM \n1-CSE    2-IT \n3-ME    4-CE \n5-EE    6-ECE\n");
	scanf("%d",&d2);
	if(d2==1)
	{
		semestercse();
	}
	
}
int semestercse()
{
	int d1;
	printf("\nWHICH SEMESTER???");
	scanf("%d",&d1);
	if(d1==1)
	{
		sem1();
	}
	else if(d1==2)
	{
		sem2();
	}
	else if(d1==3)
	{
		sem3();
	}
	else if(d1==4)
	{
		sem4();
	}
	else 
	{
        printf("INVALID INPUT");
	}
}
int sem1()
{
	printf("SEMESTER-1 STREAM - (CSE/IT/ME/CE)\n");
	printf("CODE--------------------BOOK NAME\n");
	printf("101                     ENGINEERING MATHEMATICS\n");
	printf("102                     ENGINEERING PHYSICS\n");
	printf("103                     BASIC ELECTRICAL ENGINEERING\n");
	printf("104                     MECHANICAL WORKSHOP\n");
	printf("105                     ELECTRICAL LAB BOOK\n");
	printf("106                     PHYSICS LAB BOOK\n");
	mra();
}
int mra()
{
	int r;
	printf("ENTER THE CODE OF BOOK\n");
	scanf("%d",&r);
	if(r==101 || r==107)
	{
		printf("collect your ENGINEERING MATHEMATICS book\n");
		printf("for more \n");
		mra();
	}
	else if(r==102 || r==108)
	{
		printf("collect your ENGINEERING PHYSICS  book\n");
		printf("for more \n");
		mra();
	}
	else if(r==103 || r==109)
	{
		printf("collect your BASIC ELECTRICAL ENGINEERING book\n");
		printf("for more \n");
		mra();
	}
	else if(r==104 || r==110)
	{
		printf("collect your MECHINICAL WORKSHOP book\n");
		printf("for more \n");
		mra();
	}
	else if(r==105 || r==111)
	{
		printf("collect your ELECTRICAL LAB book\n");
		printf("for more \n");
		mra();
	}
	else if(r==106 || r==112)
	{
		printf("collect your PHYSICS LAB  book\n");
	}
	else
	{
		printf("!!!INVALID INPUT!!!");
	}
}
int sem2()
{
	printf("SEMESTER-2 STREAM - (CSE/IT/ME/CE)\n");
	printf("CODE--------------------BOOK NAME\n");
	printf("201                     ENGINEERING MATHEMATICS\n");
	printf("202                     ENGINEERING CHEMISTRY\n");
	printf("203                     PROGRAMMING FOR PROBLEM SOLVING\n");
	printf("204                     ENGINEERING DRAWING\n");
	printf("205                     CHEMISTRY LAB\n");
	printf("206                     PHYSICS LAB BOOK\n");
	mra1();
}
int mra1()
{
	int r;
	printf("ENTER THE CODE OF BOOK\n");
	scanf("%d",&r);
	if(r==201 || r==107)
	{
		printf("collect your ENGINEERING MATHEMATICS book\n");
		printf("for more \n");
		mra1();
	}
	else if(r==202 || r==108)
	{
		printf("collect your ENGINEERING CHEMISTRY  book\n");
		printf("for more \n");
		mra1();
	}
	else if(r==203 || r==109)
	{
		printf("collect your  PROGRAMMING FOR PROBLEM SOLVING book\n");
		printf("for more \n");
		mra1();
	}
	else if(r==204 || r==110)
	{
		printf("collect your ENGINEERING DRAWING book\n");
		printf("for more \n");
		mra1();
	}
	else if(r==205 || r==111)
	{
		printf("collect your CHEMISTRY LAB book\n");
		printf("for more \n");
		mra1();
    }
	else if(r==206 || r==112)
	{
		printf("collect your PHYSICS LAB  book\n");
	}
	else
	{
		printf("!!!INVALID INPUT!!!");
	}
}
int sem3()
{
	printf("SEMESTER-3 STREAM - CSE\n");
	printf("CODE--------------------BOOK NAME\n");
	printf("301                     ENGINEERING MATHEMATICS\n");
	printf("302                     DATA STRUCTURE & ALGORITHIMS\n");
	printf("303                     COMPUTER ORGANISATION\n");
	printf("304                     DIGITAL ELECTRONICS & LOGIC DESIGN\n");
	printf("305                     PRINCIPLE OF PROGRAMMING LANGUAGE\n");
	printf("306                     PRACTICAL BOOK\n");
	mra3();
}
int mra3()
{
    int r;
	printf("ENTER THE CODE OF BOOK\n");
	scanf("%d",&r);
	if(r==301)
	{
		printf("collect your ENGINEERING MATHEMATICS book\n");
		printf("for more \n");
		mra3();
	}
	else if(r==302)
	{
		printf("collect your DATA STRUCTURE & ALGORITHIMS  book\n");
		printf("for more \n");
		mra3();
	}
	else if(r==303)
	{
		printf("collect your COMPUTER ORGANISATION book\n");
		printf("for more \n");
		mra3();
	}
	else if(r==304)
	{
		printf("collect your DIGITAL ELECTRONICS & LOGIC DESIGN book\n");
		printf("for more \n");
		mra3();
	}
	else if(r==305)
	{
		printf("collect your  PRINCIPLE OF PROGRAMMING LANGUAGE book\n");
		printf("for more \n");
		mra3();
    }
	else if(r==306)
	{
		printf("collect your PRACTICAL BOOK  book\n");
	}
	else
	{
		printf("!!!INVALID INPUT!!!");
	}	
	
}
int sem4()
{
	printf("SEMESTER-4 STREAM - CSE\n");
	printf("CODE--------------------BOOK NAME\n");
	printf("401                     MATHEMATICS\n");
	printf("402                     FORMAL LANGUAGE & AUTOMATA THEORY\n");
	printf("403                     OPERATION RESEARCH AND OPTIMISATION TECHNIQUE\n");
	printf("404                     PRINCIPLE OF COMUNICATION ENGINEERINDG\n");
	printf("405                     ADVANCE COMPUTER LANGUAGE\n");
	printf("406                     PRACTICAL LAB BOOK\n");	
}
