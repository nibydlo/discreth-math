#include <fstream>

using namespace std;

int main() {
	 ofstream cout("mirror.out");
	cout << "start: s\n";
	cout << "accept: ac\n";
	cout << "reject: rj\n";
	cout << "blank: _\n";
	cout << "s 0 -> s 0 >\n";
	cout << "s 1 -> s 1 >\n";
	cout << "s _ -> r _ <\n";
	cout << "r 0 -> f0 0' >\n";
	cout << "r 1 -> f1 1' >\n";
	cout << "r 0' -> r 0' <\n";
	cout << "r 1' -> r 1' <\n";
	cout << "r _ -> cl _ >\n";
	cout << "f0 0 -> f0 0 >\n";
	cout << "f0 1 -> f0 1 >\n";
	cout << "f0 0' -> f0 0' >\n";
	cout << "f0 1' -> f0 1' >\n";
	cout << "f0 _ -> r 0' <\n";
	cout << "f1 0 -> f1 0 >\n";
	cout << "f1 1 -> f1 1 >\n";
	cout << "f1 0' -> f1 0' >\n";
	cout << "f1 1' -> f1 1' >\n";
	cout << "f1 _ -> r 1' <\n";
	cout << "cl 0' -> cl 0 >\n";
	cout << "cl 1' -> cl 1 >\n";
	cout << "cl _ -> ret _ <\n";
	cout << "ret 0 -> ret 0 <\n";
	cout << "ret 1 -> ret 1 <\n";
	cout << "ret _ -> ac _ >\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	 cout.close();
}