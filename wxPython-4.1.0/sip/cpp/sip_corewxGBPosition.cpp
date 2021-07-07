/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/gbsizer.h>

    PyObject* _wxGBPosition_Get(wxGBPosition* self)
    {
        wxPyThreadBlocker blocker;
        return sipBuildResult(0, "(ii)", self->GetRow(), self->GetCol());
    }
    void _wxGBPosition_Set(wxGBPosition* self, int row, int col)
    {
        self->SetRow(row);
        self->SetCol(col);
    }


PyDoc_STRVAR(doc_wxGBPosition_GetCol, "GetCol() -> int\n"
"\n"
"Get the current column value.");

extern "C" {static PyObject *meth_wxGBPosition_GetCol(PyObject *, PyObject *);}
static PyObject *meth_wxGBPosition_GetCol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGBPosition, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCol();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GBPosition, sipName_GetCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBPosition_GetRow, "GetRow() -> int\n"
"\n"
"Get the current row value.");

extern "C" {static PyObject *meth_wxGBPosition_GetRow(PyObject *, PyObject *);}
static PyObject *meth_wxGBPosition_GetRow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGBPosition, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetRow();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GBPosition, sipName_GetRow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBPosition_SetCol, "SetCol(col)\n"
"\n"
"Set a new column value.");

extern "C" {static PyObject *meth_wxGBPosition_SetCol(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGBPosition_SetCol(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int col;
         ::wxGBPosition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxGBPosition, &sipCpp, &col))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetCol(col);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GBPosition, sipName_SetCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBPosition_SetRow, "SetRow(row)\n"
"\n"
"Set a new row value.");

extern "C" {static PyObject *meth_wxGBPosition_SetRow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGBPosition_SetRow(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int row;
         ::wxGBPosition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxGBPosition, &sipCpp, &row))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetRow(row);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GBPosition, sipName_SetRow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBPosition_Get, "Get() -> (row, col)\n"
"\n"
"Return the row and col properties as a tuple.");

extern "C" {static PyObject *meth_wxGBPosition_Get(PyObject *, PyObject *);}
static PyObject *meth_wxGBPosition_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGBPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGBPosition, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxGBPosition_Get(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GBPosition, sipName_Get, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGBPosition_Set, "Set(row=0, col=0)\n"
"\n"
"Set both the row and column properties.");

extern "C" {static PyObject *meth_wxGBPosition_Set(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGBPosition_Set(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int row = 0;
        int col = 0;
         ::wxGBPosition *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|ii", &sipSelf, sipType_wxGBPosition, &sipCpp, &row, &col))
        {
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxGBPosition_Set(sipCpp, row, col);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GBPosition, sipName_Set, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxGBPosition___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxGBPosition___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxGBPosition *sipCpp = reinterpret_cast< ::wxGBPosition *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxGBPosition));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBPosition* p;
        int pState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxGBPosition, &p, &pState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxGBPosition::operator==(*p);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBPosition *>(p),sipType_wxGBPosition,pState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, eq_slot, sipType_wxGBPosition, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_wxGBPosition___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxGBPosition___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxGBPosition *sipCpp = reinterpret_cast< ::wxGBPosition *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxGBPosition));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGBPosition* p;
        int pState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxGBPosition, &p, &pState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxGBPosition::operator!=(*p);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBPosition *>(p),sipType_wxGBPosition,pState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, ne_slot, sipType_wxGBPosition, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGBPosition(void *, int);}
static void release_wxGBPosition(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGBPosition *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxGBPosition(void *, SIP_SSIZE_T, void *);}
static void assign_wxGBPosition(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxGBPosition *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxGBPosition *>(sipSrc);
}


extern "C" {static void *array_wxGBPosition(SIP_SSIZE_T);}
static void *array_wxGBPosition(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxGBPosition[sipNrElem];
}


extern "C" {static void *copy_wxGBPosition(const void *, SIP_SSIZE_T);}
static void *copy_wxGBPosition(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxGBPosition(reinterpret_cast<const  ::wxGBPosition *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxGBPosition(sipSimpleWrapper *);}
static void dealloc_wxGBPosition(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGBPosition(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGBPosition(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGBPosition(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGBPosition *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGBPosition();
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
        int row;
        int col;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii", &row, &col))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGBPosition(row,col);
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
        const  ::wxGBPosition* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_wxGBPosition, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGBPosition(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxGBPosition *>(a0),sipType_wxGBPosition,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_wxGBPosition(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxGBPosition(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxGBPosition **sipCppPtr = reinterpret_cast< ::wxGBPosition **>(sipCppPtrV);

        // is it just a typecheck?
        if (!sipIsErr) {
            // is it already an instance of wxGBPosition?
            if (sipCanConvertToType(sipPy, sipType_wxGBPosition, SIP_NO_CONVERTORS))
                return 1;
        
            if (wxPyNumberSequenceCheck(sipPy, 2)) {
                return 1;
            }
            return 0;
        }
        
         // otherwise do the conversion
         if (sipCanConvertToType(sipPy, sipType_wxGBPosition, SIP_NO_CONVERTORS)) {
             // Just fetch the existing instance
             *sipCppPtr = reinterpret_cast<wxGBPosition*>(sipConvertToType(
                     sipPy, sipType_wxGBPosition, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));
             return 0;  // not a new instance
         }
        
         // or create a new instance
         PyObject* o1 = PySequence_ITEM(sipPy, 0);
         PyObject* o2 = PySequence_ITEM(sipPy, 1);
         *sipCppPtr = new wxGBPosition(wxPyInt_AsLong(o1), wxPyInt_AsLong(o2));
         Py_DECREF(o1);
         Py_DECREF(o2);
         return SIP_TEMPORARY;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxGBPosition[] = {
    {(void *)slot_wxGBPosition___eq__, eq_slot},
    {(void *)slot_wxGBPosition___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxGBPosition[] = {
    {SIP_MLNAME_CAST(sipName_Get), meth_wxGBPosition_Get, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGBPosition_Get)},
    {SIP_MLNAME_CAST(sipName_GetCol), meth_wxGBPosition_GetCol, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGBPosition_GetCol)},
    {SIP_MLNAME_CAST(sipName_GetRow), meth_wxGBPosition_GetRow, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGBPosition_GetRow)},
    {SIP_MLNAME_CAST(sipName_Set), SIP_MLMETH_CAST(meth_wxGBPosition_Set), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGBPosition_Set)},
    {SIP_MLNAME_CAST(sipName_SetCol), SIP_MLMETH_CAST(meth_wxGBPosition_SetCol), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGBPosition_SetCol)},
    {SIP_MLNAME_CAST(sipName_SetRow), SIP_MLMETH_CAST(meth_wxGBPosition_SetRow), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGBPosition_SetRow)}
};

sipVariableDef variables_wxGBPosition[] = {
    {PropertyVariable, sipName_col, &methods_wxGBPosition[1], &methods_wxGBPosition[4], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_row, &methods_wxGBPosition[2], &methods_wxGBPosition[5], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Col, &methods_wxGBPosition[1], &methods_wxGBPosition[4], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Row, &methods_wxGBPosition[2], &methods_wxGBPosition[5], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxGBPosition, "GBPosition()\n"
"GBPosition(row, col)\n"
"\n"
"This class represents the position of an item in a virtual grid of\n"
"rows and columns managed by a wxGridBagSizer.");


sipClassTypeDef sipTypeDef__core_wxGBPosition = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGBPosition,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GBPosition,
        {0, 0, 1},
        6, methods_wxGBPosition,
        0, SIP_NULLPTR,
        4, variables_wxGBPosition,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGBPosition,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxGBPosition,
    init_type_wxGBPosition,
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
    dealloc_wxGBPosition,
    assign_wxGBPosition,
    array_wxGBPosition,
    copy_wxGBPosition,
    release_wxGBPosition,
    SIP_NULLPTR,
    convertTo_wxGBPosition,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
