#include <stdio.h>
#include <list>

/*
enum eCountryTurnOpportunities
{
	ECQI_REINFORCEMENT_ARMY
	ECQI_MOVE_ARMY,
	ECQI_DISBAND_ARMY,
	ECQI_BUILD_BUILDING,
	
	ECQI_ALL
}*/

//=====================================
class ICountryQueueItem
{
private:
	
public:
	ICountryQueueItem(){};
	virtual ˜ICountryQueueItem(){};
	virtual void DoIt(){} = 0;
}

//=====================================
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

//=====================================
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

//=====================================
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
	std::queue<ICountryQueueItem*> mTurnQueue; //ezeket lepte a jatekos

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
};

//=====================================
class cCountyManager
{
private:
	std::list<cCountry> mCountries;

public:
	void StartHumanPlayerTurn(); // search for the human player and he can add queue items, play
	void StartComputerPlayersTurn(); // The computer players can add turn queue items, play
	void RandomizeCountries(); // Set the random order of the countries before process the queue items
	void ProcessAllPlayersTurnQueueItems(); // Proces the queue items for all players by the randomized order 
};

//=====================================
class cGame
{
private:
	cCountryManager mCountryManager; //Stores the contry related data
	cMapManager mMapManager; //Stores the all data of the map
	
	cTurnLogic mTurnLogic; //Handles the turn steps give rights to the users to play
	cDataFactory mDataFactory; //Read all data from the disk
	
	void InitGame()
	{
		mDataFactory.LoadAllData(&mCountryManager, &mMapManager);
	}
	
	void MainLoop(){} //copy this method from the Evil Balloons project
	
public:
	void StartGame()
	{
		InitGame();
		MainLoop();
	};

	cMapManager* GetMapManager() {return &mMapManager;}
	cCountryManager* GetCountryManager() {return &mCountryManager;}
}


//minden jatekosnak van egy cCountry példánya egy cCountryManager osztályban
//kör kezdetekor minden ember-irányította jatekos orszaga lep, a kör eseményeit a saját turn queue-ba teszi
//a szamitogép irányította játékosok a körüket a saját turn queue-ba teszik
	//mozgas, reinforcement+build army, disband army, build province building(develop province?) 

//véletlen turnok generalasa - cCountry-ban a sorrend variálásával
//körök végrehajtása orszagonkent egymas utan
	//csata
	//provincia tulajddonosa megvaltozik
//adóbevételek összeadása
//provinciák szaporulata, fejlődése
//uj kor kezdete

	
main(int argc, char*argv[])
{

}
