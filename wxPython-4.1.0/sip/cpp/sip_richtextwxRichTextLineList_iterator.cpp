/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_richtext.h"

        
        
        class wxRichTextLineList_iterator {
        public:
            wxRichTextLineList_iterator(wxRichTextLineList::compatibility_iterator start)
                : m_node(start) {}

            wxRichTextLine* __next__() {
                wxRichTextLine* obj = NULL;
                if (m_node) {
                    obj = (wxRichTextLine*) m_node->GetData();
                    m_node = m_node->GetNext();
                }
                else {
                    PyErr_SetString(PyExc_StopIteration, "");
                }
                return (wxRichTextLine*)obj;
            }
        private:
            wxRichTextLineList::compatibility_iterator m_node;
        };

        #include <wx/richtext/richtextbuffer.h>


extern "C" {static PyObject *slot_wxRichTextLineList_iterator___next__(PyObject *);}
static PyObject *slot_wxRichTextLineList_iterator___next__(PyObject *sipSelf)
{
     ::wxRichTextLineList_iterator *sipCpp = reinterpret_cast< ::wxRichTextLineList_iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRichTextLineList_iterator));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxRichTextLine*sipRes = 0;

        sipRes = sipCpp->__next__();
        if (PyErr_Occurred())
            return NULL;

            return sipConvertFromType(sipRes,sipType_wxRichTextLine,SIP_NULLPTR);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRichTextLineList_iterator(void *, int);}
static void release_wxRichTextLineList_iterator(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxRichTextLineList_iterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxRichTextLineList_iterator(sipSimpleWrapper *);}
static void dealloc_wxRichTextLineList_iterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRichTextLineList_iterator(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxRichTextLineList_iterator[] = {
    {(void *)slot_wxRichTextLineList_iterator___next__, next_slot},
    {0, (sipPySlotType)0}
};


sipClassTypeDef sipTypeDef__richtext_wxRichTextLineList_iterator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxRichTextLineList_iterator,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_RichTextLineList_iterator,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxRichTextLineList_iterator,
    SIP_NULLPTR,
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
    dealloc_wxRichTextLineList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxRichTextLineList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
