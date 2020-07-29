#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile("data.xls");
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 10; j++)
			outfile << i + j << (j < 9 ? '\t' : '\n');
	outfile.close();

	ifstream infile("data.xls");
	int n, i = 0;
	while (1)
	{
		infile >> n;
		if (!infile)
			break;
		i++;
		cout << n << (i % 10 ? ' ' : '\n');
	}
	infile.close();
	return 0;
}
