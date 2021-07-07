/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        
        

        #include <wx/window.h>
        
        
        class wxWindowList_iterator {
        public:
            wxWindowList_iterator(wxWindowList::compatibility_iterator start)
                : m_node(start) {}

            wxWindow* __next__() {
                wxWindow* obj = NULL;
                if (m_node) {
                    obj = (wxWindow*) m_node->GetData();
                    m_node = m_node->GetNext();
                }
                else {
                    PyErr_SetString(PyExc_StopIteration, "");
                }
                return (wxWindow*)obj;
            }
        private:
            wxWindowList::compatibility_iterator m_node;
        };


PyDoc_STRVAR(doc_wxWindowList_index, "index(self, obj: Window) -> int");

extern "C" {static PyObject *meth_wxWindowList_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxWindowList_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxWindow* obj;
         ::wxWindowList *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxWindowList, &sipCpp, sipType_wxWindow, &obj))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

        int idx = sipCpp->IndexOf((wxWindow*)obj);
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
    sipNoMethod(sipParseErr, sipName_WindowList, sipName_index, doc_wxWindowList_index);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxWindowList___iter__(PyObject *);}
static PyObject *slot_wxWindowList___iter__(PyObject *sipSelf)
{
     ::wxWindowList *sipCpp = reinterpret_cast< ::wxWindowList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxWindowList));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxWindowList_iterator*sipRes = 0;

        sipRes =  new wxWindowList_iterator(sipCpp->GetFirst());

            return sipConvertFromNewType(sipRes,sipType_wxWindowList_iterator,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static int slot_wxWindowList___contains__(PyObject *,PyObject *);}
static int slot_wxWindowList___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxWindowList *sipCpp = reinterpret_cast< ::wxWindowList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxWindowList));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWindow* obj;

        if (sipParseArgs(&sipParseErr, sipArg, "1J8", sipType_wxWindow, &obj))
        {
            int sipRes = 0;

        wxWindowList::compatibility_iterator node;
        node = sipCpp->Find((wxWindow*)obj);
        sipRes = node != NULL;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WindowList, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxWindowList___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxWindowList___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxWindowList *sipCpp = reinterpret_cast< ::wxWindowList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxWindowList));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxWindow*sipRes = 0;
            sipErrorState sipError = sipErrorNone;

        if (0 > index)
            index += sipCpp->size();

        if (index < sipCpp->size() && (0 <= index)) {
            wxWindowList::compatibility_iterator node = sipCpp->Item(index);
            if (node)
                sipRes = (wxWindow*)node->GetData();
        }
        else {
            wxPyErr_SetString(PyExc_IndexError, "sequence index out of range");
            sipError = sipErrorFail;
        }

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WindowList, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static SIP_SSIZE_T slot_wxWindowList___len__(PyObject *);}
static SIP_SSIZE_T slot_wxWindowList___len__(PyObject *sipSelf)
{
     ::wxWindowList *sipCpp = reinterpret_cast< ::wxWindowList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxWindowList));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

        sipRes = sipCpp->size();

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxWindowList(void *, int);}
static void release_wxWindowList(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxWindowList *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxWindowList(void *, SIP_SSIZE_T, void *);}
static void assign_wxWindowList(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxWindowList *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxWindowList *>(sipSrc);
}


extern "C" {static void *array_wxWindowList(SIP_SSIZE_T);}
static void *array_wxWindowList(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxWindowList[sipNrElem];
}


extern "C" {static void *copy_wxWindowList(const void *, SIP_SSIZE_T);}
static void *copy_wxWindowList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxWindowList(reinterpret_cast<const  ::wxWindowList *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxWindowList(sipSimpleWrapper *);}
static void dealloc_wxWindowList(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxWindowList(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxWindowList(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxWindowList(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxWindowList *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxWindowList();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxWindowList* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxWindowList, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxWindowList(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxWindowList[] = {
    {(void *)slot_wxWindowList___iter__, iter_slot},
    {(void *)slot_wxWindowList___contains__, contains_slot},
    {(void *)slot_wxWindowList___getitem__, getitem_slot},
    {(void *)slot_wxWindowList___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxWindowList[] = {
    {SIP_MLNAME_CAST(sipName_index), SIP_MLMETH_CAST(meth_wxWindowList_index), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxWindowList_index)}
};

PyDoc_STRVAR(doc_wxWindowList, "\1WindowList()\n"
"WindowList(WindowList)");


sipClassTypeDef sipTypeDef__core_wxWindowList = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxWindowList,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_WindowList,
        {0, 0, 1},
        1, methods_wxWindowList,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxWindowList,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxWindowList,
    init_type_wxWindowList,
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
    dealloc_wxWindowList,
    assign_wxWindowList,
    array_wxWindowList,
    copy_wxWindowList,
    release_wxWindowList,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
