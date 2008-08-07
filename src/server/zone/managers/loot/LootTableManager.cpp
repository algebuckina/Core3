/*
 *	server/zone/managers/loot/LootTableManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "LootTableManager.h"

#include "LootTableManagerImplementation.h"

#include "../../objects/player/Player.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "../../objects/creature/Creature.h"

/*
 *	LootTableManagerStub
 */

LootTableManager::LootTableManager(ZoneServer* server, ZoneProcessServerImplementation* processor) {
	_impl = new LootTableManagerImplementation(server, processor);
	_impl->_setStub(this);
}

LootTableManager::LootTableManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

LootTableManager::~LootTableManager() {
}

void LootTableManager::createLootItem(Creature* creature, int level, Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(creature);
		method.addSignedIntParameter(level);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((LootTableManagerImplementation*) _impl)->createLootItem(creature, level, player);
}

void LootTableManager::stop() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((LootTableManagerImplementation*) _impl)->stop();
}

/*
 *	LootTableManagerAdapter
 */

LootTableManagerAdapter::LootTableManagerAdapter(LootTableManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* LootTableManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		createLootItem((Creature*) inv->getObjectParameter(), inv->getSignedIntParameter(), (Player*) inv->getObjectParameter());
		break;
	case 7:
		stop();
		break;
	default:
		return NULL;
	}

	return resp;
}

void LootTableManagerAdapter::createLootItem(Creature* creature, int level, Player* player) {
	return ((LootTableManagerImplementation*) impl)->createLootItem(creature, level, player);
}

void LootTableManagerAdapter::stop() {
	return ((LootTableManagerImplementation*) impl)->stop();
}

/*
 *	LootTableManagerHelper
 */

LootTableManagerHelper* LootTableManagerHelper::staticInitializer = LootTableManagerHelper::instance();

LootTableManagerHelper::LootTableManagerHelper() {
	className = "LootTableManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void LootTableManagerHelper::finalizeHelper() {
	LootTableManagerHelper::finalize();
}

DistributedObject* LootTableManagerHelper::instantiateObject() {
	return new LootTableManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* LootTableManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LootTableManagerAdapter((LootTableManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	LootTableManagerServant
 */

LootTableManagerServant::LootTableManagerServant() {
	_classHelper = LootTableManagerHelper::instance();
}

LootTableManagerServant::~LootTableManagerServant() {
}

void LootTableManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (LootTableManager*) stub;
}

DistributedObjectStub* LootTableManagerServant::_getStub() {
	return _this;
}

