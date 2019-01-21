#include "pch.h"
#include <iostream>
#include <vector>

	void printResult(std::vector<int> r) {
		for (auto it = r.rbegin(); it != r.rend(); ++it)
		{
			std::cout << *it;
		}
	}

	// bool verifyRange(int n)
	// { // Tests number against range of 0 - 255 and returns 1 or 0
	// 	bool isNumberInRange{ n > 0 && n < 50000 };
	// 	return isNumberInRange;
	// }

	int divideNumber(int n)
	{
		return n / 2;
	}

	bool getRemainder(int n)	 // If there is no remainder, returns 0
	{						     // If there is a remainder, returns 1
		bool remainder = (n % 2);
		return remainder;
	}

	void convertToBinary(int n) {

		// if (!verifyRange(n)) {
		// 	std::cout << "You did not enter a number in Range. Exiting.\n";
		// 	return 0;
		// }
		int newnum{ n };;
		std::vector<int> binaryResult;
		while (newnum != 0) {
			//std::cout << getRemainder(newnum);
			binaryResult.push_back(getRemainder(newnum));
			newnum = divideNumber(newnum); // I need this to print out backwards... FUCK
		}

		printResult(binaryResult);

	}

	void getUserInput() {
		std::cout << "Enter a number to convert to Binary.\n";
		std::cout << "--> #";
		int in{ 0 };
		std::cin >> in;
		convertToBinary(in);
	}

	int convertToDecimal() {
			int num, rem, temp, dec = 0, b = 1;
			std::cout << "Enter the binary number : ";
			std::cin >> num;
			temp = num;
			while (num > 0)
			{
				rem = temp % 10;
				dec = dec + rem * b;
				b *= 2;
				temp /= 10;
			}
			std::cout << "The decimal equivalent of " << num << " is " << dec;
			return 0;
	}
