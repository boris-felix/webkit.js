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
#include "JSDOMFormData.h"

#include "DOMFormData.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMFormDataTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMFormDataConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDOMFormDataTable = { 2, 1, JSDOMFormDataTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDOMFormDataConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDOMFormDataConstructorTable = { 1, 0, JSDOMFormDataConstructorTableValues, 0 };
const ClassInfo JSDOMFormDataConstructor::s_info = { "FormDataConstructor", &Base::s_info, &JSDOMFormDataConstructorTable, 0, CREATE_METHOD_TABLE(JSDOMFormDataConstructor) };

JSDOMFormDataConstructor::JSDOMFormDataConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMFormDataConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSDOMFormDataPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDOMFormDataConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMFormDataConstructor, JSDOMWrapper>(exec, JSDOMFormDataConstructorTable, jsCast<JSDOMFormDataConstructor*>(object), propertyName, slot);
}

ConstructType JSDOMFormDataConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSDOMFormData;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSDOMFormDataPrototypeTableValues[] =
{
    { "append", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMFormDataPrototypeFunctionAppend), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDOMFormDataPrototypeTable = { 2, 1, JSDOMFormDataPrototypeTableValues, 0 };
const ClassInfo JSDOMFormDataPrototype::s_info = { "FormDataPrototype", &Base::s_info, &JSDOMFormDataPrototypeTable, 0, CREATE_METHOD_TABLE(JSDOMFormDataPrototype) };

JSObject* JSDOMFormDataPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMFormData>(vm, globalObject);
}

bool JSDOMFormDataPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMFormDataPrototype* thisObject = jsCast<JSDOMFormDataPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSDOMFormDataPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSDOMFormData::s_info = { "FormData", &Base::s_info, &JSDOMFormDataTable, 0 , CREATE_METHOD_TABLE(JSDOMFormData) };

JSDOMFormData::JSDOMFormData(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMFormData> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDOMFormData::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSDOMFormData::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDOMFormDataPrototype::create(vm, globalObject, JSDOMFormDataPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSDOMFormData::destroy(JSC::JSCell* cell)
{
    JSDOMFormData* thisObject = static_cast<JSDOMFormData*>(cell);
    thisObject->JSDOMFormData::~JSDOMFormData();
}

JSDOMFormData::~JSDOMFormData()
{
    releaseImplIfNotNull();
}

bool JSDOMFormData::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMFormData* thisObject = jsCast<JSDOMFormData*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSDOMFormData, Base>(exec, JSDOMFormDataTable, thisObject, propertyName, slot);
}

EncodedJSValue jsDOMFormDataConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSDOMFormData* domObject = jsDynamicCast<JSDOMFormData*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSDOMFormData::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSDOMFormData::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMFormDataConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMFormDataPrototypeFunctionAppend(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSDOMFormData* castedThis = jsDynamicCast<JSDOMFormData*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMFormData::info());
    return JSValue::encode(castedThis->append(exec));
}

bool JSDOMFormDataOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMFormDataOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMFormData* jsDOMFormData = jsCast<JSDOMFormData*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDOMFormData->impl(), jsDOMFormData);
    jsDOMFormData->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMFormData* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMFormData>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DOMFormData.
    COMPILE_ASSERT(!__is_polymorphic(DOMFormData), DOMFormData_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<DOMFormData>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDOMFormData>(exec, globalObject, impl);
}

DOMFormData* toDOMFormData(JSC::JSValue value)
{
    return value.inherits(JSDOMFormData::info()) ? &jsCast<JSDOMFormData*>(value)->impl() : 0;
}

}