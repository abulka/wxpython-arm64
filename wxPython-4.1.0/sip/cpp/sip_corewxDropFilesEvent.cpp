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
        #include "arrayholder.h"

        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>
    PyObject* _wxDropFilesEvent_GetFiles(const wxDropFilesEvent* self)
    {
        int         count   = self->GetNumberOfFiles();
        wxString*   files   = self->GetFiles();
        wxPyThreadBlocker   blocker;
        PyObject*   list    = PyList_New(count);
        if (!list) {
            PyErr_SetString(PyExc_MemoryError, "Can't allocate list of files!");
            return NULL;
        }
        for (int i=0; i<count; i++) {
            PyObject* s = wx2PyString(files[i]);
            PyList_SET_ITEM(list, i, s);
        }
        return list;
    }


class sipwxDropFilesEvent : public  ::wxDropFilesEvent
{
public:
    sipwxDropFilesEvent( ::wxEventType,int, ::wxString*);
    sipwxDropFilesEvent(const  ::wxDropFilesEvent&);
    virtual ~sipwxDropFilesEvent();

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
    sipwxDropFilesEvent(const sipwxDropFilesEvent &);
    sipwxDropFilesEvent &operator = (const sipwxDropFilesEvent &);

    char sipPyMethods[2];
};

sipwxDropFilesEvent::sipwxDropFilesEvent( ::wxEventType id,int noFiles, ::wxString*files):  ::wxDropFilesEvent(id,noFiles,files), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDropFilesEvent::sipwxDropFilesEvent(const  ::wxDropFilesEvent& a0):  ::wxDropFilesEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDropFilesEvent::~sipwxDropFilesEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEvent* sipwxDropFilesEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxDropFilesEvent::Clone();

    extern  ::wxEvent* sipVH__core_97(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_97(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxDropFilesEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxDropFilesEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__core_98(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_98(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxDropFilesEvent_GetFiles, "GetFiles() -> PyObject\n"
"\n"
"Returns an array of filenames.");

extern "C" {static PyObject *meth_wxDropFilesEvent_GetFiles(PyObject *, PyObject *);}
static PyObject *meth_wxDropFilesEvent_GetFiles(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDropFilesEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDropFilesEvent, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxDropFilesEvent_GetFiles(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropFilesEvent, sipName_GetFiles, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropFilesEvent_GetNumberOfFiles, "GetNumberOfFiles() -> int\n"
"\n"
"Returns the number of files dropped.");

extern "C" {static PyObject *meth_wxDropFilesEvent_GetNumberOfFiles(PyObject *, PyObject *);}
static PyObject *meth_wxDropFilesEvent_GetNumberOfFiles(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDropFilesEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDropFilesEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetNumberOfFiles();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropFilesEvent, sipName_GetNumberOfFiles, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropFilesEvent_GetPosition, "GetPosition() -> Point\n"
"\n"
"Returns the position at which the files were dropped.");

extern "C" {static PyObject *meth_wxDropFilesEvent_GetPosition(PyObject *, PyObject *);}
static PyObject *meth_wxDropFilesEvent_GetPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDropFilesEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDropFilesEvent, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_DropFilesEvent, sipName_GetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropFilesEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxDropFilesEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxDropFilesEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxDropFilesEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDropFilesEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDropFilesEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropFilesEvent, sipName_Clone, doc_wxDropFilesEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxDropFilesEvent(void *, const sipTypeDef *);}
static void *cast_wxDropFilesEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxDropFilesEvent *sipCpp = reinterpret_cast< ::wxDropFilesEvent *>(sipCppV);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDropFilesEvent(void *, int);}
static void release_wxDropFilesEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxDropFilesEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxDropFilesEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDropFilesEvent(sipSimpleWrapper *);}
static void dealloc_wxDropFilesEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxDropFilesEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDropFilesEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxDropFilesEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDropFilesEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxDropFilesEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType id = 0;
        SIP_SSIZE_T noFiles = 0;
         ::wxString* files = 0;
        PyObject *filesWrapper = 0;
        int filesState = 0;

        static const char *sipKwdList[] = {
            sipName_id,
            sipName_noFiles,
            sipName_files,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|i@r", &id, &filesWrapper, sipType_wxString,&files, &noFiles))
        {
        if (files) {
            wxStringCArrayHolder* holder = new wxStringCArrayHolder;
            holder->m_array = files;
            // Make a PyObject for the holder, and transfer its ownership to self.
            PyObject* pyHolder = sipConvertFromNewType(
                    (void*)holder, sipType_wxStringCArrayHolder, (PyObject*)sipSelf);
            Py_DECREF(pyHolder);
            sipCpp = new sipwxDropFilesEvent(id,(int)noFiles, holder->m_array);
        }
        else
            sipCpp = new sipwxDropFilesEvent(id);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxDropFilesEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxDropFilesEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxDropFilesEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxDropFilesEvent[] = {{147, 255, 1}};


static PyMethodDef methods_wxDropFilesEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxDropFilesEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDropFilesEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetFiles), meth_wxDropFilesEvent_GetFiles, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDropFilesEvent_GetFiles)},
    {SIP_MLNAME_CAST(sipName_GetNumberOfFiles), meth_wxDropFilesEvent_GetNumberOfFiles, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDropFilesEvent_GetNumberOfFiles)},
    {SIP_MLNAME_CAST(sipName_GetPosition), meth_wxDropFilesEvent_GetPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDropFilesEvent_GetPosition)}
};

sipVariableDef variables_wxDropFilesEvent[] = {
    {PropertyVariable, sipName_Position, &methods_wxDropFilesEvent[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_NumberOfFiles, &methods_wxDropFilesEvent[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Files, &methods_wxDropFilesEvent[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxDropFilesEvent, "DropFilesEvent(id=0, files=None)\n"
"\n"
"This class is used for drop files events, that is, when files have\n"
"been dropped onto the window.");


sipClassTypeDef sipTypeDef__core_wxDropFilesEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxDropFilesEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_DropFilesEvent,
        {0, 0, 1},
        4, methods_wxDropFilesEvent,
        0, SIP_NULLPTR,
        3, variables_wxDropFilesEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDropFilesEvent,
    -1,
    -1,
    supers_wxDropFilesEvent,
    SIP_NULLPTR,
    init_type_wxDropFilesEvent,
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
    dealloc_wxDropFilesEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDropFilesEvent,
    cast_wxDropFilesEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};