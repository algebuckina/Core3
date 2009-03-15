/*
 *	server/zone/objects/building/BuildingObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef BUILDINGOBJECT_H_
#define BUILDINGOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/service/proto/BaseMessage.h"

#include "engine/util/QuadTreeEntry.h"

class CellObject;

class SceneObject;

class Player;

class Guild;

class CreatureObject;

class Zone;

class SuiListBox;

#include "../scene/SceneObject.h"

class BuildingObject : public SceneObject {
public:
	BuildingObject(unsigned long long oid, bool staticBuilding, int bType = 1);

	void sendPermissionListTo(Player* player, unsigned char listtype);

	void handlePermissionListModify(Player* enforcer, unsigned char listtype, int recipientIdx, SuiListBox* suilist);

	void addCell(CellObject* cell);

	void addSceneObject(SceneObject* sceneObject);

	void notifyInsertToZone(SceneObject* object);

	bool isStatic();

	int getBuildingType();

	void setBuildingType(int type);

	int getCellCount();

	CellObject* getCell(int idx);

	bool hasCell(unsigned long long cellID);

	void setPersistent(bool pers);

	void setUpdated(bool up);

	bool isPersistent();

	bool isUpdated();

	void setAttributes(String& attributeString);

	String& getAttributes();

	String& getOwner();

	void setOwner(const String& owner);

	unsigned long long getOwnerID();

	void setOwnerID(unsigned long long owner);

	bool isPublic();

	void setPublicEntry(bool pubentry);

	void parseItemAttributes();

	UnicodeString& getName();

	void setName(const String& n);

	void setName(const UnicodeString& n);

	String& getDefaultName();

	String& getTemplateName();

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void setSize(float minx, float miny, float maxx, float maxy);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void removeAll();

	bool update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	bool getStorageLoaded();

	void setStorageLoaded(bool setter);

	bool isCloningFacility();

	bool isOwnedBy(Player* player);

	bool isOnAdminList(Player* player);

	bool isOnEntryList(Player* player);

	bool isOnHopperList(Player* player);

	bool isOnBanList(Player* player);

	void givePermission(Player* enforcer, Player* recipient, unsigned char permission);

	void givePermission(Player* enforcer, Guild* guild, unsigned char permission);

	void givePermission(Player* enforcer, const String& entryname, unsigned char permission);

	void revokePermission(Player* enforcer, Player* recipient, unsigned char permission);

	void revokePermission(Player* enforcer, Guild* guild, unsigned char permission);

	void revokePermission(Player* enforcer, const String& entryname, unsigned char permission);

	void setPermissionsList(const String& permissionsString);

protected:
	BuildingObject(DummyConstructorParameter* param);

	virtual ~BuildingObject();

	String _return_getAttributes;
	String _return_getDefaultName;
	String _return_getOwner;
	String _return_getTemplateName;

	UnicodeString _return_getName;

	friend class BuildingObjectHelper;
};

class BuildingObjectImplementation;

class BuildingObjectAdapter : public SceneObjectAdapter {
public:
	BuildingObjectAdapter(BuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendPermissionListTo(Player* player, unsigned char listtype);

	void handlePermissionListModify(Player* enforcer, unsigned char listtype, int recipientIdx, SuiListBox* suilist);

	void addCell(CellObject* cell);

	void addSceneObject(SceneObject* sceneObject);

	void notifyInsertToZone(SceneObject* object);

	bool isStatic();

	int getBuildingType();

	void setBuildingType(int type);

	int getCellCount();

	CellObject* getCell(int idx);

	bool hasCell(unsigned long long cellID);

	void setPersistent(bool pers);

	void setUpdated(bool up);

	bool isPersistent();

	bool isUpdated();

	void setAttributes(String& attributeString);

	String& getAttributes();

	String& getOwner();

	void setOwner(const String& owner);

	unsigned long long getOwnerID();

	void setOwnerID(unsigned long long owner);

	bool isPublic();

	void setPublicEntry(bool pubentry);

	void parseItemAttributes();

	UnicodeString& getName();

	void setName(const String& n);

	void setName(const UnicodeString& n);

	String& getDefaultName();

	String& getTemplateName();

	void lock(bool doLock);

	void unlock(bool doLock);

	void setSize(float minx, float miny, float maxx, float maxy);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void removeAll();

	bool update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	bool getStorageLoaded();

	void setStorageLoaded(bool setter);

	bool isCloningFacility();

	bool isOwnedBy(Player* player);

	bool isOnAdminList(Player* player);

	bool isOnEntryList(Player* player);

	bool isOnHopperList(Player* player);

	bool isOnBanList(Player* player);

	void givePermission(Player* enforcer, Player* recipient, unsigned char permission);

	void givePermission(Player* enforcer, Guild* guild, unsigned char permission);

	void givePermission(Player* enforcer, const String& entryname, unsigned char permission);

	void revokePermission(Player* enforcer, Player* recipient, unsigned char permission);

	void revokePermission(Player* enforcer, Guild* guild, unsigned char permission);

	void revokePermission(Player* enforcer, const String& entryname, unsigned char permission);

	void setPermissionsList(const String& permissionsString);

protected:
	String _param0_setAttributes__String_;
	String _param0_setOwner__String_;
	String _param0_setName__String_;
	UnicodeString _param0_setName__UnicodeString_;
	String _param1_givePermission__Player_String_char_;
	String _param1_revokePermission__Player_String_char_;
	String _param0_setPermissionsList__String_;
};

class BuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<BuildingObjectHelper> {
	static BuildingObjectHelper* staticInitializer;

public:
	BuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<BuildingObjectHelper>;
};

#include "../scene/SceneObjectImplementation.h"

class BuildingObjectServant : public SceneObjectImplementation {
public:
	BuildingObject* _this;

public:
	BuildingObjectServant(unsigned long long oid, int type);
	virtual ~BuildingObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*BUILDINGOBJECT_H_*/
