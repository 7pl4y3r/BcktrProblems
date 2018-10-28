#pragma once
#include <iostream>

class Bracket {

public:

	void readData() {
	
		std::cout << "n = "; std::cin >> n;
		bcktr();
	}

private:

	int n;
	char st[10];

	void printStack(int p) {

		for (int i = 1; i <= p; i++)
			std::cout << st[i] << ' ';

		std::cout << "\n";
	}

	bool isValid(int p) {

		int ob = 0, cb = 0;
		for(int i = 1; i <= p; i++)
			switch (st[i]) {

			case '(': ob++; break;
			case ')': cb++; break;
			}

		if (ob < cb)
			return false;

		if (ob > n / 2)
			return false;

		return true;
	}

	void bcktr() {

		int p = 1;
		st[p] = '(' - 1;

		while (p > 0) {

			if (st[p] < ')') {
				
				st[p]++;
				if (isValid(p)) {
					if (p == n)
						printStack(p);
					else
						st[++p] = '(' - 1;
				}
			}
			else p--;
				


		}
	}

};
