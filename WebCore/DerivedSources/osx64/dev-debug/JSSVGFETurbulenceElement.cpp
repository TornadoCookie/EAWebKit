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
#include "JSSVGFETurbulenceElement.h"

#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFETurbulenceElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGFETurbulenceElementBaseFrequencyX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementBaseFrequencyY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementNumOctaves(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementSeed(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementStitchTiles(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementResult(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsSVGFETurbulenceElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGFETurbulenceElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGFETurbulenceElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGFETurbulenceElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGFETurbulenceElementPrototype>(vm.heap)) JSSVGFETurbulenceElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGFETurbulenceElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGFETurbulenceElementConstructor : public DOMConstructorObject {
private:
    JSSVGFETurbulenceElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFETurbulenceElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFETurbulenceElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGFETurbulenceElementConstructor>(vm.heap)) JSSVGFETurbulenceElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table for constructor */

static const HashTableValue JSSVGFETurbulenceElementConstructorTableValues[] =
{
    { "SVG_TURBULENCE_TYPE_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_TURBULENCE_TYPE_FRACTALNOISE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_TURBULENCE_TYPE_TURBULENCE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "SVG_STITCHTYPE_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_STITCHTYPE_STITCH", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_STITCHTYPE_NOSTITCH", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
};

const ClassInfo JSSVGFETurbulenceElementConstructor::s_info = { "SVGFETurbulenceElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFETurbulenceElementConstructor) };

JSSVGFETurbulenceElementConstructor::JSSVGFETurbulenceElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFETurbulenceElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFETurbulenceElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGFETurbulenceElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSSVGFETurbulenceElementConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFETurbulenceElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "baseFrequencyX", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementBaseFrequencyX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "baseFrequencyY", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementBaseFrequencyY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "numOctaves", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementNumOctaves), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "seed", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementSeed), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "stitchTiles", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementStitchTiles), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "type", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "y", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "height", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "result", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFETurbulenceElementResult), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "SVG_TURBULENCE_TYPE_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_TURBULENCE_TYPE_FRACTALNOISE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_TURBULENCE_TYPE_TURBULENCE", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "SVG_STITCHTYPE_UNKNOWN", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "SVG_STITCHTYPE_STITCH", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "SVG_STITCHTYPE_NOSTITCH", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
};

const ClassInfo JSSVGFETurbulenceElementPrototype::s_info = { "SVGFETurbulenceElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFETurbulenceElementPrototype) };

void JSSVGFETurbulenceElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGFETurbulenceElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGFETurbulenceElement::s_info = { "SVGFETurbulenceElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGFETurbulenceElement) };

JSSVGFETurbulenceElement::JSSVGFETurbulenceElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGFETurbulenceElement>&& impl)
    : JSSVGElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGFETurbulenceElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFETurbulenceElementPrototype::create(vm, globalObject, JSSVGFETurbulenceElementPrototype::createStructure(vm, globalObject, JSSVGElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGFETurbulenceElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFETurbulenceElement>(vm, globalObject);
}

EncodedJSValue jsSVGFETurbulenceElementBaseFrequencyX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "baseFrequencyX");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "baseFrequencyX");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.baseFrequencyXAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementBaseFrequencyY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "baseFrequencyY");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "baseFrequencyY");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.baseFrequencyYAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementNumOctaves(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "numOctaves");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "numOctaves");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedInteger> obj = impl.numOctavesAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementSeed(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "seed");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "seed");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.seedAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementStitchTiles(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "stitchTiles");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "stitchTiles");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.stitchTilesAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "type");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "type");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.typeAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "x");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "x");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "y");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "y");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "width");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "width");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "height");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "height");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementResult(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGFETurbulenceElement* castedThis = jsDynamicCast<JSSVGFETurbulenceElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGFETurbulenceElement", "result");
        return throwGetterTypeError(*exec, "SVGFETurbulenceElement", "result");
    }
    auto& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result = toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFETurbulenceElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGFETurbulenceElementPrototype* domObject = jsDynamicCast<JSSVGFETurbulenceElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFETurbulenceElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFETurbulenceElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFETurbulenceElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}