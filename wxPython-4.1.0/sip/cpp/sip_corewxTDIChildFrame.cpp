/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"


        #include <wx/mdi.h>
        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/validate.h>
        #include <wx/window.h>
        #include <wx/toolbar.h>
        #include <wx/statusbr.h>
        #include <wx/menu.h>
        #include <wx/gdicmn.h>
        #include <wx/iconbndl.h>
        #include <wx/icon.h>
        #include <wx/toplevel.h>
            #include <wx/toplevel.h>
        #include <wx/region.h>
        #include <wx/graphics.h>
        #include <wx/event.h>
    #include <wx/setup.h>
    #include <wxPython/wxpy_api.h>
        #include <wx/event.h>
        #include <wx/cursor.h>
        #include <wx/caret.h>
        #include <wx/layout.h>
        #include <wx/sizer.h>
        #include <wx/dnd.h>
        #include <wx/access.h>
        #include <wx/accel.h>
        #include <wx/menu.h>
        #include <wx/tooltip.h>
        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/event.h>
        #include <wx/event.h>
        #include <wx/palette.h>
        #include <wx/colour.h>
        #include <wx/font.h>
        
        
        #include <wx/eventfilter.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxTDIChildFrame(void *, const sipTypeDef *);}
static void *cast_wxTDIChildFrame(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxTDIChildFrame *sipCpp = reinterpret_cast< ::wxTDIChildFrame *>(sipCppV);

    if (targetType == sipType_wxMDIChildFrameBase)
        return static_cast< ::wxMDIChildFrameBase *>(sipCpp);

    if (targetType == sipType_wxFrame)
        return static_cast< ::wxFrame *>(sipCpp);

    if (targetType == sipType_wxTopLevelWindow)
        return static_cast< ::wxTopLevelWindow *>(sipCpp);

    if (targetType == sipType_wxNonOwnedWindow)
        return static_cast< ::wxNonOwnedWindow *>(sipCpp);

    if (targetType == sipType_wxWindow)
        return static_cast< ::wxWindow *>(sipCpp);

    if (targetType == sipType_wxWindowBase)
        return static_cast< ::wxWindowBase *>(sipCpp);

    if (targetType == sipType_wxEvtHandler)
        return static_cast< ::wxEvtHandler *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    if (targetType == sipType_wxTrackable)
        return static_cast< ::wxTrackable *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTDIChildFrame(void *, int);}
static void release_wxTDIChildFrame(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxTDIChildFrame *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxTDIChildFrame(sipSimpleWrapper *);}
static void dealloc_wxTDIChildFrame(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTDIChildFrame(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxTDIChildFrame[] = {{324, 255, 1}};


sipClassTypeDef sipTypeDef__core_wxTDIChildFrame = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxTDIChildFrame,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_TDIChildFrame,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_wxTDIChildFrame,
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
    dealloc_wxTDIChildFrame,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxTDIChildFrame,
    cast_wxTDIChildFrame,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};