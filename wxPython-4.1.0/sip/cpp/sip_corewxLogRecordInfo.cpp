/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/log.h>



/* Call the instance's destructor. */
extern "C" {static void release_wxLogRecordInfo(void *, int);}
static void release_wxLogRecordInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxLogRecordInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxLogRecordInfo(void *, SIP_SSIZE_T, void *);}
static void assign_wxLogRecordInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxLogRecordInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxLogRecordInfo *>(sipSrc);
}


extern "C" {static void *array_wxLogRecordInfo(SIP_SSIZE_T);}
static void *array_wxLogRecordInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxLogRecordInfo[sipNrElem];
}


extern "C" {static void *copy_wxLogRecordInfo(const void *, SIP_SSIZE_T);}
static void *copy_wxLogRecordInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxLogRecordInfo(reinterpret_cast<const  ::wxLogRecordInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxLogRecordInfo(sipSimpleWrapper *);}
static void dealloc_wxLogRecordInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxLogRecordInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxLogRecordInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxLogRecordInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxLogRecordInfo *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxLogRecordInfo();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxLogRecordInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxLogRecordInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxLogRecordInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static PyObject *varget_wxLogRecordInfo_filename(void *, PyObject *, PyObject *);}
static PyObject *varget_wxLogRecordInfo_filename(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    const char*sipVal;
     ::wxLogRecordInfo *sipCpp = reinterpret_cast< ::wxLogRecordInfo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -21);
    if (sipPy)
        return sipPy;

    sipVal = sipCpp->filename;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return SIPBytes_FromString(sipVal);
}


extern "C" {static int varset_wxLogRecordInfo_filename(void *, PyObject *, PyObject *);}
static int varset_wxLogRecordInfo_filename(void *sipSelf, PyObject *sipPy, PyObject *sipPySelf)
{
    const char*sipVal;
     ::wxLogRecordInfo *sipCpp = reinterpret_cast< ::wxLogRecordInfo *>(sipSelf);

    sipVal = sipBytes_AsString(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->filename = sipVal;

    sipKeepReference(sipPySelf, -21, sipPy);

    return 0;
}


extern "C" {static PyObject *varget_wxLogRecordInfo_func(void *, PyObject *, PyObject *);}
static PyObject *varget_wxLogRecordInfo_func(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    const char*sipVal;
     ::wxLogRecordInfo *sipCpp = reinterpret_cast< ::wxLogRecordInfo *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -22);
    if (sipPy)
        return sipPy;

    sipVal = sipCpp->func;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return SIPBytes_FromString(sipVal);
}


extern "C" {static int varset_wxLogRecordInfo_func(void *, PyObject *, PyObject *);}
static int varset_wxLogRecordInfo_func(void *sipSelf, PyObject *sipPy, PyObject *sipPySelf)
{
    const char*sipVal;
     ::wxLogRecordInfo *sipCpp = reinterpret_cast< ::wxLogRecordInfo *>(sipSelf);

    sipVal = sipBytes_AsString(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->func = sipVal;

    sipKeepReference(sipPySelf, -22, sipPy);

    return 0;
}


extern "C" {static PyObject *varget_wxLogRecordInfo_line(void *, PyObject *, PyObject *);}
static PyObject *varget_wxLogRecordInfo_line(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxLogRecordInfo *sipCpp = reinterpret_cast< ::wxLogRecordInfo *>(sipSelf);

    sipVal = sipCpp->line;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxLogRecordInfo_line(void *, PyObject *, PyObject *);}
static int varset_wxLogRecordInfo_line(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxLogRecordInfo *sipCpp = reinterpret_cast< ::wxLogRecordInfo *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->line = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxLogRecordInfo_timestamp(void *, PyObject *, PyObject *);}
static PyObject *varget_wxLogRecordInfo_timestamp(void *sipSelf, PyObject *, PyObject *)
{
     ::time_t sipVal;
     ::wxLogRecordInfo *sipCpp = reinterpret_cast< ::wxLogRecordInfo *>(sipSelf);

    sipVal = sipCpp->timestamp;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_wxLogRecordInfo_timestamp(void *, PyObject *, PyObject *);}
static int varset_wxLogRecordInfo_timestamp(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::time_t sipVal;
     ::wxLogRecordInfo *sipCpp = reinterpret_cast< ::wxLogRecordInfo *>(sipSelf);

    sipVal = sipLong_AsLong(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->timestamp = sipVal;

    return 0;
}

sipVariableDef variables_wxLogRecordInfo[] = {
    {InstanceVariable, sipName_filename, (PyMethodDef *)varget_wxLogRecordInfo_filename, (PyMethodDef *)varset_wxLogRecordInfo_filename, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_func, (PyMethodDef *)varget_wxLogRecordInfo_func, (PyMethodDef *)varset_wxLogRecordInfo_func, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_line, (PyMethodDef *)varget_wxLogRecordInfo_line, (PyMethodDef *)varset_wxLogRecordInfo_line, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_timestamp, (PyMethodDef *)varget_wxLogRecordInfo_timestamp, (PyMethodDef *)varset_wxLogRecordInfo_timestamp, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxLogRecordInfo, "Information about a log record (unit of the log output).");


sipClassTypeDef sipTypeDef__core_wxLogRecordInfo = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxLogRecordInfo,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_LogRecordInfo,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        4, variables_wxLogRecordInfo,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxLogRecordInfo,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxLogRecordInfo,
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
    dealloc_wxLogRecordInfo,
    assign_wxLogRecordInfo,
    array_wxLogRecordInfo,
    copy_wxLogRecordInfo,
    release_wxLogRecordInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
