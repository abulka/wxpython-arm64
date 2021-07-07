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


class sipwxCloseEvent : public  ::wxCloseEvent
{
public:
    sipwxCloseEvent( ::wxEventType,int);
    sipwxCloseEvent(const  ::wxCloseEvent&);
    virtual ~sipwxCloseEvent();

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
    sipwxCloseEvent(const sipwxCloseEvent &);
    sipwxCloseEvent &operator = (const sipwxCloseEvent &);

    char sipPyMethods[2];
};

sipwxCloseEvent::sipwxCloseEvent( ::wxEventType commandEventType,int id):  ::wxCloseEvent(commandEventType,id), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCloseEvent::sipwxCloseEvent(const  ::wxCloseEvent& a0):  ::wxCloseEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCloseEvent::~sipwxCloseEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxCloseEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxCloseEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxCloseEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxCloseEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxCloseEvent_CanVeto, "CanVeto() -> bool\n"
"\n"
"Returns true if you can veto a system shutdown or a window close\n"
"event.");

extern "C" {static PyObject *meth_wxCloseEvent_CanVeto(PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_CanVeto(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCloseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCloseEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CanVeto();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_CanVeto, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCloseEvent_GetLoggingOff, "GetLoggingOff() -> bool\n"
"\n"
"Returns true if the user is just logging off or false if the system is\n"
"shutting down.");

extern "C" {static PyObject *meth_wxCloseEvent_GetLoggingOff(PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_GetLoggingOff(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCloseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCloseEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetLoggingOff();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_GetLoggingOff, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCloseEvent_SetCanVeto, "SetCanVeto(canVeto)\n"
"\n"
"Sets the 'can veto' flag.");

extern "C" {static PyObject *meth_wxCloseEvent_SetCanVeto(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_SetCanVeto(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool canVeto;
         ::wxCloseEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_canVeto,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxCloseEvent, &sipCpp, &canVeto))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetCanVeto(canVeto);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_SetCanVeto, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCloseEvent_SetLoggingOff, "SetLoggingOff(loggingOff)\n"
"\n"
"Sets the 'logging off' flag.");

extern "C" {static PyObject *meth_wxCloseEvent_SetLoggingOff(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_SetLoggingOff(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool loggingOff;
         ::wxCloseEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_loggingOff,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxCloseEvent, &sipCpp, &loggingOff))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetLoggingOff(loggingOff);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_SetLoggingOff, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCloseEvent_Veto, "Veto(veto=True)\n"
"\n"
"Call this from your event handler to veto a system shutdown or to\n"
"signal to the calling application that a window close did not happen.");

extern "C" {static PyObject *meth_wxCloseEvent_Veto(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_Veto(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool veto = 1;
         ::wxCloseEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_veto,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|b", &sipSelf, sipType_wxCloseEvent, &sipCpp, &veto))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Veto(veto);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_Veto, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCloseEvent_GetVeto, "GetVeto() -> bool\n"
"\n"
"Returns whether the Veto flag was set.");

extern "C" {static PyObject *meth_wxCloseEvent_GetVeto(PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_GetVeto(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCloseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCloseEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetVeto();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_GetVeto, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCloseEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxCloseEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxCloseEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxCloseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCloseEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCloseEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CloseEvent, sipName_Clone, doc_wxCloseEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxCloseEvent(void *, const sipTypeDef *);}
static void *cast_wxCloseEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxCloseEvent *sipCpp = reinterpret_cast< ::wxCloseEvent *>(sipCppV);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxCloseEvent(void *, int);}
static void release_wxCloseEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxCloseEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxCloseEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxCloseEvent(sipSimpleWrapper *);}
static void dealloc_wxCloseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxCloseEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxCloseEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxCloseEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxCloseEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxCloseEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType commandEventType = wxEVT_NULL;
        int id = 0;

        static const char *sipKwdList[] = {
            sipName_commandEventType,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &commandEventType, &id))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxCloseEvent(commandEventType,id);
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
        const  ::wxCloseEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxCloseEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxCloseEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxCloseEvent[] = {{147, 255, 1}};


static PyMethodDef methods_wxCloseEvent[] = {
    {SIP_MLNAME_CAST(sipName_CanVeto), meth_wxCloseEvent_CanVeto, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCloseEvent_CanVeto)},
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxCloseEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCloseEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetLoggingOff), meth_wxCloseEvent_GetLoggingOff, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCloseEvent_GetLoggingOff)},
    {SIP_MLNAME_CAST(sipName_GetVeto), meth_wxCloseEvent_GetVeto, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCloseEvent_GetVeto)},
    {SIP_MLNAME_CAST(sipName_SetCanVeto), SIP_MLMETH_CAST(meth_wxCloseEvent_SetCanVeto), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCloseEvent_SetCanVeto)},
    {SIP_MLNAME_CAST(sipName_SetLoggingOff), SIP_MLMETH_CAST(meth_wxCloseEvent_SetLoggingOff), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCloseEvent_SetLoggingOff)},
    {SIP_MLNAME_CAST(sipName_Veto), SIP_MLMETH_CAST(meth_wxCloseEvent_Veto), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCloseEvent_Veto)}
};

sipVariableDef variables_wxCloseEvent[] = {
    {PropertyVariable, sipName_LoggingOff, &methods_wxCloseEvent[2], &methods_wxCloseEvent[5], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxCloseEvent, "CloseEvent(commandEventType=wxEVT_NULL, id=0)\n"
"\n"
"This event class contains information about window and session close\n"
"events.");


sipClassTypeDef sipTypeDef__core_wxCloseEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxCloseEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_CloseEvent,
        {0, 0, 1},
        7, methods_wxCloseEvent,
        0, SIP_NULLPTR,
        1, variables_wxCloseEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxCloseEvent,
    -1,
    -1,
    supers_wxCloseEvent,
    SIP_NULLPTR,
    init_type_wxCloseEvent,
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
    dealloc_wxCloseEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxCloseEvent,
    cast_wxCloseEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};