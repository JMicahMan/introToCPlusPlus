#pragma once


class Player
{
private:
	int m_Health;
	int m_Power;

public:
	Player();
	Player(int baseHealth, int basePower);
	void Fight(Player & enemy);
	bool IsAlive();
	void TakeDamage(int damage);
	bool operator<(Player&other);
};