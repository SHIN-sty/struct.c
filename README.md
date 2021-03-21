# struct.c
homework#3
#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};
// student1이라는 구조체를 선언
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    struct student1 st1 = {'A', 100, 'A'};
    // student1의 타입st1을 생성
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};
    
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;
    //student2 타입에 st3를 선언

    st3 = st2;
    //st2를 st3에 구조 치환(대입)했습니다. 
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    //st2의 값을 st3에 저장했습니다.
    printf("신태양\n");
    printf("2017038096\n");

    /* equality test */
    if(st3 == st2)
       printf("equal\n");
    else
       printf("not equal\n");
    //st3와 st2의 값이 같지 않으므로 구조의 동등성 검사(두 구초제의 값이 동일한지 검사)를 합니다.
    return 0;
}
