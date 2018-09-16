#include<iostream>
#include<string>

struct Item
{
	std::string name;
	int price;
	int quantitiy;
};


struct Shop
{
	std::string name;
	int gold;
	Item items[3];

};

void Selling()
{
	int sold;
	int GainedGold;
	std::cout<<"How Much do you want to sell\n";
	std::cin >> sold;
	
	Item SwordOfAwsomeness;
	SwordOfAwsomeness.quantitiy - sold = SwordOfAwsomeness.quantitiy;
	Item SwordOfAwsomeness;
	SwordOfAwsomeness.price * sold = GainedGold;
	Item SwordOfAwsomeness;
	BeatEmStick.quantitiy - sold = BeatEmStick.quantitiy;
	Item BeatEmStick;
	BeatEmStick.price * sold = GainedGold;
	Item BowOfAgility;
	BowOfAgility.quantitiy - sold = BowOfAgility.quantitiy;
	Item BowOfAgility
	BowOfAgility.price * sold = GainedGold;


	Shop Goldstash;
	Goldstash.gold + GainedGold;
	
}

void Buying()
{
	int bought;
	int LostGold;
	std::cout << "How Much do you want to buy\n";
	std::cin >> bought;

	Item SwordOfAwsomeness;
	SwordOfAwsomeness.quantitiy + bought = quantitiy;
	Item price;
	SwordOfAwsomeness.price * bought = LostGold;
	Item BeatEmStick;
	BeatEmStick.quantitiy + bought = quantitiy;
	Item price;
	BeatEmStick.price * bought = LostGold;
	Item BowOfAgility;
	BowOfAgility.quantitiy + bought = quantitiy;
	Item price;
	BowOfAgility.price * bought = LostGold;
	Shop Goldstash;
	Goldstash.gold - LostGold = Goldstash.gold;
}

void ChangePrice()
{
	int newPrice;
	std::cout<<"What do you want the new price to be\n";
	std::cin >> newPrice;
	Item price;
	price = newPrice;
	
}
int main()
{
	Item SwordOfAwsomeness;
	SwordOfAwsomeness.name = "Sword Of Awsomeness";
	SwordOfAwsomeness.price = 100;
	SwordOfAwsomeness.quantitiy = 1;
	Item BeatEmStick;
	BeatEmStick.name = "Beat`em Stick";
	BeatEmStick.price = 500;
	BeatEmStick.quantitiy = 3;
	Item BowOfAgility;
	BowOfAgility.name = "Bow of Agility";
	BowOfAgility.price = 50;
	BowOfAgility.quantitiy = 2;
	Shop Goldstash;
	Goldstash.name = "Goldstash";
	Goldstash.gold = 2000;
	int options;
	std::cin >> options;
	switch(options)
	{
	case 0:
		{
			Buying();
		}
		break;

	case 1: 
		{
			Selling();
		}
		break;

	case 2:
		{
			ChangePrice();
		}
		break;
	}
	system("pause");
	return 0;
}
