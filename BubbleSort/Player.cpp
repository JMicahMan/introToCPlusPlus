#include "Player.h"
Player::Player()
{

}

Player::Player(int baseHealth, int basePower)
{
	m_Health = baseHealth;
	m_Power = basePower;
}

void Player::Fight(Player& enemy)
{
	enemy.TakeDamage(m_Power);
}

bool Player::IsAlive()
{
	while (m_Health >= 0)
	{
		return true;
	}
	return false;
}

void Player::TakeDamage(int damage)
{
	m_Health = m_Health - damage;
	//m_Health -= damage;
}

bool Player::operator < (Player& other)
{
	if (m_Health < other.m_Health)
	{
		return true;
	}
	return false;
}