#include <stdio.h>
#include <list>

class cCountry
{
private:
	eRace mRace;
	int mMoney;
	std::list<cArmy> mArmies;

public:
	cCountry(eRace aRace, int aMoney)
	: mRace(aRace)
	, mMoney(aMoney)
	{
		
	}
	
	int GetMoney() {return mMoney;}
	eRace GetRace() {return mRace;}
}

//minden jatekos a körét egy turn queue-ba teszi
	//mozgas, reinforcement+build army, disband army, build province building 

//véletlen turnok generalasa
//körök végrehajtása
	
//adóbevételek összeadása
//provinciák szaporulata, fejlődése

	
main(int argc, char*argv[])
{

}
