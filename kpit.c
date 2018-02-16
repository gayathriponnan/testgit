#include <stdio.h>
#include <time.h>
void level(int *,int,int);
void level1(int*,int,int);
void rotate(int *);
int main()
{
   int n1,n2=6,n3,i,a[6]={0,1,2,3,4,5};
   printf("LETS BEGIN.......\n");
   printf("Enter Number Between 0 and 6 \n");//read number from user
   scanf("%d",&n1);
    
  
    time_t sec;
    sec=time(NULL);
     if(n2>0)
    {
        for(;;)
        {
            sec=sec%3600;
            if(n2>=sec)
              break;
            sec=sec%n2;    
        }
    }
    if((n1>0)&&(n1<6))
    {
    printf("***LET US SEE YOUR FORTUNE***\n");

    printf("***YOUR FORTUNE NUMBER IS***\n%d\n",sec);  //show plyers fortune number
       level(a,n1,sec);
    }
     else
   {
   printf(" Please Enter valid number \n");
   }
    return 0;
 }
 
   void level(int a[],int n1,int sec)
  {
      int i,j,b[6],p=sec;
     for(i=0;i<=sec;i++)
      rotate(a);
      for(j=0;j<6;j++)
        b[j]=a[j];
 if((n1>=0)&&(n1<=5))
   {
   for(i=0;i<6;i++)
   {
       if(n1==b[i])
         level1(b,i,p);
   }
   }
  }
   void level1(int b[],int i,int p)  //function to show output
   { 
       int count,n12;
       if(i==4)
       {
           count=300;
           printf("\n****YOU GAINED 400 POINTS****");
           printf("\n*** GOOD,BETTER,BEST.\nNEVER LET IT REST.'TILL YOUR GOOD IS BETTER AND YOUR BETTER IS BEST****");
       }
       if(i==3)
       {
          count=1;
         printf("\n***YOU HAVE ANOTHER CHANCE***\N");
         printf("\n");
         printf("$$$$$$$$$$ ALL THE EFFORT YOU ARE MAKING WILL ULTIMATELY PAY OFF  $$$$$$$$$$");
         printf("\nEnter another New value between 0 and 5\n");
         scanf("%d",&n12);
         level(b,n12,p);
       }
       if(i==1)
       {
       count=100;
       printf("\n***CONGRATULATIONS.....YOU GAINED 100 POINTS***\n");
       printf("\n^^^^ Life is 10% what happens to you and 90% how you react to it ^^^^\n");
       }
       if(i==2)
       {
       count=200;
       printf("***YOU GAINED 200 POINTS***\n");
       printf("\n ***** Start where you are. *****\n");
       printf("\n ****** Use what you have  ******\n");
       printf("\n ******** Do what you can ********\n");
        }
        if(i==5)
        {
            count=500;
            printf("\n***** CONGRATULATIONS *****\n");
            printf("\n^^^^^ TODAY LUCK IS YOURS ^^^^^\n");
            printf("\n.......love is like sweet nectarine, good to the last drop.....\n\n\n\n\n");
            printf("\n\n$$$$$$$ YOU GAINED 500 POINTS $$$$$$$\n\n");
        }
        if(i==0)
        {
            count=0;
            printf("\n******** SORRY TODAY YOU MISSED YOUR LUCK ********\n");
            printf("\n***** YOU HAVE NO POINTS****");
            printf("\n\n**** AIM FOR THE SKY, BECAUSE EVEN IF YOU MISS, \n  YOU STILL BE AMONG THE STARS ***** \n\n");
        }
        }

      void rotate(int a[])  //function to rotate array
      {
          int temp;
          int i;
          temp=a[0];
          for(i=0;i<5;i++)
             a[i]=a[i+1];
        a[5]=temp; 
        return 0;
      }
    
