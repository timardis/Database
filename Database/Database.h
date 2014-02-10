#include "Table.h"
#include <vector>

using namespace std;

class Database {
	vector<Table*> tables;

public:
	Database();

	/****************************************************************/
	/*	Helper Functions											*/
	/****************************************************************/
	static Table& findTable(const string& table_name);

	/****************************************************************/
	/*	Table Manipulation Functions								*/
	/****************************************************************/
	void createTable(const string& table_name, const vector<Attribute>& attrs);
	void dropTable(Table& table);
	void insertInto(Table& table, vector<string>& values);
	void insertInto(Table& table_dest, const Table& table_src);
	void deleteFrom(Table& table, const vector<Attribute>& attrs, const vector<string>& comp_values, const vector<string>& ops);
	void update(Table& table, const vector<Attribute>& attrs, const vector<string>& new_values, const vector<string>& comp_values, const vector<string>& ops);

	/****************************************************************/
	/*	Relational Algebra Functions								*/
	/****************************************************************/
	Table* select(const Table& table, const vector<Attribute>& attrs, const vector<string>& comp_values, const vector<string>& ops);
	Table* project(const Table& table, const vector<Attribute>& attrs);
	Table* rename(Table& table, vector<string>& attrs);
	Table* setUnion(const Table& table1, const Table& table2);
	Table* setDiff(const Table& table1, const Table& table2);
	Table* crossProduct(const Table& table1, const Table& table2);
	Table* join(const Table& table1, const Table& table2);
};