/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSEvent.h"

#include "Event.h"
#include "EventTarget.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "JSEventTarget.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopPropagation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionPreventDefault(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionInitEvent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopImmediatePropagation(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsEventType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventTarget(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventCurrentTarget(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventEventPhase(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventBubbles(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventCancelable(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventTimeStamp(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventDefaultPrevented(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventSrcElement(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventReturnValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSEventReturnValue(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsEventCancelBubble(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSEventCancelBubble(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsEventClipboardData(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSEventPrototype>(vm.heap)) JSEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSEventConstructor : public DOMConstructorObject {
private:
    JSEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSEventConstructor>(vm.heap)) JSEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

/* Hash table */

static const struct CompactHashIndex JSEventTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};


static const HashTableValue JSEventTableValues[] =
{
    { "clipboardData", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventClipboardData), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSEventTable = { 1, 1, true, JSEventTableValues, 0, JSEventTableIndex };
/* Hash table for constructor */

static const HashTableValue JSEventConstructorTableValues[] =
{
    { "NONE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "CAPTURING_PHASE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "AT_TARGET", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "BUBBLING_PHASE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "MOUSEDOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "MOUSEUP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "MOUSEOVER", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "MOUSEOUT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(8), (intptr_t) (0) },
    { "MOUSEMOVE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(16), (intptr_t) (0) },
    { "MOUSEDRAG", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(32), (intptr_t) (0) },
    { "CLICK", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(64), (intptr_t) (0) },
    { "DBLCLICK", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(128), (intptr_t) (0) },
    { "KEYDOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(256), (intptr_t) (0) },
    { "KEYUP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(512), (intptr_t) (0) },
    { "KEYPRESS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1024), (intptr_t) (0) },
    { "DRAGDROP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2048), (intptr_t) (0) },
    { "FOCUS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4096), (intptr_t) (0) },
    { "BLUR", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(8192), (intptr_t) (0) },
    { "SELECT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(16384), (intptr_t) (0) },
    { "CHANGE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(32768), (intptr_t) (0) },
};


COMPILE_ASSERT(0 == Event::NONE, EventEnumNONEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == Event::CAPTURING_PHASE, EventEnumCAPTURING_PHASEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == Event::AT_TARGET, EventEnumAT_TARGETIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == Event::BUBBLING_PHASE, EventEnumBUBBLING_PHASEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == Event::MOUSEDOWN, EventEnumMOUSEDOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == Event::MOUSEUP, EventEnumMOUSEUPIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == Event::MOUSEOVER, EventEnumMOUSEOVERIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(8 == Event::MOUSEOUT, EventEnumMOUSEOUTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(16 == Event::MOUSEMOVE, EventEnumMOUSEMOVEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(32 == Event::MOUSEDRAG, EventEnumMOUSEDRAGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(64 == Event::CLICK, EventEnumCLICKIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(128 == Event::DBLCLICK, EventEnumDBLCLICKIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(256 == Event::KEYDOWN, EventEnumKEYDOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(512 == Event::KEYUP, EventEnumKEYUPIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1024 == Event::KEYPRESS, EventEnumKEYPRESSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2048 == Event::DRAGDROP, EventEnumDRAGDROPIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4096 == Event::FOCUS, EventEnumFOCUSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(8192 == Event::BLUR, EventEnumBLURIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(16384 == Event::SELECT, EventEnumSELECTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(32768 == Event::CHANGE, EventEnumCHANGEIsWrongUseDoNotCheckConstants);

EncodedJSValue JSC_HOST_CALL JSEventConstructor::constructJSEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    EventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<Event> event = Event::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillEventInit(EventInit& eventInit, JSDictionary& dictionary)
{
    if (!dictionary.tryGetProperty("bubbles", eventInit.bubbles))
        return false;
    if (!dictionary.tryGetProperty("cancelable", eventInit.cancelable))
        return false;
    return true;
}

const ClassInfo JSEventConstructor::s_info = { "EventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSEventConstructor) };

JSEventConstructor::JSEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("Event"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSEventConstructorTableValues, *this);
}

ConstructType JSEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "type", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "target", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventTarget), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "currentTarget", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCurrentTarget), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "eventPhase", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventEventPhase), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "bubbles", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventBubbles), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "cancelable", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCancelable), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "timeStamp", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventTimeStamp), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "defaultPrevented", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventDefaultPrevented), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "srcElement", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSrcElement), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "returnValue", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventReturnValue), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSEventReturnValue) },
    { "cancelBubble", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventCancelBubble), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSEventCancelBubble) },
    { "NONE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "CAPTURING_PHASE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "AT_TARGET", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "BUBBLING_PHASE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "MOUSEDOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "MOUSEUP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "MOUSEOVER", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "MOUSEOUT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(8), (intptr_t) (0) },
    { "MOUSEMOVE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(16), (intptr_t) (0) },
    { "MOUSEDRAG", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(32), (intptr_t) (0) },
    { "CLICK", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(64), (intptr_t) (0) },
    { "DBLCLICK", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(128), (intptr_t) (0) },
    { "KEYDOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(256), (intptr_t) (0) },
    { "KEYUP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(512), (intptr_t) (0) },
    { "KEYPRESS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1024), (intptr_t) (0) },
    { "DRAGDROP", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2048), (intptr_t) (0) },
    { "FOCUS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4096), (intptr_t) (0) },
    { "BLUR", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(8192), (intptr_t) (0) },
    { "SELECT", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(16384), (intptr_t) (0) },
    { "CHANGE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(32768), (intptr_t) (0) },
    { "stopPropagation", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventPrototypeFunctionStopPropagation), (intptr_t) (0) },
    { "preventDefault", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventPrototypeFunctionPreventDefault), (intptr_t) (0) },
    { "initEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventPrototypeFunctionInitEvent), (intptr_t) (0) },
    { "stopImmediatePropagation", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsEventPrototypeFunctionStopImmediatePropagation), (intptr_t) (0) },
};

const ClassInfo JSEventPrototype::s_info = { "EventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSEventPrototype) };

void JSEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSEventPrototypeTableValues, *this);
}

const ClassInfo JSEvent::s_info = { "Event", &Base::s_info, &JSEventTable, CREATE_METHOD_TABLE(JSEvent) };

JSEvent::JSEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<Event>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSEventPrototype::create(vm, globalObject, JSEventPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEvent>(vm, globalObject);
}

void JSEvent::destroy(JSC::JSCell* cell)
{
    JSEvent* thisObject = static_cast<JSEvent*>(cell);
    thisObject->JSEvent::~JSEvent();
}

JSEvent::~JSEvent()
{
    releaseImpl();
}

bool JSEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSEvent, Base>(exec, JSEventTable, thisObject, propertyName, slot);
}

EncodedJSValue jsEventType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "type");
        return throwGetterTypeError(*exec, "Event", "type");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return JSValue::encode(result);
}


EncodedJSValue jsEventTarget(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "target");
        return throwGetterTypeError(*exec, "Event", "target");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.target()));
    return JSValue::encode(result);
}


EncodedJSValue jsEventCurrentTarget(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "currentTarget");
        return throwGetterTypeError(*exec, "Event", "currentTarget");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.currentTarget()));
    return JSValue::encode(result);
}


EncodedJSValue jsEventEventPhase(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "eventPhase");
        return throwGetterTypeError(*exec, "Event", "eventPhase");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.eventPhase());
    return JSValue::encode(result);
}


EncodedJSValue jsEventBubbles(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "bubbles");
        return throwGetterTypeError(*exec, "Event", "bubbles");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.bubbles());
    return JSValue::encode(result);
}


EncodedJSValue jsEventCancelable(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "cancelable");
        return throwGetterTypeError(*exec, "Event", "cancelable");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.cancelable());
    return JSValue::encode(result);
}


EncodedJSValue jsEventTimeStamp(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "timeStamp");
        return throwGetterTypeError(*exec, "Event", "timeStamp");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.timeStamp());
    return JSValue::encode(result);
}


EncodedJSValue jsEventDefaultPrevented(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "defaultPrevented");
        return throwGetterTypeError(*exec, "Event", "defaultPrevented");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.defaultPrevented());
    return JSValue::encode(result);
}


EncodedJSValue jsEventSrcElement(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "srcElement");
        return throwGetterTypeError(*exec, "Event", "srcElement");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.srcElement()));
    return JSValue::encode(result);
}


EncodedJSValue jsEventReturnValue(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "returnValue");
        return throwGetterTypeError(*exec, "Event", "returnValue");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.legacyReturnValue());
    return JSValue::encode(result);
}


EncodedJSValue jsEventCancelBubble(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "Event", "cancelBubble");
        return throwGetterTypeError(*exec, "Event", "cancelBubble");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.cancelBubble());
    return JSValue::encode(result);
}


EncodedJSValue jsEventClipboardData(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSEvent*>(slotBase);
    return JSValue::encode(castedThis->clipboardData(exec));
}


EncodedJSValue jsEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSEventPrototype* domObject = jsDynamicCast<JSEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSEventReturnValue(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "Event", "returnValue");
        else
            throwSetterTypeError(*exec, "Event", "returnValue");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setLegacyReturnValue(nativeValue);
}


void setJSEventCancelBubble(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSEventPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "Event", "cancelBubble");
        else
            throwSetterTypeError(*exec, "Event", "cancelBubble");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setCancelBubble(nativeValue);
}


JSValue JSEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopPropagation(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Event", "stopPropagation");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEvent::info());
    auto& impl = castedThis->impl();
    impl.stopPropagation();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionPreventDefault(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Event", "preventDefault");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEvent::info());
    auto& impl = castedThis->impl();
    impl.preventDefault();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionInitEvent(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Event", "initEvent");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEvent::info());
    auto& impl = castedThis->impl();
    String eventTypeArg = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool canBubbleArg = exec->argument(1).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    bool cancelableArg = exec->argument(2).toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.initEvent(eventTypeArg, canBubbleArg, cancelableArg);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopImmediatePropagation(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSEvent* castedThis = jsDynamicCast<JSEvent*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "Event", "stopImmediatePropagation");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSEvent::info());
    auto& impl = castedThis->impl();
    impl.stopImmediatePropagation();
    return JSValue::encode(jsUndefined());
}

bool JSEventOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSEventOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsEvent = jsCast<JSEvent*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsEvent->impl(), jsEvent);
}

Event* JSEvent::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSEvent*>(value))
        return &wrapper->impl();
    return nullptr;
}

}