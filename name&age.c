#include <stdio.h>

int main() {
    char name[100];            
    
    printf("What is your name: ");
    scanf("%s", name);         
    
    int age;

    printf("What is your age: ");
    scanf("%d", &age);

    printf("\nHi %s, you are now %d years old\n", name, age);

    return 0;
}
