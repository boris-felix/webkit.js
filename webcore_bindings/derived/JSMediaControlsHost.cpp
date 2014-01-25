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

#if ENABLE(MEDIA_CONTROLS_SCRIPT)

#include "JSMediaControlsHost.h"

#include "ExceptionCode.h"
#include "HTMLElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include "JSTextTrack.h"
#include "JSTextTrackList.h"
#include "MediaControlsHost.h"
#include "TextTrack.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSArray.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMediaControlsHostTableValues[] =
{
    { "captionMenuOffItem", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControlsHostCaptionMenuOffItem), (intptr_t)0 },
    { "captionMenuAutomaticItem", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControlsHostCaptionMenuAutomaticItem), (intptr_t)0 },
    { "captionDisplayMode", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControlsHostCaptionDisplayMode), (intptr_t)0 },
    { "textTrackContainer", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControlsHostTextTrackContainer), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaControlsHostTable = { 9, 7, JSMediaControlsHostTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSMediaControlsHostPrototypeTableValues[] =
{
    { "sortedTrackListForMenu", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControlsHostPrototypeFunctionSortedTrackListForMenu), (intptr_t)1 },
    { "displayNameForTrack", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControlsHostPrototypeFunctionDisplayNameForTrack), (intptr_t)1 },
    { "setSelectedTextTrack", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControlsHostPrototypeFunctionSetSelectedTextTrack), (intptr_t)1 },
    { "updateTextTrackContainer", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControlsHostPrototypeFunctionUpdateTextTrackContainer), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaControlsHostPrototypeTable = { 8, 7, JSMediaControlsHostPrototypeTableValues, 0 };
const ClassInfo JSMediaControlsHostPrototype::s_info = { "MediaControlsHostPrototype", &Base::s_info, &JSMediaControlsHostPrototypeTable, 0, CREATE_METHOD_TABLE(JSMediaControlsHostPrototype) };

JSObject* JSMediaControlsHostPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaControlsHost>(vm, globalObject);
}

bool JSMediaControlsHostPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaControlsHostPrototype* thisObject = jsCast<JSMediaControlsHostPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSMediaControlsHostPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSMediaControlsHost::s_info = { "MediaControlsHost", &Base::s_info, &JSMediaControlsHostTable, 0 , CREATE_METHOD_TABLE(JSMediaControlsHost) };

JSMediaControlsHost::JSMediaControlsHost(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaControlsHost> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMediaControlsHost::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSMediaControlsHost::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaControlsHostPrototype::create(vm, globalObject, JSMediaControlsHostPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSMediaControlsHost::destroy(JSC::JSCell* cell)
{
    JSMediaControlsHost* thisObject = static_cast<JSMediaControlsHost*>(cell);
    thisObject->JSMediaControlsHost::~JSMediaControlsHost();
}

JSMediaControlsHost::~JSMediaControlsHost()
{
    releaseImplIfNotNull();
}

bool JSMediaControlsHost::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaControlsHost* thisObject = jsCast<JSMediaControlsHost*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSMediaControlsHost, Base>(exec, JSMediaControlsHostTable, thisObject, propertyName, slot);
}

EncodedJSValue jsMediaControlsHostCaptionMenuOffItem(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSMediaControlsHost* castedThis = jsDynamicCast<JSMediaControlsHost*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    MediaControlsHost& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.captionMenuOffItem()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControlsHostCaptionMenuAutomaticItem(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSMediaControlsHost* castedThis = jsDynamicCast<JSMediaControlsHost*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    MediaControlsHost& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.captionMenuAutomaticItem()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControlsHostCaptionDisplayMode(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSMediaControlsHost* castedThis = jsDynamicCast<JSMediaControlsHost*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    MediaControlsHost& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.captionDisplayMode());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaControlsHostTextTrackContainer(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSMediaControlsHost* castedThis = jsDynamicCast<JSMediaControlsHost*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    MediaControlsHost& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.textTrackContainer()));
    return JSValue::encode(result);
}


EncodedJSValue JSC_HOST_CALL jsMediaControlsHostPrototypeFunctionSortedTrackListForMenu(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSMediaControlsHost* castedThis = jsDynamicCast<JSMediaControlsHost*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaControlsHost::info());
    MediaControlsHost& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    TextTrackList* trackList(toTextTrackList(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsArray(exec, castedThis->globalObject(), impl.sortedTrackListForMenu(trackList));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMediaControlsHostPrototypeFunctionDisplayNameForTrack(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSMediaControlsHost* castedThis = jsDynamicCast<JSMediaControlsHost*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaControlsHost::info());
    MediaControlsHost& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    TextTrack* track(toTextTrack(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringWithCache(exec, impl.displayNameForTrack(track));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMediaControlsHostPrototypeFunctionSetSelectedTextTrack(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSMediaControlsHost* castedThis = jsDynamicCast<JSMediaControlsHost*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaControlsHost::info());
    MediaControlsHost& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    TextTrack* track(toTextTrack(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.setSelectedTextTrack(track);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControlsHostPrototypeFunctionUpdateTextTrackContainer(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSMediaControlsHost* castedThis = jsDynamicCast<JSMediaControlsHost*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaControlsHost::info());
    MediaControlsHost& impl = castedThis->impl();
    impl.updateTextTrackContainer();
    return JSValue::encode(jsUndefined());
}

bool JSMediaControlsHostOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaControlsHostOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMediaControlsHost* jsMediaControlsHost = jsCast<JSMediaControlsHost*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaControlsHost->impl(), jsMediaControlsHost);
    jsMediaControlsHost->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaControlsHost* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaControlsHost>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to MediaControlsHost.
    COMPILE_ASSERT(!__is_polymorphic(MediaControlsHost), MediaControlsHost_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<MediaControlsHost>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMediaControlsHost>(exec, globalObject, impl);
}

MediaControlsHost* toMediaControlsHost(JSC::JSValue value)
{
    return value.inherits(JSMediaControlsHost::info()) ? &jsCast<JSMediaControlsHost*>(value)->impl() : 0;
}

}

#endif // ENABLE(MEDIA_CONTROLS_SCRIPT)