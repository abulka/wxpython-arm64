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
extern "C" {static void release_wxLogNull(void *, int);}
static void release_wxLogNull(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxLogNull *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxLogNull(void *, SIP_SSIZE_T, void *);}
static void assign_wxLogNull(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxLogNull *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxLogNull *>(sipSrc);
}


extern "C" {static void *array_wxLogNull(SIP_SSIZE_T);}
static void *array_wxLogNull(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxLogNull[sipNrElem];
}


extern "C" {static void *copy_wxLogNull(const void *, SIP_SSIZE_T);}
static void *copy_wxLogNull(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxLogNull(reinterpret_cast<const  ::wxLogNull *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxLogNull(sipSimpleWrapper *);}
static void dealloc_wxLogNull(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxLogNull(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxLogNull(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxLogNull(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxLogNull *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxLogNull();
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
        const  ::wxLogNull* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxLogNull, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxLogNull(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}

PyDoc_STRVAR(doc_wxLogNull, "LogNull()\n"
"\n"
"This class allows you to temporarily suspend logging.");


sipClassTypeDef sipTypeDef__core_wxLogNull = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxLogNull,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_LogNull,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxLogNull,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxLogNull,
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
    dealloc_wxLogNull,
    assign_wxLogNull,
    array_wxLogNull,
    copy_wxLogNull,
    release_wxLogNull,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
