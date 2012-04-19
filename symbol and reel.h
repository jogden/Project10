
class symbol
{
 public:
 // constructor
 symbol();
 // destructor
 ~symbol();
 // returns the symbol name
 char* getName();
 // returns the symbol value
 int getValue();
 // returns the symbol bonus status
 bool getBonusStatus();
 // sets the symbol name
 bool setName(char*);
 // sets the symbol value
 bool setValue(int);
 // prints the symbol data
 void printSymbol();

 private:
 // the symbol name
 char* name;
 // the symbol value
 int value;
 // the symbol bonus value
 bool bonusStatus;
};

class reel
{
 public:
 // default constructor
 reel();
 // copy constructor
 reel(reel&);
 // destructor
 ~reel();
 // get the number of symbols in the reel
 int getSymbolCount();
 // populates a new symbol list of size (int), using the input symbol pointer, and deletes the last list if it exists
 void populateReel(symbol*, int, bool);
 // get the symbol that is (int) offset from the top of the list
 symbol getSymbol(int);
 // copy's the symbol data from the input symbol
 void copySymbol(symbol, int);
 // print the symbol list, including names, values, and bonus status
 void printReel();
 //
 void spinReel();

 private:
 // the list of symbols in the reel
 symbol *list;
 // the number of symbols in the reel
 int symbolCount;
};
