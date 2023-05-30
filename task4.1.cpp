#include <iostream>
#include <fstream>
#include <ctime>

enum banknote_denomination {

	five_thousent,
	two_thousent,
	one_thousent,
	five_hundred,
	one_hundred

};

void checking_the_status_of_the_ATM(int& total_sum) {

	int buffer[1];

	std::ifstream in_storage;

	in_storage.open("D:\\Skillbox\\C++\\working\\Practice 20 (Writing to files)\\task4.1\\storage_full.bin", std::ios::binary);

	if (!in_storage.is_open()) {

		std::cout << "WARNING!\n";
		std::cout << "ERROR!!!\n";
		std::cout << "File is not open\n";

	}

	for (int i = 0; i < 1000; ++i) {

		in_storage.read((char*)&buffer, sizeof(buffer));
		total_sum += buffer[0];		
		
		if (in_storage.gcount() == 0) {

			total_sum = 0;
			break;
		}
	}
		
	in_storage.close();
}

int main() {

	std::srand(std::time(nullptr));
	
	int total_sum = 0;
	
	checking_the_status_of_the_ATM(total_sum);	
	
	std::string operation;	

	if (total_sum > 0) {

		do {

			std::cout << "If you want to fill the ATM, enter \"+\"\n";
			std::cout << "If you want to withdraw cash, enter \"-\"\n";
			std::cin >> operation;

		} while ((operation != "+") && (operation != "-"));

		if (operation == "+") {















		}
		else if (operation == "-") {

















		}
	}
	else {
		std::cout << "There are no banknotes in the ATM. You need to download the ATM.";
	}






	
}