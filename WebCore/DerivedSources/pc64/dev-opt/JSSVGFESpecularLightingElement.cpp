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
#include "JSSVGFESpecularLightingElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFESpecularLightingElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGFESpecularLightingElementIn1(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementSurfaceScale(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementSpecularConstant(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementSpecularExponent(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementResult(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFESpecularLightingElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGFESpecularLightingElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGFESpecularLightingElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFESpecularLightingElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFESpecularLightingElementPrototype>(vm.heap)) JSSVGFESpecularLightingElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGFESpecularLightingElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGFESpecularLightingElementConstructor : public DOMConstructorObject {
private:
    JSSVGFESpecularLightingElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFESpecularLightingElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFESpecularLightingElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFESpecularLightingElementConstructor>(vm.heap)) JSSVGFESpecularLightingElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGFESpecularLightingElementConstructor::s_info = { "SVGFESpecularLightingElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFESpecularLightingElementConstructor) };

JSSVGFESpecularLightingElementConstructor::JSSVGFESpecularLightingElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFESpecularLightingElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFESpecularLightingElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGFESpecularLightingElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFESpecularLightingElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "in1", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementIn1), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "surfaceScale", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSurfaceScale), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "specularConstant", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSpecularConstant), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "specularExponent", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSpecularExponent), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "result", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementResult), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGFESpecularLightingElementPrototype::s_info = { "SVGFESpecularLightingElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFESpecularLightingElementPrototype) };

void JSSVGFESpecularLightingElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGFESpecularLightingElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGFESpecularLightingElement::s_info = { "SVGFESpecularLightingElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFESpecularLightingElement) };

JSSVGFESpecularLightingElement::JSSVGFESpecularLightingElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGFESpecularLightingElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGFESpecularLightingElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFESpecularLightingElementPrototype::create(vm, globalObject, JSSVGFESpecularLightingElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGFESpecularLightingElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFESpecularLightingElement>(vm, globalObject);
}

EncodedJSValue jsSVGFESpecularLightingElementIn1(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "in1");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "in1");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementSurfaceScale(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "surfaceScale");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "surfaceScale");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.surfaceScaleAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementSpecularConstant(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "specularConstant");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "specularConstant");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.specularConstantAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementSpecularExponent(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "specularExponent");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "specularExponent");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.specularExponentAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "x");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "x");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "y");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "y");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "width");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "width");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "height");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "height");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementResult(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFESpecularLightingElement* castedThis = jsDynamicCast<JSSVGFESpecularLightingElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFESpecularLightingElement", "result");
        return throwGetterTypeError(*exec, "SVGFESpecularLightingElement", "result");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFESpecularLightingElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGFESpecularLightingElementPrototype* domObject = jsDynamicCast<JSSVGFESpecularLightingElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFESpecularLightingElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFESpecularLightingElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFESpecularLightingElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}