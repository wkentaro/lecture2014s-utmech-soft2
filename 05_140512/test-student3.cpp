/* test-student3.cpp */
#include <stdio.h>
#include <string.h>
#include "labmember3.h"
#include "student3.h"
#include "professor3.h"

void print_labmember(Student s) {
    printf("student name = %s, grade = %d\n", s.GetName(), s.GetGrade());
}
void print_labmember(Professor p) {
    printf("professor name = %s, room = %d\n", p.GetName(), p.GetRoom());
}

int main(int argc, char** argv) {
    Professor p1((char*)"");
    Student s1((char*)"");

    p1.SetName((char*)"yamada");
    s1.SetName((char*)"suzuki");
    p1.SetRoom(123);
    s1.SetGrade(4);

    print_labmember(s1);
    print_labmember(p1);

    return 0;
}
