#include "Races.h"

class cArmyManager
{
private:
	typedef MapPair std::pair<int,cArmy>
	
	std::map<MapPair> mArmies;
	int mLastID;
	
public:
	cArmyManager()
	: mLastID(0)
	{}
	
	cArmy& GetNewArmy(eRace aOwner, int aWeak, int aStrong){}
	void DisbandArmy(int aArmyID){}
	cArmy& GetArmyByID(int aArmyID){mArmies.}
};

class cArmy
{
private:
	eRace mOwner;
	int mArmyID;
	
	int mWeakUnitNumber;
	int mStrongUnitNumber;
	
public:
	cArmy(eRace aOwner, int aArmyID, int aWeak, int aStrong)
	: mOwner(aOwner)
	, mWeakUnitNumber(aWeak)
	, mStrongUnitNumber(aStrong)
	{
		
	}

	eRace GetOwner() {return mOwner;}
	int GetArmyID() {return mArmyID;}
	
	int GetWeakUnitNumber() {return mWeakUnitNumber;}
	int GetStrongUnitNumber() {return mStrongUnitNumber;}
};
