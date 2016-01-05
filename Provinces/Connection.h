

class cConnection
{
private:
	std::set<int> mConnected;
	int mID;
	
public:
	cConnection(aID){mID=aID;}
	void AddConnection(int aID){mConnected.insert(aID);}//todo:check
	
	bool IsConnected(int aID){if (mConnected.};
	std::set<int>& GetConnections(){return mConnected;}
	
}