


//how to delete a number from an array


#include<stdio.h>
int main(){

int array[10]={10,20,30,40,50,60,70};
int position,i,j,n=7;



printf("where to delete your data\n");
scanf("%d",&position); 

    if(position>=n+1)
    printf("thats not possible");
    else{

for ( i = position-1; i<n-1; i++){

array[i]=array[i+1];


}

for ( i = 0; i < n-1; i++)
{
    /* code */printf("%d\n",array[i]);
}

printf("\n");


    }





}

