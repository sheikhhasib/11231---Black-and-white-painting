#include<stdio.h>
int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        if(a+b+c == 0)
            break;
        if(c==0){
            printf("%d\n",(a-7)*(b-7)/2);
        }else{
            printf("%d\n",((a-7)*(b-7)+1)/2);
        }
    }
    return  0;
}
