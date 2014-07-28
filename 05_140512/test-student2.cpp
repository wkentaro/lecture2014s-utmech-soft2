#include <stdio.h>
#include <string.h>
#include "labmember.h"
#include "student2.h"
#include "professor2.h"

void print_labmember(Student s) {
    printf("student name = %s, grade = %d\n", s.GetName(), s.GetGrade());
}
void print_labmember(Professor p) {
    printf("professor name = %s, room = %d\n", p.GetName(), p.GetRoom());
}

int main (int argc, char** argv) {
    Professor p1("yamada");
    Student s1("suzuki");

    p1.SetName((char*)"Tanaka");
    p1.SetRoom(123);
    s1.SetGrade(4);

    //printf("professor name = %s (%d)\n", p1.GetName(), p1.GetRoom());
    //printf("student name   = %s (%d)\n", s1.GetName(), s1.GetGrade());
    print_labmember(p1);
    print_labmember(s1);

    return 0;
}
