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
#include "JSSVGLinearGradientElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedLength.h"
#include "SVGLinearGradientElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGLinearGradientElementX1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGLinearGradientElementY1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGLinearGradientElementX2(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGLinearGradientElementY2(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGLinearGradientElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGLinearGradientElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGLinearGradientElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGLinearGradientElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGLinearGradientElementPrototype>(vm.heap)) JSSVGLinearGradientElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGLinearGradientElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGLinearGradientElementConstructor : public DOMConstructorObject {
private:
    JSSVGLinearGradientElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGLinearGradientElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGLinearGradientElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGLinearGradientElementConstructor>(vm.heap)) JSSVGLinearGradientElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGLinearGradientElementConstructor::s_info = { "SVGLinearGradientElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGLinearGradientElementConstructor) };

JSSVGLinearGradientElementConstructor::JSSVGLinearGradientElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGLinearGradientElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGLinearGradientElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGLinearGradientElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGLinearGradientElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x1", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementX1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y1", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementY1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x2", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementX2), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y2", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementY2), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGLinearGradientElementPrototype::s_info = { "SVGLinearGradientElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGLinearGradientElementPrototype) };

void JSSVGLinearGradientElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGLinearGradientElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGLinearGradientElement::s_info = { "SVGLinearGradientElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGLinearGradientElement) };

JSSVGLinearGradientElement::JSSVGLinearGradientElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGLinearGradientElement>&& impl)
    : JSSVGGradientElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGLinearGradientElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGLinearGradientElementPrototype::create(vm, globalObject, JSSVGLinearGradientElementPrototype::createStructure(vm, globalObject, JSSVGGradientElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGLinearGradientElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLinearGradientElement>(vm, globalObject);
}

EncodedJSValue jsSVGLinearGradientElementX1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGLinearGradientElement* castedThis = jsDynamicCast<JSSVGLinearGradientElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGLinearGradientElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGLinearGradientElement", "x1");
        return throwGetterTypeError(*exec, "SVGLinearGradientElement", "x1");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.x1Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGLinearGradientElementY1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGLinearGradientElement* castedThis = jsDynamicCast<JSSVGLinearGradientElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGLinearGradientElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGLinearGradientElement", "y1");
        return throwGetterTypeError(*exec, "SVGLinearGradientElement", "y1");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.y1Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGLinearGradientElementX2(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGLinearGradientElement* castedThis = jsDynamicCast<JSSVGLinearGradientElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGLinearGradientElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGLinearGradientElement", "x2");
        return throwGetterTypeError(*exec, "SVGLinearGradientElement", "x2");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.x2Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGLinearGradientElementY2(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGLinearGradientElement* castedThis = jsDynamicCast<JSSVGLinearGradientElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGLinearGradientElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGLinearGradientElement", "y2");
        return throwGetterTypeError(*exec, "SVGLinearGradientElement", "y2");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.y2Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGLinearGradientElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGLinearGradientElementPrototype* domObject = jsDynamicCast<JSSVGLinearGradientElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGLinearGradientElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGLinearGradientElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGLinearGradientElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}