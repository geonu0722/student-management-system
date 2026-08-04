/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <string.h>
#include <stdio.h>
#include "manage.h"



STU students[100];


int main()
{
    int count = 0;
    while(1){
        int num;
        printf("========== Student Management ==========\n");
        printf("1. Add Student\n");
        printf("2. Show Students\n");
        printf("3. Exit\n");
        printf("4. Search Student\n\n");
        printf("Choose number\n");
        scanf("%d", &num);
        switch(num){
        case 1:
            Add_stu(&students[count]);
            count++;
            break;
        case 2:
            Show_stu(students, count);
            break;
        case 3:
            return 0;
        default:
            printf("Wrong number");
            break;
        }
        
    }
    return 0;
}
