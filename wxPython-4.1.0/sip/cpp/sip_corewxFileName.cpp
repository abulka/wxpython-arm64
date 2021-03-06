/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"




extern "C" {static void assign_wxFileName(void *, SIP_SSIZE_T, void *);}
static void assign_wxFileName(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxFileName *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxFileName *>(sipSrc);
}


extern "C" {static void *array_wxFileName(SIP_SSIZE_T);}
static void *array_wxFileName(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxFileName[sipNrElem];
}


extern "C" {static void *copy_wxFileName(const void *, SIP_SSIZE_T);}
static void *copy_wxFileName(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxFileName(reinterpret_cast<const  ::wxFileName *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxFileName(void *, int);}
static void release_wxFileName(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::wxFileName *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxFileName(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxFileName(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxFileName **sipCppPtr = reinterpret_cast< ::wxFileName **>(sipCppPtrV);

        // Code to test a PyObject for compatibility with wxFileName
        if (!sipIsErr) {
            if (PyBytes_Check(sipPy) || PyUnicode_Check(sipPy))
                return TRUE;
            return FALSE;
        }

        // Code to convert a compatible PyObject to a wxFileName
        *sipCppPtr = new wxFileName(Py2wxString(sipPy));
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxFileName(void *, PyObject *);}
static PyObject *convertFrom_wxFileName(void *sipCppV, PyObject *)
{
    ::wxFileName *sipCpp = reinterpret_cast< ::wxFileName *>(sipCppV);

        // Convert a wxString to a Python Unicode object.  See wxpy_api.sip
        return wx2PyString(sipCpp->GetFullPath());
}


sipMappedTypeDef sipTypeDef__core_wxFileName = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_wxFileName,     /* wxFileName */
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
    assign_wxFileName,
    array_wxFileName,
    copy_wxFileName,
    release_wxFileName,
    convertTo_wxFileName,
    convertFrom_wxFileName
};
