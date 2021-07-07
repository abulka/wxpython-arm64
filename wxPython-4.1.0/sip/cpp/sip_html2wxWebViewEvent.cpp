/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html2.h"

        #include <wx/webview.h>

        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxWebViewEvent : public  ::wxWebViewEvent
{
public:
    sipwxWebViewEvent();
    sipwxWebViewEvent( ::wxEventType,int,const  ::wxString,const  ::wxString, ::wxWebViewNavigationActionFlags);
    sipwxWebViewEvent(const  ::wxWebViewEvent&);
    virtual ~sipwxWebViewEvent();

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
    sipwxWebViewEvent(const sipwxWebViewEvent &);
    sipwxWebViewEvent &operator = (const sipwxWebViewEvent &);

    char sipPyMethods[2];
};

sipwxWebViewEvent::sipwxWebViewEvent():  ::wxWebViewEvent(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWebViewEvent::sipwxWebViewEvent( ::wxEventType type,int id,const  ::wxString href,const  ::wxString target, ::wxWebViewNavigationActionFlags flags):  ::wxWebViewEvent(type,id,href,target,flags), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWebViewEvent::sipwxWebViewEvent(const  ::wxWebViewEvent& a0):  ::wxWebViewEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWebViewEvent::~sipwxWebViewEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxWebViewEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxWebViewEvent::Clone();

    extern  ::wxEvent* sipVH__html2_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__html2_21(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxWebViewEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxWebViewEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__html2_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__html2_20(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxWebViewEvent_GetTarget, "GetTarget() -> String\n"
"\n"
"Get the name of the target frame which the url of this event has been\n"
"or will be loaded into.");

extern "C" {static PyObject *meth_wxWebViewEvent_GetTarget(PyObject *, PyObject *);}
static PyObject *meth_wxWebViewEvent_GetTarget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWebViewEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebViewEvent, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetTarget());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebViewEvent, sipName_GetTarget, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebViewEvent_GetURL, "GetURL() -> String\n"
"\n"
"Get the URL being visited.");

extern "C" {static PyObject *meth_wxWebViewEvent_GetURL(PyObject *, PyObject *);}
static PyObject *meth_wxWebViewEvent_GetURL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWebViewEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebViewEvent, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_WebViewEvent, sipName_GetURL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebViewEvent_GetNavigationAction, "GetNavigationAction() -> WebViewNavigationActionFlags\n"
"\n"
"Get the type of navigation action.");

extern "C" {static PyObject *meth_wxWebViewEvent_GetNavigationAction(PyObject *, PyObject *);}
static PyObject *meth_wxWebViewEvent_GetNavigationAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWebViewEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebViewEvent, &sipCpp))
        {
             ::wxWebViewNavigationActionFlags sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetNavigationAction();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxWebViewNavigationActionFlags);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebViewEvent, sipName_GetNavigationAction, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebViewEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxWebViewEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxWebViewEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxWebViewEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebViewEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxWebViewEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebViewEvent, sipName_Clone, doc_wxWebViewEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxWebViewEvent(void *, const sipTypeDef *);}
static void *cast_wxWebViewEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxWebViewEvent *sipCpp = reinterpret_cast< ::wxWebViewEvent *>(sipCppV);

    if (targetType == sipType_wxNotifyEvent)
        return static_cast< ::wxNotifyEvent *>(sipCpp);

    if (targetType == sipType_wxCommandEvent)
        return static_cast< ::wxCommandEvent *>(sipCpp);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxWebViewEvent(void *, int);}
static void release_wxWebViewEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxWebViewEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxWebViewEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxWebViewEvent(sipSimpleWrapper *);}
static void dealloc_wxWebViewEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxWebViewEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxWebViewEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxWebViewEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxWebViewEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxWebViewEvent *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWebViewEvent();
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
         ::wxEventType type;
        int id;
        const  ::wxString* href;
        int hrefState = 0;
        const  ::wxString* target;
        int targetState = 0;
         ::wxWebViewNavigationActionFlags flags = wxWEBVIEW_NAV_ACTION_NONE;

        static const char *sipKwdList[] = {
            sipName_type,
            sipName_id,
            sipName_href,
            sipName_target,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iiJ1J1|E", &type, &id, sipType_wxString,&href, &hrefState, sipType_wxString,&target, &targetState, sipType_wxWebViewNavigationActionFlags, &flags))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWebViewEvent(type,id,*href,*target,flags);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(href),sipType_wxString,hrefState);
            sipReleaseType(const_cast< ::wxString *>(target),sipType_wxString,targetState);

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
        const  ::wxWebViewEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxWebViewEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWebViewEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxWebViewEvent[] = {{8, 0, 1}};


static PyMethodDef methods_wxWebViewEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxWebViewEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebViewEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetNavigationAction), meth_wxWebViewEvent_GetNavigationAction, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebViewEvent_GetNavigationAction)},
    {SIP_MLNAME_CAST(sipName_GetTarget), meth_wxWebViewEvent_GetTarget, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebViewEvent_GetTarget)},
    {SIP_MLNAME_CAST(sipName_GetURL), meth_wxWebViewEvent_GetURL, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebViewEvent_GetURL)}
};

sipVariableDef variables_wxWebViewEvent[] = {
    {PropertyVariable, sipName_URL, &methods_wxWebViewEvent[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Target, &methods_wxWebViewEvent[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_NavigationAction, &methods_wxWebViewEvent[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxWebViewEvent, "WebViewEvent()\n"
"WebViewEvent(type, id, href, target, flags=WEBVIEW_NAV_ACTION_NONE)\n"
"\n"
"A navigation event holds information about events associated with\n"
"wxWebView objects.");


sipClassTypeDef sipTypeDef__html2_wxWebViewEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxWebViewEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_WebViewEvent,
        {0, 0, 1},
        4, methods_wxWebViewEvent,
        0, SIP_NULLPTR,
        3, variables_wxWebViewEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxWebViewEvent,
    -1,
    -1,
    supers_wxWebViewEvent,
    SIP_NULLPTR,
    init_type_wxWebViewEvent,
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
    dealloc_wxWebViewEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxWebViewEvent,
    cast_wxWebViewEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
