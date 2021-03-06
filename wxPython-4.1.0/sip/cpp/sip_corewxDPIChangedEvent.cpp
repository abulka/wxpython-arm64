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


class sipwxDPIChangedEvent : public  ::wxDPIChangedEvent
{
public:
    sipwxDPIChangedEvent();
    sipwxDPIChangedEvent(const  ::wxDPIChangedEvent&);
    virtual ~sipwxDPIChangedEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxEvent* Clone() const SIP_OVERRIDE;
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxDPIChangedEvent(const sipwxDPIChangedEvent &);
    sipwxDPIChangedEvent &operator = (const sipwxDPIChangedEvent &);

    char sipPyMethods[2];
};

sipwxDPIChangedEvent::sipwxDPIChangedEvent():  ::wxDPIChangedEvent(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDPIChangedEvent::sipwxDPIChangedEvent(const  ::wxDPIChangedEvent& a0):  ::wxDPIChangedEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDPIChangedEvent::~sipwxDPIChangedEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxDPIChangedEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxDPIChangedEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxDPIChangedEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxDPIChangedEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxDPIChangedEvent_GetOldDPI, "GetOldDPI() -> Size\n"
"\n"
"Returns the old DPI.");

extern "C" {static PyObject *meth_wxDPIChangedEvent_GetOldDPI(PyObject *, PyObject *);}
static PyObject *meth_wxDPIChangedEvent_GetOldDPI(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDPIChangedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDPIChangedEvent, &sipCpp))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize(sipCpp->GetOldDPI());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DPIChangedEvent, sipName_GetOldDPI, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDPIChangedEvent_GetNewDPI, "GetNewDPI() -> Size\n"
"\n"
"Returns the new DPI.");

extern "C" {static PyObject *meth_wxDPIChangedEvent_GetNewDPI(PyObject *, PyObject *);}
static PyObject *meth_wxDPIChangedEvent_GetNewDPI(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDPIChangedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDPIChangedEvent, &sipCpp))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize(sipCpp->GetNewDPI());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DPIChangedEvent, sipName_GetNewDPI, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDPIChangedEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxDPIChangedEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxDPIChangedEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxDPIChangedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDPIChangedEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDPIChangedEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DPIChangedEvent, sipName_Clone, doc_wxDPIChangedEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxDPIChangedEvent(void *, const sipTypeDef *);}
static void *cast_wxDPIChangedEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxDPIChangedEvent *sipCpp = reinterpret_cast< ::wxDPIChangedEvent *>(sipCppV);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDPIChangedEvent(void *, int);}
static void release_wxDPIChangedEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxDPIChangedEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxDPIChangedEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDPIChangedEvent(sipSimpleWrapper *);}
static void dealloc_wxDPIChangedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxDPIChangedEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDPIChangedEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxDPIChangedEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDPIChangedEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxDPIChangedEvent *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxDPIChangedEvent();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxDPIChangedEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxDPIChangedEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxDPIChangedEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxDPIChangedEvent[] = {{147, 255, 1}};


static PyMethodDef methods_wxDPIChangedEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxDPIChangedEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDPIChangedEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetNewDPI), meth_wxDPIChangedEvent_GetNewDPI, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDPIChangedEvent_GetNewDPI)},
    {SIP_MLNAME_CAST(sipName_GetOldDPI), meth_wxDPIChangedEvent_GetOldDPI, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDPIChangedEvent_GetOldDPI)}
};

sipVariableDef variables_wxDPIChangedEvent[] = {
    {PropertyVariable, sipName_OldDPI, &methods_wxDPIChangedEvent[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_NewDPI, &methods_wxDPIChangedEvent[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxDPIChangedEvent, "Event sent when the display scale factor or pixel density (measured in\n"
"dots-per-inch, or DPI) of the monitor a window is on changes.");


sipClassTypeDef sipTypeDef__core_wxDPIChangedEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxDPIChangedEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_DPIChangedEvent,
        {0, 0, 1},
        3, methods_wxDPIChangedEvent,
        0, SIP_NULLPTR,
        2, variables_wxDPIChangedEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDPIChangedEvent,
    -1,
    -1,
    supers_wxDPIChangedEvent,
    SIP_NULLPTR,
    init_type_wxDPIChangedEvent,
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
    dealloc_wxDPIChangedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDPIChangedEvent,
    cast_wxDPIChangedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
