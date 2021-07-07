/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/bookctrl.h>

        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxBookCtrlEvent : public  ::wxBookCtrlEvent
{
public:
    sipwxBookCtrlEvent( ::wxEventType,int,int,int);
    sipwxBookCtrlEvent(const  ::wxBookCtrlEvent&);
    virtual ~sipwxBookCtrlEvent();

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
    sipwxBookCtrlEvent(const sipwxBookCtrlEvent &);
    sipwxBookCtrlEvent &operator = (const sipwxBookCtrlEvent &);

    char sipPyMethods[2];
};

sipwxBookCtrlEvent::sipwxBookCtrlEvent( ::wxEventType eventType,int id,int sel,int oldSel):  ::wxBookCtrlEvent(eventType,id,sel,oldSel), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxBookCtrlEvent::sipwxBookCtrlEvent(const  ::wxBookCtrlEvent& a0):  ::wxBookCtrlEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxBookCtrlEvent::~sipwxBookCtrlEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxBookCtrlEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxBookCtrlEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxBookCtrlEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxBookCtrlEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxBookCtrlEvent_GetOldSelection, "GetOldSelection() -> int\n"
"\n"
"Returns the page that was selected before the change, wxNOT_FOUND if\n"
"none was selected.");

extern "C" {static PyObject *meth_wxBookCtrlEvent_GetOldSelection(PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlEvent_GetOldSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxBookCtrlEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxBookCtrlEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetOldSelection();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlEvent, sipName_GetOldSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlEvent_GetSelection, "GetSelection() -> int\n"
"\n"
"Returns the currently selected page, or wxNOT_FOUND if none was\n"
"selected.");

extern "C" {static PyObject *meth_wxBookCtrlEvent_GetSelection(PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlEvent_GetSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxBookCtrlEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxBookCtrlEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetSelection();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlEvent, sipName_GetSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlEvent_SetOldSelection, "SetOldSelection(page)\n"
"\n"
"Sets the id of the page selected before the change.");

extern "C" {static PyObject *meth_wxBookCtrlEvent_SetOldSelection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlEvent_SetOldSelection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int page;
         ::wxBookCtrlEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxBookCtrlEvent, &sipCpp, &page))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetOldSelection(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlEvent, sipName_SetOldSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlEvent_SetSelection, "SetSelection(page)\n"
"\n"
"Sets the selection member variable.");

extern "C" {static PyObject *meth_wxBookCtrlEvent_SetSelection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlEvent_SetSelection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int page;
         ::wxBookCtrlEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxBookCtrlEvent, &sipCpp, &page))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetSelection(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlEvent, sipName_SetSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxBookCtrlEvent(void *, const sipTypeDef *);}
static void *cast_wxBookCtrlEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxBookCtrlEvent *sipCpp = reinterpret_cast< ::wxBookCtrlEvent *>(sipCppV);

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
extern "C" {static void release_wxBookCtrlEvent(void *, int);}
static void release_wxBookCtrlEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxBookCtrlEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxBookCtrlEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxBookCtrlEvent(sipSimpleWrapper *);}
static void dealloc_wxBookCtrlEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxBookCtrlEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxBookCtrlEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxBookCtrlEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxBookCtrlEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxBookCtrlEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType eventType = wxEVT_NULL;
        int id = 0;
        int sel = wxNOT_FOUND;
        int oldSel = wxNOT_FOUND;

        static const char *sipKwdList[] = {
            sipName_eventType,
            sipName_id,
            sipName_sel,
            sipName_oldSel,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|iiii", &eventType, &id, &sel, &oldSel))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxBookCtrlEvent(eventType,id,sel,oldSel);
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
        const  ::wxBookCtrlEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxBookCtrlEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxBookCtrlEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxBookCtrlEvent[] = {{368, 255, 1}};


static PyMethodDef methods_wxBookCtrlEvent[] = {
    {SIP_MLNAME_CAST(sipName_GetOldSelection), meth_wxBookCtrlEvent_GetOldSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_wxBookCtrlEvent_GetOldSelection)},
    {SIP_MLNAME_CAST(sipName_GetSelection), meth_wxBookCtrlEvent_GetSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_wxBookCtrlEvent_GetSelection)},
    {SIP_MLNAME_CAST(sipName_SetOldSelection), SIP_MLMETH_CAST(meth_wxBookCtrlEvent_SetOldSelection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlEvent_SetOldSelection)},
    {SIP_MLNAME_CAST(sipName_SetSelection), SIP_MLMETH_CAST(meth_wxBookCtrlEvent_SetSelection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlEvent_SetSelection)}
};

sipVariableDef variables_wxBookCtrlEvent[] = {
    {PropertyVariable, sipName_Selection, &methods_wxBookCtrlEvent[1], &methods_wxBookCtrlEvent[3], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_OldSelection, &methods_wxBookCtrlEvent[0], &methods_wxBookCtrlEvent[2], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxBookCtrlEvent, "BookCtrlEvent(eventType=wxEVT_NULL, id=0, sel=NOT_FOUND, oldSel=NOT_FOUND)\n"
"\n"
"This class represents the events generated by book controls\n"
"(wxNotebook, wxListbook, wxChoicebook, wxTreebook, wxAuiNotebook).");


sipClassTypeDef sipTypeDef__core_wxBookCtrlEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxBookCtrlEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_BookCtrlEvent,
        {0, 0, 1},
        4, methods_wxBookCtrlEvent,
        0, SIP_NULLPTR,
        2, variables_wxBookCtrlEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxBookCtrlEvent,
    -1,
    -1,
    supers_wxBookCtrlEvent,
    SIP_NULLPTR,
    init_type_wxBookCtrlEvent,
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
    dealloc_wxBookCtrlEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxBookCtrlEvent,
    cast_wxBookCtrlEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
