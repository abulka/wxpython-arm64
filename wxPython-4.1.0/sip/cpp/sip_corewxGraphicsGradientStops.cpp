/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/graphics.h>

        #include <wx/colour.h>
        #include <wx/graphics.h>
    SIP_SSIZE_T _wxGraphicsGradientStops___len__(wxGraphicsGradientStops* self)
    {
        return (SIP_SSIZE_T)self->GetCount();
    }
    wxGraphicsGradientStop* _wxGraphicsGradientStops___getitem__(wxGraphicsGradientStops* self, ulong n)
    {
        return new wxGraphicsGradientStop(self->Item(n));
    }


PyDoc_STRVAR(doc_wxGraphicsGradientStops_Add, "Add(stop)\n"
"Add(col, pos)\n"
"\n"
"Add a new stop.\n"
"");

extern "C" {static PyObject *meth_wxGraphicsGradientStops_Add(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsGradientStops_Add(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGraphicsGradientStop* stop;
         ::wxGraphicsGradientStops *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stop,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxGraphicsGradientStops, &sipCpp, sipType_wxGraphicsGradientStop, &stop))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Add(*stop);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::wxColour* col;
        int colState = 0;
        float pos;
         ::wxGraphicsGradientStops *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
            sipName_pos,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1f", &sipSelf, sipType_wxGraphicsGradientStops, &sipCpp, sipType_wxColour, &col, &colState, &pos))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Add(*col,pos);
            Py_END_ALLOW_THREADS
            sipReleaseType(col,sipType_wxColour,colState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphicsGradientStops, sipName_Add, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsGradientStops_Item, "Item(n) -> GraphicsGradientStop\n"
"\n"
"Returns the stop at the given index.");

extern "C" {static PyObject *meth_wxGraphicsGradientStops_Item(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsGradientStops_Item(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint n;
        const  ::wxGraphicsGradientStops *sipCpp;

        static const char *sipKwdList[] = {
            sipName_n,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxGraphicsGradientStops, &sipCpp, &n))
        {
             ::wxGraphicsGradientStop*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxGraphicsGradientStop(sipCpp->Item(n));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGraphicsGradientStop,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphicsGradientStops, sipName_Item, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsGradientStops_GetCount, "GetCount() -> size_t\n"
"\n"
"Returns the number of stops.");

extern "C" {static PyObject *meth_wxGraphicsGradientStops_GetCount(PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsGradientStops_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGraphicsGradientStops *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGraphicsGradientStops, &sipCpp))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCount();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphicsGradientStops, sipName_GetCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsGradientStops_SetStartColour, "SetStartColour(col)\n"
"\n"
"Set the start colour to col.");

extern "C" {static PyObject *meth_wxGraphicsGradientStops_SetStartColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsGradientStops_SetStartColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxColour* col;
        int colState = 0;
         ::wxGraphicsGradientStops *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxGraphicsGradientStops, &sipCpp, sipType_wxColour, &col, &colState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetStartColour(*col);
            Py_END_ALLOW_THREADS
            sipReleaseType(col,sipType_wxColour,colState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphicsGradientStops, sipName_SetStartColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsGradientStops_GetStartColour, "GetStartColour() -> Colour\n"
"\n"
"Returns the start colour.");

extern "C" {static PyObject *meth_wxGraphicsGradientStops_GetStartColour(PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsGradientStops_GetStartColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGraphicsGradientStops *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGraphicsGradientStops, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetStartColour());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphicsGradientStops, sipName_GetStartColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsGradientStops_SetEndColour, "SetEndColour(col)\n"
"\n"
"Set the end colour to col.");

extern "C" {static PyObject *meth_wxGraphicsGradientStops_SetEndColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsGradientStops_SetEndColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxColour* col;
        int colState = 0;
         ::wxGraphicsGradientStops *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxGraphicsGradientStops, &sipCpp, sipType_wxColour, &col, &colState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetEndColour(*col);
            Py_END_ALLOW_THREADS
            sipReleaseType(col,sipType_wxColour,colState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphicsGradientStops, sipName_SetEndColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGraphicsGradientStops_GetEndColour, "GetEndColour() -> Colour\n"
"\n"
"Returns the end colour.");

extern "C" {static PyObject *meth_wxGraphicsGradientStops_GetEndColour(PyObject *, PyObject *);}
static PyObject *meth_wxGraphicsGradientStops_GetEndColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGraphicsGradientStops *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGraphicsGradientStops, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetEndColour());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphicsGradientStops, sipName_GetEndColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxGraphicsGradientStops___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxGraphicsGradientStops___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxGraphicsGradientStops *sipCpp = reinterpret_cast< ::wxGraphicsGradientStops *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxGraphicsGradientStops));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::ulong n;

        if (sipParseArgs(&sipParseErr, sipArg, "1m", &n))
        {
             ::wxGraphicsGradientStop*sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxGraphicsGradientStops___getitem__(sipCpp, n);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGraphicsGradientStop,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphicsGradientStops, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static SIP_SSIZE_T slot_wxGraphicsGradientStops___len__(PyObject *);}
static SIP_SSIZE_T slot_wxGraphicsGradientStops___len__(PyObject *sipSelf)
{
     ::wxGraphicsGradientStops *sipCpp = reinterpret_cast< ::wxGraphicsGradientStops *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxGraphicsGradientStops));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxGraphicsGradientStops___len__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGraphicsGradientStops(void *, int);}
static void release_wxGraphicsGradientStops(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGraphicsGradientStops *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxGraphicsGradientStops(void *, SIP_SSIZE_T, void *);}
static void assign_wxGraphicsGradientStops(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxGraphicsGradientStops *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxGraphicsGradientStops *>(sipSrc);
}


extern "C" {static void *array_wxGraphicsGradientStops(SIP_SSIZE_T);}
static void *array_wxGraphicsGradientStops(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxGraphicsGradientStops[sipNrElem];
}


extern "C" {static void *copy_wxGraphicsGradientStops(const void *, SIP_SSIZE_T);}
static void *copy_wxGraphicsGradientStops(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxGraphicsGradientStops(reinterpret_cast<const  ::wxGraphicsGradientStops *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxGraphicsGradientStops(sipSimpleWrapper *);}
static void dealloc_wxGraphicsGradientStops(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGraphicsGradientStops(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGraphicsGradientStops(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGraphicsGradientStops(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGraphicsGradientStops *sipCpp = SIP_NULLPTR;

    {
         ::wxColour startColdef = wxTransparentColour;
         ::wxColour* startCol = &startColdef;
        int startColState = 0;
         ::wxColour endColdef = wxTransparentColour;
         ::wxColour* endCol = &endColdef;
        int endColState = 0;

        static const char *sipKwdList[] = {
            sipName_startCol,
            sipName_endCol,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1J1", sipType_wxColour, &startCol, &startColState, sipType_wxColour, &endCol, &endColState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGraphicsGradientStops(*startCol,*endCol);
            Py_END_ALLOW_THREADS
            sipReleaseType(startCol,sipType_wxColour,startColState);
            sipReleaseType(endCol,sipType_wxColour,endColState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxGraphicsGradientStops* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGraphicsGradientStops, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGraphicsGradientStops(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxGraphicsGradientStops[] = {
    {(void *)slot_wxGraphicsGradientStops___getitem__, getitem_slot},
    {(void *)slot_wxGraphicsGradientStops___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxGraphicsGradientStops[] = {
    {SIP_MLNAME_CAST(sipName_Add), SIP_MLMETH_CAST(meth_wxGraphicsGradientStops_Add), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGraphicsGradientStops_Add)},
    {SIP_MLNAME_CAST(sipName_GetCount), meth_wxGraphicsGradientStops_GetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGraphicsGradientStops_GetCount)},
    {SIP_MLNAME_CAST(sipName_GetEndColour), meth_wxGraphicsGradientStops_GetEndColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGraphicsGradientStops_GetEndColour)},
    {SIP_MLNAME_CAST(sipName_GetStartColour), meth_wxGraphicsGradientStops_GetStartColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGraphicsGradientStops_GetStartColour)},
    {SIP_MLNAME_CAST(sipName_Item), SIP_MLMETH_CAST(meth_wxGraphicsGradientStops_Item), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGraphicsGradientStops_Item)},
    {SIP_MLNAME_CAST(sipName_SetEndColour), SIP_MLMETH_CAST(meth_wxGraphicsGradientStops_SetEndColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGraphicsGradientStops_SetEndColour)},
    {SIP_MLNAME_CAST(sipName_SetStartColour), SIP_MLMETH_CAST(meth_wxGraphicsGradientStops_SetStartColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGraphicsGradientStops_SetStartColour)}
};

sipVariableDef variables_wxGraphicsGradientStops[] = {
    {PropertyVariable, sipName_StartColour, &methods_wxGraphicsGradientStops[3], &methods_wxGraphicsGradientStops[6], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_EndColour, &methods_wxGraphicsGradientStops[2], &methods_wxGraphicsGradientStops[5], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Count, &methods_wxGraphicsGradientStops[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxGraphicsGradientStops, "GraphicsGradientStops(startCol=TransparentColour, endCol=TransparentColour)\n"
"\n"
"Represents a collection of wxGraphicGradientStop values for use with\n"
"CreateLinearGradientBrush and CreateRadialGradientBrush.");


sipClassTypeDef sipTypeDef__core_wxGraphicsGradientStops = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGraphicsGradientStops,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GraphicsGradientStops,
        {0, 0, 1},
        7, methods_wxGraphicsGradientStops,
        0, SIP_NULLPTR,
        3, variables_wxGraphicsGradientStops,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGraphicsGradientStops,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxGraphicsGradientStops,
    init_type_wxGraphicsGradientStops,
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
    dealloc_wxGraphicsGradientStops,
    assign_wxGraphicsGradientStops,
    array_wxGraphicsGradientStops,
    copy_wxGraphicsGradientStops,
    release_wxGraphicsGradientStops,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
