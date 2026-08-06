#include <string.h>
#include <stdio.h>
#include "manage.h"

void Add_stu(STU *stu){
    printf("id? : ");
    scanf("%d", &stu->id);
    printf("name? : ");
    scanf("%s", stu->name);
    printf("age? : ");
    scanf("%d", &stu->age);
    printf("score? : ");
    scanf("%lf", &stu->score);
}
void Print_stu(STU *stu){
    printf("ID     :  %d\n", stu->id);
    printf("Name   :  %s\n", stu->name);
    printf("Age    :  %d\n", stu->age);
    printf("Score  :  %.2lf\n\n", stu->score);
    printf("-------------------------");
}
void Show_stu(STU *students, int count){
    printf("========== Student List ==========\n\n");
    for(int i = 0;i < count;i++){
        printf("Student %d\n", i+1);
        Print_stu(&students[i]);
    }
    if(count == 0){
        printf("No student data.\n");
        return;
    }   
    printf("-------------------------\n\n");
}
void Search_stu(STU *students, int count){
    char name[30];
    printf("what is name? : ");
    scanf("%s", name);
    for(int i = 0;i < count;i++){
        if(strcmp(students[i].name, name) == 0){
            printf("========== Student Found ==========\n\n");
            Print_stu(&students[i]);
            return;
        }
    }
    printf("no name\n");
}
void Update_stu(STU *students, int count){
    int id;
    printf("what is id? : ");
    scanf("%d", &id);
    for(int i = 0;i<count;i++){
        if(id == students[i].id){
            Print_stu(&students[i]);
            printf("-------------------------");
            printf("name? : ");
            scanf("%s", students[i].name);
            printf("age? : ");
            scanf("%d", &students[i].age);
            printf("score? : ");
            scanf("%lf", &students[i].score);
            printf("Update Complete!\n");
            return;
        }
    }
   printf("Student not found.\n");
}

void Delete_stu(STU *students, int count){
    char name[30];
    printf("what is name? : ");
    scanf("%s", name);
    for(int i = 0;i<count;i++){
        if(strcmp(name, students[i].name) == 0){
            for(int j = i;j<count-1;j++){
                students[j] = students[j+1];
            }
            printf("Delete Complete!\n");
            return;
        }
    }
    printf("Student not found.\n");
}













