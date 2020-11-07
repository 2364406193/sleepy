#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int length=1;
    int i;
    for( i=1;i<n;i++){
        length*=10;
    }
    for(int x=length;x<length*10;x++){
        int sum=0;
        int t=x;
        while(t!=0){
            int end=t%10;
            t/=10;
            int p=1;
            p=pow(end,n);
            sum+=p;
        }
        if(sum==x){
            printf("%d\n",x);
        }
    }
    return 0;
}