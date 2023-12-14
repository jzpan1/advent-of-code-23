// https://adventofcode.com/2023/day/1
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ifstream fin("input/1-1.in");
	string line;
	int line_sum = 0;
	while (fin >> line) {
		char first = 'a';
		char last;
		for (char c : line) {
			if (isdigit(c)) {
				if (first == 'a') {
					first = c;
				}
				last = c;
			}
		}
		line_sum += stoi("" + first + last); 
	}
	cout << line_sum;
	return 0;
}