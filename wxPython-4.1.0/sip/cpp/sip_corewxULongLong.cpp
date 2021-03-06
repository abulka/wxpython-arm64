/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

    #include <wx/longlong.h>



extern "C" {static void assign_wxULongLong(void *, SIP_SSIZE_T, void *);}
static void assign_wxULongLong(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxULongLong *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxULongLong *>(sipSrc);
}


extern "C" {static void *array_wxULongLong(SIP_SSIZE_T);}
static void *array_wxULongLong(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxULongLong[sipNrElem];
}


extern "C" {static void *copy_wxULongLong(const void *, SIP_SSIZE_T);}
static void *copy_wxULongLong(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxULongLong(reinterpret_cast<const  ::wxULongLong *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxULongLong(void *, int);}
static void release_wxULongLong(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::wxULongLong *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxULongLong(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxULongLong(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxULongLong **sipCppPtr = reinterpret_cast< ::wxULongLong **>(sipCppPtrV);

        // Code to test a PyObject for compatibility
        if (!sipIsErr) {
            if (PyNumber_Check(sipPy))
                return TRUE;
            return FALSE;
        }

        // Code to convert from a compatible PyObject
        #if wxUSE_LONGLONG_NATIVE
            *sipCppPtr = new wxULongLong(PyLong_AsUnsignedLongLong(sipPy));
        #else
            #error TODO. Get the hi/lo 32-bit dwords to construct the wxLongLong
        #endif
        return sipGetState(sipTransferObj);

}


extern "C" {static PyObject *convertFrom_wxULongLong(void *, PyObject *);}
static PyObject *convertFrom_wxULongLong(void *sipCppV, PyObject *)
{
    ::wxULongLong *sipCpp = reinterpret_cast< ::wxULongLong *>(sipCppV);

        #if wxUSE_LONGLONG_NATIVE
            return PyLong_FromUnsignedLongLong(sipCpp->GetValue());
        #else
            #error This needs testing and fixing for unsigned
            // Convert a wxLongLong to a Python Long by getting the hi/lo
            // dwords, then shifting and or-ing them together
            PyObject *hi, *lo, *shifter, *shifted, *result;
            hi = PyLong_FromLong( sipCpp->GetHi() );
            lo = PyLong_FromLong( sipCpp->GetLo() );
            shifter = PyLong_FromLong(32);
            shifted = PyNumber_Lshift(hi, shifter);
            result = PyNumber_Or(shifted, lo);
            Py_DECREF(hi);
            Py_DECREF(lo);
            Py_DECREF(shifter);
            Py_DECREF(shifted);
            return result;
        #endif
}


sipMappedTypeDef sipTypeDef__core_wxULongLong = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_wxULongLong,     /* wxULongLong */
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
    assign_wxULongLong,
    array_wxULongLong,
    copy_wxULongLong,
    release_wxULongLong,
    convertTo_wxULongLong,
    convertFrom_wxULongLong
};
