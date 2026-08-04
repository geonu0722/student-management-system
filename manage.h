#ifndef MANAGE_H
#define MANAGE_H

typedef struct Student{
    int id;
    char name[30];
    int age;
    double score;
    
} STU;

void Add_stu(STU *stu);
void Show_stu(STU *students, int count);

#endif
