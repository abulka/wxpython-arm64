/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/intl.h>



PyDoc_STRVAR(doc_wxLanguageInfo_GetLocaleName, "GetLocaleName() -> String\n"
"\n"
"Return the locale name corresponding to this language usable with\n"
"setlocale() on the current system.");

extern "C" {static PyObject *meth_wxLanguageInfo_GetLocaleName(PyObject *, PyObject *);}
static PyObject *meth_wxLanguageInfo_GetLocaleName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxLanguageInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxLanguageInfo, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetLocaleName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LanguageInfo, sipName_GetLocaleName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxLanguageInfo(void *, int);}
static void release_wxLanguageInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxLanguageInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxLanguageInfo(void *, SIP_SSIZE_T, void *);}
static void assign_wxLanguageInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxLanguageInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxLanguageInfo *>(sipSrc);
}


extern "C" {static void *array_wxLanguageInfo(SIP_SSIZE_T);}
static void *array_wxLanguageInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxLanguageInfo[sipNrElem];
}


extern "C" {static void *copy_wxLanguageInfo(const void *, SIP_SSIZE_T);}
static void *copy_wxLanguageInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxLanguageInfo(reinterpret_cast<const  ::wxLanguageInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxLanguageInfo(sipSimpleWrapper *);}
static void dealloc_wxLanguageInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxLanguageInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxLanguageInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxLanguageInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxLanguageInfo *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxLanguageInfo();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxLanguageInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxLanguageInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxLanguageInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxLanguageInfo[] = {
    {SIP_MLNAME_CAST(sipName_GetLocaleName), meth_wxLanguageInfo_GetLocaleName, METH_VARARGS, SIP_MLDOC_CAST(doc_wxLanguageInfo_GetLocaleName)}
};


extern "C" {static PyObject *varget_wxLanguageInfo_CanonicalName(void *, PyObject *, PyObject *);}
static PyObject *varget_wxLanguageInfo_CanonicalName(void *sipSelf, PyObject *, PyObject *)
{
     ::wxString*sipVal;
     ::wxLanguageInfo *sipCpp = reinterpret_cast< ::wxLanguageInfo *>(sipSelf);

    sipVal = &sipCpp->CanonicalName;

    return sipConvertFromType(sipVal, sipType_wxString, SIP_NULLPTR);
}


extern "C" {static int varset_wxLanguageInfo_CanonicalName(void *, PyObject *, PyObject *);}
static int varset_wxLanguageInfo_CanonicalName(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxString*sipVal;
     ::wxLanguageInfo *sipCpp = reinterpret_cast< ::wxLanguageInfo *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxString *>(sipForceConvertToType(sipPy, sipType_wxString, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->CanonicalName = *sipVal;

    sipReleaseType(sipVal, sipType_wxString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_wxLanguageInfo_Description(void *, PyObject *, PyObject *);}
static PyObject *varget_wxLanguageInfo_Description(void *sipSelf, PyObject *, PyObject *)
{
     ::wxString*sipVal;
     ::wxLanguageInfo *sipCpp = reinterpret_cast< ::wxLanguageInfo *>(sipSelf);

    sipVal = &sipCpp->Description;

    return sipConvertFromType(sipVal, sipType_wxString, SIP_NULLPTR);
}


extern "C" {static int varset_wxLanguageInfo_Description(void *, PyObject *, PyObject *);}
static int varset_wxLanguageInfo_Description(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxString*sipVal;
     ::wxLanguageInfo *sipCpp = reinterpret_cast< ::wxLanguageInfo *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxString *>(sipForceConvertToType(sipPy, sipType_wxString, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Description = *sipVal;

    sipReleaseType(sipVal, sipType_wxString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_wxLanguageInfo_Language(void *, PyObject *, PyObject *);}
static PyObject *varget_wxLanguageInfo_Language(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxLanguageInfo *sipCpp = reinterpret_cast< ::wxLanguageInfo *>(sipSelf);

    sipVal = sipCpp->Language;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxLanguageInfo_Language(void *, PyObject *, PyObject *);}
static int varset_wxLanguageInfo_Language(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxLanguageInfo *sipCpp = reinterpret_cast< ::wxLanguageInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->Language = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxLanguageInfo_LayoutDirection(void *, PyObject *, PyObject *);}
static PyObject *varget_wxLanguageInfo_LayoutDirection(void *sipSelf, PyObject *, PyObject *)
{
     ::wxLayoutDirection sipVal;
     ::wxLanguageInfo *sipCpp = reinterpret_cast< ::wxLanguageInfo *>(sipSelf);

    sipVal = sipCpp->LayoutDirection;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_wxLayoutDirection);
}


extern "C" {static int varset_wxLanguageInfo_LayoutDirection(void *, PyObject *, PyObject *);}
static int varset_wxLanguageInfo_LayoutDirection(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxLayoutDirection sipVal;
     ::wxLanguageInfo *sipCpp = reinterpret_cast< ::wxLanguageInfo *>(sipSelf);

    sipVal = ( ::wxLayoutDirection)sipConvertToEnum(sipPy, sipType_wxLayoutDirection);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->LayoutDirection = sipVal;

    return 0;
}

sipVariableDef variables_wxLanguageInfo[] = {
    {PropertyVariable, sipName_LocaleName, &methods_wxLanguageInfo[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_CanonicalName, (PyMethodDef *)varget_wxLanguageInfo_CanonicalName, (PyMethodDef *)varset_wxLanguageInfo_CanonicalName, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Description, (PyMethodDef *)varget_wxLanguageInfo_Description, (PyMethodDef *)varset_wxLanguageInfo_Description, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_Language, (PyMethodDef *)varget_wxLanguageInfo_Language, (PyMethodDef *)varset_wxLanguageInfo_Language, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_LayoutDirection, (PyMethodDef *)varget_wxLanguageInfo_LayoutDirection, (PyMethodDef *)varset_wxLanguageInfo_LayoutDirection, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxLanguageInfo, "Encapsulates a wxLanguage identifier together with OS-specific\n"
"information related to that language.");


sipClassTypeDef sipTypeDef__core_wxLanguageInfo = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxLanguageInfo,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_LanguageInfo,
        {0, 0, 1},
        1, methods_wxLanguageInfo,
        0, SIP_NULLPTR,
        5, variables_wxLanguageInfo,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxLanguageInfo,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxLanguageInfo,
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
    dealloc_wxLanguageInfo,
    assign_wxLanguageInfo,
    array_wxLanguageInfo,
    copy_wxLanguageInfo,
    release_wxLanguageInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};