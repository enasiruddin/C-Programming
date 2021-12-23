#include<stdio.h>
int main()
{
    int R,L,S,GCD;
    printf("Enter two integer numbers(L>S):");
    scanf("%d%d",&L,&S);
  A:  R = L%S;
    if(R==0){
        GCD = S;
        printf("The GCD is : %d",GCD);
    }
    else{
        L=S;
        S=R;
        goto A;
    }
    return 0;
 }
