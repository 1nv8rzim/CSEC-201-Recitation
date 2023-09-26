#include <stdio.h>
#include <string.h>

// typedef with inline struct
typedef struct
{
    char name[50];
    int age;
} Person;

int main()
{
    Person person1;
    Person *person1_ptr = &person1;

    // Make a new person with pointer

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
