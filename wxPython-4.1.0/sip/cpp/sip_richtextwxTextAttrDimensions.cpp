/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_richtext.h"

        #include <wx/richtext/richtextbuffer.h>

        #include <wx/richtext/richtextbuffer.h>
    int _wxTextAttrDimensions___nonzero__(wxTextAttrDimensions* self)
    {
        return self->IsValid();
    }
    int _wxTextAttrDimensions___bool__(wxTextAttrDimensions* self)
    {
        return self->IsValid();
    }


PyDoc_STRVAR(doc_wxTextAttrDimensions_Reset, "Reset()\n"
"\n"
"Resets the value and flags for all dimensions.");

extern "C" {static PyObject *meth_wxTextAttrDimensions_Reset(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrDimensions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Reset();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_Reset, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_EqPartial, "EqPartial(dims, weakTest=True) -> bool\n"
"\n"
"Partial equality test.");

extern "C" {static PyObject *meth_wxTextAttrDimensions_EqPartial(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_EqPartial(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrDimensions* dims;
        bool weakTest = 1;
        const  ::wxTextAttrDimensions *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dims,
            sipName_weakTest,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9|b", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp, sipType_wxTextAttrDimensions, &dims, &weakTest))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->EqPartial(*dims,weakTest);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_EqPartial, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_Apply, "Apply(dims, compareWith=None) -> bool\n"
"\n"
"Apply to 'this', but not if the same as compareWith.");

extern "C" {static PyObject *meth_wxTextAttrDimensions_Apply(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_Apply(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrDimensions* dims;
        const  ::wxTextAttrDimensions* compareWith = 0;
         ::wxTextAttrDimensions *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dims,
            sipName_compareWith,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9|J8", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp, sipType_wxTextAttrDimensions, &dims, sipType_wxTextAttrDimensions, &compareWith))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Apply(*dims,compareWith);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_Apply, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_CollectCommonAttributes, "CollectCommonAttributes(attr, clashingAttr, absentAttr)\n"
"\n"
"Collects the attributes that are common to a range of content,\n"
"building up a note of which attributes are absent in some objects and\n"
"which clash in some objects.");

extern "C" {static PyObject *meth_wxTextAttrDimensions_CollectCommonAttributes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_CollectCommonAttributes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrDimensions* attr;
         ::wxTextAttrDimensions* clashingAttr;
         ::wxTextAttrDimensions* absentAttr;
         ::wxTextAttrDimensions *sipCpp;

        static const char *sipKwdList[] = {
            sipName_attr,
            sipName_clashingAttr,
            sipName_absentAttr,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J9", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp, sipType_wxTextAttrDimensions, &attr, sipType_wxTextAttrDimensions, &clashingAttr, sipType_wxTextAttrDimensions, &absentAttr))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->CollectCommonAttributes(*attr,*clashingAttr,*absentAttr);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_CollectCommonAttributes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_RemoveStyle, "RemoveStyle(attr) -> bool\n"
"\n"
"Remove specified attributes from this object.");

extern "C" {static PyObject *meth_wxTextAttrDimensions_RemoveStyle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_RemoveStyle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrDimensions* attr;
         ::wxTextAttrDimensions *sipCpp;

        static const char *sipKwdList[] = {
            sipName_attr,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp, sipType_wxTextAttrDimensions, &attr))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->RemoveStyle(*attr);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_RemoveStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_GetLeft, "GetLeft() -> TextAttrDimension");

extern "C" {static PyObject *meth_wxTextAttrDimensions_GetLeft(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_GetLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrDimensions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp))
        {
             ::wxTextAttrDimension*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetLeft();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTextAttrDimension,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_GetLeft, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_GetRight, "GetRight() -> TextAttrDimension");

extern "C" {static PyObject *meth_wxTextAttrDimensions_GetRight(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_GetRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrDimensions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp))
        {
             ::wxTextAttrDimension*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetRight();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTextAttrDimension,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_GetRight, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_GetTop, "GetTop() -> TextAttrDimension");

extern "C" {static PyObject *meth_wxTextAttrDimensions_GetTop(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_GetTop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrDimensions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp))
        {
             ::wxTextAttrDimension*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetTop();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTextAttrDimension,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_GetTop, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_GetBottom, "GetBottom() -> TextAttrDimension");

extern "C" {static PyObject *meth_wxTextAttrDimensions_GetBottom(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_GetBottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrDimensions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp))
        {
             ::wxTextAttrDimension*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetBottom();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTextAttrDimension,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_GetBottom, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrDimensions_IsValid, "IsValid() -> bool\n"
"\n"
"Are all dimensions valid?");

extern "C" {static PyObject *meth_wxTextAttrDimensions_IsValid(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrDimensions_IsValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrDimensions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrDimensions, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsValid();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrDimensions, sipName_IsValid, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxTextAttrDimensions___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxTextAttrDimensions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTextAttrDimensions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrDimensions* dims;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxTextAttrDimensions, &dims))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp-> ::wxTextAttrDimensions::operator==(*dims);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__richtext, ne_slot, sipType_wxTextAttrDimensions, sipSelf, sipArg);
}


extern "C" {static int slot_wxTextAttrDimensions___bool__(PyObject *);}
static int slot_wxTextAttrDimensions___bool__(PyObject *sipSelf)
{
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTextAttrDimensions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTextAttrDimensions___bool__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_wxTextAttrDimensions___nonzero__(PyObject *);}
static int slot_wxTextAttrDimensions___nonzero__(PyObject *sipSelf)
{
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTextAttrDimensions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTextAttrDimensions___nonzero__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_wxTextAttrDimensions___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxTextAttrDimensions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTextAttrDimensions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrDimensions* dims;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxTextAttrDimensions, &dims))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxTextAttrDimensions::operator==(*dims);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__richtext, eq_slot, sipType_wxTextAttrDimensions, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTextAttrDimensions(void *, int);}
static void release_wxTextAttrDimensions(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxTextAttrDimensions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxTextAttrDimensions(void *, SIP_SSIZE_T, void *);}
static void assign_wxTextAttrDimensions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxTextAttrDimensions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxTextAttrDimensions *>(sipSrc);
}


extern "C" {static void *array_wxTextAttrDimensions(SIP_SSIZE_T);}
static void *array_wxTextAttrDimensions(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxTextAttrDimensions[sipNrElem];
}


extern "C" {static void *copy_wxTextAttrDimensions(const void *, SIP_SSIZE_T);}
static void *copy_wxTextAttrDimensions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxTextAttrDimensions(reinterpret_cast<const  ::wxTextAttrDimensions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxTextAttrDimensions(sipSimpleWrapper *);}
static void dealloc_wxTextAttrDimensions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTextAttrDimensions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxTextAttrDimensions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTextAttrDimensions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxTextAttrDimensions *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTextAttrDimensions();
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
        const  ::wxTextAttrDimensions* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxTextAttrDimensions, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTextAttrDimensions(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxTextAttrDimensions[] = {
    {(void *)slot_wxTextAttrDimensions___ne__, ne_slot},
    {(void *)slot_wxTextAttrDimensions___bool__, bool_slot},
    {(void *)slot_wxTextAttrDimensions___nonzero__, bool_slot},
    {(void *)slot_wxTextAttrDimensions___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxTextAttrDimensions[] = {
    {SIP_MLNAME_CAST(sipName_Apply), SIP_MLMETH_CAST(meth_wxTextAttrDimensions_Apply), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_Apply)},
    {SIP_MLNAME_CAST(sipName_CollectCommonAttributes), SIP_MLMETH_CAST(meth_wxTextAttrDimensions_CollectCommonAttributes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_CollectCommonAttributes)},
    {SIP_MLNAME_CAST(sipName_EqPartial), SIP_MLMETH_CAST(meth_wxTextAttrDimensions_EqPartial), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_EqPartial)},
    {SIP_MLNAME_CAST(sipName_GetBottom), meth_wxTextAttrDimensions_GetBottom, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_GetBottom)},
    {SIP_MLNAME_CAST(sipName_GetLeft), meth_wxTextAttrDimensions_GetLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_GetLeft)},
    {SIP_MLNAME_CAST(sipName_GetRight), meth_wxTextAttrDimensions_GetRight, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_GetRight)},
    {SIP_MLNAME_CAST(sipName_GetTop), meth_wxTextAttrDimensions_GetTop, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_GetTop)},
    {SIP_MLNAME_CAST(sipName_IsValid), meth_wxTextAttrDimensions_IsValid, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_IsValid)},
    {SIP_MLNAME_CAST(sipName_RemoveStyle), SIP_MLMETH_CAST(meth_wxTextAttrDimensions_RemoveStyle), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_RemoveStyle)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_wxTextAttrDimensions_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrDimensions_Reset)}
};


extern "C" {static PyObject *varget_wxTextAttrDimensions_m_bottom(void *, PyObject *, PyObject *);}
static PyObject *varget_wxTextAttrDimensions_m_bottom(void *sipSelf, PyObject *, PyObject *)
{
     ::wxTextAttrDimension*sipVal;
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipSelf);

    sipVal = &sipCpp->m_bottom;

    return sipConvertFromType(sipVal, sipType_wxTextAttrDimension, SIP_NULLPTR);
}


extern "C" {static int varset_wxTextAttrDimensions_m_bottom(void *, PyObject *, PyObject *);}
static int varset_wxTextAttrDimensions_m_bottom(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxTextAttrDimension*sipVal;
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxTextAttrDimension *>(sipForceConvertToType(sipPy, sipType_wxTextAttrDimension, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_bottom = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxTextAttrDimensions_m_left(void *, PyObject *, PyObject *);}
static PyObject *varget_wxTextAttrDimensions_m_left(void *sipSelf, PyObject *, PyObject *)
{
     ::wxTextAttrDimension*sipVal;
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipSelf);

    sipVal = &sipCpp->m_left;

    return sipConvertFromType(sipVal, sipType_wxTextAttrDimension, SIP_NULLPTR);
}


extern "C" {static int varset_wxTextAttrDimensions_m_left(void *, PyObject *, PyObject *);}
static int varset_wxTextAttrDimensions_m_left(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxTextAttrDimension*sipVal;
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxTextAttrDimension *>(sipForceConvertToType(sipPy, sipType_wxTextAttrDimension, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_left = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxTextAttrDimensions_m_right(void *, PyObject *, PyObject *);}
static PyObject *varget_wxTextAttrDimensions_m_right(void *sipSelf, PyObject *, PyObject *)
{
     ::wxTextAttrDimension*sipVal;
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipSelf);

    sipVal = &sipCpp->m_right;

    return sipConvertFromType(sipVal, sipType_wxTextAttrDimension, SIP_NULLPTR);
}


extern "C" {static int varset_wxTextAttrDimensions_m_right(void *, PyObject *, PyObject *);}
static int varset_wxTextAttrDimensions_m_right(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxTextAttrDimension*sipVal;
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxTextAttrDimension *>(sipForceConvertToType(sipPy, sipType_wxTextAttrDimension, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_right = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxTextAttrDimensions_m_top(void *, PyObject *, PyObject *);}
static PyObject *varget_wxTextAttrDimensions_m_top(void *sipSelf, PyObject *, PyObject *)
{
     ::wxTextAttrDimension*sipVal;
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipSelf);

    sipVal = &sipCpp->m_top;

    return sipConvertFromType(sipVal, sipType_wxTextAttrDimension, SIP_NULLPTR);
}


extern "C" {static int varset_wxTextAttrDimensions_m_top(void *, PyObject *, PyObject *);}
static int varset_wxTextAttrDimensions_m_top(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxTextAttrDimension*sipVal;
     ::wxTextAttrDimensions *sipCpp = reinterpret_cast< ::wxTextAttrDimensions *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxTextAttrDimension *>(sipForceConvertToType(sipPy, sipType_wxTextAttrDimension, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_top = *sipVal;

    return 0;
}

sipVariableDef variables_wxTextAttrDimensions[] = {
    {PropertyVariable, sipName_Top, &methods_wxTextAttrDimensions[6], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Right, &methods_wxTextAttrDimensions[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Left, &methods_wxTextAttrDimensions[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Bottom, &methods_wxTextAttrDimensions[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_bottom, (PyMethodDef *)varget_wxTextAttrDimensions_m_bottom, (PyMethodDef *)varset_wxTextAttrDimensions_m_bottom, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_left, (PyMethodDef *)varget_wxTextAttrDimensions_m_left, (PyMethodDef *)varset_wxTextAttrDimensions_m_left, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_right, (PyMethodDef *)varget_wxTextAttrDimensions_m_right, (PyMethodDef *)varset_wxTextAttrDimensions_m_right, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_top, (PyMethodDef *)varget_wxTextAttrDimensions_m_top, (PyMethodDef *)varset_wxTextAttrDimensions_m_top, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxTextAttrDimensions, "TextAttrDimensions()\n"
"\n"
"A class for left, right, top and bottom dimensions.");


sipClassTypeDef sipTypeDef__richtext_wxTextAttrDimensions = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxTextAttrDimensions,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_TextAttrDimensions,
        {0, 0, 1},
        10, methods_wxTextAttrDimensions,
        0, SIP_NULLPTR,
        8, variables_wxTextAttrDimensions,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTextAttrDimensions,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxTextAttrDimensions,
    init_type_wxTextAttrDimensions,
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
    dealloc_wxTextAttrDimensions,
    assign_wxTextAttrDimensions,
    array_wxTextAttrDimensions,
    copy_wxTextAttrDimensions,
    release_wxTextAttrDimensions,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};