#include "Table.h"

Table::Table(string _name, const vector<Attribute>& _attrs)
{
  name = _name;
  attributes = _attrs;
}

void Table::insertTuple(Tuple& _tuple)
{
  try
  {
    // check for size-compatability
    if(attributes.size() == _tuple.getSize())
    {
      Tuple t = _tuple;
      tuples.push_back(t);
    }
    else
    {
      // size incompatible
      // size of passed in _tuple is not the same as table attributes size
      throw size_exception;
    }
  }
  catch(exception& e)
  {
    cout << "Table::insertTuples() exception: " << e.what() << endl;
  }
}
string Table::getName()
{
  return name;
}
vector<Attribute>& Table::getAttributes()
{
  return attributes;
}
vector<Tuple>& Table::getTuples()
{
  return tuples;
}