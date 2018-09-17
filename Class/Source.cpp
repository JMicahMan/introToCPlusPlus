#include <iostream>

class Fighter
{
private:
		int health;
		int power;

public:
	void takeDamage(int amount);
	
	void doDamage(Fighter &other);
	
};

int main()
{
	Fighter* Ryu = new Fighter();
	Ryu->doDamage(*Ryu);

	system("pause");
	return 0;
}