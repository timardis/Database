#ifndef TABLE_H
#define TABLE_H

using namespace std;

#include <string>
#include <vector>
#include "Tuple.h"



class Table
{
public:
  string name;
  
  vector<Attribute> attributes;
  vector<Tuple> tuples;
  
  Table() {};
  Table(string _name, const vector<Attribute>& _attrs);
  
  void insertTuple(Tuple& _tuple);
  
  string getName();
  vector<Attribute>& getAttributes();
  vector<Tuple>& getTuples();
};
#endif