#include <stdio.h>
#include <string.h>

// typedef with seperate struct
struct person_seperate
{
    char name[50];
    int age;
};

typedef struct person_seperate PersonSeperate;

// typedef with inline struct
typedef struct
{
    char name[50];
    int age;
} Person;

int main()
{
    Person person1;

    // Make a new person

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
