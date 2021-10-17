#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "multip.h"
#include "intro.h"
#define KRED  "\x1B[31m"
int singlep(int *tot);

pause()
{
	int i;
	for(i = 0; i < 99999999; i++){}
	for(i = 0; i < 99999999; i++){}
}
pavan(char A[])
{
	int i,j;
	for(i = 0; i < 100000; i++)
	{
		if(A[i] == '\0'){break;}
		printf("%c", A[i]);
		for(j = 0; j < 9999999; j++){}
	}
}
int main()
{
  system("color 02");
system("COLOR F2");
system("color 02");
  int singlereturn,type;
  int winpoints;
  int *ptr;
  ptr=&winpoints;
  intro();
  while(1)
  {
  pavan("\n\n\n\n\t\t\t\t\t\t-------------------------\n");
  pavan("\t\t\t\t\t\t1.Single Player\n\t\t\t\t\t\t2.Multiplayer\n\t\t\t\t\t\tEnter the Type : ");
  scanf("%d",&type);
  pavan("\t\t\t\t\t\t-------------------------\n");
  if(type==2)
  {
  pavan("\t\t\t\t\t\tEnter the Winning Points : ");
  scanf("%d",&winpoints);
  pause();
  pause();
  pause();
  clrscr();
  mulp(ptr);
  }
  else if (type==1){
   printf("\t\t\t\t\t\tEnter the Winning Points : ");
  scanf("%d",&winpoints);
  singlereturn=singlep(ptr);
  }
  else{
  printf("\t\t\t\t\t\tINAVALID CHOICE :(",KRED);
  break;}
  }
}
