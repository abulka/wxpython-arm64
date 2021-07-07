/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_grid.h"

        #include <wx/grid.h>

        #include <wx/grid.h>


PyDoc_STRVAR(doc_wxGridUpdateLocker_Create, "Create(grid)\n"
"\n"
"This method can be called if the object had been constructed using the\n"
"default constructor.");

extern "C" {static PyObject *meth_wxGridUpdateLocker_Create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridUpdateLocker_Create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGrid* grid;
         ::wxGridUpdateLocker *sipCpp;

        static const char *sipKwdList[] = {
            sipName_grid,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxGridUpdateLocker, &sipCpp, sipType_wxGrid, &grid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Create(grid);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridUpdateLocker, sipName_Create, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridUpdateLocker(void *, int);}
static void release_wxGridUpdateLocker(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGridUpdateLocker *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGridUpdateLocker(sipSimpleWrapper *);}
static void dealloc_wxGridUpdateLocker(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridUpdateLocker(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGridUpdateLocker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridUpdateLocker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGridUpdateLocker *sipCpp = SIP_NULLPTR;

    {
         ::wxGrid* grid = 0;

        static const char *sipKwdList[] = {
            sipName_grid,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_wxGrid, &grid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGridUpdateLocker(grid);
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


static PyMethodDef methods_wxGridUpdateLocker[] = {
    {SIP_MLNAME_CAST(sipName_Create), SIP_MLMETH_CAST(meth_wxGridUpdateLocker_Create), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridUpdateLocker_Create)}
};

PyDoc_STRVAR(doc_wxGridUpdateLocker, "GridUpdateLocker(grid=None)\n"
"\n"
"This small class can be used to prevent wxGrid from redrawing during\n"
"its lifetime by calling wxGrid::BeginBatch() in its constructor and\n"
"wxGrid::EndBatch() in its destructor.");


sipClassTypeDef sipTypeDef__grid_wxGridUpdateLocker = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridUpdateLocker,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridUpdateLocker,
        {0, 0, 1},
        1, methods_wxGridUpdateLocker,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridUpdateLocker,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxGridUpdateLocker,
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
    dealloc_wxGridUpdateLocker,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGridUpdateLocker,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};