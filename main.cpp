#include <iostream>
#include "linkedlist.h"
#include "type.h"

using namespace std;

const int Elem = 10;

int main()
{
  TX vect[Elem] = {5, 30, 90, 3, 28, 54, 45, 12, 9, 24};
                  
LinkedList<TX> mylist;

for(auto x=0; x< Elem; x++)
{ mylist.insert_at_head(vect[x]);
  cout << mylist << endl;
}
for(auto x=0;x< Elem; x++)
{ mylist.insert_at_tail(vect[x]);
  cout << mylist << endl;
}
}