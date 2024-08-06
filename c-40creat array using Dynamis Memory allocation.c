
#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int n;
    int i,j;
    printf("ENTER THE NO OF ELEMENT ARRAY--\n");
    scanf("%d",&n);
    int *size=(int*)calloc(n,4);
     ///store the array element
for (i=0;i<n;i++)
{
    printf("index no %d--\n",i);
    scanf("%d",size+i);

    /* code */
}
printf("---Display the array element--\n");
printf("[");
// Display the array element

for ( i = 0; i < n; i++)
{
    printf("%d ",*(size+i));
    /* code */
}

printf("]");
printf("\n ----sorted arry----\n");
// sort the array element
for ( i=0; i<n;i++){
for ( j=0; j<n-i-1;i++)
{
    if(*(size+j)>*(size+j+1)){
        int temp;
        temp=*(size+j);
        *(size+j)=*(size+j+1);
        *(size+i+1)=temp;

    }
}
    
}
       //disply the sorted array
       printf("[");
for(i=0;i<n;i++){
    printf("%d ",*(size+i));
}
printf("]");
return 0;
}

