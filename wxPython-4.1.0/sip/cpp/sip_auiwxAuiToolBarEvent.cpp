/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_aui.h"

        #include <wx/aui/auibar.h>

        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxAuiToolBarEvent : public  ::wxAuiToolBarEvent
{
public:
    sipwxAuiToolBarEvent( ::wxEventType,int);
    sipwxAuiToolBarEvent(const  ::wxAuiToolBarEvent&);
    virtual ~sipwxAuiToolBarEvent();

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
    sipwxAuiToolBarEvent(const sipwxAuiToolBarEvent &);
    sipwxAuiToolBarEvent &operator = (const sipwxAuiToolBarEvent &);

    char sipPyMethods[2];
};

sipwxAuiToolBarEvent::sipwxAuiToolBarEvent( ::wxEventType commandType,int winId):  ::wxAuiToolBarEvent(commandType,winId), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxAuiToolBarEvent::sipwxAuiToolBarEvent(const  ::wxAuiToolBarEvent& c):  ::wxAuiToolBarEvent(c), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxAuiToolBarEvent::~sipwxAuiToolBarEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxAuiToolBarEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxAuiToolBarEvent::Clone();

    extern  ::wxEvent* sipVH__aui_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__aui_7(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxAuiToolBarEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxAuiToolBarEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__aui_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__aui_6(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_IsDropDownClicked, "IsDropDownClicked() -> bool\n"
"\n"
"Returns whether the drop down menu has been clicked.");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_IsDropDownClicked(PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_IsDropDownClicked(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAuiToolBarEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsDropDownClicked();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_IsDropDownClicked, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_GetClickPoint, "GetClickPoint() -> wx.Point\n"
"\n"
"Returns the point where the user clicked with the mouse.");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_GetClickPoint(PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_GetClickPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAuiToolBarEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint(sipCpp->GetClickPoint());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_GetClickPoint, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_GetItemRect, "GetItemRect() -> wx.Rect\n"
"\n"
"Returns the wxAuiToolBarItem rectangle bounding the mouse click point.");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_GetItemRect(PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_GetItemRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAuiToolBarEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp))
        {
             ::wxRect*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRect(sipCpp->GetItemRect());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRect,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_GetItemRect, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_GetToolId, "GetToolId() -> int\n"
"\n"
"Returns the wxAuiToolBarItem identifier.");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_GetToolId(PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_GetToolId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAuiToolBarEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetToolId();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_GetToolId, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_SetDropDownClicked, "SetDropDownClicked(c)");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_SetDropDownClicked(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_SetDropDownClicked(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool c;
         ::wxAuiToolBarEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_c,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp, &c))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetDropDownClicked(c);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_SetDropDownClicked, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_SetClickPoint, "SetClickPoint(p)");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_SetClickPoint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_SetClickPoint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPoint* p;
        int pState = 0;
         ::wxAuiToolBarEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_p,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp, sipType_wxPoint, &p, &pState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetClickPoint(*p);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(p),sipType_wxPoint,pState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_SetClickPoint, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_SetItemRect, "SetItemRect(r)");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_SetItemRect(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_SetItemRect(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRect* r;
        int rState = 0;
         ::wxAuiToolBarEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_r,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp, sipType_wxRect, &r, &rState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetItemRect(*r);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(r),sipType_wxRect,rState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_SetItemRect, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_SetToolId, "SetToolId(toolId)");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_SetToolId(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_SetToolId(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int toolId;
         ::wxAuiToolBarEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_toolId,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp, &toolId))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetToolId(toolId);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_SetToolId, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiToolBarEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxAuiToolBarEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxAuiToolBarEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxAuiToolBarEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAuiToolBarEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxAuiToolBarEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiToolBarEvent, sipName_Clone, doc_wxAuiToolBarEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxAuiToolBarEvent(void *, const sipTypeDef *);}
static void *cast_wxAuiToolBarEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxAuiToolBarEvent *sipCpp = reinterpret_cast< ::wxAuiToolBarEvent *>(sipCppV);

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
extern "C" {static void release_wxAuiToolBarEvent(void *, int);}
static void release_wxAuiToolBarEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxAuiToolBarEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxAuiToolBarEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxAuiToolBarEvent(sipSimpleWrapper *);}
static void dealloc_wxAuiToolBarEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxAuiToolBarEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAuiToolBarEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxAuiToolBarEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAuiToolBarEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxAuiToolBarEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType commandType = wxEVT_NULL;
        int winId = 0;

        static const char *sipKwdList[] = {
            sipName_commandType,
            sipName_winId,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &commandType, &winId))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxAuiToolBarEvent(commandType,winId);
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
        const  ::wxAuiToolBarEvent* c;

        static const char *sipKwdList[] = {
            sipName_c,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxAuiToolBarEvent, &c))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxAuiToolBarEvent(*c);
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

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxAuiToolBarEvent[] = {{22, 0, 1}};


static PyMethodDef methods_wxAuiToolBarEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxAuiToolBarEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetClickPoint), meth_wxAuiToolBarEvent_GetClickPoint, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_GetClickPoint)},
    {SIP_MLNAME_CAST(sipName_GetItemRect), meth_wxAuiToolBarEvent_GetItemRect, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_GetItemRect)},
    {SIP_MLNAME_CAST(sipName_GetToolId), meth_wxAuiToolBarEvent_GetToolId, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_GetToolId)},
    {SIP_MLNAME_CAST(sipName_IsDropDownClicked), meth_wxAuiToolBarEvent_IsDropDownClicked, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_IsDropDownClicked)},
    {SIP_MLNAME_CAST(sipName_SetClickPoint), SIP_MLMETH_CAST(meth_wxAuiToolBarEvent_SetClickPoint), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_SetClickPoint)},
    {SIP_MLNAME_CAST(sipName_SetDropDownClicked), SIP_MLMETH_CAST(meth_wxAuiToolBarEvent_SetDropDownClicked), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_SetDropDownClicked)},
    {SIP_MLNAME_CAST(sipName_SetItemRect), SIP_MLMETH_CAST(meth_wxAuiToolBarEvent_SetItemRect), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_SetItemRect)},
    {SIP_MLNAME_CAST(sipName_SetToolId), SIP_MLMETH_CAST(meth_wxAuiToolBarEvent_SetToolId), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAuiToolBarEvent_SetToolId)}
};

sipVariableDef variables_wxAuiToolBarEvent[] = {
    {PropertyVariable, sipName_ToolId, &methods_wxAuiToolBarEvent[3], &methods_wxAuiToolBarEvent[8], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ItemRect, &methods_wxAuiToolBarEvent[2], &methods_wxAuiToolBarEvent[7], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ClickPoint, &methods_wxAuiToolBarEvent[1], &methods_wxAuiToolBarEvent[5], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxAuiToolBarEvent, "AuiToolBarEvent(commandType=wx.wxEVT_NULL, winId=0)\n"
"AuiToolBarEvent(c)\n"
"\n"
"wxAuiToolBarEvent is used for the events generated by wxAuiToolBar.");


sipClassTypeDef sipTypeDef__aui_wxAuiToolBarEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxAuiToolBarEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_AuiToolBarEvent,
        {0, 0, 1},
        9, methods_wxAuiToolBarEvent,
        0, SIP_NULLPTR,
        3, variables_wxAuiToolBarEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAuiToolBarEvent,
    -1,
    -1,
    supers_wxAuiToolBarEvent,
    SIP_NULLPTR,
    init_type_wxAuiToolBarEvent,
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
    dealloc_wxAuiToolBarEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxAuiToolBarEvent,
    cast_wxAuiToolBarEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
