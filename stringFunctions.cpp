#include <iostream>

int findStringLength(char* name)
{
 // holds the size of the string
 int size = 0;

 // while name is NOT null char
 while((*name) != '\0')
 {
  // increment name
  name++;
  // increment size
  size++;
 }
 // return the size of the string, including the null char
 return size + 1;
};

void stringCopy( char *destination, char *source)
{
 // while source is NOT a null char
 while((*source) != '\0')
 {
  // set the current position of destination to the current position of source
  (*destination) = (*source);
  // increment destination
  destination++;
  // increment source
  source++;
 }
 // set the final position to a null char
 (*destination) = '\0';
};
