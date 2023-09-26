#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person person1;

    // Make a new person

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
