#pragma once
#include <iostream>

class Girls {

public:

	void readData() {

		std::cout << "n = "; std::cin >> n;
		std::cout << "k = "; std::cin >> k;
		std::cout << "g = "; std::cin >> g;
		std::cout << "t = "; std::cin >> t;

		bcktr();
	}

private:

	int n, k, g, t, st[10];

	int numOfGirls(int p) {

		int c = 0;
		for (int i = 1; i <= p; i++)
			if (st[i] <= g)
				c++;

		return c;
	}

	void printStack(int p) {

		for (int i = 1; i <= p; i++)
			if (st[i] <= g)
				std::cout << 'f' << st[i] << ' ';
			else
				std::cout << 'b' << st[i] - g << ' ';

		std::cout << "\n";
	}

	void bcktr() {

		int p = 1;
		st[p] = 0;

		while (p > 0) {

			if (st[p] < n) {
			
				st[p]++;
				if (p == k) {
					if (numOfGirls(p) == t)
						printStack(p);
				}
				else st[++p] = st[p - 1];
			
			}
			else p--;

		}

	}

	void bcktr1(int p) {

		for (int val = st[p-1] + 1; val <= n; val++) {

			st[p] = val;
				if (p == k) {

					if (numOfGirls(p) == t)
						printStack(p);

			}
			else bcktr1(p + 1);

		}
	}
};