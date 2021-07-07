/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

    #include <wx/setup.h>
    #include <wxPython/wxpy_api.h>



extern "C" {static void assign_wxUIntPtr(void *, SIP_SSIZE_T, void *);}
static void assign_wxUIntPtr(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxUIntPtr *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxUIntPtr *>(sipSrc);
}


extern "C" {static void *array_wxUIntPtr(SIP_SSIZE_T);}
static void *array_wxUIntPtr(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxUIntPtr[sipNrElem];
}


extern "C" {static void *copy_wxUIntPtr(const void *, SIP_SSIZE_T);}
static void *copy_wxUIntPtr(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxUIntPtr(reinterpret_cast<const  ::wxUIntPtr *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxUIntPtr(void *, int);}
static void release_wxUIntPtr(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::wxUIntPtr *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxUIntPtr(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxUIntPtr(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxUIntPtr **sipCppPtr = reinterpret_cast< ::wxUIntPtr **>(sipCppPtrV);

        // Allow conversions from any number type
        if (!sipIsErr) {
            if (PyNumber_Check(sipPy))
                return TRUE;
            return FALSE;
        }

        // Do the conversion
        #if SIZEOF_LONG >= SIZEOF_VOID_P
            *sipCppPtr = new wxUIntPtr(wxPyInt_AsUnsignedLong(sipPy));
        #else
            *sipCppPtr = new wxUIntPtr(wxPyInt_AsSize_t(sipPy));
        #endif
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxUIntPtr(void *, PyObject *);}
static PyObject *convertFrom_wxUIntPtr(void *sipCppV, PyObject *)
{
    ::wxUIntPtr *sipCpp = reinterpret_cast< ::wxUIntPtr *>(sipCppV);

        #if SIZEOF_LONG >= SIZEOF_VOID_P
            return wxPyInt_FromUnsignedLong(*sipCpp);
        #else
            return wxPyInt_FromSize_t(*sipCpp);
        #endif
}


sipMappedTypeDef sipTypeDef__core_wxUIntPtr = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_wxUIntPtr,     /* wxUIntPtr */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_wxUIntPtr,
    array_wxUIntPtr,
    copy_wxUIntPtr,
    release_wxUIntPtr,
    convertTo_wxUIntPtr,
    convertFrom_wxUIntPtr
};
