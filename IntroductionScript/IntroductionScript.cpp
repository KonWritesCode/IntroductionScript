#include <iostream>
#include <string>


int main()
{
	std::string user_name;
	std::string user_favorite_color;
	int user_age;
	std::string user_favorite_movie;

	int box_length;
	
	//Get information from the user by asking questions
	std::cout << "What is your name: ";
	std::getline(std::cin, user_name);

	system("cls");
	std::cout << "What is your age: ";
	std::cin >> user_age;

	system("cls");
	std::string user_age_str;
	user_age_str = std::to_string(user_age);

	system("cls");
	std::cout << "What is your favorite color: "; 
	std::cin.ignore();
	std::getline(std::cin, user_favorite_color); //Line gets ignored because of line 18

	system("cls");
	std::cout << "What is your favorite movie: ";
	std::getline(std::cin, user_favorite_movie);
	
	//Find the longest string
	box_length = user_name.length();

	if (box_length < user_age_str.length())
	{
		box_length = user_age_str.length();
	}
	if(box_length < user_favorite_color.length())
	{
		box_length = user_favorite_color.length();
	}
	if (box_length < user_favorite_movie.length()) 
	{
		box_length = user_favorite_movie.length();
	}

	std::cout << box_length << " length of user_name";

	//Create user profile
	system("cls");
	std::cout << "\n------------------" << std::string(box_length, '-') << "----\n";
	std::cout << "| Profile           " << std::string(box_length, ' ') << " |\n";
	std::cout << "|-------------------" << std::string(box_length, '-') << "-|\n";
	std::cout << "| Name:           | " << user_name << std::string(box_length - user_name.length(), ' ') << " |\n";
	std::cout << "| Age:            | " << user_age_str << std::string(box_length - user_age_str.length(), ' ') << " |\n";
	std::cout << "| Favorite color: | " << user_favorite_color << std::string(box_length - user_favorite_color.length(), ' ') << " |\n";
	std::cout << "| Favorite movie: | " << user_favorite_movie << std::string(box_length - user_favorite_movie.length(), ' ') << " |\n";
	std::cout << "--------------------" << std::string(box_length, '-') << "--\n";
	
	return 0;
}