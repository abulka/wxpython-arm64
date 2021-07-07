/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/bookctrl.h>

        #include <wx/window.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/validate.h>
        #include <wx/dc.h>
        #include <wx/event.h>
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
        #include <wx/region.h>
        
        
        #include <wx/eventfilter.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/imaglist.h>


PyDoc_STRVAR(doc_wxBookCtrlBase_GetPageImage, "GetPageImage(nPage) -> int\n"
"\n"
"Returns the image index for the given page.");

extern "C" {static PyObject *meth_wxBookCtrlBase_GetPageImage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_GetPageImage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        size_t nPage;
        const  ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nPage,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &nPage))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BookCtrlBase, sipName_GetPageImage);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPageImage(nPage);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_GetPageImage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_SetPageImage, "SetPageImage(page, image) -> bool\n"
"\n"
"Sets the image index for the given page.");

extern "C" {static PyObject *meth_wxBookCtrlBase_SetPageImage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_SetPageImage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        size_t page;
        int image;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
            sipName_image,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=i", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &page, &image))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BookCtrlBase, sipName_SetPageImage);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->SetPageImage(page,image);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_SetPageImage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_GetPageText, "GetPageText(nPage) -> String\n"
"\n"
"Returns the string for the given page.");

extern "C" {static PyObject *meth_wxBookCtrlBase_GetPageText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_GetPageText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        size_t nPage;
        const  ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nPage,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &nPage))
        {
             ::wxString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BookCtrlBase, sipName_GetPageText);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetPageText(nPage));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_GetPageText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_SetPageText, "SetPageText(page, text) -> bool\n"
"\n"
"Sets the text for the given page.");

extern "C" {static PyObject *meth_wxBookCtrlBase_SetPageText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_SetPageText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        size_t page;
        const  ::wxString* text;
        int textState = 0;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
            sipName_text,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=J1", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &page, sipType_wxString,&text, &textState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BookCtrlBase, sipName_SetPageText);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->SetPageText(page,*text);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_SetPageText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_GetSelection, "GetSelection() -> int\n"
"\n"
"Returns the currently selected page, or wxNOT_FOUND if none was\n"
"selected.");

extern "C" {static PyObject *meth_wxBookCtrlBase_GetSelection(PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_GetSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxBookCtrlBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxBookCtrlBase, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BookCtrlBase, sipName_GetSelection);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetSelection();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_GetSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_GetCurrentPage, "GetCurrentPage() -> Window\n"
"\n"
"Returns the currently selected page or NULL.");

extern "C" {static PyObject *meth_wxBookCtrlBase_GetCurrentPage(PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_GetCurrentPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxBookCtrlBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxBookCtrlBase, &sipCpp))
        {
             ::wxWindow*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCurrentPage();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_GetCurrentPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_SetSelection, "SetSelection(page) -> int\n"
"\n"
"Sets the selection to the given page, returning the previous\n"
"selection.");

extern "C" {static PyObject *meth_wxBookCtrlBase_SetSelection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_SetSelection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        size_t page;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &page))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BookCtrlBase, sipName_SetSelection);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->SetSelection(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_SetSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_AdvanceSelection, "AdvanceSelection(forward=True)\n"
"\n"
"Cycles through the tabs.");

extern "C" {static PyObject *meth_wxBookCtrlBase_AdvanceSelection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_AdvanceSelection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool forward = 1;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_forward,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|b", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &forward))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->AdvanceSelection(forward);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_AdvanceSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_ChangeSelection, "ChangeSelection(page) -> int\n"
"\n"
"Changes the selection to the given page, returning the previous\n"
"selection.");

extern "C" {static PyObject *meth_wxBookCtrlBase_ChangeSelection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_ChangeSelection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        size_t page;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &page))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BookCtrlBase, sipName_ChangeSelection);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ChangeSelection(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_ChangeSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_FindPage, "FindPage(page) -> int\n"
"\n"
"Returns the index of the specified tab window or wxNOT_FOUND if not\n"
"found.");

extern "C" {static PyObject *meth_wxBookCtrlBase_FindPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_FindPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWindow* page;
        const  ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, sipType_wxWindow, &page))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->FindPage(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_FindPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_AddPage, "AddPage(page, text, select=False, imageId=NO_IMAGE) -> bool\n"
"\n"
"Adds a new page.");

extern "C" {static PyObject *meth_wxBookCtrlBase_AddPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_AddPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxWindow* page;
        const  ::wxString* text;
        int textState = 0;
        bool select = 0;
        int imageId =  ::wxBookCtrlBase::NO_IMAGE;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
            sipName_text,
            sipName_select,
            sipName_imageId,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1|bi", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, sipType_wxWindow, &page, sipType_wxString,&text, &textState, &select, &imageId))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxBookCtrlBase::AddPage(page,*text,select,imageId) : sipCpp->AddPage(page,*text,select,imageId));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_AddPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_DeleteAllPages, "DeleteAllPages() -> bool\n"
"\n"
"Deletes all pages.");

extern "C" {static PyObject *meth_wxBookCtrlBase_DeleteAllPages(PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_DeleteAllPages(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxBookCtrlBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxBookCtrlBase, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxBookCtrlBase::DeleteAllPages() : sipCpp->DeleteAllPages());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_DeleteAllPages, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_DeletePage, "DeletePage(page) -> bool\n"
"\n"
"Deletes the specified page, and the associated window.");

extern "C" {static PyObject *meth_wxBookCtrlBase_DeletePage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_DeletePage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        size_t page;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &page))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxBookCtrlBase::DeletePage(page) : sipCpp->DeletePage(page));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_DeletePage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_InsertPage, "InsertPage(index, page, text, select=False, imageId=NO_IMAGE) -> bool\n"
"\n"
"Inserts a new page at the specified position.");

extern "C" {static PyObject *meth_wxBookCtrlBase_InsertPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_InsertPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        size_t index;
         ::wxWindow* page;
        const  ::wxString* text;
        int textState = 0;
        bool select = 0;
        int imageId =  ::wxBookCtrlBase::NO_IMAGE;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_index,
            sipName_page,
            sipName_text,
            sipName_select,
            sipName_imageId,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=J8J1|bi", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &index, sipType_wxWindow, &page, sipType_wxString,&text, &textState, &select, &imageId))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BookCtrlBase, sipName_InsertPage);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->InsertPage(index,page,*text,select,imageId);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_InsertPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_RemovePage, "RemovePage(page) -> bool\n"
"\n"
"Deletes the specified page, without deleting the associated window.");

extern "C" {static PyObject *meth_wxBookCtrlBase_RemovePage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_RemovePage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        size_t page;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &page))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxBookCtrlBase::RemovePage(page) : sipCpp->RemovePage(page));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_RemovePage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_GetPageCount, "GetPageCount() -> size_t\n"
"\n"
"Returns the number of pages in the control.");

extern "C" {static PyObject *meth_wxBookCtrlBase_GetPageCount(PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_GetPageCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxBookCtrlBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxBookCtrlBase, &sipCpp))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxBookCtrlBase::GetPageCount() : sipCpp->GetPageCount());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_GetPageCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_GetPage, "GetPage(page) -> Window\n"
"\n"
"Returns the window at the given page position.");

extern "C" {static PyObject *meth_wxBookCtrlBase_GetPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_GetPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t page;
        const  ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, &page))
        {
             ::wxWindow*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPage(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_GetPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_Create, "Create(parent, winid, pos=DefaultPosition, size=DefaultSize, style=0, name=EmptyString) -> bool\n"
"\n"
"Constructs the book control with the given parameters.");

extern "C" {static PyObject *meth_wxBookCtrlBase_Create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_Create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxWindow* parent;
         ::wxWindowID winid;
        const  ::wxPoint& posdef = wxDefaultPosition;
        const  ::wxPoint* pos = &posdef;
        int posState = 0;
        const  ::wxSize& sizedef = wxDefaultSize;
        const  ::wxSize* size = &sizedef;
        int sizeState = 0;
        long style = 0;
        const  ::wxString& namedef = wxEmptyString;
        const  ::wxString* name = &namedef;
        int nameState = 0;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parent,
            sipName_winid,
            sipName_pos,
            sipName_size,
            sipName_style,
            sipName_name,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8i|J1J1lJ1", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, sipType_wxWindow, &parent, &winid, sipType_wxPoint, &pos, &posState, sipType_wxSize, &size, &sizeState, &style, sipType_wxString,&name, &nameState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Create(parent,winid,*pos,*size,style,*name);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pos),sipType_wxPoint,posState);
            sipReleaseType(const_cast< ::wxSize *>(size),sipType_wxSize,sizeState);
            sipReleaseType(const_cast< ::wxString *>(name),sipType_wxString,nameState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_Create, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_SetPageSize, "SetPageSize(size)\n"
"\n"
"Sets the width and height of the pages.");

extern "C" {static PyObject *meth_wxBookCtrlBase_SetPageSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_SetPageSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxSize* size;
        int sizeState = 0;
         ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_size,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, sipType_wxSize, &size, &sizeState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxBookCtrlBase::SetPageSize(*size) : sipCpp->SetPageSize(*size));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(size),sipType_wxSize,sizeState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_SetPageSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxBookCtrlBase_HitTest, "HitTest(pt) -> (int, flags)\n"
"\n"
"Returns the index of the tab at the specified position or wxNOT_FOUND\n"
"if none.");

extern "C" {static PyObject *meth_wxBookCtrlBase_HitTest(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxBookCtrlBase_HitTest(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxPoint* pt;
        int ptState = 0;
        long flags;
        const  ::wxBookCtrlBase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxBookCtrlBase, &sipCpp, sipType_wxPoint, &pt, &ptState))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxBookCtrlBase::HitTest(*pt,&flags) : sipCpp->HitTest(*pt,&flags));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pt),sipType_wxPoint,ptState);

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(il)",sipRes,flags);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BookCtrlBase, sipName_HitTest, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxBookCtrlBase(void *, const sipTypeDef *);}
static void *cast_wxBookCtrlBase(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxBookCtrlBase *sipCpp = reinterpret_cast< ::wxBookCtrlBase *>(sipCppV);

    if (targetType == sipType_wxControl)
        return static_cast< ::wxControl *>(sipCpp);

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

    if (targetType == sipType_wxWithImages)
        return static_cast< ::wxWithImages *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxBookCtrlBase(void *, int);}
static void release_wxBookCtrlBase(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxBookCtrlBase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxBookCtrlBase(sipSimpleWrapper *);}
static void dealloc_wxBookCtrlBase(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxBookCtrlBase(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxBookCtrlBase[] = {{93, 255, 0}, {615, 255, 1}};


static PyMethodDef methods_wxBookCtrlBase[] = {
    {SIP_MLNAME_CAST(sipName_AddPage), SIP_MLMETH_CAST(meth_wxBookCtrlBase_AddPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_AddPage)},
    {SIP_MLNAME_CAST(sipName_AdvanceSelection), SIP_MLMETH_CAST(meth_wxBookCtrlBase_AdvanceSelection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_AdvanceSelection)},
    {SIP_MLNAME_CAST(sipName_ChangeSelection), SIP_MLMETH_CAST(meth_wxBookCtrlBase_ChangeSelection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_ChangeSelection)},
    {SIP_MLNAME_CAST(sipName_Create), SIP_MLMETH_CAST(meth_wxBookCtrlBase_Create), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_Create)},
    {SIP_MLNAME_CAST(sipName_DeleteAllPages), meth_wxBookCtrlBase_DeleteAllPages, METH_VARARGS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_DeleteAllPages)},
    {SIP_MLNAME_CAST(sipName_DeletePage), SIP_MLMETH_CAST(meth_wxBookCtrlBase_DeletePage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_DeletePage)},
    {SIP_MLNAME_CAST(sipName_FindPage), SIP_MLMETH_CAST(meth_wxBookCtrlBase_FindPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_FindPage)},
    {SIP_MLNAME_CAST(sipName_GetCurrentPage), meth_wxBookCtrlBase_GetCurrentPage, METH_VARARGS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_GetCurrentPage)},
    {SIP_MLNAME_CAST(sipName_GetPage), SIP_MLMETH_CAST(meth_wxBookCtrlBase_GetPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_GetPage)},
    {SIP_MLNAME_CAST(sipName_GetPageCount), meth_wxBookCtrlBase_GetPageCount, METH_VARARGS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_GetPageCount)},
    {SIP_MLNAME_CAST(sipName_GetPageImage), SIP_MLMETH_CAST(meth_wxBookCtrlBase_GetPageImage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_GetPageImage)},
    {SIP_MLNAME_CAST(sipName_GetPageText), SIP_MLMETH_CAST(meth_wxBookCtrlBase_GetPageText), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_GetPageText)},
    {SIP_MLNAME_CAST(sipName_GetSelection), meth_wxBookCtrlBase_GetSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_GetSelection)},
    {SIP_MLNAME_CAST(sipName_HitTest), SIP_MLMETH_CAST(meth_wxBookCtrlBase_HitTest), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_HitTest)},
    {SIP_MLNAME_CAST(sipName_InsertPage), SIP_MLMETH_CAST(meth_wxBookCtrlBase_InsertPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_InsertPage)},
    {SIP_MLNAME_CAST(sipName_RemovePage), SIP_MLMETH_CAST(meth_wxBookCtrlBase_RemovePage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_RemovePage)},
    {SIP_MLNAME_CAST(sipName_SetPageImage), SIP_MLMETH_CAST(meth_wxBookCtrlBase_SetPageImage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_SetPageImage)},
    {SIP_MLNAME_CAST(sipName_SetPageSize), SIP_MLMETH_CAST(meth_wxBookCtrlBase_SetPageSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_SetPageSize)},
    {SIP_MLNAME_CAST(sipName_SetPageText), SIP_MLMETH_CAST(meth_wxBookCtrlBase_SetPageText), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_SetPageText)},
    {SIP_MLNAME_CAST(sipName_SetSelection), SIP_MLMETH_CAST(meth_wxBookCtrlBase_SetSelection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxBookCtrlBase_SetSelection)}
};

static sipEnumMemberDef enummembers_wxBookCtrlBase[] = {
    {sipName_NO_IMAGE, static_cast<int>( ::wxBookCtrlBase::NO_IMAGE), -1},
};

sipVariableDef variables_wxBookCtrlBase[] = {
    {PropertyVariable, sipName_Selection, &methods_wxBookCtrlBase[12], &methods_wxBookCtrlBase[19], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_PageCount, &methods_wxBookCtrlBase[9], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_CurrentPage, &methods_wxBookCtrlBase[7], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxBookCtrlBase, "BookCtrlBase()\n"
"BookCtrlBase(parent, winid, pos=DefaultPosition, size=DefaultSize, style=0, name=EmptyString)\n"
"\n"
"A book control is a convenient way of displaying multiple pages of\n"
"information, displayed one page at a time.");


sipClassTypeDef sipTypeDef__core_wxBookCtrlBase = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxBookCtrlBase,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_BookCtrlBase,
        {0, 0, 1},
        20, methods_wxBookCtrlBase,
        1, enummembers_wxBookCtrlBase,
        3, variables_wxBookCtrlBase,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxBookCtrlBase,
    -1,
    -1,
    supers_wxBookCtrlBase,
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
    dealloc_wxBookCtrlBase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxBookCtrlBase,
    cast_wxBookCtrlBase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
