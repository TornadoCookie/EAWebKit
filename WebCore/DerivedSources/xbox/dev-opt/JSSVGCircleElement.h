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

#ifndef JSSVGCircleElement_h
#define JSSVGCircleElement_h

#include "JSSVGGraphicsElement.h"
#include "SVGCircleElement.h"
#include "SVGElement.h"

namespace WebCore {

class JSSVGCircleElement : public JSSVGGraphicsElement {
public:
    typedef JSSVGGraphicsElement Base;
    static JSSVGCircleElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGCircleElement>&& impl)
    {
        JSSVGCircleElement* ptr = new (NotNull, JSC::allocateCell<JSSVGCircleElement>(globalObject->vm().heap)) JSSVGCircleElement(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::JSType(JSElementType), StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    SVGCircleElement& impl() const
    {
        return static_cast<SVGCircleElement&>(Base::impl());
    }
protected:
    JSSVGCircleElement(JSC::Structure*, JSDOMGlobalObject*, Ref<SVGCircleElement>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};



} // namespace WebCore

#endif