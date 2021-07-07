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

        #include <wx/animdecod.h>


extern "C" {static PyObject *slot_wxAnimationDecoderList_iterator___next__(PyObject *);}
static PyObject *slot_wxAnimationDecoderList_iterator___next__(PyObject *sipSelf)
{
     ::wxAnimationDecoderList_iterator *sipCpp = reinterpret_cast< ::wxAnimationDecoderList_iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxAnimationDecoderList_iterator));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxAnimationDecoder*sipRes = 0;

        sipRes = sipCpp->__next__();
        if (PyErr_Occurred())
            return NULL;

            return sipConvertFromType(sipRes,sipType_wxAnimationDecoder,SIP_NULLPTR);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxAnimationDecoderList_iterator(void *, int);}
static void release_wxAnimationDecoderList_iterator(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxAnimationDecoderList_iterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxAnimationDecoderList_iterator(sipSimpleWrapper *);}
static void dealloc_wxAnimationDecoderList_iterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAnimationDecoderList_iterator(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxAnimationDecoderList_iterator[] = {
    {(void *)slot_wxAnimationDecoderList_iterator___next__, next_slot},
    {0, (sipPySlotType)0}
};


sipClassTypeDef sipTypeDef__adv_wxAnimationDecoderList_iterator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxAnimationDecoderList_iterator,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_AnimationDecoderList_iterator,
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
    slots_wxAnimationDecoderList_iterator,
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
    dealloc_wxAnimationDecoderList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxAnimationDecoderList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
