#include <stdio.h>


int main() {
    char* name = "John Doe";
    int cid = 2271;
    int sid = 10234;
    printf("Name: %s\nCourse ID: %d\nStudent ID: %d\nStudent ID - Course ID is: %d", name, cid, sid, sid - cid);
    return 0;
}