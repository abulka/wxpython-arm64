/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_dataview.h"




extern "C" {static void assign_wxDVCVariant(void *, SIP_SSIZE_T, void *);}
static void assign_wxDVCVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxDVCVariant *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxDVCVariant *>(sipSrc);
}


extern "C" {static void *array_wxDVCVariant(SIP_SSIZE_T);}
static void *array_wxDVCVariant(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxDVCVariant[sipNrElem];
}


extern "C" {static void *copy_wxDVCVariant(const void *, SIP_SSIZE_T);}
static void *copy_wxDVCVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxDVCVariant(reinterpret_cast<const  ::wxDVCVariant *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxDVCVariant(void *, int);}
static void release_wxDVCVariant(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::wxDVCVariant *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxDVCVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxDVCVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxDVCVariant **sipCppPtr = reinterpret_cast< ::wxDVCVariant **>(sipCppPtrV);

        // Code to test a PyObject for compatibility.
        if (!sipIsErr) {
            // Any type should work since we'll just use the PyObject directly
            // if the type is not one that is explicitly supported.
            return TRUE;
        }

        // Code to create a new wxVariant from the PyObject
        wxVariant* value =  new wxVariant(wxDVCVariant_in_helper(sipPy));
        *sipCppPtr = value;
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxDVCVariant(void *, PyObject *);}
static PyObject *convertFrom_wxDVCVariant(void *sipCppV, PyObject *)
{
    ::wxDVCVariant *sipCpp = reinterpret_cast< ::wxDVCVariant *>(sipCppV);

        // Code to convert a wxVariant to a PyObject.
        if (sipCpp == NULL) {
            return Py_None;
        } else {
            return wxDVCVariant_out_helper(*sipCpp);
        }
}


sipMappedTypeDef sipTypeDef__dataview_wxDVCVariant = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_wxDVCVariant,     /* wxDVCVariant */
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
    assign_wxDVCVariant,
    array_wxDVCVariant,
    copy_wxDVCVariant,
    release_wxDVCVariant,
    convertTo_wxDVCVariant,
    convertFrom_wxDVCVariant
};
