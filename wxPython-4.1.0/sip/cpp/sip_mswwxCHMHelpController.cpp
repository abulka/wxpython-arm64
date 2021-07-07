/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_msw.h"

    #include <wx/msw/helpchm.h>

        #include <wx/window.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/frame.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxCHMHelpController : public  ::wxCHMHelpController
{
public:
    sipwxCHMHelpController( ::wxWindow*);
    sipwxCHMHelpController(const  ::wxCHMHelpController&);
    virtual ~sipwxCHMHelpController();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool DisplayBlock(long) SIP_OVERRIDE;
    bool DisplayContents() SIP_OVERRIDE;
    bool DisplayContextPopup(int) SIP_OVERRIDE;
    bool DisplaySection(const  ::wxString&) SIP_OVERRIDE;
    bool DisplaySection(int) SIP_OVERRIDE;
    bool DisplayTextPopup(const  ::wxString&,const  ::wxPoint&) SIP_OVERRIDE;
     ::wxFrame* GetFrameParameters( ::wxSize*, ::wxPoint*,bool*) SIP_OVERRIDE;
     ::wxWindow* GetParentWindow() const SIP_OVERRIDE;
    bool Initialize(const  ::wxString&) SIP_OVERRIDE;
    bool KeywordSearch(const  ::wxString&, ::wxHelpSearchMode) SIP_OVERRIDE;
    bool LoadFile(const  ::wxString&) SIP_OVERRIDE;
    void OnQuit() SIP_OVERRIDE;
    bool Quit() SIP_OVERRIDE;
    void SetFrameParameters(const  ::wxString&,const  ::wxSize&,const  ::wxPoint&,bool) SIP_OVERRIDE;
    void SetParentWindow( ::wxWindow*) SIP_OVERRIDE;
    void SetViewer(const  ::wxString&,long) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxCHMHelpController(const sipwxCHMHelpController &);
    sipwxCHMHelpController &operator = (const sipwxCHMHelpController &);

    char sipPyMethods[16];
};

sipwxCHMHelpController::sipwxCHMHelpController( ::wxWindow*parentWindow):  ::wxCHMHelpController(parentWindow), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCHMHelpController::sipwxCHMHelpController(const  ::wxCHMHelpController& a0):  ::wxCHMHelpController(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxCHMHelpController::~sipwxCHMHelpController()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxCHMHelpController::DisplayBlock(long blockNo)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_DisplayBlock);

    if (!sipMeth)
        return  ::wxCHMHelpController::DisplayBlock(blockNo);

    extern bool sipVH__msw_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, long);

    return sipVH__msw_27(sipGILState, 0, sipPySelf, sipMeth, blockNo);
}

bool sipwxCHMHelpController::DisplayContents()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_DisplayContents);

    if (!sipMeth)
        return  ::wxCHMHelpController::DisplayContents();

    extern bool sipVH__msw_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__msw_11(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxCHMHelpController::DisplayContextPopup(int contextId)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_DisplayContextPopup);

    if (!sipMeth)
        return  ::wxCHMHelpController::DisplayContextPopup(contextId);

    extern bool sipVH__msw_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__msw_26(sipGILState, 0, sipPySelf, sipMeth, contextId);
}

bool sipwxCHMHelpController::DisplaySection(const  ::wxString& section)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_DisplaySection);

    if (!sipMeth)
        return  ::wxCHMHelpController::DisplaySection(section);

    extern bool sipVH__msw_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__msw_22(sipGILState, 0, sipPySelf, sipMeth, section);
}

bool sipwxCHMHelpController::DisplaySection(int sectionNo)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_DisplaySection);

    if (!sipMeth)
        return  ::wxCHMHelpController::DisplaySection(sectionNo);

    extern bool sipVH__msw_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__msw_26(sipGILState, 0, sipPySelf, sipMeth, sectionNo);
}

bool sipwxCHMHelpController::DisplayTextPopup(const  ::wxString& text,const  ::wxPoint& pos)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_DisplayTextPopup);

    if (!sipMeth)
        return  ::wxCHMHelpController::DisplayTextPopup(text,pos);

    extern bool sipVH__msw_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&,const  ::wxPoint&);

    return sipVH__msw_25(sipGILState, 0, sipPySelf, sipMeth, text, pos);
}

 ::wxFrame* sipwxCHMHelpController::GetFrameParameters( ::wxSize*size, ::wxPoint*pos,bool*newFrameEachTime)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_GetFrameParameters);

    if (!sipMeth)
        return  ::wxCHMHelpController::GetFrameParameters(size,pos,newFrameEachTime);

    extern  ::wxFrame* sipVH__msw_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxSize*, ::wxPoint*,bool*);

    return sipVH__msw_24(sipGILState, 0, sipPySelf, sipMeth, size, pos, newFrameEachTime);
}

 ::wxWindow* sipwxCHMHelpController::GetParentWindow() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,SIP_NULLPTR,sipName_GetParentWindow);

    if (!sipMeth)
        return  ::wxCHMHelpController::GetParentWindow();

    extern  ::wxWindow* sipVH__msw_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__msw_10(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxCHMHelpController::Initialize(const  ::wxString& file)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,SIP_NULLPTR,sipName_Initialize);

    if (!sipMeth)
        return  ::wxCHMHelpController::Initialize(file);

    extern bool sipVH__msw_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__msw_22(sipGILState, 0, sipPySelf, sipMeth, file);
}

bool sipwxCHMHelpController::KeywordSearch(const  ::wxString& k, ::wxHelpSearchMode mode)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,SIP_NULLPTR,sipName_KeywordSearch);

    if (!sipMeth)
        return  ::wxCHMHelpController::KeywordSearch(k,mode);

    extern bool sipVH__msw_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxHelpSearchMode);

    return sipVH__msw_23(sipGILState, 0, sipPySelf, sipMeth, k, mode);
}

bool sipwxCHMHelpController::LoadFile(const  ::wxString& file)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,SIP_NULLPTR,sipName_LoadFile);

    if (!sipMeth)
        return  ::wxCHMHelpController::LoadFile(file);

    extern bool sipVH__msw_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__msw_22(sipGILState, 0, sipPySelf, sipMeth, file);
}

void sipwxCHMHelpController::OnQuit()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,SIP_NULLPTR,sipName_OnQuit);

    if (!sipMeth)
    {
         ::wxCHMHelpController::OnQuit();
        return;
    }

    extern void sipVH__msw_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__msw_1(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxCHMHelpController::Quit()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,SIP_NULLPTR,sipName_Quit);

    if (!sipMeth)
        return  ::wxCHMHelpController::Quit();

    extern bool sipVH__msw_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__msw_11(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxCHMHelpController::SetFrameParameters(const  ::wxString& titleFormat,const  ::wxSize& size,const  ::wxPoint& pos,bool newFrameEachTime)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,SIP_NULLPTR,sipName_SetFrameParameters);

    if (!sipMeth)
    {
         ::wxCHMHelpController::SetFrameParameters(titleFormat,size,pos,newFrameEachTime);
        return;
    }

    extern void sipVH__msw_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&,const  ::wxSize&,const  ::wxPoint&,bool);

    sipVH__msw_21(sipGILState, 0, sipPySelf, sipMeth, titleFormat, size, pos, newFrameEachTime);
}

void sipwxCHMHelpController::SetParentWindow( ::wxWindow*parentWindow)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,SIP_NULLPTR,sipName_SetParentWindow);

    if (!sipMeth)
    {
         ::wxCHMHelpController::SetParentWindow(parentWindow);
        return;
    }

    extern void sipVH__msw_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*);

    sipVH__msw_20(sipGILState, 0, sipPySelf, sipMeth, parentWindow);
}

void sipwxCHMHelpController::SetViewer(const  ::wxString& viewer,long flags)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,SIP_NULLPTR,sipName_SetViewer);

    if (!sipMeth)
    {
         ::wxCHMHelpController::SetViewer(viewer,flags);
        return;
    }

    extern void sipVH__msw_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&,long);

    sipVH__msw_19(sipGILState, 0, sipPySelf, sipMeth, viewer, flags);
}


PyDoc_STRVAR(doc_wxCHMHelpController_Initialize, "Initialize(self, file: object) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_Initialize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_Initialize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* file;
        int fileState = 0;
         ::wxCHMHelpController *sipCpp;

        static const char *sipKwdList[] = {
            sipName_file,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxCHMHelpController, &sipCpp, sipType_wxString,&file, &fileState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::Initialize(*file) : sipCpp->Initialize(*file));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(file),sipType_wxString,fileState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_Initialize, doc_wxCHMHelpController_Initialize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_LoadFile, "LoadFile(self, file: object = wxEmptyString) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_LoadFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_LoadFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString& filedef = wxEmptyString;
        const  ::wxString* file = &filedef;
        int fileState = 0;
         ::wxCHMHelpController *sipCpp;

        static const char *sipKwdList[] = {
            sipName_file,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|J1", &sipSelf, sipType_wxCHMHelpController, &sipCpp, sipType_wxString,&file, &fileState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::LoadFile(*file) : sipCpp->LoadFile(*file));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(file),sipType_wxString,fileState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_LoadFile, doc_wxCHMHelpController_LoadFile);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_DisplayContents, "DisplayContents(self) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_DisplayContents(PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_DisplayContents(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxCHMHelpController *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCHMHelpController, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::DisplayContents() : sipCpp->DisplayContents());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_DisplayContents, doc_wxCHMHelpController_DisplayContents);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_DisplaySection, "DisplaySection(self, sectionNo: int) -> bool\n"
"DisplaySection(self, section: object) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_DisplaySection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_DisplaySection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int sectionNo;
         ::wxCHMHelpController *sipCpp;

        static const char *sipKwdList[] = {
            sipName_sectionNo,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxCHMHelpController, &sipCpp, &sectionNo))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::DisplaySection(sectionNo) : sipCpp->DisplaySection(sectionNo));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::wxString* section;
        int sectionState = 0;
         ::wxCHMHelpController *sipCpp;

        static const char *sipKwdList[] = {
            sipName_section,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxCHMHelpController, &sipCpp, sipType_wxString,&section, &sectionState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::DisplaySection(*section) : sipCpp->DisplaySection(*section));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(section),sipType_wxString,sectionState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_DisplaySection, doc_wxCHMHelpController_DisplaySection);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_DisplayBlock, "DisplayBlock(self, blockNo: int) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_DisplayBlock(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_DisplayBlock(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        long blockNo;
         ::wxCHMHelpController *sipCpp;

        static const char *sipKwdList[] = {
            sipName_blockNo,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxCHMHelpController, &sipCpp, &blockNo))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::DisplayBlock(blockNo) : sipCpp->DisplayBlock(blockNo));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_DisplayBlock, doc_wxCHMHelpController_DisplayBlock);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_DisplayContextPopup, "DisplayContextPopup(self, contextId: int) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_DisplayContextPopup(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_DisplayContextPopup(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int contextId;
         ::wxCHMHelpController *sipCpp;

        static const char *sipKwdList[] = {
            sipName_contextId,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxCHMHelpController, &sipCpp, &contextId))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::DisplayContextPopup(contextId) : sipCpp->DisplayContextPopup(contextId));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_DisplayContextPopup, doc_wxCHMHelpController_DisplayContextPopup);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_DisplayTextPopup, "DisplayTextPopup(self, text: object, pos: Point) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_DisplayTextPopup(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_DisplayTextPopup(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* text;
        int textState = 0;
        const  ::wxPoint* pos;
        int posState = 0;
         ::wxCHMHelpController *sipCpp;

        static const char *sipKwdList[] = {
            sipName_text,
            sipName_pos,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J1", &sipSelf, sipType_wxCHMHelpController, &sipCpp, sipType_wxString,&text, &textState, sipType_wxPoint, &pos, &posState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::DisplayTextPopup(*text,*pos) : sipCpp->DisplayTextPopup(*text,*pos));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);
            sipReleaseType(const_cast< ::wxPoint *>(pos),sipType_wxPoint,posState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_DisplayTextPopup, doc_wxCHMHelpController_DisplayTextPopup);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_KeywordSearch, "KeywordSearch(self, k: object, mode: HelpSearchMode = wxHELP_SEARCH_ALL) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_KeywordSearch(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_KeywordSearch(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* k;
        int kState = 0;
         ::wxHelpSearchMode mode = wxHELP_SEARCH_ALL;
         ::wxCHMHelpController *sipCpp;

        static const char *sipKwdList[] = {
            sipName_k,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|E", &sipSelf, sipType_wxCHMHelpController, &sipCpp, sipType_wxString,&k, &kState, sipType_wxHelpSearchMode, &mode))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::KeywordSearch(*k,mode) : sipCpp->KeywordSearch(*k,mode));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(k),sipType_wxString,kState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_KeywordSearch, doc_wxCHMHelpController_KeywordSearch);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_Quit, "Quit(self) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_Quit(PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_Quit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxCHMHelpController *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCHMHelpController, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxCHMHelpController::Quit() : sipCpp->Quit());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_Quit, doc_wxCHMHelpController_Quit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_GetHelpFile, "GetHelpFile(self) -> object");

extern "C" {static PyObject *meth_wxCHMHelpController_GetHelpFile(PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_GetHelpFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxCHMHelpController *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxCHMHelpController, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetHelpFile());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_GetHelpFile, doc_wxCHMHelpController_GetHelpFile);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxCHMHelpController_ShowContextHelpPopup, "ShowContextHelpPopup(text: object, pos: Point, window: Window) -> bool");

extern "C" {static PyObject *meth_wxCHMHelpController_ShowContextHelpPopup(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxCHMHelpController_ShowContextHelpPopup(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* text;
        int textState = 0;
        const  ::wxPoint* pos;
        int posState = 0;
         ::wxWindow* window;

        static const char *sipKwdList[] = {
            sipName_text,
            sipName_pos,
            sipName_window,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1J1J8", sipType_wxString,&text, &textState, sipType_wxPoint, &pos, &posState, sipType_wxWindow, &window))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxCHMHelpController::ShowContextHelpPopup(*text,*pos,window);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);
            sipReleaseType(const_cast< ::wxPoint *>(pos),sipType_wxPoint,posState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CHMHelpController, sipName_ShowContextHelpPopup, doc_wxCHMHelpController_ShowContextHelpPopup);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxCHMHelpController(void *, const sipTypeDef *);}
static void *cast_wxCHMHelpController(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxCHMHelpController *sipCpp = reinterpret_cast< ::wxCHMHelpController *>(sipCppV);

    if (targetType == sipType_wxHelpControllerBase)
        return static_cast< ::wxHelpControllerBase *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxCHMHelpController(void *, int);}
static void release_wxCHMHelpController(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxCHMHelpController *>(sipCppV);
    else
        delete reinterpret_cast< ::wxCHMHelpController *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxCHMHelpController(void *, SIP_SSIZE_T, void *);}
static void assign_wxCHMHelpController(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxCHMHelpController *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxCHMHelpController *>(sipSrc);
}


extern "C" {static void *array_wxCHMHelpController(SIP_SSIZE_T);}
static void *array_wxCHMHelpController(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxCHMHelpController[sipNrElem];
}


extern "C" {static void *copy_wxCHMHelpController(const void *, SIP_SSIZE_T);}
static void *copy_wxCHMHelpController(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxCHMHelpController(reinterpret_cast<const  ::wxCHMHelpController *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxCHMHelpController(sipSimpleWrapper *);}
static void dealloc_wxCHMHelpController(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxCHMHelpController *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxCHMHelpController(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxCHMHelpController(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxCHMHelpController(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxCHMHelpController *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* parentWindow = 0;

        static const char *sipKwdList[] = {
            sipName_parentWindow,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_wxWindow, &parentWindow))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxCHMHelpController(parentWindow);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxCHMHelpController* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxCHMHelpController, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxCHMHelpController(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxCHMHelpController[] = {{4, 0, 1}};


static PyMethodDef methods_wxCHMHelpController[] = {
    {SIP_MLNAME_CAST(sipName_DisplayBlock), SIP_MLMETH_CAST(meth_wxCHMHelpController_DisplayBlock), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCHMHelpController_DisplayBlock)},
    {SIP_MLNAME_CAST(sipName_DisplayContents), meth_wxCHMHelpController_DisplayContents, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCHMHelpController_DisplayContents)},
    {SIP_MLNAME_CAST(sipName_DisplayContextPopup), SIP_MLMETH_CAST(meth_wxCHMHelpController_DisplayContextPopup), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCHMHelpController_DisplayContextPopup)},
    {SIP_MLNAME_CAST(sipName_DisplaySection), SIP_MLMETH_CAST(meth_wxCHMHelpController_DisplaySection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCHMHelpController_DisplaySection)},
    {SIP_MLNAME_CAST(sipName_DisplayTextPopup), SIP_MLMETH_CAST(meth_wxCHMHelpController_DisplayTextPopup), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCHMHelpController_DisplayTextPopup)},
    {SIP_MLNAME_CAST(sipName_GetHelpFile), meth_wxCHMHelpController_GetHelpFile, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCHMHelpController_GetHelpFile)},
    {SIP_MLNAME_CAST(sipName_Initialize), SIP_MLMETH_CAST(meth_wxCHMHelpController_Initialize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCHMHelpController_Initialize)},
    {SIP_MLNAME_CAST(sipName_KeywordSearch), SIP_MLMETH_CAST(meth_wxCHMHelpController_KeywordSearch), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCHMHelpController_KeywordSearch)},
    {SIP_MLNAME_CAST(sipName_LoadFile), SIP_MLMETH_CAST(meth_wxCHMHelpController_LoadFile), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCHMHelpController_LoadFile)},
    {SIP_MLNAME_CAST(sipName_Quit), meth_wxCHMHelpController_Quit, METH_VARARGS, SIP_MLDOC_CAST(doc_wxCHMHelpController_Quit)},
    {SIP_MLNAME_CAST(sipName_ShowContextHelpPopup), SIP_MLMETH_CAST(meth_wxCHMHelpController_ShowContextHelpPopup), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxCHMHelpController_ShowContextHelpPopup)}
};

PyDoc_STRVAR(doc_wxCHMHelpController, "\1CHMHelpController(parentWindow: Window = None)\n"
"CHMHelpController(CHMHelpController)");


sipClassTypeDef sipTypeDef__msw_wxCHMHelpController = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxCHMHelpController,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_CHMHelpController,
        {0, 0, 1},
        11, methods_wxCHMHelpController,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxCHMHelpController,
    -1,
    -1,
    supers_wxCHMHelpController,
    SIP_NULLPTR,
    init_type_wxCHMHelpController,
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
    dealloc_wxCHMHelpController,
    assign_wxCHMHelpController,
    array_wxCHMHelpController,
    copy_wxCHMHelpController,
    release_wxCHMHelpController,
    cast_wxCHMHelpController,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
