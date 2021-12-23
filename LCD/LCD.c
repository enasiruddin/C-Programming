#include<stdio.h>
int main()
{
    int R,L,S,M,GCD,LCD;
    printf("Enter two integer numbers(L>S):");
    scanf("%d%d",&L,&S);
    M=L*S;
  A:  R = L%S;
    if(R==0){
        GCD = S;
    }
    else{
        L=S;
        S=R;
        goto A;
    }
    LCD = M/GCD;
    printf("The LCD is : %d",LCD);
    return 0;
 }
