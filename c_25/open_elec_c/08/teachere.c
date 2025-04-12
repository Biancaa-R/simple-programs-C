/*1.	Create a structure called Teacher with name, subject, experience and branch. Create an array of 5 teachers and 
input their values from the user. Write the values to a file called “Teacher.txt” in a row-wise format with each 
teacher’s data printed on a new line.*/

#include<stdio.h>
struct teacher{
    char name[60];
    char subject[40];
    char experience[4];
    char branch[60];
};
int main(){
    printf("Enter the number of teachers \n");
    int num;
    scanf("%d",&num);
    struct teacher* arr1= (struct teacher*) malloc(num*sizeof(struct teacher));
    for(int i=0;i<num;i++){
        struct teacher t1;
        printf("Enter the name of the teacher\n");
        scanf("%s",&t1.name);
        printf("Enter the subject of the teacher\n");
        scanf("%s",&t1.subject);
        printf("Enter the experience of the teacher\n");
        scanf("%s",&t1.experience);
        printf("Enter the branch of the teacher\n");
        scanf("%s",&t1.branch);
        arr1[i]=t1;
    }
    FILE *fout;
    fout = fopen("teach.txt", "w");
    for(int i=0;i<num;i++){
        fprintf(fout, "Name: %s ,Subject : %s,Experience:%s,branch%s\n" ,arr1[i].name,arr1[i].subject,arr1[i].experience,arr1[i].branch );
    }
    fclose(fout);
}
