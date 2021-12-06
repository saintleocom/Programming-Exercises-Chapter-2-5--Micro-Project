/*The exhibit address arranges lists of tracks that have been printed in climbing order. The base assistance just right from 0 to measure of the plate While executing the left way it ought not to give tracks. If we arrive at a base level it will invert the method of execution. On the off chance that we reach the right finish of the plate invert the bearing and head It is utilized to demonstrate the standard I/p and o/p library capacities. The printf() work is characterized in studio. h. #include <conio. h> – It is utilized to incorporate the print input yield on the console.*/



#include<conio.h>
#include<stdio.h>
/*Each programming language's Main technique is a watchword in java, .net and C, and so on. The execution of the program will begin from fundamental strategy 
Execution will not predefine the principle work.*/
int main()
{
// int is numaric datatype
int fiDs,seDs,sumOfTotal=0,num;
int data[40];
//loc of head
int diskdata; 
int tempDataData,maxvalue;
//loc of diskdata in array
int destinationlocation;
/*There are different techniques to clean the control center or o/p screen and one of them is clrscr() work. It cleans the screen as a capacity sumOfTotalmon. It is proclaimed in the "conio. h" header record. There are various techniques too like system("cls") and system("clear") and these are proclaimed in "stdlib*/



clrscr();
//it is used to print the o/p on console
printf("enter number of location\t");
/*The scan strategy will permit to acknowledge I/p from base capacity are connected capacity in, The scarf capacity can do many things, can be untrustworthy because it doesn't deal with human mistakes well overall.*/
scanf("%d",&diskdata);
printf("enter elements of diskdata queue\n");
scanf("%d",&n);
printf("enter position of head\t");
for(k=0;k<num;k++)
{
scanf("%d",&data[k]);
}
data[num]=diskdata;
n=n+1;
//sorting diskdata locations
for(j=0;j<num;j++)
{
    for(k=i;k<num;k++)
    {
        if(data[fiDs]>data[k])
        {
            tempData=data[k];
            data[fiDs]=data[k];
            data[seDs]=tempData;
        }
    }
}
maxvalue=data[num];
// to find loc of disc in array
for(k=0;k<num;k++)
{
    if(diskdata==data[k]) 
    {
        destinationlocation=k;
         break;
    }
}
for(i=destinationlocation; i>=1; i--)
{
    //Display o/p in console window
    printf("%d -->",data[i]);
}
//Display o/p in console window
printf(" 0  -->");
for(k=destinationlocation+2;k<num;k++)
{
    printf("%d-->",data[k]);
}
sumOfTotal=diskdata+maxvalue;
//To Print the value
printf("\nmovement of total cylinders %d",sumOfTotal);
getch();
return 0;
}
