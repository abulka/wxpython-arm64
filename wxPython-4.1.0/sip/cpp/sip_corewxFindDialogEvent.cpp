/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/fdrepdlg.h>

        #include <wx/event.h>
        #include <wx/fdrepdlg.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxFindDialogEvent : public  ::wxFindDialogEvent
{
public:
    sipwxFindDialogEvent( ::wxEventType,int);
    sipwxFindDialogEvent(const  ::wxFindDialogEvent&);
    virtual ~sipwxFindDialogEvent();

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
    sipwxFindDialogEvent(const sipwxFindDialogEvent &);
    sipwxFindDialogEvent &operator = (const sipwxFindDialogEvent &);

    char sipPyMethods[2];
};

sipwxFindDialogEvent::sipwxFindDialogEvent( ::wxEventType commandType,int id):  ::wxFindDialogEvent(commandType,id), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFindDialogEvent::sipwxFindDialogEvent(const  ::wxFindDialogEvent& a0):  ::wxFindDialogEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFindDialogEvent::~sipwxFindDialogEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxFindDialogEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxFindDialogEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxFindDialogEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxFindDialogEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxFindDialogEvent_GetDialog, "GetDialog() -> FindReplaceDialog\n"
"\n"
"Return the pointer to the dialog which generated this event.");

extern "C" {static PyObject *meth_wxFindDialogEvent_GetDialog(PyObject *, PyObject *);}
static PyObject *meth_wxFindDialogEvent_GetDialog(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFindDialogEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFindDialogEvent, &sipCpp))
        {
             ::wxFindReplaceDialog*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDialog();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxFindReplaceDialog,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FindDialogEvent, sipName_GetDialog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindDialogEvent_GetFindString, "GetFindString() -> String\n"
"\n"
"Return the string to find (never empty).");

extern "C" {static PyObject *meth_wxFindDialogEvent_GetFindString(PyObject *, PyObject *);}
static PyObject *meth_wxFindDialogEvent_GetFindString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFindDialogEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFindDialogEvent, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetFindString());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FindDialogEvent, sipName_GetFindString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindDialogEvent_GetFlags, "GetFlags() -> int\n"
"\n"
"Get the currently selected flags: this is the combination of the\n"
"wxFindReplaceFlags enumeration values.");

extern "C" {static PyObject *meth_wxFindDialogEvent_GetFlags(PyObject *, PyObject *);}
static PyObject *meth_wxFindDialogEvent_GetFlags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFindDialogEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFindDialogEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFlags();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FindDialogEvent, sipName_GetFlags, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindDialogEvent_GetReplaceString, "GetReplaceString() -> String\n"
"\n"
"Return the string to replace the search string with (only for replace\n"
"and replace all events).");

extern "C" {static PyObject *meth_wxFindDialogEvent_GetReplaceString(PyObject *, PyObject *);}
static PyObject *meth_wxFindDialogEvent_GetReplaceString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFindDialogEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFindDialogEvent, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetReplaceString());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FindDialogEvent, sipName_GetReplaceString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindDialogEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxFindDialogEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxFindDialogEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxFindDialogEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFindDialogEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxFindDialogEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FindDialogEvent, sipName_Clone, doc_wxFindDialogEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxFindDialogEvent(void *, const sipTypeDef *);}
static void *cast_wxFindDialogEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxFindDialogEvent *sipCpp = reinterpret_cast< ::wxFindDialogEvent *>(sipCppV);

    if (targetType == sipType_wxCommandEvent)
        return static_cast< ::wxCommandEvent *>(sipCpp);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxFindDialogEvent(void *, int);}
static void release_wxFindDialogEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxFindDialogEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxFindDialogEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxFindDialogEvent(sipSimpleWrapper *);}
static void dealloc_wxFindDialogEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxFindDialogEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxFindDialogEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxFindDialogEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxFindDialogEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxFindDialogEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType commandType = wxEVT_NULL;
        int id = 0;

        static const char *sipKwdList[] = {
            sipName_commandType,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &commandType, &id))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFindDialogEvent(commandType,id);
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
        const  ::wxFindDialogEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxFindDialogEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFindDialogEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxFindDialogEvent[] = {{81, 255, 1}};


static PyMethodDef methods_wxFindDialogEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxFindDialogEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFindDialogEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetDialog), meth_wxFindDialogEvent_GetDialog, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFindDialogEvent_GetDialog)},
    {SIP_MLNAME_CAST(sipName_GetFindString), meth_wxFindDialogEvent_GetFindString, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFindDialogEvent_GetFindString)},
    {SIP_MLNAME_CAST(sipName_GetFlags), meth_wxFindDialogEvent_GetFlags, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFindDialogEvent_GetFlags)},
    {SIP_MLNAME_CAST(sipName_GetReplaceString), meth_wxFindDialogEvent_GetReplaceString, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFindDialogEvent_GetReplaceString)}
};

sipVariableDef variables_wxFindDialogEvent[] = {
    {PropertyVariable, sipName_ReplaceString, &methods_wxFindDialogEvent[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Flags, &methods_wxFindDialogEvent[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FindString, &methods_wxFindDialogEvent[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Dialog, &methods_wxFindDialogEvent[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxFindDialogEvent, "FindDialogEvent(commandType=wxEVT_NULL, id=0)\n"
"\n"
"wxFindReplaceDialog events.");


sipClassTypeDef sipTypeDef__core_wxFindDialogEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxFindDialogEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_FindDialogEvent,
        {0, 0, 1},
        5, methods_wxFindDialogEvent,
        0, SIP_NULLPTR,
        4, variables_wxFindDialogEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxFindDialogEvent,
    -1,
    -1,
    supers_wxFindDialogEvent,
    SIP_NULLPTR,
    init_type_wxFindDialogEvent,
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
    dealloc_wxFindDialogEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxFindDialogEvent,
    cast_wxFindDialogEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};