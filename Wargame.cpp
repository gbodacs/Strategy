#include <stdio.h>
#include <list>

class cMapPoint
{
	int mX;
	int mY;
};

enum class eRace
{
	ER_HUNGARY,
	ER_USA,
}

class cArmy
{
private:
	eRace mOwner;
	
	int mWeakUnitNumber;
	int mStrongUnitNumber;
	
public:
	cArmy(eRace aOwner, int aWeak, int aStong):
	mOwner(aOwner),
	mWeakUnitNumber(aWeak),
	mStrongUnitNumber(aStrong)
	{}

	eRace GetOwner(){return mOwner;}
	int GetWeakUnitNumber(){return mWeakUnitNumber;}
	int GetStrongUnitNumber(){return mStrongUnitNumber;}
}

class cConnections
{
private:
	std::set<int> mConnected;
	int mID;
	
public:
	cConnections(aID){mID=aID;}
	void AddConnection(int aID){mConnected.insert(aID);}//todo:check
	
	bool IsConnected(int aID){if (mConnected.};
	std::set<int>& GetConnections(){return mConnected;}
	
}

class cConnectionHandler
{
private:
	std::vector<cConnections> mConnections;

public:
	cConnectionHandler(int aNumConnections){mConnections.resize(aNumConnections);}
	void AddConnection(int aID1, int aID2){mConnections[aID1].AddConnection(aID2);} //todo:check!
	void CheckLoadedConnections();
	
	bool IsConnected(int aID1, aID2){mConnections[aID1].IsContains(aID2);}//todo:check!!
	std::set<int>& GetNeighbours(int aID){return mConnections[aID].GetConnections()};
}

class cProvince
{
private:
	int mIncome;
	int mManPower;
	cMapPoint mCenterPoint; //Map graphics position
	int mGraphics;
	int mID;
	std::string mName;
	eRace mOwner;
	
	
	std::list<cArmy> mArmies;

public:
	cProvince(int aIncome, int aManPower, cMapPoint& aCenterPoint, int aID, std::string& aName, eRace aOwner):
	mIncome(aIncome),
	mManPower(aManPower),
	mCenterPoint(aCenterPoint),
	mID(aID),
	mName(aName),
	mOwner(aOwner)
	{}
	
	int GetIncome(){return mIncome;}
	int GetManPower(){return mManPower;}
	cMapPoint& GetCenterPoint(){return mCenterPoint;} //Map graphics position
	//int mGraphics;
	int GetID(){return mID;}
	std::string& GetName(){return mName;}
	eRace GetOwner(){return mOwner;}
	
	void SetOwner(eRace aNewOwner){mOwner = aNewOwner;}
	
	void AddArmy()
};


main(int argc, char*argv[])
{

}
