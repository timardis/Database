#ifndef TUPLE_H
#define TUPLE_H

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include "Attribute.h"

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "Size incompatible";
  }
} size_exception;

class Tuple
{
public:
  int size;
  vector<Type> types;
  //  store everything as strings for now
  vector<string> values;

  Tuple(const vector<Type>& _types, const vector<string>& _values)
  {
    try
    {
      // check for size compatability
      if(_types.size() == _values.size())
      {
        size = _types.size();
        types = _types;
        values = _values;
      }
      else
      {
        // size incompatible, throw Exception
        throw size_exception;
      }
    }
    catch(exception& e)
    {
      cout << "Tuple() constructor exception: " << e.what() << endl;
    }
  }
  
  const int getSize()
  {
    return size;
  }
  vector<Type>& getTypes()
  {
    return types;
  }
  vector<string>& getValues()
  {
    return values;
  };
};

#endif
