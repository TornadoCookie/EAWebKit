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

#if ENABLE(USER_MESSAGE_HANDLERS)

#include "JSUserMessageHandlersNamespace.h"

#include "JSDOMBinding.h"
#include "UserMessageHandlersNamespace.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsUserMessageHandlersNamespaceConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSUserMessageHandlersNamespacePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSUserMessageHandlersNamespacePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSUserMessageHandlersNamespacePrototype* ptr = new (NotNull, JSC::allocateCell<JSUserMessageHandlersNamespacePrototype>(vm.heap)) JSUserMessageHandlersNamespacePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSUserMessageHandlersNamespacePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }
};

class JSUserMessageHandlersNamespaceConstructor : public DOMConstructorObject {
private:
    JSUserMessageHandlersNamespaceConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSUserMessageHandlersNamespaceConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSUserMessageHandlersNamespaceConstructor* ptr = new (NotNull, JSC::allocateCell<JSUserMessageHandlersNamespaceConstructor>(vm.heap)) JSUserMessageHandlersNamespaceConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table */

static const struct CompactHashIndex JSUserMessageHandlersNamespaceTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};


static const HashTableValue JSUserMessageHandlersNamespaceTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUserMessageHandlersNamespaceConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSUserMessageHandlersNamespaceTable = { 1, 1, true, JSUserMessageHandlersNamespaceTableValues, 0, JSUserMessageHandlersNamespaceTableIndex };
const ClassInfo JSUserMessageHandlersNamespaceConstructor::s_info = { "UserMessageHandlersNamespaceConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSUserMessageHandlersNamespaceConstructor) };

JSUserMessageHandlersNamespaceConstructor::JSUserMessageHandlersNamespaceConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSUserMessageHandlersNamespaceConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSUserMessageHandlersNamespace::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("UserMessageHandlersNamespace"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */
const ClassInfo JSUserMessageHandlersNamespacePrototype::s_info = { "UserMessageHandlersNamespacePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSUserMessageHandlersNamespacePrototype) };

const ClassInfo JSUserMessageHandlersNamespace::s_info = { "UserMessageHandlersNamespace", &Base::s_info, &JSUserMessageHandlersNamespaceTable, CREATE_METHOD_TABLE(JSUserMessageHandlersNamespace) };

JSUserMessageHandlersNamespace::JSUserMessageHandlersNamespace(Structure* structure, JSDOMGlobalObject* globalObject, Ref<UserMessageHandlersNamespace>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSUserMessageHandlersNamespace::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSUserMessageHandlersNamespacePrototype::create(vm, globalObject, JSUserMessageHandlersNamespacePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSUserMessageHandlersNamespace::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSUserMessageHandlersNamespace>(vm, globalObject);
}

void JSUserMessageHandlersNamespace::destroy(JSC::JSCell* cell)
{
    JSUserMessageHandlersNamespace* thisObject = static_cast<JSUserMessageHandlersNamespace*>(cell);
    thisObject->JSUserMessageHandlersNamespace::~JSUserMessageHandlersNamespace();
}

JSUserMessageHandlersNamespace::~JSUserMessageHandlersNamespace()
{
    releaseImpl();
}

bool JSUserMessageHandlersNamespace::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSUserMessageHandlersNamespace*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSUserMessageHandlersNamespace, Base>(exec, JSUserMessageHandlersNamespaceTable, thisObject, propertyName, slot);
}

bool JSUserMessageHandlersNamespace::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSUserMessageHandlersNamespace*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Identifier propertyName = Identifier::from(exec, index);
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsUserMessageHandlersNamespaceConstructor(ExecState* exec, JSObject*, EncodedJSValue thisValue, PropertyName)
{
    JSUserMessageHandlersNamespace* domObject = jsDynamicCast<JSUserMessageHandlersNamespace*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSUserMessageHandlersNamespace::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSUserMessageHandlersNamespace::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSUserMessageHandlersNamespaceConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSUserMessageHandlersNamespaceOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSUserMessageHandlersNamespaceOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsUserMessageHandlersNamespace = jsCast<JSUserMessageHandlersNamespace*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsUserMessageHandlersNamespace->impl(), jsUserMessageHandlersNamespace);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7UserMessageHandlersNamespace@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore28UserMessageHandlersNamespaceE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, UserMessageHandlersNamespace* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSUserMessageHandlersNamespace>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7UserMessageHandlersNamespace@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore28UserMessageHandlersNamespaceE[2];
#if COMPILER(CLANG)
    // If this fails UserMessageHandlersNamespace does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(UserMessageHandlersNamespace), UserMessageHandlersNamespace_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // UserMessageHandlersNamespace has subclasses. If UserMessageHandlersNamespace has subclasses that get passed
    // to toJS() we currently require UserMessageHandlersNamespace you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSUserMessageHandlersNamespace>(globalObject, impl);
}

UserMessageHandlersNamespace* JSUserMessageHandlersNamespace::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSUserMessageHandlersNamespace*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(USER_MESSAGE_HANDLERS)