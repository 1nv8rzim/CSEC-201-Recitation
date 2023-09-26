#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
} Person;

Person *makePerson(char *name, int age)
{
    // Make a new person
}

int main()
{
    Person *person1_ptr = makePerson("John", 30);

    printf("Name: %s\n", person1_ptr->name);
    printf("Age: %d\n", person1_ptr->age);

    free(person1_ptr);

    return 0;
}