/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        
        

        #include <wx/menuitem.h>
        
        
        class wxMenuItemList_iterator {
        public:
            wxMenuItemList_iterator(wxMenuItemList::compatibility_iterator start)
                : m_node(start) {}

            wxMenuItem* __next__() {
                wxMenuItem* obj = NULL;
                if (m_node) {
                    obj = (wxMenuItem*) m_node->GetData();
                    m_node = m_node->GetNext();
                }
                else {
                    PyErr_SetString(PyExc_StopIteration, "");
                }
                return (wxMenuItem*)obj;
            }
        private:
            wxMenuItemList::compatibility_iterator m_node;
        };


PyDoc_STRVAR(doc_wxMenuItemList_index, "index(self, obj: MenuItem) -> int");

extern "C" {static PyObject *meth_wxMenuItemList_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxMenuItemList_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxMenuItem* obj;
         ::wxMenuItemList *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxMenuItemList, &sipCpp, sipType_wxMenuItem, &obj))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

        int idx = sipCpp->IndexOf((wxMenuItem*)obj);
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
    sipNoMethod(sipParseErr, sipName_MenuItemList, sipName_index, doc_wxMenuItemList_index);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxMenuItemList___iter__(PyObject *);}
static PyObject *slot_wxMenuItemList___iter__(PyObject *sipSelf)
{
     ::wxMenuItemList *sipCpp = reinterpret_cast< ::wxMenuItemList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxMenuItemList));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxMenuItemList_iterator*sipRes = 0;

        sipRes =  new wxMenuItemList_iterator(sipCpp->GetFirst());

            return sipConvertFromNewType(sipRes,sipType_wxMenuItemList_iterator,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static int slot_wxMenuItemList___contains__(PyObject *,PyObject *);}
static int slot_wxMenuItemList___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxMenuItemList *sipCpp = reinterpret_cast< ::wxMenuItemList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxMenuItemList));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxMenuItem* obj;

        if (sipParseArgs(&sipParseErr, sipArg, "1J8", sipType_wxMenuItem, &obj))
        {
            int sipRes = 0;

        wxMenuItemList::compatibility_iterator node;
        node = sipCpp->Find((wxMenuItem*)obj);
        sipRes = node != NULL;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MenuItemList, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxMenuItemList___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxMenuItemList___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxMenuItemList *sipCpp = reinterpret_cast< ::wxMenuItemList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxMenuItemList));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxMenuItem*sipRes = 0;
            sipErrorState sipError = sipErrorNone;

        if (0 > index)
            index += sipCpp->size();

        if (index < sipCpp->size() && (0 <= index)) {
            wxMenuItemList::compatibility_iterator node = sipCpp->Item(index);
            if (node)
                sipRes = (wxMenuItem*)node->GetData();
        }
        else {
            wxPyErr_SetString(PyExc_IndexError, "sequence index out of range");
            sipError = sipErrorFail;
        }

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipConvertFromType(sipRes,sipType_wxMenuItem,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MenuItemList, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static SIP_SSIZE_T slot_wxMenuItemList___len__(PyObject *);}
static SIP_SSIZE_T slot_wxMenuItemList___len__(PyObject *sipSelf)
{
     ::wxMenuItemList *sipCpp = reinterpret_cast< ::wxMenuItemList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxMenuItemList));

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
extern "C" {static void release_wxMenuItemList(void *, int);}
static void release_wxMenuItemList(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxMenuItemList *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxMenuItemList(void *, SIP_SSIZE_T, void *);}
static void assign_wxMenuItemList(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxMenuItemList *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxMenuItemList *>(sipSrc);
}


extern "C" {static void *array_wxMenuItemList(SIP_SSIZE_T);}
static void *array_wxMenuItemList(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxMenuItemList[sipNrElem];
}


extern "C" {static void *copy_wxMenuItemList(const void *, SIP_SSIZE_T);}
static void *copy_wxMenuItemList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxMenuItemList(reinterpret_cast<const  ::wxMenuItemList *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxMenuItemList(sipSimpleWrapper *);}
static void dealloc_wxMenuItemList(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxMenuItemList(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxMenuItemList(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxMenuItemList(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxMenuItemList *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxMenuItemList();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxMenuItemList* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxMenuItemList, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxMenuItemList(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxMenuItemList[] = {
    {(void *)slot_wxMenuItemList___iter__, iter_slot},
    {(void *)slot_wxMenuItemList___contains__, contains_slot},
    {(void *)slot_wxMenuItemList___getitem__, getitem_slot},
    {(void *)slot_wxMenuItemList___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxMenuItemList[] = {
    {SIP_MLNAME_CAST(sipName_index), SIP_MLMETH_CAST(meth_wxMenuItemList_index), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxMenuItemList_index)}
};

PyDoc_STRVAR(doc_wxMenuItemList, "\1MenuItemList()\n"
"MenuItemList(MenuItemList)");


sipClassTypeDef sipTypeDef__core_wxMenuItemList = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxMenuItemList,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_MenuItemList,
        {0, 0, 1},
        1, methods_wxMenuItemList,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxMenuItemList,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxMenuItemList,
    init_type_wxMenuItemList,
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
    dealloc_wxMenuItemList,
    assign_wxMenuItemList,
    array_wxMenuItemList,
    copy_wxMenuItemList,
    release_wxMenuItemList,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
