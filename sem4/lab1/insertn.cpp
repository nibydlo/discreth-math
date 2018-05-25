#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {

	if (argc == 1) {
		cout << "Insert file name after ./insertn" << endl;
		return 1;
	}

	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	string s;
	while(getline(fin, s)) {
		cout << s + '\n';
		fout << s + '\n';
	}

	fin.close();
	fout.close();
	return 0;
}
