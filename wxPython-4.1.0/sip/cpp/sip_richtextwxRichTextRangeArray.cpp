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


PyDoc_STRVAR(doc_wxRichTextRangeArray_append, "append(self, obj: RichTextRange)");

extern "C" {static PyObject *meth_wxRichTextRangeArray_append(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextRangeArray_append(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextRange* obj;
        int objState = 0;
         ::wxRichTextRangeArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextRangeArray, &sipCpp, sipType_wxRichTextRange, &obj, &objState))
        {
        sipCpp->Add(*obj);
            sipReleaseType(obj,sipType_wxRichTextRange,objState);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRangeArray, sipName_append, doc_wxRichTextRangeArray_append);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextRangeArray_index, "index(self, obj: RichTextRange) -> int");

extern "C" {static PyObject *meth_wxRichTextRangeArray_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextRangeArray_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextRange* obj;
        int objState = 0;
         ::wxRichTextRangeArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextRangeArray, &sipCpp, sipType_wxRichTextRange, &obj, &objState))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

        int idx = sipCpp->Index(*obj, false);
        if (idx == wxNOT_FOUND) {
            sipError = sipErrorFail;
            wxPyErr_SetString(PyExc_ValueError,
                              "sequence.index(x): x not in sequence");
            }
        sipRes = idx;
            sipReleaseType(obj,sipType_wxRichTextRange,objState);

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return SIPLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRangeArray, sipName_index, doc_wxRichTextRangeArray_index);

    return SIP_NULLPTR;
}


extern "C" {static int slot_wxRichTextRangeArray___contains__(PyObject *,PyObject *);}
static int slot_wxRichTextRangeArray___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxRichTextRangeArray *sipCpp = reinterpret_cast< ::wxRichTextRangeArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRichTextRangeArray));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextRange* obj;
        int objState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxRichTextRange, &obj, &objState))
        {
            int sipRes = 0;

        int idx = sipCpp->Index(*obj, false);
        sipRes = idx != wxNOT_FOUND;
            sipReleaseType(obj,sipType_wxRichTextRange,objState);

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRangeArray, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxRichTextRangeArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxRichTextRangeArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxRichTextRangeArray *sipCpp = reinterpret_cast< ::wxRichTextRangeArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRichTextRangeArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxRichTextRange*sipRes = 0;
            sipErrorState sipError = sipErrorNone;

            if (0 > index)
                index += sipCpp->GetCount();

            if ((index < sipCpp->GetCount()) && (0 <= index)) {
                sipRes = &sipCpp->Item(index);
            }
            else {
                wxPyErr_SetString(PyExc_IndexError, "sequence index out of range");
                sipError = sipErrorFail;
            }

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipConvertFromType(sipRes,sipType_wxRichTextRange,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRangeArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static SIP_SSIZE_T slot_wxRichTextRangeArray___len__(PyObject *);}
static SIP_SSIZE_T slot_wxRichTextRangeArray___len__(PyObject *sipSelf)
{
     ::wxRichTextRangeArray *sipCpp = reinterpret_cast< ::wxRichTextRangeArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRichTextRangeArray));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

        sipRes = sipCpp->GetCount();

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRichTextRangeArray(void *, int);}
static void release_wxRichTextRangeArray(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxRichTextRangeArray *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxRichTextRangeArray(void *, SIP_SSIZE_T, void *);}
static void assign_wxRichTextRangeArray(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxRichTextRangeArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxRichTextRangeArray *>(sipSrc);
}


extern "C" {static void *array_wxRichTextRangeArray(SIP_SSIZE_T);}
static void *array_wxRichTextRangeArray(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxRichTextRangeArray[sipNrElem];
}


extern "C" {static void *copy_wxRichTextRangeArray(const void *, SIP_SSIZE_T);}
static void *copy_wxRichTextRangeArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxRichTextRangeArray(reinterpret_cast<const  ::wxRichTextRangeArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxRichTextRangeArray(sipSimpleWrapper *);}
static void dealloc_wxRichTextRangeArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRichTextRangeArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxRichTextRangeArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxRichTextRangeArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxRichTextRangeArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRichTextRangeArray();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxRichTextRangeArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxRichTextRangeArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRichTextRangeArray(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxRichTextRangeArray[] = {
    {(void *)slot_wxRichTextRangeArray___contains__, contains_slot},
    {(void *)slot_wxRichTextRangeArray___getitem__, getitem_slot},
    {(void *)slot_wxRichTextRangeArray___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxRichTextRangeArray[] = {
    {SIP_MLNAME_CAST(sipName_append), SIP_MLMETH_CAST(meth_wxRichTextRangeArray_append), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextRangeArray_append)},
    {SIP_MLNAME_CAST(sipName_index), SIP_MLMETH_CAST(meth_wxRichTextRangeArray_index), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextRangeArray_index)}
};

PyDoc_STRVAR(doc_wxRichTextRangeArray, "\1RichTextRangeArray()\n"
"RichTextRangeArray(RichTextRangeArray)");


sipClassTypeDef sipTypeDef__richtext_wxRichTextRangeArray = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxRichTextRangeArray,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_RichTextRangeArray,
        {0, 0, 1},
        2, methods_wxRichTextRangeArray,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxRichTextRangeArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxRichTextRangeArray,
    init_type_wxRichTextRangeArray,
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
    dealloc_wxRichTextRangeArray,
    assign_wxRichTextRangeArray,
    array_wxRichTextRangeArray,
    copy_wxRichTextRangeArray,
    release_wxRichTextRangeArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
