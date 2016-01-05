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
	
}

class cConnections
{
private:
	std::set<int> mConnected;
	int mID;
	
public:
	cConnections(aID);
	void AddConnection(int aID);
	
	bool IsConnected(int aID);
	std::set<int>& GetConnections();
	
}

class cConnectionHandler
{
private:
	cConnections mConnections;

public:
	cConnectionHandler(int aNumProvinces);
	void AddConnection();
	void CheckLoadedConnections();
	
	bool IsConnected(int aID1, aID2);
	void GetNeighbours(int aID);
}

class cProvince
{
private:
	int mIncomeByTurn;
	int mCurrentManPower;
	cMapPoint mCenterPoint; //Map graphics position
	int mGraphics;
	int mID;
	std::string mName;
	eRace mOwner;
	
	
	std::list<cArmy> mArmies;
	
};


main(int argc, char*argv[])
{

}
