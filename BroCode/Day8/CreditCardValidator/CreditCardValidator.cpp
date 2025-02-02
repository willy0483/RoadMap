#include <iostream>

int getDigit(const int numbers);
int sumOddDigits(const std::string cardNumbers);
int sumEvenDigits(const std::string cardNumbers);

int main()
{
	std::string cardNumber;
	int result = 0;

	std::cout << "Enter a credit card #: ";
	std::cin >> cardNumber;

	result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

	if(result % 10 == 0)
	{
		std::cout << cardNumber << " is valid";
	}
	else
	{
		std::cout << cardNumber << " is not valid";
	}

	return 0;
}

int getDigit(const int numbers)
{
	return numbers % 10 + (numbers / 10 % 10);
}
int sumOddDigits(const std::string cardNumbers)
{
	int sum = 0;
	for(int i = cardNumbers.size() - 1; i >= 0; i -= 2)
	{
		sum += cardNumbers[i] - '0';
	}
	return sum;
}

int sumEvenDigits(const std::string cardNumbers)
{
	int sum = 0;
	for(int i = cardNumbers.size() - 2; i >= 0; i -= 2)
	{
		sum += getDigit((cardNumbers[i] - '0') * 2);
	}
	return sum;
}