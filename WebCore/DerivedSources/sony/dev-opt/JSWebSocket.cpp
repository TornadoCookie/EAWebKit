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

#if ENABLE(WEB_SOCKETS)

#include "JSWebSocket.h"

#include "Event.h"
#include "ExceptionCode.h"
#include "JSBlob.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "URL.h"
#include "WebSocket.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionClose(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionDispatchEvent(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsWebSocketURL(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebSocketUrl(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebSocketReadyState(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebSocketBufferedAmount(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebSocketOnopen(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWebSocketOnopen(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWebSocketOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWebSocketOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWebSocketOnerror(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWebSocketOnerror(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWebSocketOnclose(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWebSocketOnclose(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWebSocketProtocol(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebSocketExtensions(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebSocketBinaryType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWebSocketBinaryType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWebSocketConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWebSocketPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebSocketPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebSocketPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebSocketPrototype>(vm.heap)) JSWebSocketPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebSocketPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWebSocketConstructor : public DOMConstructorObject {
private:
    JSWebSocketConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebSocketConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebSocketConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebSocketConstructor>(vm.heap)) JSWebSocketConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSWebSocket(JSC::ExecState*);
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSWebSocket1(JSC::ExecState*);
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSWebSocket2(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

/* Hash table for constructor */

static const HashTableValue JSWebSocketConstructorTableValues[] =
{
    { "CONNECTING", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "OPEN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "CLOSING", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "CLOSED", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
};


COMPILE_ASSERT(0 == WebSocket::CONNECTING, WebSocketEnumCONNECTINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == WebSocket::OPEN, WebSocketEnumOPENIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == WebSocket::CLOSING, WebSocketEnumCLOSINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == WebSocket::CLOSED, WebSocketEnumCLOSEDIsWrongUseDoNotCheckConstants);

EncodedJSValue JSC_HOST_CALL JSWebSocketConstructor::constructJSWebSocket1(ExecState* exec)
{
    auto* castedThis = jsCast<JSWebSocketConstructor*>(exec->callee());
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String url = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    Vector<String> protocols = toNativeArray<String>(exec, exec->argument(1));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwConstructorDocumentUnavailableError(*exec, "WebSocket");
    RefPtr<WebSocket> object = WebSocket::create(*context, url, protocols, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSWebSocketConstructor::constructJSWebSocket2(ExecState* exec)
{
    auto* castedThis = jsCast<JSWebSocketConstructor*>(exec->callee());
    if (UNLIKELY(exec->argumentCount() < 2))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String url = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String protocol = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwConstructorDocumentUnavailableError(*exec, "WebSocket");
    RefPtr<WebSocket> object = WebSocket::create(*context, url, protocol, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSWebSocketConstructor::constructJSWebSocket(ExecState* exec)
{
    size_t argsCount = std::min<size_t>(2, exec->argumentCount());
    JSValue arg1(exec->argument(1));
    if (argsCount == 1 || (argsCount == 2 && (arg1.isUndefined() || arg1.isNull() || (arg1.isObject() && isJSArray(arg1)))))
        return JSWebSocketConstructor::constructJSWebSocket1(exec);
    if (argsCount == 2)
        return JSWebSocketConstructor::constructJSWebSocket2(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

const ClassInfo JSWebSocketConstructor::s_info = { "WebSocketConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebSocketConstructor) };

JSWebSocketConstructor::JSWebSocketConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebSocketConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebSocket::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebSocket"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSWebSocketConstructorTableValues, *this);
}

ConstructType JSWebSocketConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWebSocket;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWebSocketPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "URL", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketURL), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "url", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketUrl), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "readyState", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketReadyState), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "bufferedAmount", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketBufferedAmount), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "onopen", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOnopen), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWebSocketOnopen) },
    { "onmessage", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOnmessage), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWebSocketOnmessage) },
    { "onerror", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOnerror), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWebSocketOnerror) },
    { "onclose", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOnclose), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWebSocketOnclose) },
    { "protocol", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketProtocol), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "extensions", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketExtensions), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "binaryType", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketBinaryType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWebSocketBinaryType) },
    { "CONNECTING", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "OPEN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "CLOSING", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "CLOSED", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "send", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionSend), (intptr_t) (1) },
    { "close", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionClose), (intptr_t) (0) },
    { "addEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionAddEventListener), (intptr_t) (2) },
    { "removeEventListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionRemoveEventListener), (intptr_t) (2) },
    { "dispatchEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionDispatchEvent), (intptr_t) (1) },
};

const ClassInfo JSWebSocketPrototype::s_info = { "WebSocketPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebSocketPrototype) };

void JSWebSocketPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebSocketPrototypeTableValues, *this);
}

const ClassInfo JSWebSocket::s_info = { "WebSocket", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebSocket) };

JSWebSocket::JSWebSocket(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebSocket>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSWebSocket::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebSocketPrototype::create(vm, globalObject, JSWebSocketPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSWebSocket::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebSocket>(vm, globalObject);
}

void JSWebSocket::destroy(JSC::JSCell* cell)
{
    JSWebSocket* thisObject = static_cast<JSWebSocket*>(cell);
    thisObject->JSWebSocket::~JSWebSocket();
}

JSWebSocket::~JSWebSocket()
{
    releaseImpl();
}

EncodedJSValue jsWebSocketURL(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "URL");
        return throwGetterTypeError(*exec, "WebSocket", "URL");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.url());
    return JSValue::encode(result);
}


EncodedJSValue jsWebSocketUrl(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "url");
        return throwGetterTypeError(*exec, "WebSocket", "url");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.url());
    return JSValue::encode(result);
}


EncodedJSValue jsWebSocketReadyState(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "readyState");
        return throwGetterTypeError(*exec, "WebSocket", "readyState");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.readyState());
    return JSValue::encode(result);
}


EncodedJSValue jsWebSocketBufferedAmount(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "bufferedAmount");
        return throwGetterTypeError(*exec, "WebSocket", "bufferedAmount");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.bufferedAmount());
    return JSValue::encode(result);
}


EncodedJSValue jsWebSocketOnopen(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "onopen");
        return throwGetterTypeError(*exec, "WebSocket", "onopen");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().openEvent));
}


EncodedJSValue jsWebSocketOnmessage(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "onmessage");
        return throwGetterTypeError(*exec, "WebSocket", "onmessage");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().messageEvent));
}


EncodedJSValue jsWebSocketOnerror(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "onerror");
        return throwGetterTypeError(*exec, "WebSocket", "onerror");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().errorEvent));
}


EncodedJSValue jsWebSocketOnclose(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "onclose");
        return throwGetterTypeError(*exec, "WebSocket", "onclose");
    }
    UNUSED_PARAM(exec);
    return JSValue::encode(eventHandlerAttribute(castedThis->impl(), eventNames().closeEvent));
}


EncodedJSValue jsWebSocketProtocol(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "protocol");
        return throwGetterTypeError(*exec, "WebSocket", "protocol");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringOrUndefined(exec, impl.protocol());
    return JSValue::encode(result);
}


EncodedJSValue jsWebSocketExtensions(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "extensions");
        return throwGetterTypeError(*exec, "WebSocket", "extensions");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringOrUndefined(exec, impl.extensions());
    return JSValue::encode(result);
}


EncodedJSValue jsWebSocketBinaryType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebSocket", "binaryType");
        return throwGetterTypeError(*exec, "WebSocket", "binaryType");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.binaryType());
    return JSValue::encode(result);
}


EncodedJSValue jsWebSocketConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWebSocketPrototype* domObject = jsDynamicCast<JSWebSocketPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebSocket::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSWebSocketOnopen(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WebSocket", "onopen");
        else
            throwSetterTypeError(*exec, "WebSocket", "onopen");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().openEvent, value);
}


void setJSWebSocketOnmessage(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WebSocket", "onmessage");
        else
            throwSetterTypeError(*exec, "WebSocket", "onmessage");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().messageEvent, value);
}


void setJSWebSocketOnerror(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WebSocket", "onerror");
        else
            throwSetterTypeError(*exec, "WebSocket", "onerror");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().errorEvent, value);
}


void setJSWebSocketOnclose(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WebSocket", "onclose");
        else
            throwSetterTypeError(*exec, "WebSocket", "onclose");
        return;
    }
    setEventHandlerAttribute(*exec, *castedThis, castedThis->impl(), eventNames().closeEvent, value);
}


void setJSWebSocketBinaryType(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebSocketPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WebSocket", "binaryType");
        else
            throwSetterTypeError(*exec, "WebSocket", "binaryType");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = value.toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBinaryType(nativeValue);
}


JSValue JSWebSocket::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebSocketConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

static EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend1(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "WebSocket", "send");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebSocket::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ArrayBuffer* data = toArrayBuffer(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend2(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "WebSocket", "send");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebSocket::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    RefPtr<ArrayBufferView> data = toArrayBufferView(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.send(data.get(), ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend3(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "WebSocket", "send");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebSocket::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Blob* data = JSBlob::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend4(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "WebSocket", "send");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebSocket::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String data = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend(ExecState* exec)
{
    size_t argsCount = std::min<size_t>(1, exec->argumentCount());
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && ((arg0.isObject() && asObject(arg0)->inherits(JSArrayBuffer::info())))))
        return jsWebSocketPrototypeFunctionSend1(exec);
    if ((argsCount == 1 && ((arg0.isObject() && asObject(arg0)->inherits(JSArrayBufferView::info())))))
        return jsWebSocketPrototypeFunctionSend2(exec);
    if ((argsCount == 1 && ((arg0.isObject() && asObject(arg0)->inherits(JSBlob::info())))))
        return jsWebSocketPrototypeFunctionSend3(exec);
    if (argsCount == 1)
        return jsWebSocketPrototypeFunctionSend4(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionClose(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "WebSocket", "close");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebSocket::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {
        impl.close(ec);
        setDOMException(exec, ec);
        return JSValue::encode(jsUndefined());
    }

    unsigned short code = 0;
    double codeNativeValue = exec->argument(0).toNumber(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    if (!std::isnan(codeNativeValue))
        code = clampTo<unsigned short>(codeNativeValue);

    if (argsCount <= 1) {
        impl.close(code, ec);
        setDOMException(exec, ec);
        return JSValue::encode(jsUndefined());
    }

    String reason = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.close(code, reason, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "WebSocket", "addEventListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebSocket::info());
    auto& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (UNLIKELY(!listener.isObject()))
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->toAtomicString(exec), createJSEventListenerForAdd(*exec, *asObject(listener), *castedThis), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "WebSocket", "removeEventListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebSocket::info());
    auto& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (UNLIKELY(!listener.isObject()))
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->toAtomicString(exec), createJSEventListenerForRemove(*exec, *asObject(listener), *castedThis).ptr(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSWebSocket* castedThis = jsDynamicCast<JSWebSocket*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "WebSocket", "dispatchEvent");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebSocket::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* event = JSEvent::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsBoolean(impl.dispatchEvent(event, ec));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSWebSocket::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSWebSocket*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

bool JSWebSocketOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsWebSocket = jsCast<JSWebSocket*>(handle.slot()->asCell());
    if (jsWebSocket->impl().hasPendingActivity())
        return true;
    if (jsWebSocket->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebSocketOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsWebSocket = jsCast<JSWebSocket*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebSocket->impl(), jsWebSocket);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebSocket@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore9WebSocketE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, WebSocket* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebSocket>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebSocket@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore9WebSocketE[2];
#if COMPILER(CLANG)
    // If this fails WebSocket does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebSocket), WebSocket_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebSocket has subclasses. If WebSocket has subclasses that get passed
    // to toJS() we currently require WebSocket you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSWebSocket>(globalObject, impl);
}

WebSocket* JSWebSocket::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSWebSocket*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEB_SOCKETS)