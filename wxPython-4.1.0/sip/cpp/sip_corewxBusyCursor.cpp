/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/utils.h>

        #include <wx/cursor.h>


/* Call the instance's destructor. */
extern "C" {static void release_wxBusyCursor(void *, int);}
static void release_wxBusyCursor(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxBusyCursor *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxBusyCursor(void *, SIP_SSIZE_T, void *);}
static void assign_wxBusyCursor(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxBusyCursor *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxBusyCursor *>(sipSrc);
}


extern "C" {static void *array_wxBusyCursor(SIP_SSIZE_T);}
static void *array_wxBusyCursor(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxBusyCursor[sipNrElem];
}


extern "C" {static void *copy_wxBusyCursor(const void *, SIP_SSIZE_T);}
static void *copy_wxBusyCursor(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxBusyCursor(reinterpret_cast<const  ::wxBusyCursor *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxBusyCursor(sipSimpleWrapper *);}
static void dealloc_wxBusyCursor(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxBusyCursor(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxBusyCursor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxBusyCursor(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxBusyCursor *sipCpp = SIP_NULLPTR;

    {
        const  ::wxCursor* cursor = wxHOURGLASS_CURSOR;

        static const char *sipKwdList[] = {
            sipName_cursor,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_wxCursor, &cursor))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxBusyCursor(cursor);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxBusyCursor* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxBusyCursor, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxBusyCursor(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}

PyDoc_STRVAR(doc_wxBusyCursor, "BusyCursor(cursor=HOURGLASS_CURSOR)\n"
"\n"
"This class makes it easy to tell your user that the program is\n"
"temporarily busy.");


sipClassTypeDef sipTypeDef__core_wxBusyCursor = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxBusyCursor,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_BusyCursor,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxBusyCursor,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxBusyCursor,
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
    dealloc_wxBusyCursor,
    assign_wxBusyCursor,
    array_wxBusyCursor,
    copy_wxBusyCursor,
    release_wxBusyCursor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};