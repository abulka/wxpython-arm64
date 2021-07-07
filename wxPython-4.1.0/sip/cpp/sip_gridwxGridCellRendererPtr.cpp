/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_grid.h"

        #include <wx/object.h>

        #include <wx/grid.h>


PyDoc_STRVAR(doc_wxGridCellRendererPtr_get, "get() -> T\n"
"\n"
"Gets a pointer to the reference counted object to which this class\n"
"points.");

extern "C" {static PyObject *meth_wxGridCellRendererPtr_get(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellRendererPtr_get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridCellRendererPtr *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellRendererPtr, &sipCpp))
        {
             ::wxGridCellRenderer*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->get();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxGridCellRenderer,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellRendererPtr, sipName_get, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellRendererPtr_reset, "reset(ptr)\n"
"\n"
"Reset this class to ptr which points to a reference counted object and\n"
"calls T::DecRef() on the previously owned object.");

extern "C" {static PyObject *meth_wxGridCellRendererPtr_reset(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellRendererPtr_reset(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGridCellRenderer* ptr;
         ::wxGridCellRendererPtr *sipCpp;

        static const char *sipKwdList[] = {
            sipName_ptr,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxGridCellRendererPtr, &sipCpp, sipType_wxGridCellRenderer, &ptr))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->reset(ptr);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellRendererPtr, sipName_reset, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellRendererPtr_release, "release() -> T\n"
"\n"
"Release the owned pointer, making caller responsible for decrementing\n"
"its reference count.");

extern "C" {static PyObject *meth_wxGridCellRendererPtr_release(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellRendererPtr_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGridCellRendererPtr *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellRendererPtr, &sipCpp))
        {
             ::wxGridCellRenderer*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->release();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxGridCellRenderer,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellRendererPtr, sipName_release, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridCellRendererPtr(void *, int);}
static void release_wxGridCellRendererPtr(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGridCellRendererPtr *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxGridCellRendererPtr(void *, SIP_SSIZE_T, void *);}
static void assign_wxGridCellRendererPtr(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxGridCellRendererPtr *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxGridCellRendererPtr *>(sipSrc);
}


extern "C" {static void *array_wxGridCellRendererPtr(SIP_SSIZE_T);}
static void *array_wxGridCellRendererPtr(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxGridCellRendererPtr[sipNrElem];
}


extern "C" {static void *copy_wxGridCellRendererPtr(const void *, SIP_SSIZE_T);}
static void *copy_wxGridCellRendererPtr(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxGridCellRendererPtr(reinterpret_cast<const  ::wxGridCellRendererPtr *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxGridCellRendererPtr(sipSimpleWrapper *);}
static void dealloc_wxGridCellRendererPtr(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridCellRendererPtr(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGridCellRendererPtr(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridCellRendererPtr(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGridCellRendererPtr *sipCpp = SIP_NULLPTR;

    {
         ::wxGridCellRenderer* ptr = 0;

        static const char *sipKwdList[] = {
            sipName_ptr,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_wxGridCellRenderer, &ptr))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGridCellRendererPtr(ptr);
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
        const  ::wxGridCellRendererPtr* tocopy;

        static const char *sipKwdList[] = {
            sipName_tocopy,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxGridCellRendererPtr, &tocopy))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGridCellRendererPtr(*tocopy);
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


static PyMethodDef methods_wxGridCellRendererPtr[] = {
    {SIP_MLNAME_CAST(sipName_get), meth_wxGridCellRendererPtr_get, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellRendererPtr_get)},
    {SIP_MLNAME_CAST(sipName_release), meth_wxGridCellRendererPtr_release, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellRendererPtr_release)},
    {SIP_MLNAME_CAST(sipName_reset), SIP_MLMETH_CAST(meth_wxGridCellRendererPtr_reset), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellRendererPtr_reset)}
};

PyDoc_STRVAR(doc_wxGridCellRendererPtr, "ObjectDataPtr(ptr=None)\n"
"ObjectDataPtr(tocopy)\n"
"\n"
"This is an helper template class primarily written to avoid memory\n"
"leaks because of missing calls to wxRefCounter::DecRef() and\n"
"wxObjectRefData::DecRef().");


sipClassTypeDef sipTypeDef__grid_wxGridCellRendererPtr = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridCellRendererPtr,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridCellRendererPtr,
        {0, 0, 1},
        3, methods_wxGridCellRendererPtr,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridCellRendererPtr,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxGridCellRendererPtr,
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
    dealloc_wxGridCellRendererPtr,
    assign_wxGridCellRendererPtr,
    array_wxGridCellRendererPtr,
    copy_wxGridCellRendererPtr,
    release_wxGridCellRendererPtr,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
