#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
char C,A[10]={'0','1','2','3','4','5','6','7','8','9'};
int player=1,B,i;
int checkwiner(){
    int w=0;
    if(A[1]==A[2]&&A[2]==A[3]) w=1;
    else if(A[4]==A[5]&&A[5]==A[6]) w=1;
    else if(A[7]==A[8]&&A[8]==A[9]) w=1;
    else if(A[1]==A[4]&&A[1]==A[7]) w=1;
    else if(A[2]==A[5]&&A[2]==A[8]) w=1;
    else if(A[3]==A[6]&&A[3]==A[9]) w=1;
    else if(A[1]==A[5]&&A[1]==A[9]) w=1;
    else if(A[3]==A[5]&&A[3]==A[7]) w=1;
    else if(A[1]!='1'&&A[2]!='2'&&A[3]!='3'&&A[4]!='4'&&A[5]!='5'&&A[6]!='6'&&A[7]!='7'&&A[8]!='8'&&A[9]!='9') w=0;
    else w=-1;
    return w;}
void chioce(char C){
            if(B==1&&A[1]=='1') A[1]=C;
            else if(B==2&&A[2]=='2') A[2]=C;
            else if(B==3&&A[3]=='3') A[3]=C;
            else if(B==4&&A[4]=='4') A[4]=C;
            else if(B==5&&A[5]=='5') A[5]=C;
            else if(B==6&&A[6]=='6') A[6]=C;
            else if(B==7&&A[7]=='7') A[7]=C;
            else if(B==8&&A[8]=='8') A[8]=C;
            else if(B==9&&A[9]=='9') A[9]=C;
            else{
                printf("invalid number\n");
                player--;
                getch();
                }}
int main ()
{
        do{
        system("cls");
        printf("********XO_GAME********\n");
        printf("player 1(X)   -   player 2(O)\n");
        printf(" _______________________\n");
        printf("/       |       |       \\\n");
        printf("|  %c    |   %c   |   %c   |\n",A[1],A[2],A[3]);
        printf("|_______|_______|_______|\n");
        printf("|       |       |       |\n");
        printf("|   %c   |   %c   |   %c   |\n",A[4],A[5],A[6]);
        printf("|_______|_______|_______|\n");
        printf("|       |       |       |\n");
        printf("|   %c   |   %c   |   %c   |\n",A[7],A[8],A[9]);
        printf("\\_______|_______|_______/\n");
        player=(player%2)?1:2;
        printf("player %d enter your choice:\n",player);
        scanf("%d",&B);
        C=(player==1)?'X':'O';
        chioce(C);
        i=checkwiner();
        player++;
        }while(i==-1);
        if(i==1) printf("player %d you win",player-1);
            else printf("draw");
return 0;
}
