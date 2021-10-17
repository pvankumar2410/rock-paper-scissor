#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct singleplay
{
  char handsign[10],comhandsign[10];//myhandds=player1,comhand sign=computers handsign
  int mystatus;//my no
  int comstatus;//comp no
}s[10],ss;
//using the function pavan()
extern pavan(char A[]);
//clear screen
void clrscr()
{
    system("@cls||clear");
}
//single player function
void singlep(int *tot)
{ 
  //local variables including local variables and global variables
  int j=0;
  int w=0;
  int i=0,moves;
  int compwins=0,humwins=0;
  printf("%d",*tot);
  int win=0;
  while(1)
  {
  i++;//i increment to keep track of index value
  printf("\n\t\t\t\t\t\t----------------------------------------------");
  printf("\n\t\t\t\t\t\tEnter you choice \n\t\t\t\t\t\t1.Stone/Rock\n\t\t\t\t\t\t2.Paper\n\t\t\t\t\t\t3.Scissor : ");
  //players sign
  scanf("%d",&ss.mystatus);
  printf("\n\t\t\t\t\t\t----------------------------------------------\n");
  
   
  clrscr();
  //invalid choice validation
  if(ss.mystatus>3 ||ss.mystatus<1){printf("\t\t\t\t\t\tInvalid Move\n");}
  //for computer option [1-3]
  ss.comstatus=(rand()%3)+1;
  //printf("Computer Move: %d\n",ss.comstatus);
  //to initialize the hand sign
  if(ss.mystatus==1 ){ strcpy(s[i].handsign,"Rock");}
  else if(ss.mystatus==2 ) {strcpy(s[i].handsign,"Paper");}
  else if(ss.mystatus==3 ){strcpy(s[i].handsign,"Scissor");}
  else {printf("\ninvalid");strcpy(s[i].handsign,"None");}
  if(ss.comstatus==1 ) {strcpy(s[i].comhandsign,"Rock");}
  else if(ss.comstatus==2 ){strcpy(s[i].comhandsign,"Paper");}
  else if(ss.comstatus==3 ) {strcpy(s[i].comhandsign,"Scissor");}
  //if both computers and players status is same
   if(ss.mystatus==ss.comstatus)
  {
    printf("\t\t\t\t\t\tYour Both have Same Brains\n");
  }
  //no of wins count of players and omputers
  if(ss.mystatus==1 && ss.comstatus==2){system("color 04");compwins++; w=1;}
  if(ss.mystatus==2 && ss.comstatus==3){system("color 04");compwins++;w=1;}
  if(ss.mystatus==3 && ss.comstatus==1){system("color 04");compwins++; w=1;}
  if(ss.mystatus==2 && ss.comstatus==1){system("color 02");humwins++;w=0;}
  if(ss.mystatus==3 && ss.comstatus==2){system("color 02");humwins++;w=0;}
  if(ss.mystatus==1 && ss.comstatus==3){system("color 02");humwins++;w=0;}
  //to quit if reach max wins
  system("color 04");
system("COLOR F2");
system("color 04");
//to make the user know which player on and lost
  //if computer>player and if the computer reach the win points then computer is the winner 
  if(compwins>humwins && compwins==*tot){system("color 04");printf("\n\t\t\t\t\t\tOpponent wins you lose :(");}
   //if the computer <player if the player reach the win points then player is the winner
  if(compwins<humwins && humwins==*tot){system("color 02");printf("\n\t\t\t\t\t\tYou Win :)");}
  if(compwins==humwins){system("color 03");printf("\n\t\t\t\t\t\tUr both are in Tie");}
  //computer or player didnt reach win point but either anyone is leading
  if((compwins>humwins)&& compwins<*tot){system("color 04");printf("\n\t\t\t\t\t\tOpponent wins atb for next round");}
  if((compwins<humwins)&& humwins<*tot){system("color 02");printf("\n\t\t\t\t\t\tYou Win atb for next round :)");}
  //points table handsign
  printf("\n\t\t\t\t\t\t-----------------------------------------\n");
  printf("\t\t\t\t\t\tPoints to Win : %d\n",*tot);
  printf("\t\t\t\t\t\tYour sign\tOpponent Sign");
  printf("\n\t\t\t\t\t\t%s\t |\t%s",s[i].handsign,s[i].comhandsign);
  printf("\n\t\t\t\t\t\t-------------------------------------");
  printf("\n\t\t\t\t\t\tPoints\n\t\t\t\t\t\tYours\t\tOpponents");
  printf("\n\t\t\t\t\t\t%d\t|\t\t%d",humwins,compwins);
  printf("\n\t\t\t\t\t\t------------------------------------------");
 //if any one of the player reach win point then end the game
  if(compwins==*tot || humwins==*tot){break;}
  }//end of while
  clrscr();
  system("color 04");
  //final result for system clear
  if((compwins>humwins && compwins==*tot) ){system("color 04");printf("\n\t\t\t\t\t\tOpponent wins you lose :(");}
  system("color 02");
  if((compwins<humwins && humwins==*tot)){system("color 02");printf("\n\t\t\t\t\t\tYou Win :)");}
  printf("\n\t\t\t\t\t\t---------------------------------------");
  printf("\n\t\t\t\t\t\tpress 1 to show the moves or Your Game Play \n\t\t\t\t\t\tAny no to Quit : ");
  scanf("%d",&moves);
  if(moves==1)
  { printf("\n\t\t\t\t\t\tMove\tyour move\tOpponentmove");
    for(j=0;j<=i;j++)
  {
    printf("\t\t\t\t\t\t%d\t\t%s\t\t%s\n",j,s[j].handsign,s[j].comhandsign);
  }}
  //return win;
}
