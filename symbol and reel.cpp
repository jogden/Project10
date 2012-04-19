#include "stringFunctions.cpp"
#include "symbol and reel.h"

using namespace std;

// default constructor
symbol::symbol()
{
 // initialize the pointer to the word "Empty"
 name = new char[6];
 stringCopy(name, "Empty");
 // initialize the value to zero
 value = 0;
 // initialize the bonus status to false
 bonusStatus = false;
};

// destructor
symbol::~symbol()
{
 // deacllocate name
 delete[]name;
 // set name to NULL
 name = NULL;
 // set value to zero
 value = 0;
 // bonusStatus to false
 bonusStatus = false;
};

// returns the symbol name
char* symbol::getName()
{
 // return the symbol name
 return name;
};
// returns the symbol value
int symbol::getValue()
{
 // return the symbol value
 return value;
};
// returns the symbol bonus status
bool symbol::getBonusStatus()
{
 // return the symbol status
 return bonusStatus;
};
// sets the symbol name
bool symbol::setName(char* temp)
{
 // if temp is not NULL
 if(temp != NULL)
 {
  // deallocate name
  delete[]name;
  // allocate memory for name big enough to hold what is in temp
  name = new char[findStringLength(temp)];
  // copy temp into name
  stringCopy(name, temp);
  // return success
  return true;
 }
 // return failure
 return false;
};
// sets the symbol value
bool symbol::setValue(int temp)
{
 // the input value is greater than or equal to zero
 if(temp >= 0)
 {
  // set value equal to temp
  value = temp;
  // if temp is greater than zero
  if(temp > 0)
  {
   // set bonusStatus to true
   bonusStatus = true;
  }
  // if temp is zero
  else if(temp == 0)
  {
   // set bonusStatus to false
   bonusStatus = false;
  }
  // return success
  return true;
 }
 // return failure
 return false;
};

// prints the symbol data
void symbol::printSymbol()
{
 // print the name
 cout << name << endl;
 // print the value
 cout << value << endl;
 // print the bonusStatus
 cout << bonusStatus << endl;
};

// copy all symbol data from another symbol into a symbol from list
void reel::copySymbol(symbol temp, int offset)
{
 // set the name of the symbol offset from the base of the list to the name of temp
 list[offset].setName(temp.getName());
 // set the value of the symbol offset from the base of the list to the value of temp
 list[offset].setValue(temp.getValue());
};

// default constructor
reel::reel()
{
 // used for getting default values for the symbol list
 symbol temp;
 // default symbolCount to 10
 symbolCount = 10;
 // allocate ten consecutive memory locations, and have list point to them
 list = new symbol[symbolCount];
 for(int i = 0; i < symbolCount; i++)
 {
  copySymbol(temp, i);
 }
};

// copy constructor
reel::reel(reel &original)
{
 // set symbolCount to the symbol count of original
 symbolCount = original.getSymbolCount();
 // allocate appropriate memory space
 list = new symbol[symbolCount];
 // copy the symbol list of original onto list
 for(int i = 0; i < symbolCount; i++)
 {
  // copy the current symbol onto the current position of list
  copySymbol(original.getSymbol(i), i);
 }
};

// destructor
reel::~reel()
{
 // deallocate list
 delete[]list;
 // set list to NULL
 list = NULL;
 // set symbol count to zero
 symbolCount = 0;
};

// get the number of symbols in the reel
int reel::getSymbolCount()
{
 // returns the number of symbols in the reel
 return symbolCount;
};
// populates a new symbol list of size (int), using the input symbol pointer, and deletes the last list if it exists
void reel::populateReel(symbol* array, int numberOfSymbols, bool )
{
 
};
// get the value of the symbol that is (int) offset from the top of the list
symbol reel::getSymbol(int offset)
{
 // return the symbol offset from the base of the list
 return list[offset];
};

// print the symbol list, including names, values, and bonus status
void reel::printReel()
{
 // run through the list of symbols
 for(int i = 0; i > symbolCount; i++)
 {
  // print the current symbol
  list[i].printSymbol();
 }
};
