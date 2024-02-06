//AVERAGE VALUE OF N INTEGER NUMBER  (OUTPUT WILL BE INTEGER5)
#include <stdio.h>

int main() {
    int n;
    int sum=0;
    int avg;
    printf("ENTER A NUMBER =");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int p;
        printf("ENTER YOUR %d INTEGER number---",i);
        scanf("%d",&p);
        sum=sum+p;
    }
    avg=sum/n;
    printf(" THE VALUE OF AVERAGE IS----%d",avg);

    return 0;
}
