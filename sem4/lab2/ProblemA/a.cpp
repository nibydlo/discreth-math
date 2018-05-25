#include <bits/stdc++.h>
using namespace std;

int main() {

	ofstream fout("zero.out");
	/*fout << "start: s \n"
	"accept: ac \n"
	"reject: rj \n"
	"blank: _ \n"
	"s _ -> ac _ ^\n"
	"s 0 -> n _ >\n"
	"n 0 -> s _ > \n"
	"n _ -> rj _ > \n" << endl;*/

	fout << "start: s
accept: ac
reject: rj
blank: _
s 1 -> s 1 >
s 1' -> s 1' >
s 0 -> s 0 >
s 0' -> s 0' >
s + -> s + >
s _ -> r _ <
r + -> cl _ <
r 0 -> r0 _ <
r 1 -> r1 _ <
cl 0' -> cl 0 <
cl 1' -> cl 1 <
cl 0 -> ac _ <
cl 1 -> ac _ <
cl _ -> ac _ >
r0 1 -> r0 1 <
r0 0 -> r0 0 <
r0 + -> r00 + <
r00 0' -> r00 0' <
r00 1' -> r00 1' <
r00 0 -> s 0' >
r00 1 -> s 1' >
r00 _ -> s 0' >
r1 0 -> r1 0 <
r1 1 -> r1 1 <
r1 + -> r11 + <
r11 0' -> r11 0' <
r11 1' -> r11 1' <
r11 0 -> s 1' >
r11 1 -> r12 0' <
r11 _ -> s 1' >
r12 0 -> s 1 >
r12 1 -> r12 0 <
r12 _ -> s 1 >" << endl;
	fout.close();

	return 0;
}
