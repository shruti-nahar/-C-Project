//////////////////////////////////////
*Description:MiniProject to display the calendar of any year
*Date: 23-June-2021
*Author: Shruti
/////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> 
//function for the starting weekday 
int get_1st_weekday(int year)
{
 int d; 
 //logic to display the starting weekday of each month
 d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7; 
 return d;
 } 
 int main()
 { 
 system("color DF");//Give background color to the console
 int year,month,day,daysInMonth,weekDay=0,startingDay; 
 //Enter the year of which calendar is to be print
 printf("\nEnter your desired year:"); 
 scanf("%d",&year); 
 //Array of months
 char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"}; 
 // array of months day
 int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31}; 
 //To check whether the year is leap or not
 if((year%4==0&&year%100!=0)||year%400==0)
  monthDay[1]=29; 
  startingDay=get_1st_weekday(year); 
 for(month=0;month<12;month++)
 { 
     // daysInMonth store the the no days in each month
 daysInMonth=monthDay[month];
 //display the month
  printf("\n\n---------------%s-------------------\n",months[month]);
  //weekdays 
  printf("\n Sun Mon Tue Wed Thurs Fri Sat\n"); 
  for(weekDay=0;weekDay<startingDay;weekDay++)
   printf(" "); 
   for(day=1;day<=daysInMonth;day++)
{ 
printf("%5d",day); 
//To align each weekday again from 0  to 6 on newline
if(++weekDay>6)
{ 
printf("\n"); 
weekDay=0;// asign weekday from zero
}
  startingDay=weekDay; //Assign the startingDay
} 
}
}
