#include <fstream>

using namespace std;

int main() {
	 ofstream cout("balanced.out");
	cout << "start: s\n";
	cout << "accept: ac\n";
	cout << "reject: rj\n";
	cout << "blank: _\n";
	cout << "s _ -> ac _ ^\n";
	cout << "s ) -> rj _ ^\n";
	cout << "\n";
	cout << "s ( -> f ( >\n";
	cout << "f ( -> f ( >\n";
	cout << "f (' -> f (' >\n";
	cout << "f )' -> f )' >\n";
	cout << "f ) -> r )' <\n";
	cout << "f _ -> ch _ <\n";
	cout << "ch )' -> ch ) <\n";
	cout << "ch (' -> ch ( <\n";
	cout << "ch ) -> rj _ ^\n";
	cout << "ch ( -> rj _ ^\n";
	cout << "ch _ -> ac _ ^\n";
	cout << "r ( -> f (' >\n";
	cout << "r ) -> r ) <\n";
	cout << "r (' -> r (' <\n";
	cout << "r )' -> r )' <\n";
	cout << "r _ -> rg _ ^\n";
	cout << "\n";
	 cout.close();
}