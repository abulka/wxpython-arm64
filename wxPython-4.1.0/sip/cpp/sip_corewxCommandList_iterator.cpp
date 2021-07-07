/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        
        typedef wxList wxCommandList;
        class wxCommandList_iterator {
        public:
            wxCommandList_iterator(wxCommandList::compatibility_iterator start)
                : m_node(start) {}

            wxCommand* __next__() {
                wxCommand* obj = NULL;
                if (m_node) {
                    obj = (wxCommand*) m_node->GetData();
                    m_node = m_node->GetNext();
                }
                else {
                    PyErr_SetString(PyExc_StopIteration, "");
                }
                return (wxCommand*)obj;
            }
        private:
            wxCommandList::compatibility_iterator m_node;
        };

        #include <wx/cmdproc.h>


extern "C" {static PyObject *slot_wxCommandList_iterator___next__(PyObject *);}
static PyObject *slot_wxCommandList_iterator___next__(PyObject *sipSelf)
{
     ::wxCommandList_iterator *sipCpp = reinterpret_cast< ::wxCommandList_iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxCommandList_iterator));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxCommand*sipRes = 0;

        sipRes = sipCpp->__next__();
        if (PyErr_Occurred())
            return NULL;

            return sipConvertFromType(sipRes,sipType_wxCommand,SIP_NULLPTR);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxCommandList_iterator(void *, int);}
static void release_wxCommandList_iterator(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxCommandList_iterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxCommandList_iterator(sipSimpleWrapper *);}
static void dealloc_wxCommandList_iterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxCommandList_iterator(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxCommandList_iterator[] = {
    {(void *)slot_wxCommandList_iterator___next__, next_slot},
    {0, (sipPySlotType)0}
};


sipClassTypeDef sipTypeDef__core_wxCommandList_iterator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxCommandList_iterator,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_CommandList_iterator,
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
    slots_wxCommandList_iterator,
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
    dealloc_wxCommandList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxCommandList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
