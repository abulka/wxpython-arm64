/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/dc.h>



/* Call the instance's destructor. */
extern "C" {static void release_wxDCTextBgModeChanger(void *, int);}
static void release_wxDCTextBgModeChanger(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxDCTextBgModeChanger *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDCTextBgModeChanger(sipSimpleWrapper *);}
static void dealloc_wxDCTextBgModeChanger(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDCTextBgModeChanger(sipGetAddress(sipSelf), 0);
    }
}

PyDoc_STRVAR(doc_wxDCTextBgModeChanger, "wxDCTextBgModeChanger is a small helper class for setting a background\n"
"text mode on a wxDC and unsetting it automatically in the destructor,\n"
"restoring the previous one.");


sipClassTypeDef sipTypeDef__core_wxDCTextBgModeChanger = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxDCTextBgModeChanger,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_DCTextBgModeChanger,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDCTextBgModeChanger,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
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
    dealloc_wxDCTextBgModeChanger,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDCTextBgModeChanger,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
