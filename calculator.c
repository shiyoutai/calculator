/* author: Shi Youtai

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 80
int main(){
     	int i;
	int tmp=0,q=0;
        int co[MAXLINE];

	for (i = 0; i < MAXLINE; i++) {
		co[i] = 0;
	}

        int ret;
        char c[MAXLINE];
	for (i = 0; i < MAXLINE; i++) {
		c[i] = ' ';
	}
	scanf("%s", c);
	tmp = c[0] - '0';

        for(i=1;i<strlen(c);i++){
               if(c[i]>='0'&& c[i]<='9')
                     tmp=tmp*10+(c[i]-'0');
               else{
                     co[q]= tmp;
                     q++;   
                     co[q]=c[i];
                     q++;
                     tmp=0;
                   }
           }
           co[q] = tmp;

        for(int i=1;i<=q-1;i=i+2){
                if(co[i]=='*'){
                      int ch_i= co[i-1]*co[i+1];
                      co[i-1]= 0;
                      co[i+1]= ch_i;
                      if(c[i-2]=='-')
                             co[i]='-';
                      else
                             co[i]='+';
                 }
                 if(co[i]=='/'){ 
                      int ch_i= co[i-1]/co[i+1];
                      co[i-1]= 0;
                      co[i+1]= ch_i;
                      if(c[i-2]='-')
                             co[i]='-';
                      else
                             co[i]='+';
                 }
         }
         for(int i=0;i<=79;i++){
                printf("%d ",co[i]);}
                printf("\n");
          ret=co[0];
          for(int i=1;i<=q-1;i=i+2){
                 if(co[i]=='+')
                       ret=ret+co[i+1];
                 if(co[i]=='-')
                        ret=ret-co[i+1];
          }

          printf("%d\n",ret);
          return 0;        
}

