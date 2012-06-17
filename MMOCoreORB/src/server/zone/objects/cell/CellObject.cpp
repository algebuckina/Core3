/*
 *	server/zone/objects/cell/CellObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "CellObject.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	CellObjectStub
 */

enum {RPC_SETALLOWENTRYPERMISSIONGROUP__STRING_,RPC_NOTIFYLOADFROMDATABASE__,RPC_SENDCONTAINEROBJECTSTO__SCENEOBJECT_,RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_,RPC_TRANSFEROBJECT__SCENEOBJECT_INT_BOOL_,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_SENDBASELINESTO__SCENEOBJECT_,RPC_GETCURRENTNUMBEROFPLAYERITEMS__,RPC_DESTROYALLPLAYERITEMS__,RPC_GETCELLNUMBER__,RPC_SETCELLNUMBER__INT_,RPC_ISCELLOBJECT__};

CellObject::CellObject() : SceneObject(DummyConstructorParameter::instance()) {
	CellObjectImplementation* _implementation = new CellObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CellObject");
}

CellObject::CellObject(DummyConstructorParameter* param) : SceneObject(param) {
	_setClassName("CellObject");
}

CellObject::~CellObject() {
}



void CellObject::loadTemplateData(SharedObjectTemplate* templateData) {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void CellObject::setAllowEntryPermissionGroup(const String& group) {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETALLOWENTRYPERMISSIONGROUP__STRING_);
		method.addAsciiParameter(group);

		method.executeWithVoidReturn();
	} else
		_implementation->setAllowEntryPermissionGroup(group);
}

void CellObject::notifyLoadFromDatabase() {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYLOADFROMDATABASE__);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyLoadFromDatabase();
}

void CellObject::sendContainerObjectsTo(SceneObject* player) {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDCONTAINEROBJECTSTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendContainerObjectsTo(player);
}

int CellObject::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addAsciiParameter(errorDescription);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->canAddObject(object, containmentType, errorDescription);
}

bool CellObject::transferObject(SceneObject* object, int containmentType, bool notifyClient) {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TRANSFEROBJECT__SCENEOBJECT_INT_BOOL_);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addBooleanParameter(notifyClient);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->transferObject(object, containmentType, notifyClient);
}

void CellObject::initializeTransientMembers() {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CellObject::sendBaselinesTo(SceneObject* player) {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASELINESTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

int CellObject::getCurrentNumberOfPlayerItems() {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCURRENTNUMBEROFPLAYERITEMS__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getCurrentNumberOfPlayerItems();
}

void CellObject::destroyAllPlayerItems() {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYALLPLAYERITEMS__);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyAllPlayerItems();
}

int CellObject::getCellNumber() {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCELLNUMBER__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getCellNumber();
}

void CellObject::setCellNumber(int number) {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCELLNUMBER__INT_);
		method.addSignedIntParameter(number);

		method.executeWithVoidReturn();
	} else
		_implementation->setCellNumber(number);
}

bool CellObject::isCellObject() {
	CellObjectImplementation* _implementation = static_cast<CellObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCELLOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCellObject();
}

DistributedObjectServant* CellObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void CellObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CellObjectImplementation
 */

CellObjectImplementation::CellObjectImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}


CellObjectImplementation::~CellObjectImplementation() {
}


void CellObjectImplementation::finalize() {
}

void CellObjectImplementation::_initializeImplementation() {
	_setClassHelper(CellObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CellObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CellObject*>(stub);
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CellObjectImplementation::_getStub() {
	return _this.get();
}

CellObjectImplementation::operator const CellObject*() {
	return _this.get();
}

void CellObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CellObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CellObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CellObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CellObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CellObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CellObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CellObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("CellObject");

}

void CellObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CellObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CellObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SceneObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "CellObject.cellNumber") {
		TypeInfo<int >::parseFromBinaryStream(&cellNumber, stream);
		return true;
	}

	if (_name == "CellObject.currentNumberOfItems") {
		TypeInfo<int >::parseFromBinaryStream(&currentNumberOfItems, stream);
		return true;
	}


	return false;
}

void CellObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CellObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CellObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SceneObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "CellObject.cellNumber";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&cellNumber, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CellObject.currentNumberOfItems";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&currentNumberOfItems, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 2;
}

CellObjectImplementation::CellObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/cell/CellObject.idl():  		Logger.setLoggingName("CellObject");
	Logger::setLoggingName("CellObject");
	// server/zone/objects/cell/CellObject.idl():  		cellNumber = 0;
	cellNumber = 0;
	// server/zone/objects/cell/CellObject.idl():  		currentNumberOfItems = 0;
	currentNumberOfItems = 0;
}

void CellObjectImplementation::setAllowEntryPermissionGroup(const String& group) {
	// server/zone/objects/cell/CellObject.idl():  		super.setContainerInheritPermissionsFromParent(false);
	SceneObjectImplementation::setContainerInheritPermissionsFromParent(false);
	// server/zone/objects/cell/CellObject.idl():  		super.setContainerDefaultDenyPermission(ContainerPermissions.MOVEIN);
	SceneObjectImplementation::setContainerDefaultDenyPermission(ContainerPermissions::MOVEIN);
	// server/zone/objects/cell/CellObject.idl():  		super.setContainerAllowPermission(group, ContainerPermissions.MOVEIN);
	SceneObjectImplementation::setContainerAllowPermission(group, ContainerPermissions::MOVEIN);
}

int CellObjectImplementation::getCellNumber() {
	// server/zone/objects/cell/CellObject.idl():  		return cellNumber;
	return cellNumber;
}

void CellObjectImplementation::setCellNumber(int number) {
	// server/zone/objects/cell/CellObject.idl():  		cellNumber = number;
	cellNumber = number;
}

bool CellObjectImplementation::isCellObject() {
	// server/zone/objects/cell/CellObject.idl():  		return true;
	return true;
}

/*
 *	CellObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CellObjectAdapter::CellObjectAdapter(CellObject* obj) : SceneObjectAdapter(obj) {
}

void CellObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETALLOWENTRYPERMISSIONGROUP__STRING_:
		{
			String group; 
			setAllowEntryPermissionGroup(inv->getAsciiParameter(group));
		}
		break;
	case RPC_NOTIFYLOADFROMDATABASE__:
		{
			notifyLoadFromDatabase();
		}
		break;
	case RPC_SENDCONTAINEROBJECTSTO__SCENEOBJECT_:
		{
			sendContainerObjectsTo(static_cast<SceneObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_:
		{
			String errorDescription; 
			resp->insertSignedInt(canAddObject(static_cast<SceneObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getAsciiParameter(errorDescription)));
		}
		break;
	case RPC_TRANSFEROBJECT__SCENEOBJECT_INT_BOOL_:
		{
			resp->insertBoolean(transferObject(static_cast<SceneObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getBooleanParameter()));
		}
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_SENDBASELINESTO__SCENEOBJECT_:
		{
			sendBaselinesTo(static_cast<SceneObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_GETCURRENTNUMBEROFPLAYERITEMS__:
		{
			resp->insertSignedInt(getCurrentNumberOfPlayerItems());
		}
		break;
	case RPC_DESTROYALLPLAYERITEMS__:
		{
			destroyAllPlayerItems();
		}
		break;
	case RPC_GETCELLNUMBER__:
		{
			resp->insertSignedInt(getCellNumber());
		}
		break;
	case RPC_SETCELLNUMBER__INT_:
		{
			setCellNumber(inv->getSignedIntParameter());
		}
		break;
	case RPC_ISCELLOBJECT__:
		{
			resp->insertBoolean(isCellObject());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void CellObjectAdapter::setAllowEntryPermissionGroup(const String& group) {
	(static_cast<CellObject*>(stub))->setAllowEntryPermissionGroup(group);
}

void CellObjectAdapter::notifyLoadFromDatabase() {
	(static_cast<CellObject*>(stub))->notifyLoadFromDatabase();
}

void CellObjectAdapter::sendContainerObjectsTo(SceneObject* player) {
	(static_cast<CellObject*>(stub))->sendContainerObjectsTo(player);
}

int CellObjectAdapter::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	return (static_cast<CellObject*>(stub))->canAddObject(object, containmentType, errorDescription);
}

bool CellObjectAdapter::transferObject(SceneObject* object, int containmentType, bool notifyClient) {
	return (static_cast<CellObject*>(stub))->transferObject(object, containmentType, notifyClient);
}

void CellObjectAdapter::initializeTransientMembers() {
	(static_cast<CellObject*>(stub))->initializeTransientMembers();
}

void CellObjectAdapter::sendBaselinesTo(SceneObject* player) {
	(static_cast<CellObject*>(stub))->sendBaselinesTo(player);
}

int CellObjectAdapter::getCurrentNumberOfPlayerItems() {
	return (static_cast<CellObject*>(stub))->getCurrentNumberOfPlayerItems();
}

void CellObjectAdapter::destroyAllPlayerItems() {
	(static_cast<CellObject*>(stub))->destroyAllPlayerItems();
}

int CellObjectAdapter::getCellNumber() {
	return (static_cast<CellObject*>(stub))->getCellNumber();
}

void CellObjectAdapter::setCellNumber(int number) {
	(static_cast<CellObject*>(stub))->setCellNumber(number);
}

bool CellObjectAdapter::isCellObject() {
	return (static_cast<CellObject*>(stub))->isCellObject();
}

/*
 *	CellObjectHelper
 */

CellObjectHelper* CellObjectHelper::staticInitializer = CellObjectHelper::instance();

CellObjectHelper::CellObjectHelper() {
	className = "CellObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void CellObjectHelper::finalizeHelper() {
	CellObjectHelper::finalize();
}

DistributedObject* CellObjectHelper::instantiateObject() {
	return new CellObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* CellObjectHelper::instantiateServant() {
	return new CellObjectImplementation();
}

DistributedObjectAdapter* CellObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CellObjectAdapter(static_cast<CellObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

