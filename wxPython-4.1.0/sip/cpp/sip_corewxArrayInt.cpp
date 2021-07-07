/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"




extern "C" {static void assign_wxArrayInt(void *, SIP_SSIZE_T, void *);}
static void assign_wxArrayInt(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxArrayInt *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxArrayInt *>(sipSrc);
}


extern "C" {static void *array_wxArrayInt(SIP_SSIZE_T);}
static void *array_wxArrayInt(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxArrayInt[sipNrElem];
}


extern "C" {static void *copy_wxArrayInt(const void *, SIP_SSIZE_T);}
static void *copy_wxArrayInt(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxArrayInt(reinterpret_cast<const  ::wxArrayInt *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxArrayInt(void *, int);}
static void release_wxArrayInt(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::wxArrayInt *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxArrayInt(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxArrayInt(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxArrayInt **sipCppPtr = reinterpret_cast< ::wxArrayInt **>(sipCppPtrV);

        // Code to test a PyObject for compatibility
        if (!sipIsErr) {
            return (PySequence_Check(sipPy) &&
                    !(PyBytes_Check(sipPy) || PyUnicode_Check(sipPy)));
        }

        // Code to create a new wxArrayInt and convert a compatible PyObject
        wxArrayInt *array = new wxArrayInt;
        Py_ssize_t i, len = PySequence_Length(sipPy);
        for (i=0; i<len; i++) {
            PyObject* item = PySequence_GetItem(sipPy, i);

            // Ensure each item is a number object
            if ( !PyNumber_Check(item) ) {
                // raise a TypeError if not
                PyErr_Format(PyExc_TypeError,
                             "Item at index %zd has type '%s' but a sequence of numbers is expected",
                             i, sipPyTypeName(Py_TYPE(item)));
                delete array;
                Py_DECREF(item);
                *sipIsErr = 1;
                return 0;
            }

            // Convert to Integer
            PyObject* number = wxPyNumber_Int(item);
            if (PyErr_Occurred()) {
                *sipIsErr = 1;
                delete array;
                Py_DECREF(item);
                return 0;
            }
            // And add it to the array
            array->Add(wxPyInt_AS_LONG(number));
            Py_DECREF(item);
            Py_DECREF(number);
        }
        *sipCppPtr = array;
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxArrayInt(void *, PyObject *);}
static PyObject *convertFrom_wxArrayInt(void *sipCppV, PyObject *)
{
    ::wxArrayInt *sipCpp = reinterpret_cast< ::wxArrayInt *>(sipCppV);

        // Code to convert a wxArrayInt to a Python list of integers.
        PyObject* list = PyList_New(0);
        for (size_t i=0; i < sipCpp->GetCount(); i++) {
            PyObject* number = wxPyInt_FromLong(sipCpp->Item(i));
            PyList_Append(list, number);
            Py_DECREF(number);
        }
        return list;
}


sipMappedTypeDef sipTypeDef__core_wxArrayInt = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_wxArrayInt,     /* wxArrayInt */
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
    assign_wxArrayInt,
    array_wxArrayInt,
    copy_wxArrayInt,
    release_wxArrayInt,
    convertTo_wxArrayInt,
    convertFrom_wxArrayInt
};
