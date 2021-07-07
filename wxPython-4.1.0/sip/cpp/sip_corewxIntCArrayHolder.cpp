/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

#include "arrayholder.h"



/* Call the instance's destructor. */
extern "C" {static void release_wxIntCArrayHolder(void *, int);}
static void release_wxIntCArrayHolder(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxIntCArrayHolder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxIntCArrayHolder(sipSimpleWrapper *);}
static void dealloc_wxIntCArrayHolder(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxIntCArrayHolder(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxIntCArrayHolder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxIntCArrayHolder(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxIntCArrayHolder *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxIntCArrayHolder();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}

PyDoc_STRVAR(doc_wxIntCArrayHolder, "\1IntCArrayHolder()");


sipClassTypeDef sipTypeDef__core_wxIntCArrayHolder = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxIntCArrayHolder,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_IntCArrayHolder,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxIntCArrayHolder,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxIntCArrayHolder,
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
    dealloc_wxIntCArrayHolder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxIntCArrayHolder,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
