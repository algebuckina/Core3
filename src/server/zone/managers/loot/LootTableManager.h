/*
 *	server/zone/managers/loot/LootTableManager.h generated by engine3 IDL compiler 0.55
 */

#ifndef LOOTTABLEMANAGER_H_
#define LOOTTABLEMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

class Player;

class ZoneServer;

class ZoneProcessServerImplementation;

class Creature;

class LootTableManager : public DistributedObjectStub {
public:
	LootTableManager(ZoneServer* server, ZoneProcessServerImplementation* processor);

	void createLootItem(Creature* creature, int level, Player* player);

	void stop();

protected:
	LootTableManager(DummyConstructorParameter* param);

	virtual ~LootTableManager();

	friend class LootTableManagerHelper;
};

class LootTableManagerImplementation;

class LootTableManagerAdapter : public DistributedObjectAdapter {
public:
	LootTableManagerAdapter(LootTableManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void createLootItem(Creature* creature, int level, Player* player);

	void stop();

};

class LootTableManagerHelper : public DistributedObjectClassHelper, public Singleton<LootTableManagerHelper> {
	static LootTableManagerHelper* staticInitializer;

public:
	LootTableManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<LootTableManagerHelper>;
};

class LootTableManagerServant : public DistributedObjectServant {
public:
	LootTableManager* _this;

public:
	LootTableManagerServant();
	virtual ~LootTableManagerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*LOOTTABLEMANAGER_H_*/
