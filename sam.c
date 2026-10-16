#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char state[10][20]={"KA","TN","AP","DL","MH"};
char vehicle[30];
int i,len,found=0,valid=1;
printf("Enter Vehicle number:");
scanf("%19s",vehicle);
for(i=0;vehicle[i]!='\0';i++)
vehicle[i]=toupper(vehicle[i]);
len=strlen(vehicle);
if(len<9||len>10){
printf("Invalid lenght\n");
return 0;
}
for(i=0;i<36;i++){
if(vehicle[0]==state[i][0]&&vehicle[1]==state[i][1]){
found=1;
break;
}

}
if(!found){
printf("Invalid state code\n");
return 0;
}
if(!isdigit(vehicle[2])||!isdigit(vehicle[3])){
printf("Invalid RTO code\n");
return 0;
}
for(i=4;i<len-4;i++){
if(!isalpha(vehicle[i])){
valid=0;
break;
}
}
for(i=len-4;i<len;i++){
if(!isalpha(vehicle[i])){
valid=0;
break;
}
}
if(valid)
printf("valid vehicle number\n");
else
printf("invalid registration number\n");
return 0;
}

