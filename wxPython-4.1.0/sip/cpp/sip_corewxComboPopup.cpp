/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/combo.h>

        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/event.h>
        #include <wx/window.h>
        #include <wx/combo.h>
        #include <wx/gdicmn.h>


class sipwxComboPopup : public  ::wxComboPopup
{
public:
    sipwxComboPopup();
    sipwxComboPopup(const  ::wxComboPopup&);
    virtual ~sipwxComboPopup();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void SetStringValue(const  ::wxString&) SIP_OVERRIDE;
    void PaintComboControl( ::wxDC&,const  ::wxRect&) SIP_OVERRIDE;
    void OnPopup() SIP_OVERRIDE;
    void OnDismiss() SIP_OVERRIDE;
    void OnComboKeyEvent( ::wxKeyEvent&) SIP_OVERRIDE;
    void OnComboDoubleClick() SIP_OVERRIDE;
    bool LazyCreate() SIP_OVERRIDE;
    void Init() SIP_OVERRIDE;
     ::wxString GetStringValue() const SIP_OVERRIDE;
     ::wxWindow* GetControl() SIP_OVERRIDE;
     ::wxSize GetAdjustedSize(int,int,int) SIP_OVERRIDE;
    bool FindItem(const  ::wxString&, ::wxString*) SIP_OVERRIDE;
    void DestroyPopup() SIP_OVERRIDE;
    bool Create( ::wxWindow*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxComboPopup(const sipwxComboPopup &);
    sipwxComboPopup &operator = (const sipwxComboPopup &);

    char sipPyMethods[14];
};

sipwxComboPopup::sipwxComboPopup():  ::wxComboPopup(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxComboPopup::sipwxComboPopup(const  ::wxComboPopup& a0):  ::wxComboPopup(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxComboPopup::~sipwxComboPopup()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxComboPopup::SetStringValue(const  ::wxString& value)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_SetStringValue);

    if (!sipMeth)
    {
         ::wxComboPopup::SetStringValue(value);
        return;
    }

    extern void sipVH__core_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__core_54(sipGILState, 0, sipPySelf, sipMeth, value);
}

void sipwxComboPopup::PaintComboControl( ::wxDC& dc,const  ::wxRect& rect)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_PaintComboControl);

    if (!sipMeth)
    {
         ::wxComboPopup::PaintComboControl(dc,rect);
        return;
    }

    extern void sipVH__core_176(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&);

    sipVH__core_176(sipGILState, 0, sipPySelf, sipMeth, dc, rect);
}

void sipwxComboPopup::OnPopup()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_OnPopup);

    if (!sipMeth)
    {
         ::wxComboPopup::OnPopup();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxComboPopup::OnDismiss()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_OnDismiss);

    if (!sipMeth)
    {
         ::wxComboPopup::OnDismiss();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxComboPopup::OnComboKeyEvent( ::wxKeyEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_OnComboKeyEvent);

    if (!sipMeth)
    {
         ::wxComboPopup::OnComboKeyEvent(event);
        return;
    }

    extern void sipVH__core_175(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxKeyEvent&);

    sipVH__core_175(sipGILState, 0, sipPySelf, sipMeth, event);
}

void sipwxComboPopup::OnComboDoubleClick()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_OnComboDoubleClick);

    if (!sipMeth)
    {
         ::wxComboPopup::OnComboDoubleClick();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxComboPopup::LazyCreate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_LazyCreate);

    if (!sipMeth)
        return  ::wxComboPopup::LazyCreate();

    extern bool sipVH__core_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_6(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxComboPopup::Init()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,SIP_NULLPTR,sipName_Init);

    if (!sipMeth)
    {
         ::wxComboPopup::Init();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxString sipwxComboPopup::GetStringValue() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_ComboPopup,sipName_GetStringValue);

    if (!sipMeth)
        return  ::wxString();

    extern  ::wxString sipVH__core_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_11(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxWindow* sipwxComboPopup::GetControl()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_ComboPopup,sipName_GetControl);

    if (!sipMeth)
        return 0;

    extern  ::wxWindow* sipVH__core_124(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_124(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxSize sipwxComboPopup::GetAdjustedSize(int minWidth,int prefHeight,int maxHeight)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,SIP_NULLPTR,sipName_GetAdjustedSize);

    if (!sipMeth)
        return  ::wxComboPopup::GetAdjustedSize(minWidth,prefHeight,maxHeight);

    extern  ::wxSize sipVH__core_174(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int,int);

    return sipVH__core_174(sipGILState, 0, sipPySelf, sipMeth, minWidth, prefHeight, maxHeight);
}

bool sipwxComboPopup::FindItem(const  ::wxString& item, ::wxString*trueItem)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,SIP_NULLPTR,sipName_FindItem);

    if (!sipMeth)
        return  ::wxComboPopup::FindItem(item,trueItem);

    extern bool sipVH__core_173(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxString*);

    return sipVH__core_173(sipGILState, 0, sipPySelf, sipMeth, item, trueItem);
}

void sipwxComboPopup::DestroyPopup()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,SIP_NULLPTR,sipName_DestroyPopup);

    if (!sipMeth)
    {
         ::wxComboPopup::DestroyPopup();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxComboPopup::Create( ::wxWindow*parent)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,sipName_ComboPopup,sipName_Create);

    if (!sipMeth)
        return 0;

    extern bool sipVH__core_134(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*);

    return sipVH__core_134(sipGILState, 0, sipPySelf, sipMeth, parent);
}


PyDoc_STRVAR(doc_wxComboPopup_Create, "Create(parent) -> bool\n"
"\n"
"The derived class must implement this to create the popup control.");

extern "C" {static PyObject *meth_wxComboPopup_Create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_Create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxWindow* parent;
         ::wxComboPopup *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxComboPopup, &sipCpp, sipType_wxWindow, &parent))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_ComboPopup, sipName_Create);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Create(parent);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_Create, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_DestroyPopup, "DestroyPopup()\n"
"\n"
"You only need to implement this member function if you create your\n"
"popup class in non-standard way.");

extern "C" {static PyObject *meth_wxComboPopup_DestroyPopup(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_DestroyPopup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxComboPopup::DestroyPopup() : sipCpp->DestroyPopup());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_DestroyPopup, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_Dismiss, "Dismiss()\n"
"\n"
"Utility function that hides the popup.");

extern "C" {static PyObject *meth_wxComboPopup_Dismiss(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_Dismiss(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Dismiss();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_Dismiss, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_FindItem, "FindItem(item, trueItem=None) -> bool\n"
"\n"
"Implement to customize matching of value string to an item container\n"
"entry.");

extern "C" {static PyObject *meth_wxComboPopup_FindItem(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_FindItem(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* item;
        int itemState = 0;
         ::wxString* trueItem = 0;
        int trueItemState = 0;
         ::wxComboPopup *sipCpp;

        static const char *sipKwdList[] = {
            sipName_item,
            sipName_trueItem,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J0", &sipSelf, sipType_wxComboPopup, &sipCpp, sipType_wxString,&item, &itemState, sipType_wxString,&trueItem, &trueItemState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxComboPopup::FindItem(*item,trueItem) : sipCpp->FindItem(*item,trueItem));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(item),sipType_wxString,itemState);
            sipReleaseType(trueItem,sipType_wxString,trueItemState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_FindItem, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_GetAdjustedSize, "GetAdjustedSize(minWidth, prefHeight, maxHeight) -> Size\n"
"\n"
"The derived class may implement this to return adjusted size for the\n"
"popup control, according to the variables given.");

extern "C" {static PyObject *meth_wxComboPopup_GetAdjustedSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_GetAdjustedSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int minWidth;
        int prefHeight;
        int maxHeight;
         ::wxComboPopup *sipCpp;

        static const char *sipKwdList[] = {
            sipName_minWidth,
            sipName_prefHeight,
            sipName_maxHeight,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Biii", &sipSelf, sipType_wxComboPopup, &sipCpp, &minWidth, &prefHeight, &maxHeight))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxComboPopup::GetAdjustedSize(minWidth,prefHeight,maxHeight) : sipCpp->GetAdjustedSize(minWidth,prefHeight,maxHeight)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_GetAdjustedSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_GetComboCtrl, "GetComboCtrl() -> ComboCtrl\n"
"\n"
"Returns pointer to the associated parent wxComboCtrl.");

extern "C" {static PyObject *meth_wxComboPopup_GetComboCtrl(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_GetComboCtrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
             ::wxComboCtrl*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetComboCtrl();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxComboCtrl,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_GetComboCtrl, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_GetControl, "GetControl() -> Window\n"
"\n"
"The derived class must implement this to return pointer to the\n"
"associated control created in Create().");

extern "C" {static PyObject *meth_wxComboPopup_GetControl(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_GetControl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
             ::wxWindow*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_ComboPopup, sipName_GetControl);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetControl();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_GetControl, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_GetStringValue, "GetStringValue() -> String\n"
"\n"
"The derived class must implement this to return string representation\n"
"of the value.");

extern "C" {static PyObject *meth_wxComboPopup_GetStringValue(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_GetStringValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
             ::wxString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_ComboPopup, sipName_GetStringValue);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetStringValue());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_GetStringValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_Init, "Init()\n"
"\n"
"The derived class must implement this to initialize its internal\n"
"variables.");

extern "C" {static PyObject *meth_wxComboPopup_Init(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_Init(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxComboPopup::Init() : sipCpp->Init());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_Init, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_IsCreated, "IsCreated() -> bool\n"
"\n"
"Utility method that returns true if Create has been called.");

extern "C" {static PyObject *meth_wxComboPopup_IsCreated(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_IsCreated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsCreated();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_IsCreated, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_LazyCreate, "LazyCreate() -> bool\n"
"\n"
"The derived class may implement this to return true if it wants to\n"
"delay call to Create() until the popup is shown for the first time.");

extern "C" {static PyObject *meth_wxComboPopup_LazyCreate(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_LazyCreate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxComboPopup::LazyCreate() : sipCpp->LazyCreate());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_LazyCreate, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_OnComboDoubleClick, "OnComboDoubleClick()\n"
"\n"
"The derived class may implement this to do something when the parent\n"
"wxComboCtrl gets double-clicked.");

extern "C" {static PyObject *meth_wxComboPopup_OnComboDoubleClick(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_OnComboDoubleClick(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxComboPopup::OnComboDoubleClick() : sipCpp->OnComboDoubleClick());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_OnComboDoubleClick, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_OnComboKeyEvent, "OnComboKeyEvent(event)\n"
"\n"
"The derived class may implement this to receive key events from the\n"
"parent wxComboCtrl.");

extern "C" {static PyObject *meth_wxComboPopup_OnComboKeyEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_OnComboKeyEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxKeyEvent* event;
         ::wxComboPopup *sipCpp;

        static const char *sipKwdList[] = {
            sipName_event,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxComboPopup, &sipCpp, sipType_wxKeyEvent, &event))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxComboPopup::OnComboKeyEvent(*event) : sipCpp->OnComboKeyEvent(*event));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_OnComboKeyEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_OnDismiss, "OnDismiss()\n"
"\n"
"The derived class may implement this to do special processing when\n"
"popup is hidden.");

extern "C" {static PyObject *meth_wxComboPopup_OnDismiss(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_OnDismiss(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxComboPopup::OnDismiss() : sipCpp->OnDismiss());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_OnDismiss, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_OnPopup, "OnPopup()\n"
"\n"
"The derived class may implement this to do special processing when\n"
"popup is shown.");

extern "C" {static PyObject *meth_wxComboPopup_OnPopup(PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_OnPopup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxComboPopup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxComboPopup, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxComboPopup::OnPopup() : sipCpp->OnPopup());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_OnPopup, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_PaintComboControl, "PaintComboControl(dc, rect)\n"
"\n"
"The derived class may implement this to paint the parent wxComboCtrl.");

extern "C" {static PyObject *meth_wxComboPopup_PaintComboControl(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_PaintComboControl(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxComboPopup *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_rect,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1", &sipSelf, sipType_wxComboPopup, &sipCpp, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxComboPopup::PaintComboControl(*dc,*rect) : sipCpp->PaintComboControl(*dc,*rect));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_PaintComboControl, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxComboPopup_SetStringValue, "SetStringValue(value)\n"
"\n"
"The derived class must implement this to receive string value changes\n"
"from wxComboCtrl.");

extern "C" {static PyObject *meth_wxComboPopup_SetStringValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxComboPopup_SetStringValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* value;
        int valueState = 0;
         ::wxComboPopup *sipCpp;

        static const char *sipKwdList[] = {
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxComboPopup, &sipCpp, sipType_wxString,&value, &valueState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxComboPopup::SetStringValue(*value) : sipCpp->SetStringValue(*value));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(value),sipType_wxString,valueState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ComboPopup, sipName_SetStringValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxComboPopup(void *, int);}
static void release_wxComboPopup(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxComboPopup *>(sipCppV);
    else
        delete reinterpret_cast< ::wxComboPopup *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxComboPopup(sipSimpleWrapper *);}
static void dealloc_wxComboPopup(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxComboPopup *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxComboPopup(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxComboPopup(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxComboPopup(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxComboPopup *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxComboPopup();
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
        const  ::wxComboPopup* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxComboPopup, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxComboPopup(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxComboPopup[] = {
    {SIP_MLNAME_CAST(sipName_Create), SIP_MLMETH_CAST(meth_wxComboPopup_Create), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxComboPopup_Create)},
    {SIP_MLNAME_CAST(sipName_DestroyPopup), meth_wxComboPopup_DestroyPopup, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_DestroyPopup)},
    {SIP_MLNAME_CAST(sipName_Dismiss), meth_wxComboPopup_Dismiss, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_Dismiss)},
    {SIP_MLNAME_CAST(sipName_FindItem), SIP_MLMETH_CAST(meth_wxComboPopup_FindItem), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxComboPopup_FindItem)},
    {SIP_MLNAME_CAST(sipName_GetAdjustedSize), SIP_MLMETH_CAST(meth_wxComboPopup_GetAdjustedSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxComboPopup_GetAdjustedSize)},
    {SIP_MLNAME_CAST(sipName_GetComboCtrl), meth_wxComboPopup_GetComboCtrl, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_GetComboCtrl)},
    {SIP_MLNAME_CAST(sipName_GetControl), meth_wxComboPopup_GetControl, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_GetControl)},
    {SIP_MLNAME_CAST(sipName_GetStringValue), meth_wxComboPopup_GetStringValue, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_GetStringValue)},
    {SIP_MLNAME_CAST(sipName_Init), meth_wxComboPopup_Init, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_Init)},
    {SIP_MLNAME_CAST(sipName_IsCreated), meth_wxComboPopup_IsCreated, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_IsCreated)},
    {SIP_MLNAME_CAST(sipName_LazyCreate), meth_wxComboPopup_LazyCreate, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_LazyCreate)},
    {SIP_MLNAME_CAST(sipName_OnComboDoubleClick), meth_wxComboPopup_OnComboDoubleClick, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_OnComboDoubleClick)},
    {SIP_MLNAME_CAST(sipName_OnComboKeyEvent), SIP_MLMETH_CAST(meth_wxComboPopup_OnComboKeyEvent), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxComboPopup_OnComboKeyEvent)},
    {SIP_MLNAME_CAST(sipName_OnDismiss), meth_wxComboPopup_OnDismiss, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_OnDismiss)},
    {SIP_MLNAME_CAST(sipName_OnPopup), meth_wxComboPopup_OnPopup, METH_VARARGS, SIP_MLDOC_CAST(doc_wxComboPopup_OnPopup)},
    {SIP_MLNAME_CAST(sipName_PaintComboControl), SIP_MLMETH_CAST(meth_wxComboPopup_PaintComboControl), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxComboPopup_PaintComboControl)},
    {SIP_MLNAME_CAST(sipName_SetStringValue), SIP_MLMETH_CAST(meth_wxComboPopup_SetStringValue), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxComboPopup_SetStringValue)}
};

sipVariableDef variables_wxComboPopup[] = {
    {PropertyVariable, sipName_StringValue, &methods_wxComboPopup[7], &methods_wxComboPopup[16], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Control, &methods_wxComboPopup[6], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ComboCtrl, &methods_wxComboPopup[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxComboPopup, "ComboPopup()\n"
"\n"
"In order to use a custom popup with wxComboCtrl, an interface class\n"
"must be derived from wxComboPopup.");


sipClassTypeDef sipTypeDef__core_wxComboPopup = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxComboPopup,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_ComboPopup,
        {0, 0, 1},
        17, methods_wxComboPopup,
        0, SIP_NULLPTR,
        3, variables_wxComboPopup,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxComboPopup,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxComboPopup,
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
    dealloc_wxComboPopup,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxComboPopup,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
