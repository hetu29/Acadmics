//Q1. Write a program to define a structure with tag state with fields state name, number of districts and total population. Read and display the data.
#include<stdio.h>
struct state 
{
    char name[20];
    int districts;
    long population;
};
    int main() 
    {
        struct state s;
        printf("Enter state name: ");
        scanf("%s", s.name);
        printf("Enter number of districts: ");
        scanf("%d", &s.districts);
        printf("Enter total population: ");
        scanf("%ld", &s.population);
        printf("\n--- State Info ---\n");
        printf("Name: %s\n", s.name);
        printf("Districts: %d\n", s.districts);
        printf("Population: %ld\n", s.population);
    return 0;    
    }
