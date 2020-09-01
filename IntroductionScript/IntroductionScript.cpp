#include <iostream>
#include <string>

int main()
{
	std::string user_name;
	std::string userFavoriteColor;
	int user_age;
	std::string user_favorite_movie;

	std::cout << "What is your name:\n";
	std::getline(std::cin, user_name);

	//std::cout << "What is your age:\n";
	//std::getline(std::cin, user_age);

	std::cout << "What is your favorite color:\n";
	std::getline(std::cin, userFavoriteColor);

	std::cout << "What is your favorite movie:\n";
	std::getline(std::cin, user_favorite_movie);


	std::cout << "\n---------------------------\n";
	std::cout << "| Profile                 |\n";
	std::cout << "|-------------------------|\n";
	std::cout << "| Name:           | " << user_name << "		|\n";
//	std::cout << "| Age:            | " << user_age << "	|\n";
	std::cout << "| Favorite color: | " << userFavoriteColor << "		|\n";
	std::cout << "| Favorite movie: | " << user_favorite_movie << "		|\n";
	std::cout << "---------------------------\n";

	return 0;
}