#include <iostream>
#include "Player.h"
#include "Sorter.h"
//#include "Game.h"
int main()
{
	Player* IronMan = new Player(100, 20);
	Player* WarMachine = new Player(90, 30);
	Player* BlackWidow = new Player(20, 50);
	Player* BlackPanther = new Player(150, 10);
	Player* Vision = new Player(105, 15);
	Player* SpiderMan = new Player(80, 25);

	Player* CaptainAmerica = new Player(130, 12);
	Player* Hawkeye = new Player(25, 5);
	Player* Falcon = new Player(95, 25);
	Player* Bucky = new Player(125, 18);
	Player* AntMan = new Player(50, 11);
	Player* ScarletWitch = new Player(15, 60);

	Sorter* team1 = new Sorter();
	team1->Push(IronMan);
	team1->Push(WarMachine);
	team1->Push(BlackWidow);
	team1->Push(BlackPanther);
	team1->Push(Vision);
	team1->Push(SpiderMan);

	Sorter* team2 = new Sorter();
	team2->Push(CaptainAmerica);
	team2->Push(Hawkeye);
	team2->Push(Falcon);
	team2->Push(Bucky);
	team2->Push(AntMan);
	team2->Push(ScarletWitch);



	/*Game* G = new Game();
	while (team1->IsEmpty() == false && team2->IsEmpty() == false)
	{
		G->Battle(team1, team2);
	}

	if (team1->IsEmpty() == true)
	{
		std::cout << "Team 2 Won!\n";
	}
	else
	{
		std::cout << "Team 1 Won!\n";
	}*/

	delete IronMan;
	delete WarMachine;
	delete BlackWidow;
	delete BlackPanther;
	delete Vision;
	delete SpiderMan;
	delete CaptainAmerica;
	delete Hawkeye;
	delete Falcon;
	delete Bucky;
	delete AntMan;
	delete ScarletWitch;

	system("pause");
	return 0;
}