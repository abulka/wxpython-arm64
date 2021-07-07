/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_aui.h"


        #include <wx/aui/auibook.h>


PyDoc_STRVAR(doc_wxAuiNotebookPageArray_append, "append(self, obj: AuiNotebookPage)");

extern "C" {static PyObject *meth_wxAuiNotebookPageArray_append(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiNotebookPageArray_append(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiNotebookPage* obj;
         ::wxAuiNotebookPageArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxAuiNotebookPageArray, &sipCpp, sipType_wxAuiNotebookPage, &obj))
        {
        sipCpp->Add(*obj);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiNotebookPageArray, sipName_append, doc_wxAuiNotebookPageArray_append);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiNotebookPageArray_index, "index(self, obj: AuiNotebookPage) -> int");

extern "C" {static PyObject *meth_wxAuiNotebookPageArray_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiNotebookPageArray_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiNotebookPage* obj;
         ::wxAuiNotebookPageArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxAuiNotebookPageArray, &sipCpp, sipType_wxAuiNotebookPage, &obj))
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
    sipNoMethod(sipParseErr, sipName_AuiNotebookPageArray, sipName_index, doc_wxAuiNotebookPageArray_index);

    return SIP_NULLPTR;
}


extern "C" {static int slot_wxAuiNotebookPageArray___contains__(PyObject *,PyObject *);}
static int slot_wxAuiNotebookPageArray___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAuiNotebookPageArray *sipCpp = reinterpret_cast< ::wxAuiNotebookPageArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiNotebookPageArray));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiNotebookPage* obj;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxAuiNotebookPage, &obj))
        {
            int sipRes = 0;

        int idx = sipCpp->Index(*obj, false);
        sipRes = idx != wxNOT_FOUND;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiNotebookPageArray, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxAuiNotebookPageArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxAuiNotebookPageArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAuiNotebookPageArray *sipCpp = reinterpret_cast< ::wxAuiNotebookPageArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiNotebookPageArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxAuiNotebookPage*sipRes = 0;
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
            return sipConvertFromType(sipRes,sipType_wxAuiNotebookPage,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiNotebookPageArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static SIP_SSIZE_T slot_wxAuiNotebookPageArray___len__(PyObject *);}
static SIP_SSIZE_T slot_wxAuiNotebookPageArray___len__(PyObject *sipSelf)
{
     ::wxAuiNotebookPageArray *sipCpp = reinterpret_cast< ::wxAuiNotebookPageArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiNotebookPageArray));

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
extern "C" {static void release_wxAuiNotebookPageArray(void *, int);}
static void release_wxAuiNotebookPageArray(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxAuiNotebookPageArray *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxAuiNotebookPageArray(void *, SIP_SSIZE_T, void *);}
static void assign_wxAuiNotebookPageArray(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxAuiNotebookPageArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxAuiNotebookPageArray *>(sipSrc);
}


extern "C" {static void *array_wxAuiNotebookPageArray(SIP_SSIZE_T);}
static void *array_wxAuiNotebookPageArray(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxAuiNotebookPageArray[sipNrElem];
}


extern "C" {static void *copy_wxAuiNotebookPageArray(const void *, SIP_SSIZE_T);}
static void *copy_wxAuiNotebookPageArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxAuiNotebookPageArray(reinterpret_cast<const  ::wxAuiNotebookPageArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxAuiNotebookPageArray(sipSimpleWrapper *);}
static void dealloc_wxAuiNotebookPageArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAuiNotebookPageArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxAuiNotebookPageArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAuiNotebookPageArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxAuiNotebookPageArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiNotebookPageArray();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxAuiNotebookPageArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxAuiNotebookPageArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiNotebookPageArray(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxAuiNotebookPageArray[] = {
    {(void *)slot_wxAuiNotebookPageArray___contains__, contains_slot},
    {(void *)slot_wxAuiNotebookPageArray___getitem__, getitem_slot},
    {(void *)slot_wxAuiNotebookPageArray___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxAuiNotebookPageArray[] = {
    {SIP_MLNAME_CAST(sipName_append), SIP_MLMETH_CAST(meth_wxAuiNotebookPageArray_append), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAuiNotebookPageArray_append)},
    {SIP_MLNAME_CAST(sipName_index), SIP_MLMETH_CAST(meth_wxAuiNotebookPageArray_index), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAuiNotebookPageArray_index)}
};

PyDoc_STRVAR(doc_wxAuiNotebookPageArray, "\1AuiNotebookPageArray()\n"
"AuiNotebookPageArray(AuiNotebookPageArray)");


sipClassTypeDef sipTypeDef__aui_wxAuiNotebookPageArray = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxAuiNotebookPageArray,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_AuiNotebookPageArray,
        {0, 0, 1},
        2, methods_wxAuiNotebookPageArray,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAuiNotebookPageArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxAuiNotebookPageArray,
    init_type_wxAuiNotebookPageArray,
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
    dealloc_wxAuiNotebookPageArray,
    assign_wxAuiNotebookPageArray,
    array_wxAuiNotebookPageArray,
    copy_wxAuiNotebookPageArray,
    release_wxAuiNotebookPageArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};