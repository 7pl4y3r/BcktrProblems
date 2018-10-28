#pragma once
#include <iostream>
#include <fstream>

class Dividers {

public:

	int n, m, st[10], div[30], k;
	std::ofstream out;
	void readData() {

		std::cout << "n = "; std::cin >> n;
		std::cout << "m = "; std::cin >> m;

		getDividers();
		bcktr(1);
	}


private:

	bool isValid(int p) {

		for (int i = 1; i < p; i++)
			if (st[i] == st[p])
				return false;

		return true;
	}

	void printStack(int p) {

		for (int i = 1; i <= p; i++)
			std::cout << div[st[i]] << ' ';

		std::cout << "\n";
	}

	void bcktr(int p) {

		for (int val = st[p-1] + 1; val <= k; val++) {

			st[p] = val;
			if (isValid(p)) {
				if(p == m)
					printStack(p);
			}
			else bcktr(p + 1);

		}
	}

	void getDividers() {

		div[1] = 1;
		k = 1;
		for (int d = 2; d <= n / d; d++)
			if (n % d == 0)
				div[++k] = d;

		div[++k] = n;
		//for (int i = 1; i <= k; i++)
			//std::cout << div[i] << ' ';
	}

};