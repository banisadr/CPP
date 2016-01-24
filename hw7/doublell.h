#ifndef DOUBLELL_H_
#define DOUBLELL_H_

#include <string>

struct DLink
{
  std::string data;
  DLink* prev;
  DLink* next;

  DLink(const std::string& str, DLink* p, DLink* n);
};

class DoubleLL
{
 private:

  DLink* head; // pointers to head and tail
  DLink* tail;
  
 public:
  DoubleLL(); // initializes to null list
  ~DoubleLL(); // destructor

  DLink* getHead() const; //gets Head pointer of string
  DLink* getTail() const; //gets tail pointer of string

  void insert(DLink* where, const std::string& what); // insert new link at where
  std::string remove(DLink* where); // remove and return link at where
  int size() const; // returns # of links in list
  std::string nth(int n) const; // return nth link without removal
};

#endif