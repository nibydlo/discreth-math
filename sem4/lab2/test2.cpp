#include <fstream>

using namespace std;

int main() {
	 ofstream cout("aplusb.out");
	cout << "start: s\n";
	cout << "accept: ac\n";
	cout << "reject: rj\n";
	cout << "blank: _\n";
	cout << "s 1 -> s 1 >\n";
	cout << "s 1' -> s 1' >\n";
	cout << "s 0 -> s 0 >\n";
	cout << "s 0' -> s 0' >\n";
	cout << "s + -> s + >\n";
	cout << "s _ -> r _ <\n";
	cout << "r + -> cl _ <\n";
	cout << "r 0 -> r0 _ <\n";
	cout << "r 1 -> r1 _ <\n";
	cout << "cl 0' -> cl 0 <\n";
	cout << "cl 1' -> cl 1 <\n";
	cout << "cl 0 -> ac _ <\n";
	cout << "cl 1 -> ac _ <\n";
	cout << "cl _ -> ac _ >\n";
	cout << "r0 1 -> r0 1 <\n";
	cout << "r0 0 -> r0 0 <\n";
	cout << "r0 + -> r00 + <\n";
	cout << "r00 0' -> r00 0' <\n";
	cout << "r00 1' -> r00 1' <\n";
	cout << "r00 0 -> s 0' >\n";
	cout << "r00 1 -> s 1' >\n";
	cout << "r00 _ -> s 0' >\n";
	cout << "r1 0 -> r1 0 <\n";
	cout << "r1 1 -> r1 1 <\n";
	cout << "r1 + -> r11 + <\n";
	cout << "r11 0' -> r11 0' <\n";
	cout << "r11 1' -> r11 1' <\n";
	cout << "r11 0 -> s 1' >\n";
	cout << "r11 1 -> r12 0' <\n";
	cout << "r11 _ -> s 1' >\n";
	cout << "r12 0 -> s 1 > \n";
	cout << "r12 1 -> r12 0 <\n";
	cout << "r12 _ -> s 1 >\n";
	 cout.close();
}