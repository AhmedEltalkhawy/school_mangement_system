#include <stdio.h>
#include <stdlib.h>
#include "school.h"



int main()
{

    int i ;
    Student_t stud_arr[SCHOOL_CAPACITY] ;
    while(1)
    {
        printf("Please Enter 1 for ADD or 2 for SEARCH or 3 to show all database or any number to new start :)  ") ;
        scanf("%d" , &i) ;
        if(i == 1)
        {
            AddStudent(stud_arr) ;
        }
        else if(i==2)
            StudentSearch(stud_arr) ;
        else if (i==3)
            PrintAllStudent(stud_arr) ;
        else
            RemoveAllStudents() ;
    }
    return 0;
}
