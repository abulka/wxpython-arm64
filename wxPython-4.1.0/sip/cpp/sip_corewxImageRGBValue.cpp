/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/image.h>
            #include <wx/image.h>



/* Call the instance's destructor. */
extern "C" {static void release_wxImage_RGBValue(void *, int);}
static void release_wxImage_RGBValue(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxImage::RGBValue *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxImage_RGBValue(void *, SIP_SSIZE_T, void *);}
static void assign_wxImage_RGBValue(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxImage::RGBValue *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxImage::RGBValue *>(sipSrc);
}


extern "C" {static void *array_wxImage_RGBValue(SIP_SSIZE_T);}
static void *array_wxImage_RGBValue(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxImage::RGBValue[sipNrElem];
}


extern "C" {static void *copy_wxImage_RGBValue(const void *, SIP_SSIZE_T);}
static void *copy_wxImage_RGBValue(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxImage::RGBValue(reinterpret_cast<const  ::wxImage::RGBValue *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxImage_RGBValue(sipSimpleWrapper *);}
static void dealloc_wxImage_RGBValue(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxImage_RGBValue(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxImage_RGBValue(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxImage_RGBValue(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxImage::RGBValue *sipCpp = SIP_NULLPTR;

    {
        unsigned char r = 0;
        unsigned char g = 0;
        unsigned char b = 0;

        static const char *sipKwdList[] = {
            sipName_r,
            sipName_g,
            sipName_b,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|MMM", &r, &g, &b))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxImage::RGBValue(r,g,b);
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
        const  ::wxImage::RGBValue* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxImage_RGBValue, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxImage::RGBValue(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static PyObject *varget_wxImage_RGBValue_blue(void *, PyObject *, PyObject *);}
static PyObject *varget_wxImage_RGBValue_blue(void *sipSelf, PyObject *, PyObject *)
{
    unsigned char sipVal;
     ::wxImage::RGBValue *sipCpp = reinterpret_cast< ::wxImage::RGBValue *>(sipSelf);

    sipVal = sipCpp->blue;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxImage_RGBValue_blue(void *, PyObject *, PyObject *);}
static int varset_wxImage_RGBValue_blue(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned char sipVal;
     ::wxImage::RGBValue *sipCpp = reinterpret_cast< ::wxImage::RGBValue *>(sipSelf);

    sipVal = sipLong_AsUnsignedChar(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->blue = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxImage_RGBValue_green(void *, PyObject *, PyObject *);}
static PyObject *varget_wxImage_RGBValue_green(void *sipSelf, PyObject *, PyObject *)
{
    unsigned char sipVal;
     ::wxImage::RGBValue *sipCpp = reinterpret_cast< ::wxImage::RGBValue *>(sipSelf);

    sipVal = sipCpp->green;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxImage_RGBValue_green(void *, PyObject *, PyObject *);}
static int varset_wxImage_RGBValue_green(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned char sipVal;
     ::wxImage::RGBValue *sipCpp = reinterpret_cast< ::wxImage::RGBValue *>(sipSelf);

    sipVal = sipLong_AsUnsignedChar(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->green = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxImage_RGBValue_red(void *, PyObject *, PyObject *);}
static PyObject *varget_wxImage_RGBValue_red(void *sipSelf, PyObject *, PyObject *)
{
    unsigned char sipVal;
     ::wxImage::RGBValue *sipCpp = reinterpret_cast< ::wxImage::RGBValue *>(sipSelf);

    sipVal = sipCpp->red;

#if PY_MAJOR_VERSION >= 3
    return PyLong_FromUnsignedLong(sipVal);
#else
    return PyInt_FromLong(sipVal);
#endif
}


extern "C" {static int varset_wxImage_RGBValue_red(void *, PyObject *, PyObject *);}
static int varset_wxImage_RGBValue_red(void *sipSelf, PyObject *sipPy, PyObject *)
{
    unsigned char sipVal;
     ::wxImage::RGBValue *sipCpp = reinterpret_cast< ::wxImage::RGBValue *>(sipSelf);

    sipVal = sipLong_AsUnsignedChar(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->red = sipVal;

    return 0;
}

sipVariableDef variables_wxImage_RGBValue[] = {
    {InstanceVariable, sipName_blue, (PyMethodDef *)varget_wxImage_RGBValue_blue, (PyMethodDef *)varset_wxImage_RGBValue_blue, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_green, (PyMethodDef *)varget_wxImage_RGBValue_green, (PyMethodDef *)varset_wxImage_RGBValue_green, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_red, (PyMethodDef *)varget_wxImage_RGBValue_red, (PyMethodDef *)varset_wxImage_RGBValue_red, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxImage_RGBValue, "RGBValue(r=0, g=0, b=0)\n"
"\n"
"A simple class which stores red, green and blue values as 8 bit\n"
"unsigned integers in the range of 0-255.");


sipClassTypeDef sipTypeDef__core_wxImage_RGBValue = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxImage__RGBValue,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_RGBValue,
        {261, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        3, variables_wxImage_RGBValue,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxImage_RGBValue,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxImage_RGBValue,
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
    dealloc_wxImage_RGBValue,
    assign_wxImage_RGBValue,
    array_wxImage_RGBValue,
    copy_wxImage_RGBValue,
    release_wxImage_RGBValue,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
