#include <stdio.h>
#include <stdlib.h>
struct Student {
char name[20];
char major[20];
int age;
double gpa;
};
int main() {
    /*

char greade = 'a';


switch(greade){
case 'a':
    printf("You did great job");
    break;
case 'b':
    printf("You did allright");
    break;
case 'c':
    printf("You should try again");
    break;
case 'd':
    printf("You were close to fail");
    break;
case 'f':
    printf("You have failed ");
    break;
default :
    printf("Wrong grade !!");
}
*/
struct Student student1;
student1.age = 23;
student1.gpa = 3.2;
strcpy(student1.name , "Mike");

printf("%.2f\n", student1.gpa);
printf("%s", student1.name);s

return 0;
}
