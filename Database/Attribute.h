#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

using namespace std;

#include <string>

enum Type { INT, VARCHAR };

class Attribute
{
public:
  Type type;
  string name;
  bool primaryKey;

  Attribute() {};
  Attribute(string _name, Type _type, bool _primaryKey)
  {
    name = _name;
    type = _type;
    primaryKey = _primaryKey;
  }
  
  string getName()
  {
    return name;  
  };
  bool isInt()
  {
    return (type == INT);
  }
  bool isVarchar()
  {
    return (type == VARCHAR);
  }
  bool isString()
  {
    return (type == VARCHAR);
  }
  bool isPrimaryKey()
  {
    return primaryKey;
  }
};

//// TEST CHANGE

#endif
