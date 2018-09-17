#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    while(k<5)
    //for (k=0;k<5;k++)
    {
         sum+=k;
        k++;
       //use something different in "while" version
        printf("%d\n",k);
    }

    printf ("Sum- %d\n",sum);

    //k=5;

    for(k=10;k>0;k--){
        //while(k>0){
        //k=k-1; //use something different in "for" version
        printf ("%2d\n", k);
    }
printf("blastoff!\n");
}

