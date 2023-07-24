
#define SCHOOL_CAPACITY 4
typedef struct student
{
    int ID ;
    int Class ;
    int Telophone ;
    char Name [30] ;
    /*char* courses[NO_OF_COURSES] ;
    char grade [NO_OF_COURSES] ;*/

}Student_t ;

void CallStudent (Student_t arr_str [] , int stud_index ) ;
void AddStudent (Student_t arr_str []) ;
void PrintStudent (Student_t arr_str [] , int stud_index) ;
void PrintAllStudent (Student_t arr_str []) ;
void RemoveStudent(Student_t arr_str [] , int stud_index) ;
void RemoveAllStudents() ;
void StudentSearch (Student_t arr_struct []) ;
int string_compare (char* str1 , char* str2) ;
