/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/dc.h>



/* Call the instance's destructor. */
extern "C" {static void release_wxFontMetrics(void *, int);}
static void release_wxFontMetrics(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxFontMetrics *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxFontMetrics(void *, SIP_SSIZE_T, void *);}
static void assign_wxFontMetrics(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxFontMetrics *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxFontMetrics *>(sipSrc);
}


extern "C" {static void *array_wxFontMetrics(SIP_SSIZE_T);}
static void *array_wxFontMetrics(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxFontMetrics[sipNrElem];
}


extern "C" {static void *copy_wxFontMetrics(const void *, SIP_SSIZE_T);}
static void *copy_wxFontMetrics(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxFontMetrics(reinterpret_cast<const  ::wxFontMetrics *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxFontMetrics(sipSimpleWrapper *);}
static void dealloc_wxFontMetrics(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxFontMetrics(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxFontMetrics(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxFontMetrics(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxFontMetrics *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxFontMetrics();
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
        const  ::wxFontMetrics* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxFontMetrics, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxFontMetrics(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static PyObject *varget_wxFontMetrics_ascent(void *, PyObject *, PyObject *);}
static PyObject *varget_wxFontMetrics_ascent(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipCpp->ascent;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxFontMetrics_ascent(void *, PyObject *, PyObject *);}
static int varset_wxFontMetrics_ascent(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->ascent = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxFontMetrics_averageWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_wxFontMetrics_averageWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipCpp->averageWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxFontMetrics_averageWidth(void *, PyObject *, PyObject *);}
static int varset_wxFontMetrics_averageWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->averageWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxFontMetrics_descent(void *, PyObject *, PyObject *);}
static PyObject *varget_wxFontMetrics_descent(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipCpp->descent;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxFontMetrics_descent(void *, PyObject *, PyObject *);}
static int varset_wxFontMetrics_descent(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->descent = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxFontMetrics_externalLeading(void *, PyObject *, PyObject *);}
static PyObject *varget_wxFontMetrics_externalLeading(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipCpp->externalLeading;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxFontMetrics_externalLeading(void *, PyObject *, PyObject *);}
static int varset_wxFontMetrics_externalLeading(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->externalLeading = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxFontMetrics_height(void *, PyObject *, PyObject *);}
static PyObject *varget_wxFontMetrics_height(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipCpp->height;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxFontMetrics_height(void *, PyObject *, PyObject *);}
static int varset_wxFontMetrics_height(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->height = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxFontMetrics_internalLeading(void *, PyObject *, PyObject *);}
static PyObject *varget_wxFontMetrics_internalLeading(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipCpp->internalLeading;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxFontMetrics_internalLeading(void *, PyObject *, PyObject *);}
static int varset_wxFontMetrics_internalLeading(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxFontMetrics *sipCpp = reinterpret_cast< ::wxFontMetrics *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->internalLeading = sipVal;

    return 0;
}

sipVariableDef variables_wxFontMetrics[] = {
    {InstanceVariable, sipName_ascent, (PyMethodDef *)varget_wxFontMetrics_ascent, (PyMethodDef *)varset_wxFontMetrics_ascent, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_averageWidth, (PyMethodDef *)varget_wxFontMetrics_averageWidth, (PyMethodDef *)varset_wxFontMetrics_averageWidth, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_descent, (PyMethodDef *)varget_wxFontMetrics_descent, (PyMethodDef *)varset_wxFontMetrics_descent, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_externalLeading, (PyMethodDef *)varget_wxFontMetrics_externalLeading, (PyMethodDef *)varset_wxFontMetrics_externalLeading, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_height, (PyMethodDef *)varget_wxFontMetrics_height, (PyMethodDef *)varset_wxFontMetrics_height, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_internalLeading, (PyMethodDef *)varget_wxFontMetrics_internalLeading, (PyMethodDef *)varset_wxFontMetrics_internalLeading, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxFontMetrics, "FontMetrics()\n"
"\n"
"Simple collection of various font metrics.");


sipClassTypeDef sipTypeDef__core_wxFontMetrics = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxFontMetrics,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_FontMetrics,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        6, variables_wxFontMetrics,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxFontMetrics,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxFontMetrics,
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
    dealloc_wxFontMetrics,
    assign_wxFontMetrics,
    array_wxFontMetrics,
    copy_wxFontMetrics,
    release_wxFontMetrics,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
