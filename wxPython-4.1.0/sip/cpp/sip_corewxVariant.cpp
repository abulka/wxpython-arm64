/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"




extern "C" {static void assign_wxVariant(void *, SIP_SSIZE_T, void *);}
static void assign_wxVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxVariant *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxVariant *>(sipSrc);
}


extern "C" {static void *array_wxVariant(SIP_SSIZE_T);}
static void *array_wxVariant(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxVariant[sipNrElem];
}


extern "C" {static void *copy_wxVariant(const void *, SIP_SSIZE_T);}
static void *copy_wxVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxVariant(reinterpret_cast<const  ::wxVariant *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxVariant(void *, int);}
static void release_wxVariant(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::wxVariant *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxVariant **sipCppPtr = reinterpret_cast< ::wxVariant **>(sipCppPtrV);

        // Code to test a PyObject for compatibility.
        if (!sipIsErr) {
            // Any type should work since we'll just use the PyObject directly
            // if the type is not one that is explicitly supported.
            return TRUE;
        }

        // Code to create a new wxVariant from the PyObject
        wxVariant* value =  new wxVariant(wxVariant_in_helper(sipPy));
        *sipCppPtr = value;
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxVariant(void *, PyObject *);}
static PyObject *convertFrom_wxVariant(void *sipCppV, PyObject *)
{
    ::wxVariant *sipCpp = reinterpret_cast< ::wxVariant *>(sipCppV);

        // Code to convert a wxVariant to a PyObject.
        if (sipCpp == NULL) {
            return Py_None;
        } else {
            return wxVariant_out_helper(*sipCpp);
        }
}


sipMappedTypeDef sipTypeDef__core_wxVariant = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_ALLOW_NONE|SIP_TYPE_MAPPED,
        sipNameNr_wxVariant,     /* wxVariant */
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
    assign_wxVariant,
    array_wxVariant,
    copy_wxVariant,
    release_wxVariant,
    convertTo_wxVariant,
    convertFrom_wxVariant
};
