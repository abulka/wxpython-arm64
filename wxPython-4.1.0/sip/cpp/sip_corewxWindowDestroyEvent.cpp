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

        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxWindowDestroyEvent : public  ::wxWindowDestroyEvent
{
public:
    sipwxWindowDestroyEvent( ::wxWindow*);
    sipwxWindowDestroyEvent(const  ::wxWindowDestroyEvent&);
    virtual ~sipwxWindowDestroyEvent();

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
    sipwxWindowDestroyEvent(const sipwxWindowDestroyEvent &);
    sipwxWindowDestroyEvent &operator = (const sipwxWindowDestroyEvent &);

    char sipPyMethods[2];
};

sipwxWindowDestroyEvent::sipwxWindowDestroyEvent( ::wxWindow*win):  ::wxWindowDestroyEvent(win), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWindowDestroyEvent::sipwxWindowDestroyEvent(const  ::wxWindowDestroyEvent& a0):  ::wxWindowDestroyEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWindowDestroyEvent::~sipwxWindowDestroyEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxWindowDestroyEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxWindowDestroyEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxWindowDestroyEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxWindowDestroyEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxWindowDestroyEvent_GetWindow, "GetWindow() -> Window\n"
"\n"
"Return the window being destroyed.");

extern "C" {static PyObject *meth_wxWindowDestroyEvent_GetWindow(PyObject *, PyObject *);}
static PyObject *meth_wxWindowDestroyEvent_GetWindow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWindowDestroyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWindowDestroyEvent, &sipCpp))
        {
             ::wxWindow*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetWindow();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WindowDestroyEvent, sipName_GetWindow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWindowDestroyEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxWindowDestroyEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxWindowDestroyEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxWindowDestroyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWindowDestroyEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxWindowDestroyEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WindowDestroyEvent, sipName_Clone, doc_wxWindowDestroyEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxWindowDestroyEvent(void *, const sipTypeDef *);}
static void *cast_wxWindowDestroyEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxWindowDestroyEvent *sipCpp = reinterpret_cast< ::wxWindowDestroyEvent *>(sipCppV);

    if (targetType == sipType_wxCommandEvent)
        return static_cast< ::wxCommandEvent *>(sipCpp);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxWindowDestroyEvent(void *, int);}
static void release_wxWindowDestroyEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxWindowDestroyEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxWindowDestroyEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxWindowDestroyEvent(sipSimpleWrapper *);}
static void dealloc_wxWindowDestroyEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxWindowDestroyEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxWindowDestroyEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxWindowDestroyEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxWindowDestroyEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxWindowDestroyEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* win = 0;

        static const char *sipKwdList[] = {
            sipName_win,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_wxWindow, &win))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWindowDestroyEvent(win);
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
        const  ::wxWindowDestroyEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxWindowDestroyEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWindowDestroyEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxWindowDestroyEvent[] = {{81, 255, 1}};


static PyMethodDef methods_wxWindowDestroyEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxWindowDestroyEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWindowDestroyEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetWindow), meth_wxWindowDestroyEvent_GetWindow, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWindowDestroyEvent_GetWindow)}
};

sipVariableDef variables_wxWindowDestroyEvent[] = {
    {PropertyVariable, sipName_Window, &methods_wxWindowDestroyEvent[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxWindowDestroyEvent, "WindowDestroyEvent(win=None)\n"
"\n"
"This event is sent as early as possible during the window destruction\n"
"process.");


sipClassTypeDef sipTypeDef__core_wxWindowDestroyEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxWindowDestroyEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_WindowDestroyEvent,
        {0, 0, 1},
        2, methods_wxWindowDestroyEvent,
        0, SIP_NULLPTR,
        1, variables_wxWindowDestroyEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxWindowDestroyEvent,
    -1,
    -1,
    supers_wxWindowDestroyEvent,
    SIP_NULLPTR,
    init_type_wxWindowDestroyEvent,
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
    dealloc_wxWindowDestroyEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxWindowDestroyEvent,
    cast_wxWindowDestroyEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
