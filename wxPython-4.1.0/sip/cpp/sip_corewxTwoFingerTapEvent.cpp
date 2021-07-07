/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/event.h>

        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxTwoFingerTapEvent : public  ::wxTwoFingerTapEvent
{
public:
    sipwxTwoFingerTapEvent( ::wxWindowID);
    sipwxTwoFingerTapEvent(const  ::wxTwoFingerTapEvent&);
    virtual ~sipwxTwoFingerTapEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;
     ::wxEvent* Clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxTwoFingerTapEvent(const sipwxTwoFingerTapEvent &);
    sipwxTwoFingerTapEvent &operator = (const sipwxTwoFingerTapEvent &);

    char sipPyMethods[2];
};

sipwxTwoFingerTapEvent::sipwxTwoFingerTapEvent( ::wxWindowID windid):  ::wxTwoFingerTapEvent(windid), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxTwoFingerTapEvent::sipwxTwoFingerTapEvent(const  ::wxTwoFingerTapEvent& a0):  ::wxTwoFingerTapEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxTwoFingerTapEvent::~sipwxTwoFingerTapEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxTwoFingerTapEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxTwoFingerTapEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxTwoFingerTapEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxTwoFingerTapEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxTwoFingerTapEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxTwoFingerTapEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxTwoFingerTapEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxTwoFingerTapEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTwoFingerTapEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTwoFingerTapEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TwoFingerTapEvent, sipName_Clone, doc_wxTwoFingerTapEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxTwoFingerTapEvent(void *, const sipTypeDef *);}
static void *cast_wxTwoFingerTapEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxTwoFingerTapEvent *sipCpp = reinterpret_cast< ::wxTwoFingerTapEvent *>(sipCppV);

    if (targetType == sipType_wxGestureEvent)
        return static_cast< ::wxGestureEvent *>(sipCpp);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTwoFingerTapEvent(void *, int);}
static void release_wxTwoFingerTapEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxTwoFingerTapEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxTwoFingerTapEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxTwoFingerTapEvent(sipSimpleWrapper *);}
static void dealloc_wxTwoFingerTapEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxTwoFingerTapEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTwoFingerTapEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxTwoFingerTapEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTwoFingerTapEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxTwoFingerTapEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxWindowID windid = 0;

        static const char *sipKwdList[] = {
            sipName_windid,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|i", &windid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxTwoFingerTapEvent(windid);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxTwoFingerTapEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxTwoFingerTapEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxTwoFingerTapEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxTwoFingerTapEvent[] = {{220, 255, 1}};


static PyMethodDef methods_wxTwoFingerTapEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxTwoFingerTapEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTwoFingerTapEvent_Clone)}
};

PyDoc_STRVAR(doc_wxTwoFingerTapEvent, "TwoFingerTapEvent(windid=0)\n"
"\n"
"This event is generated when two fingers touch the surface at the same\n"
"time.");


sipClassTypeDef sipTypeDef__core_wxTwoFingerTapEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxTwoFingerTapEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_TwoFingerTapEvent,
        {0, 0, 1},
        1, methods_wxTwoFingerTapEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTwoFingerTapEvent,
    -1,
    -1,
    supers_wxTwoFingerTapEvent,
    SIP_NULLPTR,
    init_type_wxTwoFingerTapEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxTwoFingerTapEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxTwoFingerTapEvent,
    cast_wxTwoFingerTapEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
