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
#include "JSSVGAnimatedInteger.h"

#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGAnimatedIntegerBaseVal(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGAnimatedIntegerBaseVal(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGAnimatedIntegerAnimVal(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGAnimatedIntegerConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGAnimatedIntegerPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGAnimatedIntegerPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGAnimatedIntegerPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGAnimatedIntegerPrototype>(vm.heap)) JSSVGAnimatedIntegerPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGAnimatedIntegerPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGAnimatedIntegerConstructor : public DOMConstructorObject {
private:
    JSSVGAnimatedIntegerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGAnimatedIntegerConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGAnimatedIntegerConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGAnimatedIntegerConstructor>(vm.heap)) JSSVGAnimatedIntegerConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGAnimatedIntegerConstructor::s_info = { "SVGAnimatedIntegerConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimatedIntegerConstructor) };

JSSVGAnimatedIntegerConstructor::JSSVGAnimatedIntegerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimatedIntegerConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGAnimatedInteger::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGAnimatedInteger"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimatedIntegerPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedIntegerConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "baseVal", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedIntegerBaseVal), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGAnimatedIntegerBaseVal) },
    { "animVal", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedIntegerAnimVal), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGAnimatedIntegerPrototype::s_info = { "SVGAnimatedIntegerPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimatedIntegerPrototype) };

void JSSVGAnimatedIntegerPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGAnimatedIntegerPrototypeTableValues, *this);
}

const ClassInfo JSSVGAnimatedInteger::s_info = { "SVGAnimatedInteger", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGAnimatedInteger) };

JSSVGAnimatedInteger::JSSVGAnimatedInteger(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGAnimatedInteger>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSSVGAnimatedInteger::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGAnimatedIntegerPrototype::create(vm, globalObject, JSSVGAnimatedIntegerPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSSVGAnimatedInteger::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedInteger>(vm, globalObject);
}

void JSSVGAnimatedInteger::destroy(JSC::JSCell* cell)
{
    JSSVGAnimatedInteger* thisObject = static_cast<JSSVGAnimatedInteger*>(cell);
    thisObject->JSSVGAnimatedInteger::~JSSVGAnimatedInteger();
}

JSSVGAnimatedInteger::~JSSVGAnimatedInteger()
{
    releaseImpl();
}

EncodedJSValue jsSVGAnimatedIntegerBaseVal(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGAnimatedInteger* castedThis = jsDynamicCast<JSSVGAnimatedInteger*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGAnimatedIntegerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGAnimatedInteger", "baseVal");
        return throwGetterTypeError(*exec, "SVGAnimatedInteger", "baseVal");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.baseVal());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGAnimatedIntegerAnimVal(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGAnimatedInteger* castedThis = jsDynamicCast<JSSVGAnimatedInteger*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGAnimatedIntegerPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGAnimatedInteger", "animVal");
        return throwGetterTypeError(*exec, "SVGAnimatedInteger", "animVal");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.animVal());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGAnimatedIntegerConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGAnimatedIntegerPrototype* domObject = jsDynamicCast<JSSVGAnimatedIntegerPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGAnimatedInteger::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGAnimatedIntegerBaseVal(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGAnimatedInteger* castedThis = jsDynamicCast<JSSVGAnimatedInteger*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGAnimatedIntegerPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGAnimatedInteger", "baseVal");
        else
            throwSetterTypeError(*exec, "SVGAnimatedInteger", "baseVal");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int nativeValue = toInt32(exec, value, NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBaseVal(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSSVGAnimatedInteger::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedIntegerConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSSVGAnimatedIntegerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGAnimatedIntegerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsSVGAnimatedInteger = jsCast<JSSVGAnimatedInteger*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGAnimatedInteger->impl(), jsSVGAnimatedInteger);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, SVGAnimatedInteger* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGAnimatedInteger>(globalObject, impl))
        return result;
    return createNewWrapper<JSSVGAnimatedInteger>(globalObject, impl);
}

SVGAnimatedInteger* JSSVGAnimatedInteger::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSSVGAnimatedInteger*>(value))
        return &wrapper->impl();
    return nullptr;
}

}