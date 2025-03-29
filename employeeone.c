
#include <string.h>
#include "Employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber) {
    const PtrToConstEmployee endPtr = ptr + tableSize; // Pointer arithmetic to find the end of the array

    for (; ptr < endPtr; ptr++) // Loop through the array until the end
    {
        if (ptr->number == targetNumber) // Check if the current employee's number matches the target number
            return (PtrToEmployee)ptr; // Return the pointer to the matching employee
    }

    return NULL; // Return NULL if no matching employee is found
}
 
//Essentially the same functionality as above but comparing strings to check if equal 

PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize,char * targetName){ 

    const PtrToConstEmployee endPtr = ptr + tableSize; 

    for(; ptr < endPtr; ptr++) 

    { 
        if(strcmp(ptr->name,targetName) == 0) 

            return (PtrToEmployee) ptr; 

        } 

    return NULL; 

} 

PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize,char * targetPhone){ 

    const PtrToConstEmployee endPtr = ptr + tableSize; 

    for(; ptr < endPtr; ptr++) 

    { 
        if(strcmp(ptr->phone,targetPhone) == 0) 

            return (PtrToEmployee) ptr; 

        } 

    return NULL; 

} 
