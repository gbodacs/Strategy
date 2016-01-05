
class cArmy
{
private:
	eRace mOwner;
	
	int mWeakUnitNumber;
	int mStrongUnitNumber;
	
public:
	cArmy(eRace aOwner, int aWeak, int aStong)
	: mOwner(aOwner)
	, mWeakUnitNumber(aWeak)
	, mStrongUnitNumber(aStrong)
	{
		
	}

	eRace GetOwner() {return mOwner;}
	int GetWeakUnitNumber() {return mWeakUnitNumber;}
	int GetStrongUnitNumber() {return mStrongUnitNumber;}
}