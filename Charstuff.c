#include <stdio.h>
#include <string.h>
int main(){
	char s[30],st,en;
	printf("enter the starting and ending delimiters: \n");
	scanf("%c",&st);
	scanf(" %c",&en);	
	printf("enter the message: \n");
	scanf("%s",s);
	int l = strlen(s);
	printf("%c ",st);
	for(int i=0;i<l;i++){
		if(s[i]==st){
			printf(" esc ");
		}
		else if(s[i]==en){
			printf(" esc ");
		}
		
		printf(" %c ",s[i]);
		
	}
	printf(" %c \n",en);
	return 0;
}