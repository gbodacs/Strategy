#include "cConnection.h"
#include <vector>


class cConnectionHandler
{
private:
	std::vector<cConnection> mConnections;

public:
	cConnectionHandler(int aNumConnections) {mConnections.reserve(aNumConnections);}
	void AddConnection(int aID1, int aID2) {mConnections[aID1].AddConnection(aID2);} //todo:check!
	void CheckLoadedConnections();
	
	bool IsConnected(int aID1, aID2) {mConnections[aID1].IsContains(aID2);}//todo:check!!
	std::set<int>& GetNeighbours(int aID) {return mConnections[aID].GetConnections()};
}