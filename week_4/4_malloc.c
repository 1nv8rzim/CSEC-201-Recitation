#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
} Person;

int main()
{
    Person *person1_ptr = malloc(sizeof(Person));

    // Make a new person with pointer

    printf("Name: %s\n", person1_ptr->name);
    printf("Age: %d\n", person1_ptr->age);

    free(person1_ptr);

    return 0;
}