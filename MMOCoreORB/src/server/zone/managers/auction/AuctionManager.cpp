/*
 *	server/zone/managers/auction/AuctionManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "AuctionManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/auction/AuctionsMap.h"

#include "server/zone/objects/auction/AuctionItem.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	AuctionManagerStub
 */

enum {RPC_INITIALIZE__ = 6,RPC_GETITEMATTRIBUTES__CREATUREOBJECT_LONG_,RPC_GETDATA__CREATUREOBJECT_INT_LONG_INT_INT_INT_INT_,RPC_RETRIEVEITEM__CREATUREOBJECT_LONG_LONG_,RPC_BUYITEM__CREATUREOBJECT_LONG_INT_INT_,RPC_DOAUCTIONBID__CREATUREOBJECT_AUCTIONITEM_INT_INT_,RPC_DOINSTANTBUY__CREATUREOBJECT_AUCTIONITEM_INT_INT_,RPC_CHECKBIDAUCTION__CREATUREOBJECT_AUCTIONITEM_INT_INT_,RPC_CANCELITEM__CREATUREOBJECT_LONG_,RPC_GETAUCTIONMAP__,RPC_CHECKVENDORITEMS__,RPC_CHECKAUCTIONS__};

AuctionManager::AuctionManager(ZoneServer* server) : ManagedService(DummyConstructorParameter::instance()) {
	AuctionManagerImplementation* _implementation = new AuctionManagerImplementation(server);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("AuctionManager");
}

AuctionManager::AuctionManager(DummyConstructorParameter* param) : ManagedService(param) {
	_setClassName("AuctionManager");
}

AuctionManager::~AuctionManager() {
}



void AuctionManager::initialize() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void AuctionManager::addSaleItem(CreatureObject* player, unsigned long long objectid, TangibleObject* vendor, const UnicodeString& description, int price, unsigned int duration, bool auction, bool premium) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->addSaleItem(player, objectid, vendor, description, price, duration, auction, premium);
}

AuctionItem* AuctionManager::createVendorItem(CreatureObject* player, SceneObject* objectToSell, TangibleObject* vendor, const UnicodeString& description, int price, unsigned int duration, bool auction, bool premium) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->createVendorItem(player, objectToSell, vendor, description, price, duration, auction, premium);
}

int AuctionManager::checkSaleItem(CreatureObject* player, SceneObject* object, TangibleObject* vendor, int price, bool premium) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->checkSaleItem(player, object, vendor, price, premium);
}

void AuctionManager::getItemAttributes(CreatureObject* player, unsigned long long objectid) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETITEMATTRIBUTES__CREATUREOBJECT_LONG_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);

		method.executeWithVoidReturn();
	} else
		_implementation->getItemAttributes(player, objectid);
}

void AuctionManager::getData(CreatureObject* player, int extent, unsigned long long vendorObjectID, int screen, unsigned int category, int count, int offset) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDATA__CREATUREOBJECT_INT_LONG_INT_INT_INT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(extent);
		method.addUnsignedLongParameter(vendorObjectID);
		method.addSignedIntParameter(screen);
		method.addUnsignedIntParameter(category);
		method.addSignedIntParameter(count);
		method.addSignedIntParameter(offset);

		method.executeWithVoidReturn();
	} else
		_implementation->getData(player, extent, vendorObjectID, screen, category, count, offset);
}

void AuctionManager::getAuctionData(CreatureObject* player, TangibleObject* vendor, String& search, int screen, unsigned int category, int count, int offset) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->getAuctionData(player, vendor, search, screen, category, count, offset);
}

int AuctionManager::checkRetrieve(CreatureObject* player, unsigned long long objectIdToRetrieve, TangibleObject* vendor) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->checkRetrieve(player, objectIdToRetrieve, vendor);
}

void AuctionManager::retrieveItem(CreatureObject* player, unsigned long long objectid, unsigned long long vendorID) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RETRIEVEITEM__CREATUREOBJECT_LONG_LONG_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);
		method.addUnsignedLongParameter(vendorID);

		method.executeWithVoidReturn();
	} else
		_implementation->retrieveItem(player, objectid, vendorID);
}

void AuctionManager::buyItem(CreatureObject* player, unsigned long long objectid, int price1, int price2) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_BUYITEM__CREATUREOBJECT_LONG_INT_INT_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectid);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		method.executeWithVoidReturn();
	} else
		_implementation->buyItem(player, objectid, price1, price2);
}

void AuctionManager::doAuctionBid(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOAUCTIONBID__CREATUREOBJECT_AUCTIONITEM_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		method.executeWithVoidReturn();
	} else
		_implementation->doAuctionBid(player, item, price1, price2);
}

void AuctionManager::doInstantBuy(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOINSTANTBUY__CREATUREOBJECT_AUCTIONITEM_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		method.executeWithVoidReturn();
	} else
		_implementation->doInstantBuy(player, item, price1, price2);
}

int AuctionManager::checkBidAuction(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKBIDAUCTION__CREATUREOBJECT_AUCTIONITEM_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(item);
		method.addSignedIntParameter(price1);
		method.addSignedIntParameter(price2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->checkBidAuction(player, item, price1, price2);
}

void AuctionManager::cancelItem(CreatureObject* player, unsigned long long objectID) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELITEM__CREATUREOBJECT_LONG_);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		_implementation->cancelItem(player, objectID);
}

AuctionQueryHeadersResponseMessage* AuctionManager::fillAuctionQueryHeadersResponseMessage(CreatureObject* player, TangibleObject* vendor, SortedVector<ManagedReference<AuctionItem* > >* items, int screen, unsigned int category, int count, int offset) {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->fillAuctionQueryHeadersResponseMessage(player, vendor, items, screen, category, count, offset);
}

AuctionsMap* AuctionManager::getAuctionMap() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAUCTIONMAP__);

		return static_cast<AuctionsMap*>(method.executeWithObjectReturn());
	} else
		return _implementation->getAuctionMap();
}

void AuctionManager::checkVendorItems() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKVENDORITEMS__);

		method.executeWithVoidReturn();
	} else
		_implementation->checkVendorItems();
}

void AuctionManager::checkAuctions() {
	AuctionManagerImplementation* _implementation = static_cast<AuctionManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKAUCTIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->checkAuctions();
}

DistributedObjectServant* AuctionManager::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void AuctionManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	AuctionManagerImplementation
 */

AuctionManagerImplementation::AuctionManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


AuctionManagerImplementation::~AuctionManagerImplementation() {
}


void AuctionManagerImplementation::finalize() {
}

void AuctionManagerImplementation::_initializeImplementation() {
	_setClassHelper(AuctionManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void AuctionManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<AuctionManager*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* AuctionManagerImplementation::_getStub() {
	return _this.get();
}

AuctionManagerImplementation::operator const AuctionManager*() {
	return _this.get();
}

void AuctionManagerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void AuctionManagerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void AuctionManagerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void AuctionManagerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void AuctionManagerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void AuctionManagerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void AuctionManagerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void AuctionManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("AuctionManager");

}

void AuctionManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AuctionManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool AuctionManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "AuctionManager.auctionMap") {
		TypeInfo<ManagedReference<AuctionsMap* > >::parseFromBinaryStream(&auctionMap, stream);
		return true;
	}

	if (_name == "AuctionManager.zoneServer") {
		TypeInfo<ManagedReference<ZoneServer* > >::parseFromBinaryStream(&zoneServer, stream);
		return true;
	}


	return false;
}

void AuctionManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AuctionManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AuctionManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServiceImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "AuctionManager.auctionMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<AuctionsMap* > >::toBinaryStream(&auctionMap, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "AuctionManager.zoneServer";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<ZoneServer* > >::toBinaryStream(&zoneServer, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 2;
}

AuctionManagerImplementation::AuctionManagerImplementation(ZoneServer* server) {
	_initializeImplementation();
	// server/zone/managers/auction/AuctionManager.idl():  		zoneServer = server;
	zoneServer = server;
	// server/zone/managers/auction/AuctionManager.idl():  		Logger.setLoggingName("AuctionManager");
	Logger::setLoggingName("AuctionManager");
	// server/zone/managers/auction/AuctionManager.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/auction/AuctionManager.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
}

AuctionsMap* AuctionManagerImplementation::getAuctionMap() {
	// server/zone/managers/auction/AuctionManager.idl():  		return auctionMap;
	return auctionMap;
}

/*
 *	AuctionManagerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


AuctionManagerAdapter::AuctionManagerAdapter(AuctionManager* obj) : ManagedServiceAdapter(obj) {
}

void AuctionManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZE__:
		{
			initialize();
		}
		break;
	case RPC_GETITEMATTRIBUTES__CREATUREOBJECT_LONG_:
		{
			getItemAttributes(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter());
		}
		break;
	case RPC_GETDATA__CREATUREOBJECT_INT_LONG_INT_INT_INT_INT_:
		{
			getData(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getUnsignedLongParameter(), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		}
		break;
	case RPC_RETRIEVEITEM__CREATUREOBJECT_LONG_LONG_:
		{
			retrieveItem(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter(), inv->getUnsignedLongParameter());
		}
		break;
	case RPC_BUYITEM__CREATUREOBJECT_LONG_INT_INT_:
		{
			buyItem(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		}
		break;
	case RPC_DOAUCTIONBID__CREATUREOBJECT_AUCTIONITEM_INT_INT_:
		{
			doAuctionBid(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<AuctionItem*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		}
		break;
	case RPC_DOINSTANTBUY__CREATUREOBJECT_AUCTIONITEM_INT_INT_:
		{
			doInstantBuy(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<AuctionItem*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		}
		break;
	case RPC_CHECKBIDAUCTION__CREATUREOBJECT_AUCTIONITEM_INT_INT_:
		{
			resp->insertSignedInt(checkBidAuction(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<AuctionItem*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getSignedIntParameter()));
		}
		break;
	case RPC_CANCELITEM__CREATUREOBJECT_LONG_:
		{
			cancelItem(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter());
		}
		break;
	case RPC_GETAUCTIONMAP__:
		{
			resp->insertLong(getAuctionMap()->_getObjectID());
		}
		break;
	case RPC_CHECKVENDORITEMS__:
		{
			checkVendorItems();
		}
		break;
	case RPC_CHECKAUCTIONS__:
		{
			checkAuctions();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void AuctionManagerAdapter::initialize() {
	(static_cast<AuctionManager*>(stub))->initialize();
}

void AuctionManagerAdapter::getItemAttributes(CreatureObject* player, unsigned long long objectid) {
	(static_cast<AuctionManager*>(stub))->getItemAttributes(player, objectid);
}

void AuctionManagerAdapter::getData(CreatureObject* player, int extent, unsigned long long vendorObjectID, int screen, unsigned int category, int count, int offset) {
	(static_cast<AuctionManager*>(stub))->getData(player, extent, vendorObjectID, screen, category, count, offset);
}

void AuctionManagerAdapter::retrieveItem(CreatureObject* player, unsigned long long objectid, unsigned long long vendorID) {
	(static_cast<AuctionManager*>(stub))->retrieveItem(player, objectid, vendorID);
}

void AuctionManagerAdapter::buyItem(CreatureObject* player, unsigned long long objectid, int price1, int price2) {
	(static_cast<AuctionManager*>(stub))->buyItem(player, objectid, price1, price2);
}

void AuctionManagerAdapter::doAuctionBid(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	(static_cast<AuctionManager*>(stub))->doAuctionBid(player, item, price1, price2);
}

void AuctionManagerAdapter::doInstantBuy(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	(static_cast<AuctionManager*>(stub))->doInstantBuy(player, item, price1, price2);
}

int AuctionManagerAdapter::checkBidAuction(CreatureObject* player, AuctionItem* item, int price1, int price2) {
	return (static_cast<AuctionManager*>(stub))->checkBidAuction(player, item, price1, price2);
}

void AuctionManagerAdapter::cancelItem(CreatureObject* player, unsigned long long objectID) {
	(static_cast<AuctionManager*>(stub))->cancelItem(player, objectID);
}

AuctionsMap* AuctionManagerAdapter::getAuctionMap() {
	return (static_cast<AuctionManager*>(stub))->getAuctionMap();
}

void AuctionManagerAdapter::checkVendorItems() {
	(static_cast<AuctionManager*>(stub))->checkVendorItems();
}

void AuctionManagerAdapter::checkAuctions() {
	(static_cast<AuctionManager*>(stub))->checkAuctions();
}

/*
 *	AuctionManagerHelper
 */

AuctionManagerHelper* AuctionManagerHelper::staticInitializer = AuctionManagerHelper::instance();

AuctionManagerHelper::AuctionManagerHelper() {
	className = "AuctionManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void AuctionManagerHelper::finalizeHelper() {
	AuctionManagerHelper::finalize();
}

DistributedObject* AuctionManagerHelper::instantiateObject() {
	return new AuctionManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* AuctionManagerHelper::instantiateServant() {
	return new AuctionManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* AuctionManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AuctionManagerAdapter(static_cast<AuctionManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

