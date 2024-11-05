#include<stdio.h>
#include<stdint.h>
#include<string.h>

struct Person{
    struct Name{
        char firstName[20];
        char lastName[20];
        
    }name;
    
    double personID;
    
    struct Body{
        float weight;
        float length;
        
    }body;
    
    struct BirthDay{
        int day;
        int month;
        int year;
        
    }birthDay;
    
    
}person1;

int main()
{
	
	strcpy(person1.name.firstName,"Tahir Can");
	strcpy(person1.name.lastName,"Kozan");
	
	person1.personID = 11111111;
	
	person1.body.weight = 90;
	person1.body.length = 1.85;
	
	person1.birthDay.day=8;
	person1.birthDay.month=5;
	person1.birthDay.year=2001;
	
	printf("Name: %s %s\n", person1.name.firstName, person1.name.lastName);
    printf("ID: %.0lf\n", person1.personID);
    printf("Weight: %.2f\n", person1.body.weight);
    printf("Length: %.2f\n", person1.body.length);
    printf("Birth Date: %02d/%02d/%04d\n", person1.birthDay.day, person1.birthDay.month, person1.birthDay.year);
	
}
