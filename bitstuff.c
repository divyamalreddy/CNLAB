#include <stdio.h>
#include <string.h>

int main(){
    char flag[10] = {'0','1','1','1','1','1','1','0'};
    char str[20];
    char str2[20];
    int i,j = 0,count,length;

    printf("Enter the string: ");
    scanf("%s",str);

    length = strlen(str);
    count = 0;

    
    for(i = 0;i < length;i++){
        if(str[i] == '1'){
            count++;
        }
        
        else{
            count = 0;
        }
        str2[j] = str[i];
        j++;

        if(count == 5 && str[i+1] == '1'){
            str2[j] = '0';
            j++;
            count = 0;

        }
    }

    

    str2[j] = '\0';
    printf("%s %s %s",flag,str2,flag);
    return 0;

}