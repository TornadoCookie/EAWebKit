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
#include "JSMediaQueryList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSMediaQueryListListener.h"
#include "MediaQueryList.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsMediaQueryListPrototypeFunctionAddListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaQueryListPrototypeFunctionRemoveListener(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsMediaQueryListMedia(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaQueryListMatches(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMediaQueryListPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMediaQueryListPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaQueryListPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaQueryListPrototype>(vm.heap)) JSMediaQueryListPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaQueryListPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table */

static const struct CompactHashIndex JSMediaQueryListTableIndex[4] = {
    { -1, -1 },
    { 0, -1 },
    { 1, -1 },
    { -1, -1 },
};


static const HashTableValue JSMediaQueryListTableValues[] =
{
    { "media", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaQueryListMedia), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "matches", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaQueryListMatches), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSMediaQueryListTable = { 2, 3, true, JSMediaQueryListTableValues, 0, JSMediaQueryListTableIndex };
/* Hash table for prototype */

static const HashTableValue JSMediaQueryListPrototypeTableValues[] =
{
    { "addListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaQueryListPrototypeFunctionAddListener), (intptr_t) (0) },
    { "removeListener", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaQueryListPrototypeFunctionRemoveListener), (intptr_t) (0) },
};

const ClassInfo JSMediaQueryListPrototype::s_info = { "MediaQueryListPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaQueryListPrototype) };

void JSMediaQueryListPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMediaQueryListPrototypeTableValues, *this);
}

const ClassInfo JSMediaQueryList::s_info = { "MediaQueryList", &Base::s_info, &JSMediaQueryListTable, CREATE_METHOD_TABLE(JSMediaQueryList) };

JSMediaQueryList::JSMediaQueryList(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaQueryList>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSMediaQueryList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaQueryListPrototype::create(vm, globalObject, JSMediaQueryListPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSMediaQueryList::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaQueryList>(vm, globalObject);
}

void JSMediaQueryList::destroy(JSC::JSCell* cell)
{
    JSMediaQueryList* thisObject = static_cast<JSMediaQueryList*>(cell);
    thisObject->JSMediaQueryList::~JSMediaQueryList();
}

JSMediaQueryList::~JSMediaQueryList()
{
    releaseImpl();
}

bool JSMediaQueryList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSMediaQueryList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSMediaQueryList, Base>(exec, JSMediaQueryListTable, thisObject, propertyName, slot);
}

EncodedJSValue jsMediaQueryListMedia(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSMediaQueryList*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.media());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaQueryListMatches(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSMediaQueryList*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.matches());
    return JSValue::encode(result);
}


EncodedJSValue JSC_HOST_CALL jsMediaQueryListPrototypeFunctionAddListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaQueryList* castedThis = jsDynamicCast<JSMediaQueryList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaQueryList", "addListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaQueryList::info());
    auto& impl = castedThis->impl();
    RefPtr<MediaQueryListListener> listener;
    if (!exec->argument(0).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(0).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 0, "listener", "MediaQueryList", "addListener");
        listener = JSMediaQueryListListener::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    }
    impl.addListener(listener);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaQueryListPrototypeFunctionRemoveListener(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSMediaQueryList* castedThis = jsDynamicCast<JSMediaQueryList*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "MediaQueryList", "removeListener");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaQueryList::info());
    auto& impl = castedThis->impl();
    RefPtr<MediaQueryListListener> listener;
    if (!exec->argument(0).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(0).isFunction())
            return throwArgumentMustBeFunctionError(*exec, 0, "listener", "MediaQueryList", "removeListener");
        listener = JSMediaQueryListListener::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    }
    impl.removeListener(listener);
    return JSValue::encode(jsUndefined());
}

bool JSMediaQueryListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaQueryListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsMediaQueryList = jsCast<JSMediaQueryList*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaQueryList->impl(), jsMediaQueryList);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, MediaQueryList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaQueryList>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to MediaQueryList.
    COMPILE_ASSERT(!__is_polymorphic(MediaQueryList), MediaQueryList_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSMediaQueryList>(globalObject, impl);
}

MediaQueryList* JSMediaQueryList::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSMediaQueryList*>(value))
        return &wrapper->impl();
    return nullptr;
}

}