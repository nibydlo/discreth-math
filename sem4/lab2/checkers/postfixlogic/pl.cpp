#include <fstream>

using namespace std;

int main() {
	 ofstream cout("postfixlogic.out");
	cout << "1\n";
	cout << "S 0 -> f 0 >\n";
	cout << "S 1 -> f 1 >\n";
	cout << "f 0 -> f 0 >\n";
	cout << "f 1 -> f 1 >\n";
	cout << "f o -> ro0 * < \n";
	cout << "f a -> ra0 * <\n";
	cout << "f * -> f * >\n";
	cout << "f _ -> cl _ <\n";
	cout << "\n";
	cout << "cl * -> cl _ <\n";
	cout << "cl 0 -> AC 0 ^\n";
	cout << "cl 1 -> AC 1 ^\n";
	cout << "\n";
	cout << "ro0 * -> ro0 * <\n";
	cout << "ro0 0 -> ro10 * <\n";
	cout << "ro0 1 -> ro11 * <\n";
	cout << "\n";
	cout << "ro10 * -> ro10 * <\n";
	cout << "ro10 0 -> f 0 >\n";
	cout << "ro10 1 -> f 1 >\n";
	cout << "\n";
	cout << "ro11 * -> ro11 * <\n";
	cout << "ro11 0 -> f 1 >\n";
	cout << "ro11 1 -> f 1 >\n";
	cout << "\n";
	cout << "ra0 * -> ra0 * <\n";
	cout << "ra0 0 -> ra10 * <\n";
	cout << "ra0 1 -> ra11 * <\n";
	cout << "\n";
	cout << "ra10 * -> ra10 * <\n";
	cout << "ra10 1 -> f 0 >\n";
	cout << "ra10 0 -> f 0 >\n";
	cout << "\n";
	cout << "ra11 * -> ra11 * <\n";
	cout << "ra11 1 -> f 1 >\n";
	cout << "ra11 0 -> f 0 >\n";
	cout << "\n";
	 cout.close();
}