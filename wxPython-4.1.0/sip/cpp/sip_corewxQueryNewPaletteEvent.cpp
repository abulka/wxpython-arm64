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
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxQueryNewPaletteEvent : public  ::wxQueryNewPaletteEvent
{
public:
    sipwxQueryNewPaletteEvent( ::wxWindowID);
    sipwxQueryNewPaletteEvent(const  ::wxQueryNewPaletteEvent&);
    virtual ~sipwxQueryNewPaletteEvent();

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
    sipwxQueryNewPaletteEvent(const sipwxQueryNewPaletteEvent &);
    sipwxQueryNewPaletteEvent &operator = (const sipwxQueryNewPaletteEvent &);

    char sipPyMethods[2];
};

sipwxQueryNewPaletteEvent::sipwxQueryNewPaletteEvent( ::wxWindowID winid):  ::wxQueryNewPaletteEvent(winid), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxQueryNewPaletteEvent::sipwxQueryNewPaletteEvent(const  ::wxQueryNewPaletteEvent& a0):  ::wxQueryNewPaletteEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxQueryNewPaletteEvent::~sipwxQueryNewPaletteEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxQueryNewPaletteEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxQueryNewPaletteEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxQueryNewPaletteEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxQueryNewPaletteEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxQueryNewPaletteEvent_SetPaletteRealized, "SetPaletteRealized(realized)");

extern "C" {static PyObject *meth_wxQueryNewPaletteEvent_SetPaletteRealized(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxQueryNewPaletteEvent_SetPaletteRealized(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool realized;
         ::wxQueryNewPaletteEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_realized,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxQueryNewPaletteEvent, &sipCpp, &realized))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetPaletteRealized(realized);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QueryNewPaletteEvent, sipName_SetPaletteRealized, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxQueryNewPaletteEvent_GetPaletteRealized, "GetPaletteRealized() -> bool");

extern "C" {static PyObject *meth_wxQueryNewPaletteEvent_GetPaletteRealized(PyObject *, PyObject *);}
static PyObject *meth_wxQueryNewPaletteEvent_GetPaletteRealized(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxQueryNewPaletteEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxQueryNewPaletteEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPaletteRealized();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QueryNewPaletteEvent, sipName_GetPaletteRealized, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxQueryNewPaletteEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxQueryNewPaletteEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxQueryNewPaletteEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxQueryNewPaletteEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxQueryNewPaletteEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxQueryNewPaletteEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QueryNewPaletteEvent, sipName_Clone, doc_wxQueryNewPaletteEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxQueryNewPaletteEvent(void *, const sipTypeDef *);}
static void *cast_wxQueryNewPaletteEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxQueryNewPaletteEvent *sipCpp = reinterpret_cast< ::wxQueryNewPaletteEvent *>(sipCppV);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxQueryNewPaletteEvent(void *, int);}
static void release_wxQueryNewPaletteEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxQueryNewPaletteEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxQueryNewPaletteEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxQueryNewPaletteEvent(sipSimpleWrapper *);}
static void dealloc_wxQueryNewPaletteEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxQueryNewPaletteEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxQueryNewPaletteEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxQueryNewPaletteEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxQueryNewPaletteEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxQueryNewPaletteEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxWindowID winid = 0;

        static const char *sipKwdList[] = {
            sipName_winid,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|i", &winid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxQueryNewPaletteEvent(winid);
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
        const  ::wxQueryNewPaletteEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxQueryNewPaletteEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxQueryNewPaletteEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxQueryNewPaletteEvent[] = {{147, 255, 1}};


static PyMethodDef methods_wxQueryNewPaletteEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxQueryNewPaletteEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxQueryNewPaletteEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetPaletteRealized), meth_wxQueryNewPaletteEvent_GetPaletteRealized, METH_VARARGS, SIP_MLDOC_CAST(doc_wxQueryNewPaletteEvent_GetPaletteRealized)},
    {SIP_MLNAME_CAST(sipName_SetPaletteRealized), SIP_MLMETH_CAST(meth_wxQueryNewPaletteEvent_SetPaletteRealized), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxQueryNewPaletteEvent_SetPaletteRealized)}
};

sipVariableDef variables_wxQueryNewPaletteEvent[] = {
    {PropertyVariable, sipName_PaletteRealized, &methods_wxQueryNewPaletteEvent[1], &methods_wxQueryNewPaletteEvent[2], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxQueryNewPaletteEvent, "QueryNewPaletteEvent(winid=0)");


sipClassTypeDef sipTypeDef__core_wxQueryNewPaletteEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxQueryNewPaletteEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_QueryNewPaletteEvent,
        {0, 0, 1},
        3, methods_wxQueryNewPaletteEvent,
        0, SIP_NULLPTR,
        1, variables_wxQueryNewPaletteEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxQueryNewPaletteEvent,
    -1,
    -1,
    supers_wxQueryNewPaletteEvent,
    SIP_NULLPTR,
    init_type_wxQueryNewPaletteEvent,
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
    dealloc_wxQueryNewPaletteEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxQueryNewPaletteEvent,
    cast_wxQueryNewPaletteEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
