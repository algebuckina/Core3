/*
 *	server/zone/objects/building/travel/TravelBuildingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef TRAVELBUILDINGOBJECT_H_
#define TRAVELBUILDINGOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace travel {

class TravelBuildingObject : public BuildingObject {
public:
	TravelBuildingObject(LuaObject* templateData);

protected:
	TravelBuildingObject(DummyConstructorParameter* param);

	virtual ~TravelBuildingObject();

	friend class TravelBuildingObjectHelper;
};

} // namespace travel
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::travel;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace travel {

class TravelBuildingObjectImplementation : public BuildingObjectImplementation {

public:
	TravelBuildingObjectImplementation(LuaObject* templateData);

	TravelBuildingObjectImplementation(DummyConstructorParameter* param);

	TravelBuildingObject* _this;

	operator const TravelBuildingObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~TravelBuildingObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class TravelBuildingObject;
};

class TravelBuildingObjectAdapter : public BuildingObjectAdapter {
public:
	TravelBuildingObjectAdapter(TravelBuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class TravelBuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<TravelBuildingObjectHelper> {
	static TravelBuildingObjectHelper* staticInitializer;

public:
	TravelBuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TravelBuildingObjectHelper>;
};

} // namespace travel
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::travel;

#endif /*TRAVELBUILDINGOBJECT_H_*/
