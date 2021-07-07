/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_webkit.h"

        #include <wx/html/webkit.h>

        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxWebKitStateChangedEvent : public  ::wxWebKitStateChangedEvent
{
public:
    sipwxWebKitStateChangedEvent( ::wxWindow*);
    sipwxWebKitStateChangedEvent(const  ::wxWebKitStateChangedEvent&);
    virtual ~sipwxWebKitStateChangedEvent();

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
    sipwxWebKitStateChangedEvent(const sipwxWebKitStateChangedEvent &);
    sipwxWebKitStateChangedEvent &operator = (const sipwxWebKitStateChangedEvent &);

    char sipPyMethods[2];
};

sipwxWebKitStateChangedEvent::sipwxWebKitStateChangedEvent( ::wxWindow*win):  ::wxWebKitStateChangedEvent(win), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWebKitStateChangedEvent::sipwxWebKitStateChangedEvent(const  ::wxWebKitStateChangedEvent& a0):  ::wxWebKitStateChangedEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWebKitStateChangedEvent::~sipwxWebKitStateChangedEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxWebKitStateChangedEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxWebKitStateChangedEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__webkit_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__webkit_19(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxWebKitStateChangedEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxWebKitStateChangedEvent::Clone();

    extern  ::wxEvent* sipVH__webkit_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__webkit_18(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxWebKitStateChangedEvent_GetState, "GetState() -> int");

extern "C" {static PyObject *meth_wxWebKitStateChangedEvent_GetState(PyObject *, PyObject *);}
static PyObject *meth_wxWebKitStateChangedEvent_GetState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxWebKitStateChangedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebKitStateChangedEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetState();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitStateChangedEvent, sipName_GetState, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebKitStateChangedEvent_SetState, "SetState(state)");

extern "C" {static PyObject *meth_wxWebKitStateChangedEvent_SetState(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxWebKitStateChangedEvent_SetState(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int state;
         ::wxWebKitStateChangedEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxWebKitStateChangedEvent, &sipCpp, &state))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetState(state);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitStateChangedEvent, sipName_SetState, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebKitStateChangedEvent_GetURL, "GetURL() -> String");

extern "C" {static PyObject *meth_wxWebKitStateChangedEvent_GetURL(PyObject *, PyObject *);}
static PyObject *meth_wxWebKitStateChangedEvent_GetURL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxWebKitStateChangedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebKitStateChangedEvent, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetURL());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitStateChangedEvent, sipName_GetURL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebKitStateChangedEvent_SetURL, "SetURL(url)");

extern "C" {static PyObject *meth_wxWebKitStateChangedEvent_SetURL(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxWebKitStateChangedEvent_SetURL(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* url;
        int urlState = 0;
         ::wxWebKitStateChangedEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_url,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxWebKitStateChangedEvent, &sipCpp, sipType_wxString,&url, &urlState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetURL(*url);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(url),sipType_wxString,urlState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitStateChangedEvent, sipName_SetURL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebKitStateChangedEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxWebKitStateChangedEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxWebKitStateChangedEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxWebKitStateChangedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebKitStateChangedEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxWebKitStateChangedEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitStateChangedEvent, sipName_Clone, doc_wxWebKitStateChangedEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxWebKitStateChangedEvent(void *, const sipTypeDef *);}
static void *cast_wxWebKitStateChangedEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxWebKitStateChangedEvent *sipCpp = reinterpret_cast< ::wxWebKitStateChangedEvent *>(sipCppV);

    if (targetType == sipType_wxCommandEvent)
        return static_cast< ::wxCommandEvent *>(sipCpp);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxWebKitStateChangedEvent(void *, int);}
static void release_wxWebKitStateChangedEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxWebKitStateChangedEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxWebKitStateChangedEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxWebKitStateChangedEvent(sipSimpleWrapper *);}
static void dealloc_wxWebKitStateChangedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxWebKitStateChangedEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxWebKitStateChangedEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxWebKitStateChangedEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxWebKitStateChangedEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxWebKitStateChangedEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* win = 0;

        static const char *sipKwdList[] = {
            sipName_win,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_wxWindow, &win))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWebKitStateChangedEvent(win);
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
        const  ::wxWebKitStateChangedEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxWebKitStateChangedEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWebKitStateChangedEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxWebKitStateChangedEvent[] = {{1, 0, 1}};


static PyMethodDef methods_wxWebKitStateChangedEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxWebKitStateChangedEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebKitStateChangedEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetState), meth_wxWebKitStateChangedEvent_GetState, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebKitStateChangedEvent_GetState)},
    {SIP_MLNAME_CAST(sipName_GetURL), meth_wxWebKitStateChangedEvent_GetURL, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebKitStateChangedEvent_GetURL)},
    {SIP_MLNAME_CAST(sipName_SetState), SIP_MLMETH_CAST(meth_wxWebKitStateChangedEvent_SetState), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxWebKitStateChangedEvent_SetState)},
    {SIP_MLNAME_CAST(sipName_SetURL), SIP_MLMETH_CAST(meth_wxWebKitStateChangedEvent_SetURL), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxWebKitStateChangedEvent_SetURL)}
};

sipVariableDef variables_wxWebKitStateChangedEvent[] = {
    {PropertyVariable, sipName_URL, &methods_wxWebKitStateChangedEvent[2], &methods_wxWebKitStateChangedEvent[4], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_State, &methods_wxWebKitStateChangedEvent[1], &methods_wxWebKitStateChangedEvent[3], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxWebKitStateChangedEvent, "WebKitStateChangedEvent(win=0)");


sipClassTypeDef sipTypeDef__webkit_wxWebKitStateChangedEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxWebKitStateChangedEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_WebKitStateChangedEvent,
        {0, 0, 1},
        5, methods_wxWebKitStateChangedEvent,
        0, SIP_NULLPTR,
        2, variables_wxWebKitStateChangedEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxWebKitStateChangedEvent,
    -1,
    -1,
    supers_wxWebKitStateChangedEvent,
    SIP_NULLPTR,
    init_type_wxWebKitStateChangedEvent,
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
    dealloc_wxWebKitStateChangedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxWebKitStateChangedEvent,
    cast_wxWebKitStateChangedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
