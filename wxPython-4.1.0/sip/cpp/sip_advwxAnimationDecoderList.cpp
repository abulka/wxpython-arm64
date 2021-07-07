/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_adv.h"

        #include <wx/animate.h>
        

        #include <wx/animdecod.h>
        #include <wx/animate.h>
        
        class wxAnimationDecoderList_iterator {
        public:
            wxAnimationDecoderList_iterator(wxAnimationDecoderList::compatibility_iterator start)
                : m_node(start) {}

            wxAnimationDecoder* __next__() {
                wxAnimationDecoder* obj = NULL;
                if (m_node) {
                    obj = (wxAnimationDecoder*) m_node->GetData();
                    m_node = m_node->GetNext();
                }
                else {
                    PyErr_SetString(PyExc_StopIteration, "");
                }
                return (wxAnimationDecoder*)obj;
            }
        private:
            wxAnimationDecoderList::compatibility_iterator m_node;
        };


PyDoc_STRVAR(doc_wxAnimationDecoderList_index, "index(self, obj: AnimationDecoder) -> int");

extern "C" {static PyObject *meth_wxAnimationDecoderList_index(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAnimationDecoderList_index(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxAnimationDecoder* obj;
         ::wxAnimationDecoderList *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxAnimationDecoderList, &sipCpp, sipType_wxAnimationDecoder, &obj))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

        int idx = sipCpp->IndexOf((wxAnimationDecoder*)obj);
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
    sipNoMethod(sipParseErr, sipName_AnimationDecoderList, sipName_index, doc_wxAnimationDecoderList_index);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxAnimationDecoderList___iter__(PyObject *);}
static PyObject *slot_wxAnimationDecoderList___iter__(PyObject *sipSelf)
{
     ::wxAnimationDecoderList *sipCpp = reinterpret_cast< ::wxAnimationDecoderList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAnimationDecoderList));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxAnimationDecoderList_iterator*sipRes = 0;

        sipRes =  new wxAnimationDecoderList_iterator(sipCpp->GetFirst());

            return sipConvertFromNewType(sipRes,sipType_wxAnimationDecoderList_iterator,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static int slot_wxAnimationDecoderList___contains__(PyObject *,PyObject *);}
static int slot_wxAnimationDecoderList___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAnimationDecoderList *sipCpp = reinterpret_cast< ::wxAnimationDecoderList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAnimationDecoderList));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxAnimationDecoder* obj;

        if (sipParseArgs(&sipParseErr, sipArg, "1J8", sipType_wxAnimationDecoder, &obj))
        {
            int sipRes = 0;

        wxAnimationDecoderList::compatibility_iterator node;
        node = sipCpp->Find((wxAnimationDecoder*)obj);
        sipRes = node != NULL;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoderList, sipName___contains__, SIP_NULLPTR);

    return -1;
}


extern "C" {static PyObject *slot_wxAnimationDecoderList___getitem__(PyObject *,PyObject *);}
static PyObject *slot_wxAnimationDecoderList___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxAnimationDecoderList *sipCpp = reinterpret_cast< ::wxAnimationDecoderList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAnimationDecoderList));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long index;

        if (sipParseArgs(&sipParseErr, sipArg, "1l", &index))
        {
             ::wxAnimationDecoder*sipRes = 0;
            sipErrorState sipError = sipErrorNone;

        if (0 > index)
            index += sipCpp->size();

        if (index < sipCpp->size() && (0 <= index)) {
            wxAnimationDecoderList::compatibility_iterator node = sipCpp->Item(index);
            if (node)
                sipRes = (wxAnimationDecoder*)node->GetData();
        }
        else {
            wxPyErr_SetString(PyExc_IndexError, "sequence index out of range");
            sipError = sipErrorFail;
        }

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipConvertFromType(sipRes,sipType_wxAnimationDecoder,SIP_NULLPTR);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AnimationDecoderList, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static SIP_SSIZE_T slot_wxAnimationDecoderList___len__(PyObject *);}
static SIP_SSIZE_T slot_wxAnimationDecoderList___len__(PyObject *sipSelf)
{
     ::wxAnimationDecoderList *sipCpp = reinterpret_cast< ::wxAnimationDecoderList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAnimationDecoderList));

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
extern "C" {static void release_wxAnimationDecoderList(void *, int);}
static void release_wxAnimationDecoderList(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxAnimationDecoderList *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxAnimationDecoderList(void *, SIP_SSIZE_T, void *);}
static void assign_wxAnimationDecoderList(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxAnimationDecoderList *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxAnimationDecoderList *>(sipSrc);
}


extern "C" {static void *array_wxAnimationDecoderList(SIP_SSIZE_T);}
static void *array_wxAnimationDecoderList(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxAnimationDecoderList[sipNrElem];
}


extern "C" {static void *copy_wxAnimationDecoderList(const void *, SIP_SSIZE_T);}
static void *copy_wxAnimationDecoderList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxAnimationDecoderList(reinterpret_cast<const  ::wxAnimationDecoderList *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxAnimationDecoderList(sipSimpleWrapper *);}
static void dealloc_wxAnimationDecoderList(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAnimationDecoderList(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxAnimationDecoderList(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxAnimationDecoderList(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxAnimationDecoderList *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAnimationDecoderList();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxAnimationDecoderList* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxAnimationDecoderList, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxAnimationDecoderList(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxAnimationDecoderList[] = {
    {(void *)slot_wxAnimationDecoderList___iter__, iter_slot},
    {(void *)slot_wxAnimationDecoderList___contains__, contains_slot},
    {(void *)slot_wxAnimationDecoderList___getitem__, getitem_slot},
    {(void *)slot_wxAnimationDecoderList___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxAnimationDecoderList[] = {
    {SIP_MLNAME_CAST(sipName_index), SIP_MLMETH_CAST(meth_wxAnimationDecoderList_index), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAnimationDecoderList_index)}
};

PyDoc_STRVAR(doc_wxAnimationDecoderList, "\1AnimationDecoderList()\n"
"AnimationDecoderList(AnimationDecoderList)");


sipClassTypeDef sipTypeDef__adv_wxAnimationDecoderList = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxAnimationDecoderList,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_AnimationDecoderList,
        {0, 0, 1},
        1, methods_wxAnimationDecoderList,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAnimationDecoderList,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxAnimationDecoderList,
    init_type_wxAnimationDecoderList,
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
    dealloc_wxAnimationDecoderList,
    assign_wxAnimationDecoderList,
    array_wxAnimationDecoderList,
    copy_wxAnimationDecoderList,
    release_wxAnimationDecoderList,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
