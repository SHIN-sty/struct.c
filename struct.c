#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};
// student1�̶�� ����ü�� ����
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    struct student1 st1 = {'A', 100, 'A'};
    // student1�� Ÿ��st1�� ����
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};
    
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;
    //student2 Ÿ�Կ� st3�� ����

    st3 = st2;
    //st2�� st3�� ���� ġȯ(����)�߽��ϴ�. 
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    //st2�� ���� st3�� �����߽��ϴ�.
    printf("���¾�\n");
    printf("2017038096\n");

    /* equality test */
    if(st3 == st2)
       printf("equal\n");
    else
       printf("not equal\n");
    //st3�� st2�� ���� ���� �����Ƿ� ������ ��� �˻�(�� �������� ���� �������� �˻�)�� �մϴ�.
    return 0;
}