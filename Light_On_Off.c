//Author Dhruv Prakash
//Date: 25 Nov 2017
//C 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int l_Hour, l_Minute;
    printf("Enter the time in Hour\n");
    scanf("%d",&l_Hour);
    printf("Enter the time in Minute\n");
    scanf("%d",&l_Minute);
	//Boundry Condition for one day
    if(((0<=l_Hour)&&(l_Hour<=23)) &&((0<=l_Minute)&&(l_Minute<=59)))
    {
            //Condition checking
			if(((06<=l_Hour)&&(l_Hour<=16))&&((00<=l_Minute)&&(l_Minute<=59)))
            {
                 printf("Light is OFF\n");
            }
            else
            {
                printf("Light is ON\n");
            }
     }
    else
    {
        printf("Enter the time in correct format\n");
    }
    return 0;
}
