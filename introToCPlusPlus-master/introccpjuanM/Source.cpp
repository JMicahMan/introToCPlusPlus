#include <iostream>
#include <string>
int main()
{
	std::string MyName;
	MyName = "  Juan Micah Manzanares";
	std::string ID;
	ID = "  s188041";

	std::cout <<"Name"<<":"<< MyName << std::endl;
	std::cout <<"ID"<<":"<< ID << std::endl;

	std::string name;
	std::string LastName;
	std::cout << " Enter first name\n";
	std::cin >> name;
	std::cout << " Enter last name\n";
	std::cin >> LastName;

	std::cout << "Hello  "<< name + LastName << std::endl;
	system("Pause");
	return (0);
}