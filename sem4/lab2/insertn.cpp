#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {

	if (argc < 4) {
		cout << "Usage: <turing code file> <cpp file> <output file" << endl;
		return 1;
	}

	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	string s;

	fout << "#include <fstream>\n\n";
	fout << "using namespace std;\n\n";
	fout << "int main() {\n";
	fout << "\t ofstream cout(\"" + string(argv[3]) + "\");\n";

	while(getline(fin, s)) {
		if (s[0] == '/') {
			continue;
		}
		fout << "\tcout << \"" << s << "\\n\";\n";
		//fout << s + '\n';
	}

	fout << "\t cout.close();\n";
	fout << "}";

	fin.close();
	fout.close();
	return 0;
}
