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

        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


PyDoc_STRVAR(doc_wxFindReplaceData_GetFindString, "GetFindString() -> String\n"
"\n"
"Get the string to find.");

extern "C" {static PyObject *meth_wxFindReplaceData_GetFindString(PyObject *, PyObject *);}
static PyObject *meth_wxFindReplaceData_GetFindString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFindReplaceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFindReplaceData, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_FindReplaceData, sipName_GetFindString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindReplaceData_GetFlags, "GetFlags() -> int\n"
"\n"
"Get the combination of wxFindReplaceFlags values.");

extern "C" {static PyObject *meth_wxFindReplaceData_GetFlags(PyObject *, PyObject *);}
static PyObject *meth_wxFindReplaceData_GetFlags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFindReplaceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFindReplaceData, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_FindReplaceData, sipName_GetFlags, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindReplaceData_GetReplaceString, "GetReplaceString() -> String\n"
"\n"
"Get the replacement string.");

extern "C" {static PyObject *meth_wxFindReplaceData_GetReplaceString(PyObject *, PyObject *);}
static PyObject *meth_wxFindReplaceData_GetReplaceString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFindReplaceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFindReplaceData, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_FindReplaceData, sipName_GetReplaceString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindReplaceData_SetFindString, "SetFindString(str)\n"
"\n"
"Set the string to find (used as initial value by the dialog).");

extern "C" {static PyObject *meth_wxFindReplaceData_SetFindString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFindReplaceData_SetFindString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* str;
        int strState = 0;
         ::wxFindReplaceData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_str,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxFindReplaceData, &sipCpp, sipType_wxString,&str, &strState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFindString(*str);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(str),sipType_wxString,strState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FindReplaceData, sipName_SetFindString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindReplaceData_SetFlags, "SetFlags(flags)\n"
"\n"
"Set the flags to use to initialize the controls of the dialog.");

extern "C" {static PyObject *meth_wxFindReplaceData_SetFlags(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFindReplaceData_SetFlags(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxUint32 flags;
         ::wxFindReplaceData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxFindReplaceData, &sipCpp, &flags))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFlags(flags);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FindReplaceData, sipName_SetFlags, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFindReplaceData_SetReplaceString, "SetReplaceString(str)\n"
"\n"
"Set the replacement string (used as initial value by the dialog).");

extern "C" {static PyObject *meth_wxFindReplaceData_SetReplaceString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFindReplaceData_SetReplaceString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* str;
        int strState = 0;
         ::wxFindReplaceData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_str,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxFindReplaceData, &sipCpp, sipType_wxString,&str, &strState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetReplaceString(*str);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(str),sipType_wxString,strState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FindReplaceData, sipName_SetReplaceString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxFindReplaceData(void *, const sipTypeDef *);}
static void *cast_wxFindReplaceData(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxFindReplaceData *sipCpp = reinterpret_cast< ::wxFindReplaceData *>(sipCppV);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxFindReplaceData(void *, int);}
static void release_wxFindReplaceData(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxFindReplaceData *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxFindReplaceData(void *, SIP_SSIZE_T, void *);}
static void assign_wxFindReplaceData(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxFindReplaceData *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxFindReplaceData *>(sipSrc);
}


extern "C" {static void *array_wxFindReplaceData(SIP_SSIZE_T);}
static void *array_wxFindReplaceData(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxFindReplaceData[sipNrElem];
}


extern "C" {static void *copy_wxFindReplaceData(const void *, SIP_SSIZE_T);}
static void *copy_wxFindReplaceData(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxFindReplaceData(reinterpret_cast<const  ::wxFindReplaceData *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxFindReplaceData(sipSimpleWrapper *);}
static void dealloc_wxFindReplaceData(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxFindReplaceData(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxFindReplaceData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxFindReplaceData(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxFindReplaceData *sipCpp = SIP_NULLPTR;

    {
         ::wxUint32 flags = 0;

        static const char *sipKwdList[] = {
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|u", &flags))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxFindReplaceData(flags);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxFindReplaceData* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxFindReplaceData, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxFindReplaceData(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxFindReplaceData[] = {{370, 255, 1}};


static PyMethodDef methods_wxFindReplaceData[] = {
    {SIP_MLNAME_CAST(sipName_GetFindString), meth_wxFindReplaceData_GetFindString, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFindReplaceData_GetFindString)},
    {SIP_MLNAME_CAST(sipName_GetFlags), meth_wxFindReplaceData_GetFlags, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFindReplaceData_GetFlags)},
    {SIP_MLNAME_CAST(sipName_GetReplaceString), meth_wxFindReplaceData_GetReplaceString, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFindReplaceData_GetReplaceString)},
    {SIP_MLNAME_CAST(sipName_SetFindString), SIP_MLMETH_CAST(meth_wxFindReplaceData_SetFindString), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFindReplaceData_SetFindString)},
    {SIP_MLNAME_CAST(sipName_SetFlags), SIP_MLMETH_CAST(meth_wxFindReplaceData_SetFlags), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFindReplaceData_SetFlags)},
    {SIP_MLNAME_CAST(sipName_SetReplaceString), SIP_MLMETH_CAST(meth_wxFindReplaceData_SetReplaceString), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFindReplaceData_SetReplaceString)}
};

sipVariableDef variables_wxFindReplaceData[] = {
    {PropertyVariable, sipName_ReplaceString, &methods_wxFindReplaceData[2], &methods_wxFindReplaceData[5], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Flags, &methods_wxFindReplaceData[1], &methods_wxFindReplaceData[4], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FindString, &methods_wxFindReplaceData[0], &methods_wxFindReplaceData[3], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxFindReplaceData, "FindReplaceData(flags=0)\n"
"\n"
"wxFindReplaceData holds the data for wxFindReplaceDialog.");


sipClassTypeDef sipTypeDef__core_wxFindReplaceData = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxFindReplaceData,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_FindReplaceData,
        {0, 0, 1},
        6, methods_wxFindReplaceData,
        0, SIP_NULLPTR,
        3, variables_wxFindReplaceData,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxFindReplaceData,
    -1,
    -1,
    supers_wxFindReplaceData,
    SIP_NULLPTR,
    init_type_wxFindReplaceData,
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
    dealloc_wxFindReplaceData,
    assign_wxFindReplaceData,
    array_wxFindReplaceData,
    copy_wxFindReplaceData,
    release_wxFindReplaceData,
    cast_wxFindReplaceData,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
