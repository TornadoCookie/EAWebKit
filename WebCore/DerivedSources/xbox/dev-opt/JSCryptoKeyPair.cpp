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

#if ENABLE(SUBTLE_CRYPTO)

#include "JSCryptoKeyPair.h"

#include "CryptoKey.h"
#include "CryptoKeyPair.h"
#include "JSCryptoKey.h"
#include "JSDOMBinding.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsCryptoKeyPairPublicKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsCryptoKeyPairPrivateKey(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSCryptoKeyPairPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSCryptoKeyPairPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCryptoKeyPairPrototype* ptr = new (NotNull, JSC::allocateCell<JSCryptoKeyPairPrototype>(vm.heap)) JSCryptoKeyPairPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSCryptoKeyPairPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSCryptoKeyPairPrototypeTableValues[] =
{
    { "publicKey", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCryptoKeyPairPublicKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "privateKey", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCryptoKeyPairPrivateKey), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSCryptoKeyPairPrototype::s_info = { "KeyPairPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCryptoKeyPairPrototype) };

void JSCryptoKeyPairPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSCryptoKeyPairPrototypeTableValues, *this);
}

const ClassInfo JSCryptoKeyPair::s_info = { "KeyPair", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCryptoKeyPair) };

JSCryptoKeyPair::JSCryptoKeyPair(Structure* structure, JSDOMGlobalObject* globalObject, Ref<CryptoKeyPair>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSCryptoKeyPair::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSCryptoKeyPairPrototype::create(vm, globalObject, JSCryptoKeyPairPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSCryptoKeyPair::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCryptoKeyPair>(vm, globalObject);
}

void JSCryptoKeyPair::destroy(JSC::JSCell* cell)
{
    JSCryptoKeyPair* thisObject = static_cast<JSCryptoKeyPair*>(cell);
    thisObject->JSCryptoKeyPair::~JSCryptoKeyPair();
}

JSCryptoKeyPair::~JSCryptoKeyPair()
{
    releaseImpl();
}

EncodedJSValue jsCryptoKeyPairPublicKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSCryptoKeyPair* castedThis = jsDynamicCast<JSCryptoKeyPair*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSCryptoKeyPairPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "CryptoKeyPair", "publicKey");
        return throwGetterTypeError(*exec, "CryptoKeyPair", "publicKey");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.publicKey()));
    return JSValue::encode(result);
}


EncodedJSValue jsCryptoKeyPairPrivateKey(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSCryptoKeyPair* castedThis = jsDynamicCast<JSCryptoKeyPair*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSCryptoKeyPairPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "CryptoKeyPair", "privateKey");
        return throwGetterTypeError(*exec, "CryptoKeyPair", "privateKey");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.privateKey()));
    return JSValue::encode(result);
}


void JSCryptoKeyPair::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    auto* thisObject = jsCast<JSCryptoKeyPair*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->visitAdditionalChildren(visitor);
}

bool JSCryptoKeyPairOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSCryptoKeyPairOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsCryptoKeyPair = jsCast<JSCryptoKeyPair*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsCryptoKeyPair->impl(), jsCryptoKeyPair);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, CryptoKeyPair* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSCryptoKeyPair>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to CryptoKeyPair.
    COMPILE_ASSERT(!__is_polymorphic(CryptoKeyPair), CryptoKeyPair_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSCryptoKeyPair>(globalObject, impl);
}

CryptoKeyPair* JSCryptoKeyPair::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSCryptoKeyPair*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(SUBTLE_CRYPTO)