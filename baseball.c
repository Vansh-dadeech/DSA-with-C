#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<ctype.h>
#include<string.h>

int top=-1;
int score[100];

int result(char *str,int size){
    size=strlen(str);
    
    for(int i=0;i<size;i++){
        
        if(str[i]<=48 || str[i]>=57){
            int num=0;
            while(str[i]<=48 || str[i]>=57){
                num=num*10+str[i]-'0';
                i++;
            }
            i--;
            score[++top]=num;
        }

        else if(str[i]=='C'){
            score[--top];
        }
        
        else if(str[i]=='D'){
            int num = score[top];
            score[++top]=num*2;
        }

        else if(str[i]=='+'){
            score[++top]=score[top]+score[top-1];
        }
    }
    int r=0;
    for(int i=0;i<top;i++){
        r+=score[top];
        score[top--];
    }
    return r;
}

int main(){
    char str[100]={'5','2','C','D','+','\0'};
    
    printf("Result : %d",result);
    return 0;
}