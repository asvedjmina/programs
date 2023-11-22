#include <iostream>
#include <vector>

int lionChoice();
void lionList();
int parrotChoice();
void parrotList();
int catChoice();
void catList();

//creating classes

class Animal {
public:
	int pawsNumber;
	std::string color;
	std::string name;
	void sound() {
		std::cout << "hmm..." << "\n";
	};
	void showAll() {
		std::cout << "\n_____________________________"<< "\n";
		std::cout << "The number of paws: " << pawsNumber << "\n";
		std::cout << "Colour: " << color << "\n";
		std::cout << "_____________________________" << "\n";
	}
	Animal(std::string animalName) {
		name = animalName;
		pawsNumber = 4;
		color = "green";
		showAll();
	};
	Animal() {
		pawsNumber = 4;
		color = "green";
	}

};

class Lion : public Animal {
public:
	void sound() {
		std::cout << "\nThe lion says: Rrrrrrrrrrr" << "\n";
	}
	void feed() {
		std::cout << "\nThe lion is happy and not hungry anymore" << "\n";
	}
	void fright() {
		std::cout << "\nThe lion is opening his mouth and roaring furiously" << "\n";
	}
	void palm() {
		std::cout << "\nThe lion is making mur mur and pleased" << "\n";
	}
	Lion(){
		pawsNumber = 4;
		color = "yellow";
	}
	Lion(std::string lionName) {
		name = lionName;
		pawsNumber = 4;
		color = "yellow";
	}

};

class Parrot : public Animal {
public:
	void sound() {
		std::cout << "\nThe parrot says: Korrambaaa" << "\n";
	};
	void feed() {
		std::cout << "\nThe parrot is happy and not hungry anymore" << "\n";
	};
	void fly() {
		std::cout << "\nThe parrot is flying away and saying GOOODBYEEE" << "\n";
	}
	Parrot() {
		pawsNumber = 2;
		color = "red";
	};
	Parrot(std::string parrotName) {
		name = parrotName;
		pawsNumber = 2;
		color = "red";
	}

};

class Cat : public Animal {
public:
	void sound() {
		std::cout << "\nThe cat says: Mye, mye, mye" << "\n";
	};
	void feed() {
		std::cout << "\nThe cat is happy and not hungry anymore" << "\n";
	};
	void sayCompliment() {
		std::cout << "\nThe cat is pleased and making muuuurrrr muuurrrr" << "\n";
	}
	void irritate() {
		std::cout << "\nOuch! The cat has biten you!" << "\n";
	}
	Cat() {
		pawsNumber = 4;
		color = "grey";
	};
	Cat(std::string catName) {
		name = catName;
		pawsNumber = 4;
		color = "grey";
	}
};

//creating vectors to store animals

std::vector<std::string> creatures;
std::vector<std::string> lions;
std::vector<std::string> parrots;
std::vector<std::string> cats;

Lion lionObj;
Parrot parrotObj;
Cat catObj;

int main() {

	//creating first animals in the zoo
	Lion lion1;
	lion1.name = "Leo";
	creatures.push_back("lion " + lion1.name);
	lions.push_back(lion1.name);
	Lion lion2;
	lion2.name = "Sam";
	creatures.push_back("lion " + lion2.name);
	lions.push_back(lion2.name);

	Parrot parrot1;
	parrot1.name = "Ara";
	creatures.push_back("parrot " + parrot1.name);
	parrots.push_back(parrot1.name);

	Cat cat1;
	cat1.name = "Murka";
	creatures.push_back("cat " + cat1.name);
	cats.push_back(cat1.name);

	std::string parrotName;
	std::string catName;
	std::string lionName;
	std::string fullLionName;
	std::string fullParrotName;
	std::string fullCatName;
	std::string typeDelete;
	std::string nameDelete;

beginning:
	// main zoo menu
	std::cout << "\n_____________________________" << "\n";
	std::cout << "Commands:\n 1. Create an animal\n 2. Remove an animal\n 3. See the list of zoo's animals\n 4. Come close to lions\n 5. Come closer to parrots\n 6. Come close to cats\n 7. Exit \n\nWrite an option number to continue:" << "\n";
	std::cout << "_____________________________" << "\n";
	int optionNumber;
	std::cin >> optionNumber;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nIt is not a number!!! Try again! " << std::endl;
		std::cin >> optionNumber;
	}

	//execution of main options
	switch (optionNumber) {
	case 1:
		std::cout << "\nChoose the type of animal you want to create:" << "\n";
		std::cout << "\n 1. The Lion\n 2. The Parrot\n 3. The Cat\n Write an option number to continue:" << "\n";
		int typeNumber;
		std::cin >> typeNumber;
		while (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nIt is not a number!!! Try again! " << std::endl;
			std::cin >> typeNumber;
		}

		if (typeNumber == 1) {
			std::cout << "\nWrite the animal's name:" << "\n";
			std::cin >> lionName;
			Lion::Lion(lionName);
			std::cout << "\nAnimal named " << lionName << " has been created" << "\n";
			std::string typeLion = "lion ";
			fullLionName = typeLion + lionName;
			creatures.push_back(fullLionName);
			lions.push_back(lionName);
			goto beginning;
		}

		if (typeNumber == 2) {
			std::cout << "\nWrite the animal's name:" << "\n";
			std::cin >> parrotName;
			Parrot::Parrot(parrotName);
			std::cout << "\nAnimal named " << parrotName << " has been created" << "\n";
			std::string typeParrot = "parrot ";
			fullParrotName = typeParrot + parrotName;
			creatures.push_back(fullParrotName);
			parrots.push_back(parrotName);
			goto beginning;
		}

		if (typeNumber == 3) {
			std::cout << "\nWrite the animal's name:" << "\n";
			std::cin >> catName;
			Cat::Cat(catName);
			std::cout << "\nAnimal named " << catName << " has been created" << "\n";
			std::string typeCat = "cat ";
			fullCatName = typeCat + catName;
			creatures.push_back(fullCatName);
			cats.push_back(catName);
		}
		else {
			std::cout << "\nThere's no such type of animal" << "\n";
		}
		goto beginning;

	case 2:
		std::cout << "\nChoose the type of animal you want to delete:\n" << "\n";
		std::cout << "1. Lion\n2. Parrot\n3. Cat" << "\n";
		int deleteTypeOption;
		std::cin >> deleteTypeOption;
		while (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nIt is not a number!!! Try again! " << std::endl;
			std::cin >> deleteTypeOption;
		}
		//lions, deletion
		if (deleteTypeOption == 1) {
			lionList();
				int lionChoice;
				std::cin >> lionChoice;
				while (std::cin.fail()) {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "\nIt is not a number!!! Try again! " << std::endl;
					std::cin >> lionChoice;
				}
				if (lionChoice > 0 and lionChoice <= lions.size()) {
					//deleting lions
					std::string delName;
					delName = lions[lionChoice - 1];
					auto it = std::remove(creatures.begin(), creatures.end(), ("lion " + delName));
					creatures.erase(it, creatures.end());
					auto its = std::remove(lions.begin(), lions.end(), delName);
					lions.erase(its, lions.end());
				}
				else { std::cout << "\nThere's no such a lion" << "\n"; }
			goto beginning;
		}
		//parrot, deletion
		if (deleteTypeOption == 2) {
			std::cout << "\nChoose a parrot to delete:" << "\n";
			parrotList();

				int parrotChoice;
				std::cin >> parrotChoice;
				while (std::cin.fail()) {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "\nIt is not a number!!! Try again! " << std::endl;
					std::cin >> parrotChoice;
				}
				if (parrotChoice > 0 and parrotChoice <= parrots.size()) {
					//deleting parrot
					std::string delName;
					delName = parrots[parrotChoice - 1];
					auto it = std::remove(creatures.begin(), creatures.end(), ("parrot " + delName));
					creatures.erase(it, creatures.end());
					auto its = std::remove(parrots.begin(), parrots.end(), delName);
					parrots.erase(its, parrots.end());
				}
				else { std::cout << "\nThere's no such a parrot" << "\n"; }
			
			goto beginning;
		}
		//cat, deletion
		if (deleteTypeOption == 3) {
			std::cout << "\nChoose a cat to delete:" << "\n";
			catList();
			int catChoice;
			std::cin >> catChoice;
			while (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\nIt is not a number!!! Try again! " << std::endl;
				std::cin >> catChoice;
			}
			if (catChoice > 0 and catChoice <= cats.size()) {
				//deleting cat
				std::string delName;
				delName = cats[catChoice - 1];
				auto it = std::remove(creatures.begin(), creatures.end(), ("cat " + delName));
				creatures.erase(it, creatures.end());
				auto its = std::remove(cats.begin(), cats.end(), delName);
				cats.erase(its, cats.end());
			}

			else { std::cout << "\nThere's no such a cat" << "\n"; }
			goto beginning;
		}

		else { std::cout << "There is no such a type of animal" << "\n"; }

	case 3:
		std::cout << "\nZoo's animals:\n" << "\n";
		if (creatures.size() == 0) { std::cout << "There are no animals in the zoo"; }
		else {
			for (int k = 0; k < creatures.size(); k++) {
				std::cout << k + 1 << ". " << creatures[k] << std::endl;
			}
		}
		goto beginning;

	case 4:
	lionMenu:
		// lions' menu
		std::cout << "\n_____________________________" << "\n";
		std::cout << "Commands:\n 1. Ask a lion to roar\n 2. Feed a lion\n 3. Read more about lions\n 4. Try to fright a lion\n 5. Palm a lion\n 6. Return to the main menu" << "\n";
		std::cout << "_____________________________" << "\n";
		int lionOption;
		std::cin >> lionOption;
		while (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nIt is not a number!!! Try again! " << std::endl;
			std::cin >> lionOption;
		}

		if (lionOption == 1) {
			lionList();
			int f = lionChoice();
			if (f > 0 and f <= lions.size()) {
				lionObj.sound();
			}
			else { std::cout << "\nThere's no such a lion" << "\n"; }

			goto lionMenu;
		}

		if (lionOption == 2) {
			lionList();
			int f = lionChoice();
			if (f > 0 and f <= lions.size()) {
				lionObj.feed();
			}
			else { std::cout << "\nThere's no such a lion" << "\n"; }

			goto lionMenu;
		}

		if (lionOption == 3) {
			lionList();
			int f = lionChoice();
			if (f > 0 and f <= lions.size()) {
				lionObj.showAll();
			}
			else { std::cout << "\nThere's no such a lion" << "\n"; }

			goto lionMenu;
		}
		if (lionOption == 4) {
			lionList();
			int f = lionChoice();
			if (f > 0 and f <= lions.size()) {
				lionObj.fright();
			}
			else { std::cout << "\nThere's no such a lion" << "\n"; }

			goto lionMenu;
		}
		if (lionOption == 5) {
			lionList();
			int f = lionChoice();
			if (f > 0 and f <= lions.size()) {
				lionObj.palm();
			}
			else { std::cout << "\nThere's no such a lion" << "\n"; }

			goto lionMenu;
		}
		//return to main menu
		if (lionOption == 6) {
			goto beginning;
		}

		else {
			std::cout << "\nThere's no such an option" << "\n";
			goto lionMenu;
		}

	case 5:
		// parrots' menu
	parrotMenu:
		std::cout << "\n_____________________________" << "\n";
		std::cout << "Commands:\n 1. Ask a parrot to shout something\n 2. Feed a parrot\n 3. Read more about parrots\n 4. Ask a parrot to fly\n 5. Return to the main menu" << "\n";
		std::cout << "_____________________________" << "\n";
		int parrotOption;
		std::cin >> parrotOption;
		while (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nIt is not a number!!! Try again! " << std::endl;
			std::cin >> parrotOption;
		}

		if (parrotOption == 1) {
			parrotList();
			int f = parrotChoice();
			if (f > 0 and f <= parrots.size()) {
				parrotObj.sound();
			}
			else { std::cout << "\nThere's no such a parrot" << "\n"; }

			goto parrotMenu;
		}
		if (parrotOption == 2) {
			parrotList();
			int f = parrotChoice();
			if (f > 0 and f <= parrots.size()) {
				parrotObj.feed();
			}
			else { std::cout << "\nThere's no such a parrot" << "\n"; }

			goto parrotMenu;
		}

		if (parrotOption == 3) {
			parrotList();
			int f = parrotChoice();
			if (f > 0 and f <= parrots.size()) {
				parrotObj.showAll();
			}
			else { std::cout << "\nThere's no such a parrot" << "\n"; }

			goto parrotMenu;
		}
		if (parrotOption == 4) {
			parrotList();
			int f = parrotChoice();
			if (f > 0 and f <= parrots.size()) {
				parrotObj.fly();
			}
			else { std::cout << "\nThere's no such a parrot" << "\n"; }

			goto parrotMenu;
		}
		//return to main menu
		if (parrotOption == 5) {
			goto beginning;
		}

		else {
			std::cout << "\nThere's no such an option" << "\n";
			goto parrotMenu;
		}


	case 6:

		// cats' menu
	catMenu:
		std::cout << "\n_____________________________" << "\n";
		std::cout << "Commands:\n 1. Ask a cat to meow\n 2. Feed a cat\n 3. Read more about cats\n 4. Say a compliment to a cat\n 5. Irritate a cat\n 6. Return to the main menu" << "\n";
		std::cout << "_____________________________" << "\n";
		int catOption;
		std::cin >> catOption;
		while (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nIt is not a number!!! Try again! " << std::endl;
			std::cin >> catOption;
		}

		if (catOption == 1) {
			catList();
			int f = catChoice();
			if (f > 0 and f <= cats.size()) {
				catObj.sound();
			}
			else { std::cout << "\nThere's no such a cat" << "\n"; }

			goto catMenu;
		}

		if (catOption == 2) {
			catList();
			int f = catChoice();
			if (f > 0 and f <= cats.size()) {
				catObj.feed();
			}
			else { std::cout << "\nThere's no such a cat" << "\n"; }

			goto catMenu;
		}


		if (catOption == 3) {
			catList();
			int f = catChoice();
			if (f > 0 and f <= cats.size()) {
				catObj.showAll();
			}
			else { std::cout << "\nThere's no such a cat" << "\n"; }

			goto catMenu;
		}
		if (catOption == 4) {
			catList();
			int f = catChoice();
			if (f > 0 and f <= cats.size()) {
				catObj.sayCompliment();
			}
			else { std::cout << "\nThere's no such a cat" << "\n"; }

			goto catMenu;
		}
		if (catOption == 5) {
			catList();
			int f = catChoice();
			if (f > 0 and f <= cats.size()) {
				catObj.irritate();
			}
			else { std::cout << "\nThere's no such a cat" << "\n"; }

			goto catMenu;
		}
		//return to main menu
		if (catOption == 6) {
			goto beginning;
		}

		else {
			std::cout << "\nThere's no such an option" << "\n";
			goto catMenu;
		}

	case 7:
		exit(EXIT_SUCCESS);

	default: std::cout << "\nThere's no such an option" << "\n";  goto beginning;
	}
}
//list of lions
void lionList() {
	std::cout << "\nChoose a lion:" << "\n";
	if (lions.size() == 0) { std::cout << "There are no lions"; }
	else {
		for (int k = 0; k < lions.size(); k++) {
			std::cout << k + 1 << ". " << lions[k] << std::endl;
		}
	}
}
//check for option number in lions' menu
int lionChoice() {

	int lionChoice;
	std::cin >> lionChoice;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nIt is not a number!!! Try again! " << std::endl;
		std::cin >> lionChoice;
	}
	return lionChoice;

}
void parrotList() {
	std::cout << "\nChoose a parrot:" << "\n";
	if (parrots.size() == 0) { std::cout << "There are no parrots"; }
	else {
		for (int k = 0; k < parrots.size(); k++) {
			std::cout << k + 1 << ". " << parrots[k] << std::endl;
		}
	}
}
int parrotChoice() {
	int parrotChoice;
	std::cin >> parrotChoice;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nIt is not a number!!! Try again! " << std::endl;
		std::cin >> parrotChoice;
	}
	return parrotChoice;
}
void catList() {
	std::cout << "\nChoose a cat:" << "\n";
	if (cats.size() == 0) { std::cout << "There are no cats"; }
	else {
		for (int k = 0; k < cats.size(); k++) {
			std::cout << k + 1 << ". " << cats[k] << std::endl;
		}
	}
}
int catChoice() {
	int catChoice;
	std::cin >> catChoice;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nIt is not a number!!! Try again! " << std::endl;
		std::cin >> catChoice;
	}
	return catChoice;
}
