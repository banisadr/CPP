/* File: dlist_test.cpp
   Author: Richard Eisenberg (eir@cis)
   Desc: exercises DoubleLL
*/

#include <iostream>
#include <string>
#include "doublell.h"

using namespace std;

string listToString(const DoubleLL& list)
{
  int size = list.size();
  if(size == 0)
  {
    return "()";
  }
  else if(size == 1)
  {
    return "(" + list.nth(0) + ")";
  }
  else
  {
    string s = "(" + list.nth(0);
    for(DLink* cur = list.getHead()->next; cur; cur = cur->next)
    {
      s += ", " + cur->data;
    }
    s += ")";

    return s;
  }
}

// post: list printed along with output saying what the list should be
void printTest(const DoubleLL& list, string desired, int size)
{
  cout << listToString(list) << "; size = " << list.size() << endl;
  cout << "Should be " << desired << "; size = " << size << endl;
  
  if(listToString(list) != desired || list.size() != size)
  {
    cout << "TEST FAILED." << endl;
  }

  cout << endl;
}

int main()
{
  DoubleLL list;
  
  // start with empty list?
  printTest(list, "()", 0);
		
  // build list with a few elements
  list.insert(NULL, "precociously");
  list.insert(NULL, "swum");
  list.insert(NULL, "broodmare");
  
  printTest(list, "(precociously, swum, broodmare)", 3);
  
  // get all three elements:
  cout << "Should be precociously, then swum, then broodmare:" << endl;
  cout << list.nth(0) << endl;
  cout << list.nth(1) << endl;
  cout << list.nth(2) << endl;
  cout << endl;
  
  // put a string in the interior
  DLink* cur = list.getHead()->next;
  list.insert(cur, "boysenberry");
		
  printTest(list, "(precociously, boysenberry, swum, broodmare)", 4);
		
  // put a word at the beginning
  list.insert(list.getHead(), "unbidden");
		
  printTest(list, "(unbidden, precociously, boysenberry, swum, broodmare)", 5);
  
  // put a word at the end
  list.insert(NULL, "upstage");
		
  printTest(list, "(unbidden, precociously, boysenberry, swum, broodmare, upstage)", 6);
  
  // remove interior node:
  cur = list.getTail()->prev->prev;
  list.remove(cur);
  
  printTest(list, "(unbidden, precociously, boysenberry, broodmare, upstage)", 5);
  
  // remove first node:
  list.remove(list.getHead());
  
  printTest(list, "(precociously, boysenberry, broodmare, upstage)", 4);
  
  // remove last node:
  list.remove(list.getTail());
  
  printTest(list, "(precociously, boysenberry, broodmare)", 3);
  
  // remove all nodes
  list.remove(list.getHead());
  list.remove(list.getHead());
  list.remove(list.getHead());
  
  printTest(list, "()", 0);
  
  cout << "If nothing failed, looks good to me!" << endl;

  return 0;
}
