/*
 *	server/zone/objects/area/ActiveArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "ActiveArea.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	ActiveAreaStub
 */

ActiveArea::ActiveArea() : SceneObject(DummyConstructorParameter::instance()) {
	ActiveAreaImplementation* _implementation = new ActiveAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ActiveArea::ActiveArea(DummyConstructorParameter* param) : SceneObject(param) {
}

ActiveArea::~ActiveArea() {
}


void ActiveArea::sendTo(SceneObject* player, bool doClose) {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		_implementation->sendTo(player, doClose);
}

void ActiveArea::enqueueEnterEvent(SceneObject* obj) {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->enqueueEnterEvent(obj);
}

void ActiveArea::enqueueExitEvent(SceneObject* obj) {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->enqueueExitEvent(obj);
}

void ActiveArea::notifyEnter(SceneObject* object) {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyEnter(object);
}

void ActiveArea::notifyExit(SceneObject* object) {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyExit(object);
}

bool ActiveArea::isActiveArea() {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isActiveArea();
}

bool ActiveArea::isRegion() {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRegion();
}

void ActiveArea::insertToZone(Zone* zone) {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(zone);

		method.executeWithVoidReturn();
	} else
		_implementation->insertToZone(zone);
}

void ActiveArea::removeFromZone() {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithVoidReturn();
	} else
		_implementation->removeFromZone();
}

bool ActiveArea::containsPoint(float x, float y) {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->containsPoint(x, y);
}

float ActiveArea::getRadius() {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getRadius();
}

float ActiveArea::getRadius2() {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getRadius2();
}

void ActiveArea::setRadius(float r) {
	ActiveAreaImplementation* _implementation = (ActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addFloatParameter(r);

		method.executeWithVoidReturn();
	} else
		_implementation->setRadius(r);
}

DistributedObjectServant* ActiveArea::_getImplementation() {

	_updated = true;
	return _impl;
}

void ActiveArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	ActiveAreaImplementation
 */

ActiveAreaImplementation::ActiveAreaImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}


ActiveAreaImplementation::~ActiveAreaImplementation() {
}


void ActiveAreaImplementation::finalize() {
}

void ActiveAreaImplementation::_initializeImplementation() {
	_setClassHelper(ActiveAreaHelper::instance());

	_serializationHelperMethod();
}

void ActiveAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ActiveArea*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ActiveAreaImplementation::_getStub() {
	return _this;
}

ActiveAreaImplementation::operator const ActiveArea*() {
	return _this;
}

void ActiveAreaImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ActiveAreaImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ActiveAreaImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ActiveAreaImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ActiveAreaImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ActiveAreaImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ActiveAreaImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ActiveAreaImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("ActiveArea");

	addSerializableVariable("radius", &radius);
	addSerializableVariable("radius2", &radius2);
}

ActiveAreaImplementation::ActiveAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/ActiveArea.idl(58):  		radius = 0;
	radius = 0;
	// server/zone/objects/area/ActiveArea.idl(59):  		radius2 = 0;
	radius2 = 0;
	// server/zone/objects/area/ActiveArea.idl(61):  		Logger.setLoggingName("ActiveArea");
	Logger::setLoggingName("ActiveArea");
}

void ActiveAreaImplementation::sendTo(SceneObject* player, bool doClose) {
}

void ActiveAreaImplementation::notifyEnter(SceneObject* object) {
}

void ActiveAreaImplementation::notifyExit(SceneObject* object) {
}

bool ActiveAreaImplementation::isActiveArea() {
	// server/zone/objects/area/ActiveArea.idl(87):  		return true;
	return true;
}

bool ActiveAreaImplementation::isRegion() {
	// server/zone/objects/area/ActiveArea.idl(91):  		return false;
	return false;
}

float ActiveAreaImplementation::getRadius() {
	// server/zone/objects/area/ActiveArea.idl(112):  		return radius;
	return radius;
}

float ActiveAreaImplementation::getRadius2() {
	// server/zone/objects/area/ActiveArea.idl(116):  		return radius2;
	return radius2;
}

void ActiveAreaImplementation::setRadius(float r) {
	// server/zone/objects/area/ActiveArea.idl(120):  		radius = r;
	radius = r;
	// server/zone/objects/area/ActiveArea.idl(121):  		radius2 = r * r;
	radius2 = r * r;
}

/*
 *	ActiveAreaAdapter
 */

ActiveAreaAdapter::ActiveAreaAdapter(ActiveAreaImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* ActiveAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 7:
		enqueueEnterEvent((SceneObject*) inv->getObjectParameter());
		break;
	case 8:
		enqueueExitEvent((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		notifyEnter((SceneObject*) inv->getObjectParameter());
		break;
	case 10:
		notifyExit((SceneObject*) inv->getObjectParameter());
		break;
	case 11:
		resp->insertBoolean(isActiveArea());
		break;
	case 12:
		resp->insertBoolean(isRegion());
		break;
	case 13:
		insertToZone((Zone*) inv->getObjectParameter());
		break;
	case 14:
		removeFromZone();
		break;
	case 15:
		resp->insertBoolean(containsPoint(inv->getFloatParameter(), inv->getFloatParameter()));
		break;
	case 16:
		resp->insertFloat(getRadius());
		break;
	case 17:
		resp->insertFloat(getRadius2());
		break;
	case 18:
		setRadius(inv->getFloatParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ActiveAreaAdapter::sendTo(SceneObject* player, bool doClose) {
	((ActiveAreaImplementation*) impl)->sendTo(player, doClose);
}

void ActiveAreaAdapter::enqueueEnterEvent(SceneObject* obj) {
	((ActiveAreaImplementation*) impl)->enqueueEnterEvent(obj);
}

void ActiveAreaAdapter::enqueueExitEvent(SceneObject* obj) {
	((ActiveAreaImplementation*) impl)->enqueueExitEvent(obj);
}

void ActiveAreaAdapter::notifyEnter(SceneObject* object) {
	((ActiveAreaImplementation*) impl)->notifyEnter(object);
}

void ActiveAreaAdapter::notifyExit(SceneObject* object) {
	((ActiveAreaImplementation*) impl)->notifyExit(object);
}

bool ActiveAreaAdapter::isActiveArea() {
	return ((ActiveAreaImplementation*) impl)->isActiveArea();
}

bool ActiveAreaAdapter::isRegion() {
	return ((ActiveAreaImplementation*) impl)->isRegion();
}

void ActiveAreaAdapter::insertToZone(Zone* zone) {
	((ActiveAreaImplementation*) impl)->insertToZone(zone);
}

void ActiveAreaAdapter::removeFromZone() {
	((ActiveAreaImplementation*) impl)->removeFromZone();
}

bool ActiveAreaAdapter::containsPoint(float x, float y) {
	return ((ActiveAreaImplementation*) impl)->containsPoint(x, y);
}

float ActiveAreaAdapter::getRadius() {
	return ((ActiveAreaImplementation*) impl)->getRadius();
}

float ActiveAreaAdapter::getRadius2() {
	return ((ActiveAreaImplementation*) impl)->getRadius2();
}

void ActiveAreaAdapter::setRadius(float r) {
	((ActiveAreaImplementation*) impl)->setRadius(r);
}

/*
 *	ActiveAreaHelper
 */

ActiveAreaHelper* ActiveAreaHelper::staticInitializer = ActiveAreaHelper::instance();

ActiveAreaHelper::ActiveAreaHelper() {
	className = "ActiveArea";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ActiveAreaHelper::finalizeHelper() {
	ActiveAreaHelper::finalize();
}

DistributedObject* ActiveAreaHelper::instantiateObject() {
	return new ActiveArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* ActiveAreaHelper::instantiateServant() {
	return new ActiveAreaImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ActiveAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ActiveAreaAdapter((ActiveAreaImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

