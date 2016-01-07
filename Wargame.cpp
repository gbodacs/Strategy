#include <stdio.h>
#include <list>

enum eCountryTurnOpportunities
{
	ECQI_REINFORCEMENT_ARMY
	ECQI_MOVE_ARMY,
	ECQI_DISBAND_ARMY,
	ECQI_BUILD_BUILDING,
	
	ECQI_ALL
}

//=====================================
class ICountryQueueItem
{
private:
	
public:
	ICountryQueueItem(){};
	virtual ˜ICountryQueueItem(){};
	virtual void DoIt(){} = 0;
}

class cQIReinforceArmy : public ICountryQueueItem
{
private:
	int mArmyID; // It is possible that the army is not exist amymore so we have to use an id
	int mFromProvinceID;
	int mToProvinceID;
	
public:
	cIQReinforceArmy(int aArmyID, int aFromProvinceID, int aToProvinceID)
	: mArmyID(aArmyID)
	, mFromProvinceID(aFromProvinceID)
	, mToProvinceID(aToProvinceID)
	{
		
	}
	virtual ˜cIQReinforceArmy(){};
	
	virtual void DoIt(){}
}

class cQIMoveArmy : public ICountryQueueItem
{
private:
	int mArmyID; // It is possible that the army is not exist amymore so we have to use an id
	int mFromProvinceID;
	int mToProvinceID;
	
public:
	cIQMoveArmy(int aArmyID, int aFromProvinceID, int aToProvinceID)
	: mArmyID(aArmyID)
	, mFromProvinceID(aFromProvinceID)
	, mToProvinceID(aToProvinceID)
	{
		
	}
	virtual ˜cIQMoveArmy(){};
	
	virtual void DoIt(){}
}


class cQIDisbandArmy : public ICountryQueueItem
{
private:
	int mArmyID; // It is possible that the army is not exist amymore so we have to use an id
	
public:
	cIQDisbandArmy(int aArmyID)
	: mArmyID(aArmyID)
	{
		
	}
	virtual ˜cIQDisbandArmy(){};

	virtual void DoIt(){}
}
//=====================================
class cCountry
{
private:
	eRace mRace;
	int mMoney;
	std::queue<ICountryQueueItem*> mTurnQueue;

public:
	cCountry(eRace aRace, int aMoney)
	: mRace(aRace)
	, mMoney(aMoney)
	{
		
	}
	
	void AddTurnQueueItem(); //egy teendo bekerul a teruqueue listaba
	void DoTurnQueueItems(); //Rajtunk van a sor, vegrehajtjuk, amit betervezett a jatekos
	void CalculateUpKeep();
	
	int GetMoney() {return mMoney;}
	eRace GetRace() {return mRace;}
}

//minden jatekos a körét egy turn queue-ba teszi
	//mozgas, reinforcement+build army, disband army, build province building 

//véletlen turnok generalasa
//körök végrehajtása orszagonkent egymas utan
	
//adóbevételek összeadása
//provinciák szaporulata, fejlődése

	
main(int argc, char*argv[])
{

}
