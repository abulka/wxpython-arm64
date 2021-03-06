/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"


        #include <wx/html/helpdata.h>


PyDoc_STRVAR(doc_wxHtmlHelpDataItems_append, "append(self, obj: HtmlHelpDataItem)");

extern "C" {static PyObject *meth_wxHtmlHelpDataItems_append(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlHelpDataItems_append(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlHelpDataItem* obj;
         ::wxHtmlHelpDataItems *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxHtmlHelpDataItems, &sipCpp, sipType_wxHtmlHelpDataItem, &obj))
        {
        sipCpp->Add(*obj);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlHelpDataItems, sipName_append, doc_wxHtmlHelpDataItems_append);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlHelpDataItems_index, "index(self, obj: HtmlHelpDataItem) -> int");

extern "C" {static PyObject *meth_wxHtmlHelpDataItems_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlHelpDataItems_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlHelpDataItem* obj;
         ::wxHtmlHelpDataItems *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxHtmlHelpDataItems, &sipCpp, sipType_wxHtmlHelpDataItem, &obj))
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
    sipNoMethod(sipParseErr, sipName_HtmlHelpDataItems, sipName_index, doc_wxHtmlHelpDataItems_index);

    return SIP_NULLPTR;
}


extern "C" {static int slot_wxHtmlHelpDataItems___contains__(PyObject *,PyObject *);}
static int slot_wxHtmlHelpDataItems___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxHtmlHelpDataItems *sipCpp = reinterpret_cast< ::wxHtmlHelpDataItems *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxHtmlHelpDataItems));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlHelpDataItem* obj;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxHtmlHelpDataItem, &obj))
        {
            int sipRes = 0;

        int idx = sipCpp->Index(*obj, false);
        sipRes = idx != wxNOT_FOUND;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlHelpDataItems, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxHtmlHelpDataItems___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxHtmlHelpDataItems___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxHtmlHelpDataItems *sipCpp = reinterpret_cast< ::wxHtmlHelpDataItems *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxHtmlHelpDataItems));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxHtmlHelpDataItem*sipRes = 0;
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
            return sipConvertFromType(sipRes,sipType_wxHtmlHelpDataItem,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlHelpDataItems, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static SIP_SSIZE_T slot_wxHtmlHelpDataItems___len__(PyObject *);}
static SIP_SSIZE_T slot_wxHtmlHelpDataItems___len__(PyObject *sipSelf)
{
     ::wxHtmlHelpDataItems *sipCpp = reinterpret_cast< ::wxHtmlHelpDataItems *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxHtmlHelpDataItems));

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
extern "C" {static void release_wxHtmlHelpDataItems(void *, int);}
static void release_wxHtmlHelpDataItems(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxHtmlHelpDataItems *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxHtmlHelpDataItems(void *, SIP_SSIZE_T, void *);}
static void assign_wxHtmlHelpDataItems(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxHtmlHelpDataItems *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxHtmlHelpDataItems *>(sipSrc);
}


extern "C" {static void *array_wxHtmlHelpDataItems(SIP_SSIZE_T);}
static void *array_wxHtmlHelpDataItems(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxHtmlHelpDataItems[sipNrElem];
}


extern "C" {static void *copy_wxHtmlHelpDataItems(const void *, SIP_SSIZE_T);}
static void *copy_wxHtmlHelpDataItems(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxHtmlHelpDataItems(reinterpret_cast<const  ::wxHtmlHelpDataItems *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxHtmlHelpDataItems(sipSimpleWrapper *);}
static void dealloc_wxHtmlHelpDataItems(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlHelpDataItems(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxHtmlHelpDataItems(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHtmlHelpDataItems(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxHtmlHelpDataItems *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxHtmlHelpDataItems();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxHtmlHelpDataItems* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxHtmlHelpDataItems, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxHtmlHelpDataItems(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxHtmlHelpDataItems[] = {
    {(void *)slot_wxHtmlHelpDataItems___contains__, contains_slot},
    {(void *)slot_wxHtmlHelpDataItems___getitem__, getitem_slot},
    {(void *)slot_wxHtmlHelpDataItems___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxHtmlHelpDataItems[] = {
    {SIP_MLNAME_CAST(sipName_append), SIP_MLMETH_CAST(meth_wxHtmlHelpDataItems_append), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlHelpDataItems_append)},
    {SIP_MLNAME_CAST(sipName_index), SIP_MLMETH_CAST(meth_wxHtmlHelpDataItems_index), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlHelpDataItems_index)}
};

PyDoc_STRVAR(doc_wxHtmlHelpDataItems, "\1HtmlHelpDataItems()\n"
"HtmlHelpDataItems(HtmlHelpDataItems)");


sipClassTypeDef sipTypeDef__html_wxHtmlHelpDataItems = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxHtmlHelpDataItems,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlHelpDataItems,
        {0, 0, 1},
        2, methods_wxHtmlHelpDataItems,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlHelpDataItems,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxHtmlHelpDataItems,
    init_type_wxHtmlHelpDataItems,
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
    dealloc_wxHtmlHelpDataItems,
    assign_wxHtmlHelpDataItems,
    array_wxHtmlHelpDataItems,
    copy_wxHtmlHelpDataItems,
    release_wxHtmlHelpDataItems,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
