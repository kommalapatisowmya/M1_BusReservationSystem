/**
 * @file bus.c
 * @author  Naresh D (naresh.d.2018.ece@ritchennai.edu.in)
 * @brief This is the main program where the project is run
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[10][130]={"SRV Express","FAST Express","ROADWAY Express","Chester Express","Newport Express","Truro Express"};
char name[32][100]={'\0'};
char number[32][2]={'\0'};
int num1[32]={0};
int trno;
void login();
void bus();//for list of bus
void name_n0(int book,char numstr[100]);
void book();//for booking the tickets
int read_n0(int trno);//for reading the number from the file
void read_name(int trno);//for reading the name from the file
void status();//for printing the status by user input
void status_1(int trno);//for printing the status while booking ticket
void cancel();
/* Start of the application */
/**
 * @brief Main program
 * 
 * @return int 
 */
int main()
{
	login();
    int n,i;
    do{
    system("cls");
    printf("\n\n\n");
   printf("====================================== WELCOME TO BUS RESERVATION SYSTEM ======================================\n\n\n");
    printf("\t\t\t\t\t[1]=> View Bus List\n");
    printf("\n");
    printf("\t\t\t\t\t[2]=> Tickets BOOK\n");
    printf("\n");
    printf("\t\t\t\t\t[3]=> Cancel Book\n");
    printf("\n");
    printf("\t\t\t\t\t[4]=> Bus Status Board\n");
    printf("\n");
    printf("\t\t\t\t\t[5]=> Exit\n\n");
    printf("===============================================================================================================\n\n");
    printf("\t\t\tEnter Your Choice:: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        bus();//for list of bus
        break;
    case 2:
        book();//for booking the tickets
        break;
    case 3:
        cancel();
        break;
    case 4:
        status();
        break;
    }
getch();
    }while(n != 5);
    system("CLS");
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tThank You For Using This System\t\t\t\t\t\t\n");
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    getch();
    return 0;
}






