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


class sipwxGestureEvent : public  ::wxGestureEvent
{
public:
    sipwxGestureEvent( ::wxWindowID, ::wxEventType);
    sipwxGestureEvent(const  ::wxGestureEvent&);
    virtual ~sipwxGestureEvent();

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
    sipwxGestureEvent(const sipwxGestureEvent &);
    sipwxGestureEvent &operator = (const sipwxGestureEvent &);

    char sipPyMethods[2];
};

sipwxGestureEvent::sipwxGestureEvent( ::wxWindowID winid, ::wxEventType type):  ::wxGestureEvent(winid,type), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGestureEvent::sipwxGestureEvent(const  ::wxGestureEvent& a0):  ::wxGestureEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGestureEvent::~sipwxGestureEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxGestureEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxGestureEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxGestureEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxGestureEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxGestureEvent_GetPosition, "GetPosition() -> Point\n"
"\n"
"Returns the position where the event took effect, in client\n"
"coordinates: position of Pan event, center of zoom for Zoom event,\n"
"center of rotation for Rotate event, center of box formed by 2 fingers\n"
"for Two Finger Tap event and position of the pressed finger for Press\n"
"and Tap Event.");

extern "C" {static PyObject *meth_wxGestureEvent_GetPosition(PyObject *, PyObject *);}
static PyObject *meth_wxGestureEvent_GetPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGestureEvent, &sipCpp))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint(sipCpp->GetPosition());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GestureEvent, sipName_GetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGestureEvent_IsGestureStart, "IsGestureStart() -> bool\n"
"\n"
"Returns true if the event was the first in a gesture sequence.");

extern "C" {static PyObject *meth_wxGestureEvent_IsGestureStart(PyObject *, PyObject *);}
static PyObject *meth_wxGestureEvent_IsGestureStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGestureEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsGestureStart();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GestureEvent, sipName_IsGestureStart, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGestureEvent_IsGestureEnd, "IsGestureEnd() -> bool\n"
"\n"
"Returns true if the event was the last in a gesture sequence.");

extern "C" {static PyObject *meth_wxGestureEvent_IsGestureEnd(PyObject *, PyObject *);}
static PyObject *meth_wxGestureEvent_IsGestureEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGestureEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsGestureEnd();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GestureEvent, sipName_IsGestureEnd, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGestureEvent_SetPosition, "SetPosition(pos)\n"
"\n"
"Sets the position where the event took effect, in client coordinates:\n"
"position of Pan event, center of zoom for Zoom event, center of\n"
"rotation for Rotate event.");

extern "C" {static PyObject *meth_wxGestureEvent_SetPosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGestureEvent_SetPosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPoint* pos;
        int posState = 0;
         ::wxGestureEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pos,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxGestureEvent, &sipCpp, sipType_wxPoint, &pos, &posState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetPosition(*pos);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pos),sipType_wxPoint,posState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GestureEvent, sipName_SetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGestureEvent_SetGestureStart, "SetGestureStart(isStart=True)\n"
"\n"
"Sets the event to be the first in a gesture sequence.");

extern "C" {static PyObject *meth_wxGestureEvent_SetGestureStart(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGestureEvent_SetGestureStart(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool isStart = 1;
         ::wxGestureEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_isStart,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|b", &sipSelf, sipType_wxGestureEvent, &sipCpp, &isStart))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetGestureStart(isStart);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GestureEvent, sipName_SetGestureStart, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGestureEvent_SetGestureEnd, "SetGestureEnd(isEnd=True)\n"
"\n"
"Sets the event to be the last in a gesture sequence.");

extern "C" {static PyObject *meth_wxGestureEvent_SetGestureEnd(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGestureEvent_SetGestureEnd(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool isEnd = 1;
         ::wxGestureEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_isEnd,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|b", &sipSelf, sipType_wxGestureEvent, &sipCpp, &isEnd))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetGestureEnd(isEnd);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GestureEvent, sipName_SetGestureEnd, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGestureEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxGestureEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxGestureEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGestureEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGestureEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GestureEvent, sipName_Clone, doc_wxGestureEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGestureEvent(void *, const sipTypeDef *);}
static void *cast_wxGestureEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGestureEvent *sipCpp = reinterpret_cast< ::wxGestureEvent *>(sipCppV);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGestureEvent(void *, int);}
static void release_wxGestureEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxGestureEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxGestureEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGestureEvent(sipSimpleWrapper *);}
static void dealloc_wxGestureEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxGestureEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGestureEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxGestureEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGestureEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxGestureEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxWindowID winid = 0;
         ::wxEventType type = wxEVT_NULL;

        static const char *sipKwdList[] = {
            sipName_winid,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &winid, &type))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGestureEvent(winid,type);
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
        const  ::wxGestureEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGestureEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGestureEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxGestureEvent[] = {{147, 255, 1}};


static PyMethodDef methods_wxGestureEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxGestureEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGestureEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetPosition), meth_wxGestureEvent_GetPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGestureEvent_GetPosition)},
    {SIP_MLNAME_CAST(sipName_IsGestureEnd), meth_wxGestureEvent_IsGestureEnd, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGestureEvent_IsGestureEnd)},
    {SIP_MLNAME_CAST(sipName_IsGestureStart), meth_wxGestureEvent_IsGestureStart, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGestureEvent_IsGestureStart)},
    {SIP_MLNAME_CAST(sipName_SetGestureEnd), SIP_MLMETH_CAST(meth_wxGestureEvent_SetGestureEnd), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGestureEvent_SetGestureEnd)},
    {SIP_MLNAME_CAST(sipName_SetGestureStart), SIP_MLMETH_CAST(meth_wxGestureEvent_SetGestureStart), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGestureEvent_SetGestureStart)},
    {SIP_MLNAME_CAST(sipName_SetPosition), SIP_MLMETH_CAST(meth_wxGestureEvent_SetPosition), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGestureEvent_SetPosition)}
};

sipVariableDef variables_wxGestureEvent[] = {
    {PropertyVariable, sipName_Position, &methods_wxGestureEvent[1], &methods_wxGestureEvent[6], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxGestureEvent, "GestureEvent(winid=0, type=wxEVT_NULL)\n"
"\n"
"This is the base class for all supported gesture events.");


sipClassTypeDef sipTypeDef__core_wxGestureEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxGestureEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GestureEvent,
        {0, 0, 1},
        7, methods_wxGestureEvent,
        0, SIP_NULLPTR,
        1, variables_wxGestureEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGestureEvent,
    -1,
    -1,
    supers_wxGestureEvent,
    SIP_NULLPTR,
    init_type_wxGestureEvent,
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
    dealloc_wxGestureEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGestureEvent,
    cast_wxGestureEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
