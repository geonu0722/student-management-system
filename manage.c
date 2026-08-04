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
void Show_stu(STU *students, int count){
    printf("========== Student List ==========\n\n");
    for(int i = 0;i < count;i++){
        printf("Student %d\n", i+1);
        printf("ID     :  %d\n", students[i].id);
        printf("Name     :  %s\n", students[i].name);
        printf("Age     :  %d\n", students[i].age);
        printf("Score     :  %.2lf\n\n", students[i].score);
        printf("-------------------------");
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
            printf("ID     :  %d\n", students[i].id);
            printf("Name     :  %s\n", students[i].name);
            printf("Age     :  %d\n", students[i].age);
            printf("Score     :  %.2lf\n\n", students[i].score);
            printf("-------------------------");
            break;
        }
        if(i == count - 1) printf("no name");
    }
}
