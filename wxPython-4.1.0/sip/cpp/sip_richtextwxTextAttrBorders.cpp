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
        #include <wx/richtext/richtextbuffer.h>
        #include <wx/colour.h>
    int _wxTextAttrBorders___nonzero__(wxTextAttrBorders* self)
    {
        return self->IsValid();
    }
    int _wxTextAttrBorders___bool__(wxTextAttrBorders* self)
    {
        return self->IsValid();
    }


PyDoc_STRVAR(doc_wxTextAttrBorders_SetStyle, "SetStyle(style)\n"
"\n"
"Sets the style of all borders.");

extern "C" {static PyObject *meth_wxTextAttrBorders_SetStyle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_SetStyle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int style;
         ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, &style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetStyle(style);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_SetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_SetColour, "SetColour(colour)\n"
"SetColour(colour)\n"
"\n"
"Sets colour of all borders.\n"
"");

extern "C" {static PyObject *meth_wxTextAttrBorders_SetColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_SetColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        unsigned long colour;
         ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colour,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bm", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, &colour))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetColour(colour);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::wxColour* colour;
        int colourState = 0;
         ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colour,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, sipType_wxColour, &colour, &colourState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetColour(*colour);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colour),sipType_wxColour,colourState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_SetColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_SetWidth, "SetWidth(width)\n"
"SetWidth(value, units=TEXT_ATTR_UNITS_TENTHS_MM)\n"
"\n"
"Sets the width of all borders.\n"
"");

extern "C" {static PyObject *meth_wxTextAttrBorders_SetWidth(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_SetWidth(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrDimension* width;
         ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_width,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, sipType_wxTextAttrDimension, &width))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetWidth(*width);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int value;
         ::wxTextAttrUnits units = wxTEXT_ATTR_UNITS_TENTHS_MM;
         ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_value,
            sipName_units,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi|E", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, &value, sipType_wxTextAttrUnits, &units))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetWidth(value,units);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_SetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_Reset, "Reset()\n"
"\n"
"Resets all borders.");

extern "C" {static PyObject *meth_wxTextAttrBorders_Reset(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrBorders *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrBorders, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_Reset, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_EqPartial, "EqPartial(borders, weakTest=True) -> bool\n"
"\n"
"Partial equality test.");

extern "C" {static PyObject *meth_wxTextAttrBorders_EqPartial(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_EqPartial(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrBorders* borders;
        bool weakTest = 1;
        const  ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_borders,
            sipName_weakTest,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9|b", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, sipType_wxTextAttrBorders, &borders, &weakTest))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->EqPartial(*borders,weakTest);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_EqPartial, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_Apply, "Apply(borders, compareWith=None) -> bool\n"
"\n"
"Applies border to this object, but not if the same as compareWith.");

extern "C" {static PyObject *meth_wxTextAttrBorders_Apply(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_Apply(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrBorders* borders;
        const  ::wxTextAttrBorders* compareWith = 0;
         ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_borders,
            sipName_compareWith,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9|J8", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, sipType_wxTextAttrBorders, &borders, sipType_wxTextAttrBorders, &compareWith))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Apply(*borders,compareWith);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_Apply, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_RemoveStyle, "RemoveStyle(attr) -> bool\n"
"\n"
"Removes the specified attributes from this object.");

extern "C" {static PyObject *meth_wxTextAttrBorders_RemoveStyle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_RemoveStyle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrBorders* attr;
         ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_attr,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, sipType_wxTextAttrBorders, &attr))
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
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_RemoveStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_CollectCommonAttributes, "CollectCommonAttributes(attr, clashingAttr, absentAttr)\n"
"\n"
"Collects the attributes that are common to a range of content,\n"
"building up a note of which attributes are absent in some objects and\n"
"which clash in some objects.");

extern "C" {static PyObject *meth_wxTextAttrBorders_CollectCommonAttributes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_CollectCommonAttributes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrBorders* attr;
         ::wxTextAttrBorders* clashingAttr;
         ::wxTextAttrBorders* absentAttr;
         ::wxTextAttrBorders *sipCpp;

        static const char *sipKwdList[] = {
            sipName_attr,
            sipName_clashingAttr,
            sipName_absentAttr,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J9", &sipSelf, sipType_wxTextAttrBorders, &sipCpp, sipType_wxTextAttrBorders, &attr, sipType_wxTextAttrBorders, &clashingAttr, sipType_wxTextAttrBorders, &absentAttr))
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
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_CollectCommonAttributes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_IsValid, "IsValid() -> bool\n"
"\n"
"Returns true if at least one border is valid.");

extern "C" {static PyObject *meth_wxTextAttrBorders_IsValid(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_IsValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrBorders *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrBorders, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_IsValid, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_GetLeft, "GetLeft() -> TextAttrBorder");

extern "C" {static PyObject *meth_wxTextAttrBorders_GetLeft(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_GetLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrBorders *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrBorders, &sipCpp))
        {
             ::wxTextAttrBorder*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetLeft();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTextAttrBorder,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_GetLeft, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_GetRight, "GetRight() -> TextAttrBorder");

extern "C" {static PyObject *meth_wxTextAttrBorders_GetRight(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_GetRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrBorders *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrBorders, &sipCpp))
        {
             ::wxTextAttrBorder*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetRight();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTextAttrBorder,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_GetRight, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_GetTop, "GetTop() -> TextAttrBorder");

extern "C" {static PyObject *meth_wxTextAttrBorders_GetTop(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_GetTop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrBorders *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrBorders, &sipCpp))
        {
             ::wxTextAttrBorder*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetTop();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTextAttrBorder,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_GetTop, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextAttrBorders_GetBottom, "GetBottom() -> TextAttrBorder");

extern "C" {static PyObject *meth_wxTextAttrBorders_GetBottom(PyObject *, PyObject *);}
static PyObject *meth_wxTextAttrBorders_GetBottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTextAttrBorders *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTextAttrBorders, &sipCpp))
        {
             ::wxTextAttrBorder*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetBottom();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTextAttrBorder,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextAttrBorders, sipName_GetBottom, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxTextAttrBorders___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxTextAttrBorders___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTextAttrBorders));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrBorders* borders;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxTextAttrBorders, &borders))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp-> ::wxTextAttrBorders::operator==(*borders);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__richtext, ne_slot, sipType_wxTextAttrBorders, sipSelf, sipArg);
}


extern "C" {static int slot_wxTextAttrBorders___bool__(PyObject *);}
static int slot_wxTextAttrBorders___bool__(PyObject *sipSelf)
{
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTextAttrBorders));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTextAttrBorders___bool__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_wxTextAttrBorders___nonzero__(PyObject *);}
static int slot_wxTextAttrBorders___nonzero__(PyObject *sipSelf)
{
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTextAttrBorders));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxTextAttrBorders___nonzero__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_wxTextAttrBorders___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxTextAttrBorders___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxTextAttrBorders));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTextAttrBorders* borders;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxTextAttrBorders, &borders))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxTextAttrBorders::operator==(*borders);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__richtext, eq_slot, sipType_wxTextAttrBorders, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTextAttrBorders(void *, int);}
static void release_wxTextAttrBorders(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxTextAttrBorders *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxTextAttrBorders(void *, SIP_SSIZE_T, void *);}
static void assign_wxTextAttrBorders(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxTextAttrBorders *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxTextAttrBorders *>(sipSrc);
}


extern "C" {static void *array_wxTextAttrBorders(SIP_SSIZE_T);}
static void *array_wxTextAttrBorders(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxTextAttrBorders[sipNrElem];
}


extern "C" {static void *copy_wxTextAttrBorders(const void *, SIP_SSIZE_T);}
static void *copy_wxTextAttrBorders(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxTextAttrBorders(reinterpret_cast<const  ::wxTextAttrBorders *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxTextAttrBorders(sipSimpleWrapper *);}
static void dealloc_wxTextAttrBorders(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTextAttrBorders(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxTextAttrBorders(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTextAttrBorders(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxTextAttrBorders *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTextAttrBorders();
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
        const  ::wxTextAttrBorders* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxTextAttrBorders, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTextAttrBorders(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxTextAttrBorders[] = {
    {(void *)slot_wxTextAttrBorders___ne__, ne_slot},
    {(void *)slot_wxTextAttrBorders___bool__, bool_slot},
    {(void *)slot_wxTextAttrBorders___nonzero__, bool_slot},
    {(void *)slot_wxTextAttrBorders___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxTextAttrBorders[] = {
    {SIP_MLNAME_CAST(sipName_Apply), SIP_MLMETH_CAST(meth_wxTextAttrBorders_Apply), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_Apply)},
    {SIP_MLNAME_CAST(sipName_CollectCommonAttributes), SIP_MLMETH_CAST(meth_wxTextAttrBorders_CollectCommonAttributes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_CollectCommonAttributes)},
    {SIP_MLNAME_CAST(sipName_EqPartial), SIP_MLMETH_CAST(meth_wxTextAttrBorders_EqPartial), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_EqPartial)},
    {SIP_MLNAME_CAST(sipName_GetBottom), meth_wxTextAttrBorders_GetBottom, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_GetBottom)},
    {SIP_MLNAME_CAST(sipName_GetLeft), meth_wxTextAttrBorders_GetLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_GetLeft)},
    {SIP_MLNAME_CAST(sipName_GetRight), meth_wxTextAttrBorders_GetRight, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_GetRight)},
    {SIP_MLNAME_CAST(sipName_GetTop), meth_wxTextAttrBorders_GetTop, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_GetTop)},
    {SIP_MLNAME_CAST(sipName_IsValid), meth_wxTextAttrBorders_IsValid, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_IsValid)},
    {SIP_MLNAME_CAST(sipName_RemoveStyle), SIP_MLMETH_CAST(meth_wxTextAttrBorders_RemoveStyle), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_RemoveStyle)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_wxTextAttrBorders_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_Reset)},
    {SIP_MLNAME_CAST(sipName_SetColour), SIP_MLMETH_CAST(meth_wxTextAttrBorders_SetColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_SetColour)},
    {SIP_MLNAME_CAST(sipName_SetStyle), SIP_MLMETH_CAST(meth_wxTextAttrBorders_SetStyle), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_SetStyle)},
    {SIP_MLNAME_CAST(sipName_SetWidth), SIP_MLMETH_CAST(meth_wxTextAttrBorders_SetWidth), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextAttrBorders_SetWidth)}
};


extern "C" {static PyObject *varget_wxTextAttrBorders_m_bottom(void *, PyObject *, PyObject *);}
static PyObject *varget_wxTextAttrBorders_m_bottom(void *sipSelf, PyObject *, PyObject *)
{
     ::wxTextAttrBorder*sipVal;
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipSelf);

    sipVal = &sipCpp->m_bottom;

    return sipConvertFromType(sipVal, sipType_wxTextAttrBorder, SIP_NULLPTR);
}


extern "C" {static int varset_wxTextAttrBorders_m_bottom(void *, PyObject *, PyObject *);}
static int varset_wxTextAttrBorders_m_bottom(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxTextAttrBorder*sipVal;
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxTextAttrBorder *>(sipForceConvertToType(sipPy, sipType_wxTextAttrBorder, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_bottom = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxTextAttrBorders_m_left(void *, PyObject *, PyObject *);}
static PyObject *varget_wxTextAttrBorders_m_left(void *sipSelf, PyObject *, PyObject *)
{
     ::wxTextAttrBorder*sipVal;
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipSelf);

    sipVal = &sipCpp->m_left;

    return sipConvertFromType(sipVal, sipType_wxTextAttrBorder, SIP_NULLPTR);
}


extern "C" {static int varset_wxTextAttrBorders_m_left(void *, PyObject *, PyObject *);}
static int varset_wxTextAttrBorders_m_left(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxTextAttrBorder*sipVal;
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxTextAttrBorder *>(sipForceConvertToType(sipPy, sipType_wxTextAttrBorder, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_left = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxTextAttrBorders_m_right(void *, PyObject *, PyObject *);}
static PyObject *varget_wxTextAttrBorders_m_right(void *sipSelf, PyObject *, PyObject *)
{
     ::wxTextAttrBorder*sipVal;
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipSelf);

    sipVal = &sipCpp->m_right;

    return sipConvertFromType(sipVal, sipType_wxTextAttrBorder, SIP_NULLPTR);
}


extern "C" {static int varset_wxTextAttrBorders_m_right(void *, PyObject *, PyObject *);}
static int varset_wxTextAttrBorders_m_right(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxTextAttrBorder*sipVal;
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxTextAttrBorder *>(sipForceConvertToType(sipPy, sipType_wxTextAttrBorder, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_right = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxTextAttrBorders_m_top(void *, PyObject *, PyObject *);}
static PyObject *varget_wxTextAttrBorders_m_top(void *sipSelf, PyObject *, PyObject *)
{
     ::wxTextAttrBorder*sipVal;
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipSelf);

    sipVal = &sipCpp->m_top;

    return sipConvertFromType(sipVal, sipType_wxTextAttrBorder, SIP_NULLPTR);
}


extern "C" {static int varset_wxTextAttrBorders_m_top(void *, PyObject *, PyObject *);}
static int varset_wxTextAttrBorders_m_top(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxTextAttrBorder*sipVal;
     ::wxTextAttrBorders *sipCpp = reinterpret_cast< ::wxTextAttrBorders *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxTextAttrBorder *>(sipForceConvertToType(sipPy, sipType_wxTextAttrBorder, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_top = *sipVal;

    return 0;
}

sipVariableDef variables_wxTextAttrBorders[] = {
    {PropertyVariable, sipName_Top, &methods_wxTextAttrBorders[6], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Right, &methods_wxTextAttrBorders[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Left, &methods_wxTextAttrBorders[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Bottom, &methods_wxTextAttrBorders[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_bottom, (PyMethodDef *)varget_wxTextAttrBorders_m_bottom, (PyMethodDef *)varset_wxTextAttrBorders_m_bottom, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_left, (PyMethodDef *)varget_wxTextAttrBorders_m_left, (PyMethodDef *)varset_wxTextAttrBorders_m_left, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_right, (PyMethodDef *)varget_wxTextAttrBorders_m_right, (PyMethodDef *)varset_wxTextAttrBorders_m_right, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_top, (PyMethodDef *)varget_wxTextAttrBorders_m_top, (PyMethodDef *)varset_wxTextAttrBorders_m_top, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxTextAttrBorders, "TextAttrBorders()\n"
"\n"
"A class representing a rich text object's borders.");


sipClassTypeDef sipTypeDef__richtext_wxTextAttrBorders = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxTextAttrBorders,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_TextAttrBorders,
        {0, 0, 1},
        13, methods_wxTextAttrBorders,
        0, SIP_NULLPTR,
        8, variables_wxTextAttrBorders,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTextAttrBorders,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxTextAttrBorders,
    init_type_wxTextAttrBorders,
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
    dealloc_wxTextAttrBorders,
    assign_wxTextAttrBorders,
    array_wxTextAttrBorders,
    copy_wxTextAttrBorders,
    release_wxTextAttrBorders,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
