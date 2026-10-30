#include<stdio.h>
#include<stdlib.h>
struct Student{
int roll;
char name[30];
float marks;
};
void displayAll(struct Student *ptr,int n){
int i;
printf("\nRoll\tName\t\tMarks\n");
printf("----------------------\n");
for(i = 0;i < n;i++){
printf("%d\tt%s\t\t%.2f\n",
(ptr +i)->roll,(ptr + i)-> name,(ptr + i)->marks);
}
}
int main(){
int n,i;
printf("Enter number of students: ");
scanf("%d",&n);
struct Student*student =(struct Student*)malloc(n*sizeof(struct Student));
if(student == NULL){
printf("Memory allocation failed\n");
return 1;
}
for(i = 0;i<n;i++){
printf("\nEnetr roll number:");
scanf("%d",&(student+i)-> roll);
printf("Enter name: ");
 scanf("%29s",(student+i)-> name);
 printf("Enter marks: ");
 scanf("%f",&(student+i)-> marks);
 }
 displayAll(student,n);
 free(student);
 return 0;
 }
