#include "school.h"
#include <stdio.h>

static int index ;

int string_compare (char* str1 , char* str2)
{
    int i ;
    for(i=0 ; str1[i] || str2[i] ; ++i)
    {
        if(str1[i] != str2[i])
            return 0 ;
    }
    return 1 ;
}

void CallStudent (Student_t arr_str [] , int stud_index )
{
    printf("====== %d ======\n" ,arr_str[stud_index].Telophone) ;
}

void RemoveAllStudents()
{
    index = 0 ;
}

void RemoveStudent(Student_t arr_str [] , int stud_index)
{
    int i ;
    for(i= stud_index ; i < index -1 ; ++i)
    {
        arr_str[i] = arr_str[i+1] ;
    }
    index = index -1 ;
}



void AddStudent (Student_t arr_str [])
{
    if(index == SCHOOL_CAPACITY)
        printf("sorry! school is busy :( \n") ;
    else
    {
        int i ;
    printf("Please Enter student_id :)  ") ;
    scanf("%d" , &(arr_str[index].ID)) ;
    printf("Please Enter student_class :)  ") ;
    scanf("%d" , &(arr_str[index].Class)) ;
    printf("Please Enter student_Telophone  :)  ") ;
    scanf("%d" , &(arr_str[index].Telophone)) ;
    printf("Please Enter student_name :)  ") ;
    scanf("%s" , (arr_str[index].Name)) ;
    /*printf("Please Enter student_courses and student_grade :) \n ") ;
    for(i=0 ; i < NO_OF_COURSES ; ++i)
    {
        scanf("%s", arr_str[index].courses+i) ;
        scanf("%d", &(arr_str[index].grade))
    }*/
    index = index + 1 ;

    }
}
void PrintStudent (Student_t arr_str [] , int stud_index)
{
     printf("Student_Name  : %s \nStudent_ID : %d \n"
       "Student_class   : %d \nStudent_phone : %d \n**********\n"
       ,arr_str[stud_index].Name , arr_str[stud_index].ID , arr_str[stud_index].Class, arr_str[stud_index].Telophone ) ;
}

void PrintAllStudent (Student_t arr_str [])
{
    if(index==0)
        printf("school is empty ! ): \n") ;
    else
    {
    int i ;
    printf("/********STUDENT_INFORMATION*********/\n") ;
    for(i=0 ; i < index ; ++i)
    {
         printf("Student_Name  : %s \nStudent_ID : %d \n"
         "Student_class   : %d \nStudent_phone : %d \n**********\n" ,
         arr_str[i].Name , arr_str[i].ID , arr_str[i].Class, arr_str[i].Telophone ) ;
    }
    }
}
void StudentSearch (Student_t arr_struct [])
{
    int checker ;
    printf(" if you want to search with ID Enter 1 Else search with Name Enter any num :)   ") ;
    scanf("%d",&checker) ;
    if(checker == 1)
    {
        int ID ,i, student_index = -1 , stud_flag=1 ;
        printf("Enter ID :)   ") ;
        scanf("%d" , &ID) ;
        for(i=0 ; i < index && (stud_flag == 1) ; ++i)
        {
            if(arr_struct[i].ID == ID)
            {
                student_index = i ;
                stud_flag = 0 ;
            }
        }
        if(student_index == -1)
            printf("this student does not exist :( \n") ;
        else
        {
            int check ;
            printf("if you want to see his data Enter 1 but if you want to remove it enter 2 but to call it any number :) ") ;
            scanf("%d" , &check) ;
            if(check == 1)
                PrintStudent(arr_struct , student_index) ;
            else if(check == 2)
                RemoveStudent(arr_struct , student_index) ;
            else
                CallStudent(arr_struct , student_index) ;
        }

    }
    else
    {
        char name [30] , i , stud_flag =1 , stud_index = -1  ;
        printf("Enter stud_name :)  ") ;
        scanf("%s", name) ;
        for(i=0 ; i < index && (stud_flag==1) ; ++i)
        {
            if(string_compare(arr_struct[i].Name , name))
            {
                stud_index = i ;
                stud_flag = 0 ;
            }
        }
        if(stud_index == -1)
            printf("this student does not exist :( \n") ;
        else
        {
            int check2 ;
            printf("if you want to see his data Enter 1 but if you want to remove it enter 2 but to call it any number :) ") ;
            scanf("%d" , &check2) ;
            if(check2 == 1)
                PrintStudent(arr_struct , stud_index) ;
            else if(check2 == 2)
                RemoveStudent(arr_struct , stud_index) ;
            else
                CallStudent(arr_struct , stud_index) ;
        }




    }


}


