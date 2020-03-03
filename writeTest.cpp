#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ofstream file;
	file.open("test.txt");
	file << "123" << endl;
	file.close();
	return 0;
}
