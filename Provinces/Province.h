
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
	bool mBuilding_Fortress;//Fortress built?
	bool mBuilding_Port; //Port built?
	bool mIsWater; //Ground or ocean?
	
	std::list<cArmy> mArmies;

public:
	cProvince(int aIncome, int aManPower, cMapPoint& aCenterPoint, int aID, std::string& aName, eRace aOwner)
	: mIncome(aIncome)
	, mManPower(aManPower)
	, mCenterPoint(aCenterPoint)
	, mID(aID)
	, mName(aName)
	, mOwner(aOwner)
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
