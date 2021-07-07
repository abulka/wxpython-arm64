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
        #include <wx/richtext/richtextbuffer.h>
    int _wxRichTextSelection___nonzero__(wxRichTextSelection* self)
    {
        return self->IsValid();
    }
    int _wxRichTextSelection___bool__(wxRichTextSelection* self)
    {
        return self->IsValid();
    }


PyDoc_STRVAR(doc_wxRichTextSelection_Reset, "Reset()\n"
"\n"
"Resets the selection.");

extern "C" {static PyObject *meth_wxRichTextSelection_Reset(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextSelection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextSelection, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_Reset, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_Set, "Set(range, container)\n"
"Set(ranges, container)\n"
"\n"
"Sets the selection.\n"
"");

extern "C" {static PyObject *meth_wxRichTextSelection_Set(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_Set(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextRange* range;
        int rangeState = 0;
         ::wxRichTextParagraphLayoutBox* container;
         ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_range,
            sipName_container,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J8", &sipSelf, sipType_wxRichTextSelection, &sipCpp, sipType_wxRichTextRange, &range, &rangeState, sipType_wxRichTextParagraphLayoutBox, &container))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Set(*range,container);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRichTextRange *>(range),sipType_wxRichTextRange,rangeState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::wxRichTextRangeArray* ranges;
         ::wxRichTextParagraphLayoutBox* container;
         ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_ranges,
            sipName_container,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8", &sipSelf, sipType_wxRichTextSelection, &sipCpp, sipType_wxRichTextRangeArray, &ranges, sipType_wxRichTextParagraphLayoutBox, &container))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Set(*ranges,container);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_Set, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_Add, "Add(range)\n"
"\n"
"Adds a range to the selection.");

extern "C" {static PyObject *meth_wxRichTextSelection_Add(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_Add(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextRange* range;
        int rangeState = 0;
         ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_range,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextSelection, &sipCpp, sipType_wxRichTextRange, &range, &rangeState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Add(*range);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRichTextRange *>(range),sipType_wxRichTextRange,rangeState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_Add, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_Copy, "Copy(sel)\n"
"\n"
"Copies from sel.");

extern "C" {static PyObject *meth_wxRichTextSelection_Copy(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_Copy(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextSelection* sel;
         ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_sel,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxRichTextSelection, &sipCpp, sipType_wxRichTextSelection, &sel))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Copy(*sel);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_Copy, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_GetRanges, "GetRanges() -> RichTextRangeArray\n"
"\n"
"Returns the selection ranges.");

extern "C" {static PyObject *meth_wxRichTextSelection_GetRanges(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_GetRanges(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextSelection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextSelection, &sipCpp))
        {
             ::wxRichTextRangeArray*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetRanges();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxRichTextRangeArray,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_GetRanges, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_SetRanges, "SetRanges(ranges)\n"
"\n"
"Sets the selection ranges.");

extern "C" {static PyObject *meth_wxRichTextSelection_SetRanges(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_SetRanges(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextRangeArray* ranges;
         ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_ranges,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxRichTextSelection, &sipCpp, sipType_wxRichTextRangeArray, &ranges))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetRanges(*ranges);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_SetRanges, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_GetCount, "GetCount() -> size_t\n"
"\n"
"Returns the number of ranges in the selection.");

extern "C" {static PyObject *meth_wxRichTextSelection_GetCount(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextSelection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextSelection, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_GetCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_GetRange, "GetRange(i) -> RichTextRange\n"
"GetRange() -> RichTextRange\n"
"\n"
"Returns the range at the given index.\n"
"");

extern "C" {static PyObject *meth_wxRichTextSelection_GetRange(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_GetRange(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t i;
        const  ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_i,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxRichTextSelection, &sipCpp, &i))
        {
             ::wxRichTextRange*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRichTextRange(sipCpp->GetRange(i));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRichTextRange,SIP_NULLPTR);
        }
    }

    {
        const  ::wxRichTextSelection *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "B", &sipSelf, sipType_wxRichTextSelection, &sipCpp))
        {
             ::wxRichTextRange*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRichTextRange(sipCpp->GetRange());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRichTextRange,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_GetRange, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_SetRange, "SetRange(range)\n"
"\n"
"Sets a single range.");

extern "C" {static PyObject *meth_wxRichTextSelection_SetRange(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_SetRange(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextRange* range;
        int rangeState = 0;
         ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_range,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextSelection, &sipCpp, sipType_wxRichTextRange, &range, &rangeState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetRange(*range);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRichTextRange *>(range),sipType_wxRichTextRange,rangeState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_SetRange, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_GetContainer, "GetContainer() -> RichTextParagraphLayoutBox\n"
"\n"
"Returns the container for which the selection is valid.");

extern "C" {static PyObject *meth_wxRichTextSelection_GetContainer(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_GetContainer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextSelection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextSelection, &sipCpp))
        {
             ::wxRichTextParagraphLayoutBox*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetContainer();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxRichTextParagraphLayoutBox,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_GetContainer, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_SetContainer, "SetContainer(container)\n"
"\n"
"Sets the container for which the selection is valid.");

extern "C" {static PyObject *meth_wxRichTextSelection_SetContainer(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_SetContainer(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextParagraphLayoutBox* container;
         ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_container,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxRichTextSelection, &sipCpp, sipType_wxRichTextParagraphLayoutBox, &container))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetContainer(container);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_SetContainer, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_IsValid, "IsValid() -> bool\n"
"\n"
"Returns true if the selection is valid.");

extern "C" {static PyObject *meth_wxRichTextSelection_IsValid(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_IsValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextSelection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextSelection, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_IsValid, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_GetSelectionForObject, "GetSelectionForObject(obj) -> RichTextRangeArray\n"
"\n"
"Returns the selection appropriate to the specified object, if any;\n"
"returns an empty array if none at the level of the object's container.");

extern "C" {static PyObject *meth_wxRichTextSelection_GetSelectionForObject(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_GetSelectionForObject(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextObject* obj;
        const  ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxRichTextSelection, &sipCpp, sipType_wxRichTextObject, &obj))
        {
             ::wxRichTextRangeArray*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRichTextRangeArray(sipCpp->GetSelectionForObject(obj));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRichTextRangeArray,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_GetSelectionForObject, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextSelection_WithinSelection, "WithinSelection(pos, obj) -> bool\n"
"WithinSelection(pos) -> bool\n"
"WithinSelection(pos, ranges) -> bool\n"
"WithinSelection(range, ranges) -> bool\n"
"\n"
"Returns true if the given position is within the selection.\n"
"\n"
"\n"
"");

extern "C" {static PyObject *meth_wxRichTextSelection_WithinSelection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextSelection_WithinSelection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long pos;
         ::wxRichTextObject* obj;
        const  ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pos,
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BlJ8", &sipSelf, sipType_wxRichTextSelection, &sipCpp, &pos, sipType_wxRichTextObject, &obj))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->WithinSelection(pos,obj);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
        long pos;
        const  ::wxRichTextSelection *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pos,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxRichTextSelection, &sipCpp, &pos))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->WithinSelection(pos);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
        long pos;
        const  ::wxRichTextRangeArray* ranges;

        static const char *sipKwdList[] = {
            sipName_pos,
            sipName_ranges,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "lJ9", &pos, sipType_wxRichTextRangeArray, &ranges))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxRichTextSelection::WithinSelection(pos,*ranges);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::wxRichTextRange* range;
        int rangeState = 0;
        const  ::wxRichTextRangeArray* ranges;

        static const char *sipKwdList[] = {
            sipName_range,
            sipName_ranges,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1J9", sipType_wxRichTextRange, &range, &rangeState, sipType_wxRichTextRangeArray, &ranges))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxRichTextSelection::WithinSelection(*range,*ranges);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRichTextRange *>(range),sipType_wxRichTextRange,rangeState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextSelection, sipName_WithinSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxRichTextSelection___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxRichTextSelection___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxRichTextSelection *sipCpp = reinterpret_cast< ::wxRichTextSelection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRichTextSelection));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextSelection* sel;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxRichTextSelection, &sel))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp-> ::wxRichTextSelection::operator==(*sel);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__richtext, ne_slot, sipType_wxRichTextSelection, sipSelf, sipArg);
}


extern "C" {static int slot_wxRichTextSelection___bool__(PyObject *);}
static int slot_wxRichTextSelection___bool__(PyObject *sipSelf)
{
     ::wxRichTextSelection *sipCpp = reinterpret_cast< ::wxRichTextSelection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRichTextSelection));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxRichTextSelection___bool__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_wxRichTextSelection___nonzero__(PyObject *);}
static int slot_wxRichTextSelection___nonzero__(PyObject *sipSelf)
{
     ::wxRichTextSelection *sipCpp = reinterpret_cast< ::wxRichTextSelection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRichTextSelection));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxRichTextSelection___nonzero__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_wxRichTextSelection___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxRichTextSelection___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxRichTextSelection *sipCpp = reinterpret_cast< ::wxRichTextSelection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRichTextSelection));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextSelection* sel;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxRichTextSelection, &sel))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxRichTextSelection::operator==(*sel);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__richtext, eq_slot, sipType_wxRichTextSelection, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRichTextSelection(void *, int);}
static void release_wxRichTextSelection(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxRichTextSelection *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxRichTextSelection(void *, SIP_SSIZE_T, void *);}
static void assign_wxRichTextSelection(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxRichTextSelection *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxRichTextSelection *>(sipSrc);
}


extern "C" {static void *array_wxRichTextSelection(SIP_SSIZE_T);}
static void *array_wxRichTextSelection(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxRichTextSelection[sipNrElem];
}


extern "C" {static void *copy_wxRichTextSelection(const void *, SIP_SSIZE_T);}
static void *copy_wxRichTextSelection(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxRichTextSelection(reinterpret_cast<const  ::wxRichTextSelection *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxRichTextSelection(sipSimpleWrapper *);}
static void dealloc_wxRichTextSelection(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRichTextSelection(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxRichTextSelection(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxRichTextSelection(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxRichTextSelection *sipCpp = SIP_NULLPTR;

    {
        const  ::wxRichTextSelection* sel;

        static const char *sipKwdList[] = {
            sipName_sel,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxRichTextSelection, &sel))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRichTextSelection(*sel);
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
        const  ::wxRichTextRange* range;
        int rangeState = 0;
         ::wxRichTextParagraphLayoutBox* container;

        static const char *sipKwdList[] = {
            sipName_range,
            sipName_container,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J8", sipType_wxRichTextRange, &range, &rangeState, sipType_wxRichTextParagraphLayoutBox, &container))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRichTextSelection(*range,container);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRichTextRange *>(range),sipType_wxRichTextRange,rangeState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRichTextSelection();
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


/* Define this type's Python slots. */
static sipPySlotDef slots_wxRichTextSelection[] = {
    {(void *)slot_wxRichTextSelection___ne__, ne_slot},
    {(void *)slot_wxRichTextSelection___bool__, bool_slot},
    {(void *)slot_wxRichTextSelection___nonzero__, bool_slot},
    {(void *)slot_wxRichTextSelection___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxRichTextSelection[] = {
    {SIP_MLNAME_CAST(sipName_Add), SIP_MLMETH_CAST(meth_wxRichTextSelection_Add), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_Add)},
    {SIP_MLNAME_CAST(sipName_Copy), SIP_MLMETH_CAST(meth_wxRichTextSelection_Copy), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_Copy)},
    {SIP_MLNAME_CAST(sipName_GetContainer), meth_wxRichTextSelection_GetContainer, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextSelection_GetContainer)},
    {SIP_MLNAME_CAST(sipName_GetCount), meth_wxRichTextSelection_GetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextSelection_GetCount)},
    {SIP_MLNAME_CAST(sipName_GetRange), SIP_MLMETH_CAST(meth_wxRichTextSelection_GetRange), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_GetRange)},
    {SIP_MLNAME_CAST(sipName_GetRanges), meth_wxRichTextSelection_GetRanges, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextSelection_GetRanges)},
    {SIP_MLNAME_CAST(sipName_GetSelectionForObject), SIP_MLMETH_CAST(meth_wxRichTextSelection_GetSelectionForObject), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_GetSelectionForObject)},
    {SIP_MLNAME_CAST(sipName_IsValid), meth_wxRichTextSelection_IsValid, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextSelection_IsValid)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_wxRichTextSelection_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextSelection_Reset)},
    {SIP_MLNAME_CAST(sipName_Set), SIP_MLMETH_CAST(meth_wxRichTextSelection_Set), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_Set)},
    {SIP_MLNAME_CAST(sipName_SetContainer), SIP_MLMETH_CAST(meth_wxRichTextSelection_SetContainer), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_SetContainer)},
    {SIP_MLNAME_CAST(sipName_SetRange), SIP_MLMETH_CAST(meth_wxRichTextSelection_SetRange), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_SetRange)},
    {SIP_MLNAME_CAST(sipName_SetRanges), SIP_MLMETH_CAST(meth_wxRichTextSelection_SetRanges), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_SetRanges)},
    {SIP_MLNAME_CAST(sipName_WithinSelection), SIP_MLMETH_CAST(meth_wxRichTextSelection_WithinSelection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextSelection_WithinSelection)}
};


extern "C" {static PyObject *varget_wxRichTextSelection_m_container(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRichTextSelection_m_container(void *sipSelf, PyObject *, PyObject *)
{
     ::wxRichTextParagraphLayoutBox*sipVal;
     ::wxRichTextSelection *sipCpp = reinterpret_cast< ::wxRichTextSelection *>(sipSelf);

    sipVal = sipCpp->m_container;

    return sipConvertFromType(sipVal, sipType_wxRichTextParagraphLayoutBox, SIP_NULLPTR);
}


extern "C" {static int varset_wxRichTextSelection_m_container(void *, PyObject *, PyObject *);}
static int varset_wxRichTextSelection_m_container(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxRichTextParagraphLayoutBox*sipVal;
     ::wxRichTextSelection *sipCpp = reinterpret_cast< ::wxRichTextSelection *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxRichTextParagraphLayoutBox *>(sipForceConvertToType(sipPy, sipType_wxRichTextParagraphLayoutBox, SIP_NULLPTR, 0, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_container = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxRichTextSelection_m_ranges(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRichTextSelection_m_ranges(void *sipSelf, PyObject *, PyObject *)
{
     ::wxRichTextRangeArray*sipVal;
     ::wxRichTextSelection *sipCpp = reinterpret_cast< ::wxRichTextSelection *>(sipSelf);

    sipVal = &sipCpp->m_ranges;

    return sipConvertFromType(sipVal, sipType_wxRichTextRangeArray, SIP_NULLPTR);
}


extern "C" {static int varset_wxRichTextSelection_m_ranges(void *, PyObject *, PyObject *);}
static int varset_wxRichTextSelection_m_ranges(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxRichTextRangeArray*sipVal;
     ::wxRichTextSelection *sipCpp = reinterpret_cast< ::wxRichTextSelection *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxRichTextRangeArray *>(sipForceConvertToType(sipPy, sipType_wxRichTextRangeArray, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_ranges = *sipVal;

    return 0;
}

sipVariableDef variables_wxRichTextSelection[] = {
    {PropertyVariable, sipName_Ranges, &methods_wxRichTextSelection[5], &methods_wxRichTextSelection[12], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Range, &methods_wxRichTextSelection[4], &methods_wxRichTextSelection[11], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Count, &methods_wxRichTextSelection[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Container, &methods_wxRichTextSelection[2], &methods_wxRichTextSelection[10], SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_container, (PyMethodDef *)varget_wxRichTextSelection_m_container, (PyMethodDef *)varset_wxRichTextSelection_m_container, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_ranges, (PyMethodDef *)varget_wxRichTextSelection_m_ranges, (PyMethodDef *)varset_wxRichTextSelection_m_ranges, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxRichTextSelection, "RichTextSelection(sel)\n"
"RichTextSelection(range, container)\n"
"RichTextSelection()\n"
"\n"
"Stores selection information.");


sipClassTypeDef sipTypeDef__richtext_wxRichTextSelection = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxRichTextSelection,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_RichTextSelection,
        {0, 0, 1},
        14, methods_wxRichTextSelection,
        0, SIP_NULLPTR,
        6, variables_wxRichTextSelection,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxRichTextSelection,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxRichTextSelection,
    init_type_wxRichTextSelection,
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
    dealloc_wxRichTextSelection,
    assign_wxRichTextSelection,
    array_wxRichTextSelection,
    copy_wxRichTextSelection,
    release_wxRichTextSelection,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};