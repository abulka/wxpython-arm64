/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_aui.h"


        #include <wx/aui/framemanager.h>


PyDoc_STRVAR(doc_wxAuiDockUIPartArray_append, "append(self, obj: AuiDockUIPart)");

extern "C" {static PyObject *meth_wxAuiDockUIPartArray_append(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDockUIPartArray_append(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiDockUIPart* obj;
         ::wxAuiDockUIPartArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxAuiDockUIPartArray, &sipCpp, sipType_wxAuiDockUIPart, &obj))
        {
        sipCpp->Add(*obj);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiDockUIPartArray, sipName_append, doc_wxAuiDockUIPartArray_append);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAuiDockUIPartArray_index, "index(self, obj: AuiDockUIPart) -> int");

extern "C" {static PyObject *meth_wxAuiDockUIPartArray_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAuiDockUIPartArray_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiDockUIPart* obj;
         ::wxAuiDockUIPartArray *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxAuiDockUIPartArray, &sipCpp, sipType_wxAuiDockUIPart, &obj))
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
    sipNoMethod(sipParseErr, sipName_AuiDockUIPartArray, sipName_index, doc_wxAuiDockUIPartArray_index);

    return SIP_NULLPTR;
}


extern "C" {static int slot_wxAuiDockUIPartArray___contains__(PyObject *,PyObject *);}
static int slot_wxAuiDockUIPartArray___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAuiDockUIPartArray *sipCpp = reinterpret_cast< ::wxAuiDockUIPartArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiDockUIPartArray));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAuiDockUIPart* obj;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxAuiDockUIPart, &obj))
        {
            int sipRes = 0;

        int idx = sipCpp->Index(*obj, false);
        sipRes = idx != wxNOT_FOUND;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiDockUIPartArray, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxAuiDockUIPartArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxAuiDockUIPartArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAuiDockUIPartArray *sipCpp = reinterpret_cast< ::wxAuiDockUIPartArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiDockUIPartArray));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxAuiDockUIPart*sipRes = 0;
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
            return sipConvertFromType(sipRes,sipType_wxAuiDockUIPart,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AuiDockUIPartArray, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static SIP_SSIZE_T slot_wxAuiDockUIPartArray___len__(PyObject *);}
static SIP_SSIZE_T slot_wxAuiDockUIPartArray___len__(PyObject *sipSelf)
{
     ::wxAuiDockUIPartArray *sipCpp = reinterpret_cast< ::wxAuiDockUIPartArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAuiDockUIPartArray));

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
extern "C" {static void release_wxAuiDockUIPartArray(void *, int);}
static void release_wxAuiDockUIPartArray(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxAuiDockUIPartArray *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxAuiDockUIPartArray(void *, SIP_SSIZE_T, void *);}
static void assign_wxAuiDockUIPartArray(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxAuiDockUIPartArray *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxAuiDockUIPartArray *>(sipSrc);
}


extern "C" {static void *array_wxAuiDockUIPartArray(SIP_SSIZE_T);}
static void *array_wxAuiDockUIPartArray(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxAuiDockUIPartArray[sipNrElem];
}


extern "C" {static void *copy_wxAuiDockUIPartArray(const void *, SIP_SSIZE_T);}
static void *copy_wxAuiDockUIPartArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxAuiDockUIPartArray(reinterpret_cast<const  ::wxAuiDockUIPartArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxAuiDockUIPartArray(sipSimpleWrapper *);}
static void dealloc_wxAuiDockUIPartArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAuiDockUIPartArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxAuiDockUIPartArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAuiDockUIPartArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxAuiDockUIPartArray *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiDockUIPartArray();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxAuiDockUIPartArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxAuiDockUIPartArray, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAuiDockUIPartArray(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxAuiDockUIPartArray[] = {
    {(void *)slot_wxAuiDockUIPartArray___contains__, contains_slot},
    {(void *)slot_wxAuiDockUIPartArray___getitem__, getitem_slot},
    {(void *)slot_wxAuiDockUIPartArray___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxAuiDockUIPartArray[] = {
    {SIP_MLNAME_CAST(sipName_append), SIP_MLMETH_CAST(meth_wxAuiDockUIPartArray_append), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAuiDockUIPartArray_append)},
    {SIP_MLNAME_CAST(sipName_index), SIP_MLMETH_CAST(meth_wxAuiDockUIPartArray_index), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAuiDockUIPartArray_index)}
};

PyDoc_STRVAR(doc_wxAuiDockUIPartArray, "\1AuiDockUIPartArray()\n"
"AuiDockUIPartArray(AuiDockUIPartArray)");


sipClassTypeDef sipTypeDef__aui_wxAuiDockUIPartArray = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxAuiDockUIPartArray,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_AuiDockUIPartArray,
        {0, 0, 1},
        2, methods_wxAuiDockUIPartArray,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAuiDockUIPartArray,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxAuiDockUIPartArray,
    init_type_wxAuiDockUIPartArray,
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
    dealloc_wxAuiDockUIPartArray,
    assign_wxAuiDockUIPartArray,
    array_wxAuiDockUIPartArray,
    copy_wxAuiDockUIPartArray,
    release_wxAuiDockUIPartArray,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
