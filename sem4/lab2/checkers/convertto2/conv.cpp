#include <fstream>

using namespace std;

int main() {
	 ofstream cout("convertto2.out");
	cout << "start: s\n";
	cout << "accept: ac\n";
	cout << "reject: rj\n";
	cout << "blank: _\n";
	cout << "\n";
	cout << "s 0 -> l 0 <\n";
	cout << "s 1 -> l 1 <\n";
	cout << "s 2 -> l 2 <\n";
	cout << "\n";
	cout << "l _ -> z # <\n";
	cout << "\n";
	cout << "z _ -> f 0 >\n";
	cout << "\n";
	cout << "f 0 -> f 0 >\n";
	cout << "f 1 -> f 1 >\n";
	cout << "f 2 -> f 2 >\n";
	cout << "f _ -> m _ <\n";
	cout << "f # -> f # >\n";
	cout << "\n";
	cout << "m 0 -> r1 2 <\n";
	cout << "m 1 -> r 0 <\n";
	cout << "m 2 -> r 1 <\n";
	cout << "\n";
	cout << "r1 0 -> r1 2 <\n";
	cout << "r1 1 -> r 0 <\n";
	cout << "r1 2 -> r 1 <\n";
	cout << "r1 # -> ff # >\n";
	cout << "\n";
	cout << "r 0 -> r 0 <\n";
	cout << "r 1 -> r 1 <\n";
	cout << "r 2 -> r 2 <\n";
	cout << "r # -> p # <\n";
	cout << "\n";
	cout << "p 0 -> f 1 >\n";
	cout << "p 1 -> p 0 <\n";
	cout << "p _ -> f 1 >\n";
	cout << "\n";
	cout << "ff 2 -> ff 2 >\n";
	cout << "ff _ -> cl _ <\n";
	cout << "\n";
	cout << "cl 2 -> cl _ <\n";
	cout << "cl # -> ret _ <\n";
	cout << "\n";
	cout << "ret 0 -> ret 0 <\n";
	cout << "ret 1 -> ret 1 <\n";
	cout << "ret _ -> ac _ >\n";
	 cout.close();
}