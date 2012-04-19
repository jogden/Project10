#include "symbol and reel.cpp"

using namespace std;

int main()
{
 symbol dude;
 reel man;
 dude.setName("Bob");
 dude.setValue(0);
 dude.printSymbol();
 
 man.printReel();
 system("pause");
 return 0;
}
