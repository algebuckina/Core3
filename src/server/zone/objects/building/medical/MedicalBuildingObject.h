/*
 *	server/zone/objects/building/medical/MedicalBuildingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef MEDICALBUILDINGOBJECT_H_
#define MEDICALBUILDINGOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace medical {

class MedicalBuildingObject : public BuildingObject {
public:
	MedicalBuildingObject(LuaObject* templateData);

protected:
	MedicalBuildingObject(DummyConstructorParameter* param);

	virtual ~MedicalBuildingObject();

	friend class MedicalBuildingObjectHelper;
};

} // namespace medical
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::medical;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace medical {

class MedicalBuildingObjectImplementation : public BuildingObjectImplementation {

public:
	MedicalBuildingObjectImplementation(LuaObject* templateData);

	MedicalBuildingObjectImplementation(DummyConstructorParameter* param);

	MedicalBuildingObject* _this;

	operator const MedicalBuildingObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~MedicalBuildingObjectImplementation();

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

	friend class MedicalBuildingObject;
};

class MedicalBuildingObjectAdapter : public BuildingObjectAdapter {
public:
	MedicalBuildingObjectAdapter(MedicalBuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class MedicalBuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<MedicalBuildingObjectHelper> {
	static MedicalBuildingObjectHelper* staticInitializer;

public:
	MedicalBuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MedicalBuildingObjectHelper>;
};

} // namespace medical
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::medical;

#endif /*MEDICALBUILDINGOBJECT_H_*/
