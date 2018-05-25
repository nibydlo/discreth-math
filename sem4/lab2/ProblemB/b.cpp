#include <bits/stdc++.h>
using namespace std;

int main() {

	ofstream fout("aplusb.out");
	fout << "start: s\n"
		"accept: ac\n"
		"reject: rj\n"
		"blank: _\n"
		//start and forward
		"s 1 -> s 1 >\n"
		"s 1' -> s 1' >\n"
		"s 0 -> s 0 >\n"
		"s 0' -> s 0' >\n"
		"s + -> s + >\n"
		"s _ -> r _ <\n"

		//reverse
		"r + -> cl _ <\n"
		"r 0 -> r0 _ <\n"
		"r 1 -> r1 _ <\n"

		//clean
		"cl 0' -> cl 0 <\n"
		"cl 1' -> cl 1 <\n"
		"cl 0 -> cl 0 <\n"
		"cl 1 -> cl 1 <\n"
		"cl _ -> ac _ >\n"

		//reverse if 0
		//before +
		"r0 1 -> r0 1 <\n"
		"r0 0 -> r0 0 <\n"
		"r0 + -> r00 + <\n"
		//after +
		"r00 0' -> r00 0' <\n"
		"r00 1' -> r00 1' <\n"
		"r00 0 -> s 0' >\n"
		"r00 1 -> s 1' >\n"
		"r00 _ -> s 0' >\n"

		//reverse if 1
		//before +
		"r1 0 -> r1 0 <\n"
		"r1 1 -> r1 1 <\n"
		"r1 + -> r11 + <\n"

		//after +
		"r11 0' -> r11 0' <\n"
		"r11 1' -> r11 1' <\n"
		"r11 0 -> s 1' >\n"
		"r11 1 -> r12 0' <\n"
		"r11 _ -> s 1' >\n"

		"r12 0 -> s 1 > \n"
		"r12 1 -> r12 0 <\n"
		"r12 _ -> s 1 >\n";
}
