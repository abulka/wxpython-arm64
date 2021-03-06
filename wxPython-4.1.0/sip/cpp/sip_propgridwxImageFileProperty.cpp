/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"

        #include <wx/propgrid/advprops.h>

        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/property.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/validate.h>
        #include <wx/propgrid/editors.h>
        #include <wx/propgrid/property.h>
        #include <wx/bitmap.h>
        #include <wx/colour.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/editors.h>
        #include <wx/propgrid/property.h>
        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxImageFileProperty : public  ::wxImageFileProperty
{
public:
    sipwxImageFileProperty(const  ::wxString&,const  ::wxString&,const  ::wxString&);
    sipwxImageFileProperty(const  ::wxImageFileProperty&);
    virtual ~sipwxImageFileProperty();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtectVirt_DisplayEditorDialog(bool, ::wxPropertyGrid*, ::wxPGVariant&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool DisplayEditorDialog( ::wxPropertyGrid*, ::wxPGVariant&) SIP_OVERRIDE;
    void OnSetValue() SIP_OVERRIDE;
     ::wxPGVariant DoGetValue() const SIP_OVERRIDE;
    bool ValidateValue( ::wxPGVariant&, ::wxPGValidationInfo&) const SIP_OVERRIDE;
    bool StringToValue( ::wxPGVariant&,const  ::wxString&,int) const SIP_OVERRIDE;
    bool IntToValue( ::wxPGVariant&,int,int) const SIP_OVERRIDE;
     ::wxString ValueToString( ::wxPGVariant&,int) const SIP_OVERRIDE;
     ::wxSize OnMeasureImage(int) const SIP_OVERRIDE;
    bool OnEvent( ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&) SIP_OVERRIDE;
     ::wxPGVariant ChildChanged( ::wxPGVariant&,int, ::wxPGVariant&) const SIP_OVERRIDE;
    const  ::wxPGEditor* DoGetEditorClass() const SIP_OVERRIDE;
     ::wxValidator* DoGetValidator() const SIP_OVERRIDE;
    void OnCustomPaint( ::wxDC&,const  ::wxRect&, ::wxPGPaintData&) SIP_OVERRIDE;
     ::wxPGCellRenderer* GetCellRenderer(int) const SIP_OVERRIDE;
    int GetChoiceSelection() const SIP_OVERRIDE;
    void RefreshChildren() SIP_OVERRIDE;
    bool DoSetAttribute(const  ::wxString&, ::wxPGVariant&) SIP_OVERRIDE;
     ::wxPGVariant DoGetAttribute(const  ::wxString&) const SIP_OVERRIDE;
     ::wxPGEditorDialogAdapter* GetEditorDialog() const SIP_OVERRIDE;
    void OnValidationFailure( ::wxPGVariant&) SIP_OVERRIDE;
     ::wxString GetValueAsString(int) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxImageFileProperty(const sipwxImageFileProperty &);
    sipwxImageFileProperty &operator = (const sipwxImageFileProperty &);

    char sipPyMethods[21];
};

sipwxImageFileProperty::sipwxImageFileProperty(const  ::wxString& label,const  ::wxString& name,const  ::wxString& value):  ::wxImageFileProperty(label,name,value), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxImageFileProperty::sipwxImageFileProperty(const  ::wxImageFileProperty& a0):  ::wxImageFileProperty(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxImageFileProperty::~sipwxImageFileProperty()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxImageFileProperty::DisplayEditorDialog( ::wxPropertyGrid*pg, ::wxPGVariant& value)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_DisplayEditorDialog);

    if (!sipMeth)
        return  ::wxImageFileProperty::DisplayEditorDialog(pg,value);

    extern bool sipVH__propgrid_69(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxPGVariant&);

    return sipVH__propgrid_69(sipGILState, 0, sipPySelf, sipMeth, pg, value);
}

void sipwxImageFileProperty::OnSetValue()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_OnSetValue);

    if (!sipMeth)
    {
         ::wxImageFileProperty::OnSetValue();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPGVariant sipwxImageFileProperty::DoGetValue() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,SIP_NULLPTR,sipName_DoGetValue);

    if (!sipMeth)
        return  ::wxImageFileProperty::DoGetValue();

    extern  ::wxPGVariant sipVH__propgrid_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_4(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxImageFileProperty::ValidateValue( ::wxPGVariant& value, ::wxPGValidationInfo& validationInfo) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,SIP_NULLPTR,sipName_ValidateValue);

    if (!sipMeth)
        return  ::wxImageFileProperty::ValidateValue(value,validationInfo);

    extern bool sipVH__propgrid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&, ::wxPGValidationInfo&);

    return sipVH__propgrid_5(sipGILState, 0, sipPySelf, sipMeth, value, validationInfo);
}

bool sipwxImageFileProperty::StringToValue( ::wxPGVariant& variant,const  ::wxString& text,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,SIP_NULLPTR,sipName_StringToValue);

    if (!sipMeth)
        return  ::wxImageFileProperty::StringToValue(variant,text,argFlags);

    extern bool sipVH__propgrid_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,const  ::wxString&,int);

    return sipVH__propgrid_6(sipGILState, 0, sipPySelf, sipMeth, variant, text, argFlags);
}

bool sipwxImageFileProperty::IntToValue( ::wxPGVariant& variant,int number,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,SIP_NULLPTR,sipName_IntToValue);

    if (!sipMeth)
        return  ::wxImageFileProperty::IntToValue(variant,number,argFlags);

    extern bool sipVH__propgrid_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int,int);

    return sipVH__propgrid_7(sipGILState, 0, sipPySelf, sipMeth, variant, number, argFlags);
}

 ::wxString sipwxImageFileProperty::ValueToString( ::wxPGVariant& value,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,SIP_NULLPTR,sipName_ValueToString);

    if (!sipMeth)
        return  ::wxImageFileProperty::ValueToString(value,argFlags);

    extern  ::wxString sipVH__propgrid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int);

    return sipVH__propgrid_8(sipGILState, 0, sipPySelf, sipMeth, value, argFlags);
}

 ::wxSize sipwxImageFileProperty::OnMeasureImage(int item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,SIP_NULLPTR,sipName_OnMeasureImage);

    if (!sipMeth)
        return  ::wxImageFileProperty::OnMeasureImage(item);

    extern  ::wxSize sipVH__propgrid_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_9(sipGILState, 0, sipPySelf, sipMeth, item);
}

bool sipwxImageFileProperty::OnEvent( ::wxPropertyGrid*propgrid, ::wxWindow*wnd_primary, ::wxEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,SIP_NULLPTR,sipName_OnEvent);

    if (!sipMeth)
        return  ::wxImageFileProperty::OnEvent(propgrid,wnd_primary,event);

    extern bool sipVH__propgrid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&);

    return sipVH__propgrid_10(sipGILState, 0, sipPySelf, sipMeth, propgrid, wnd_primary, event);
}

 ::wxPGVariant sipwxImageFileProperty::ChildChanged( ::wxPGVariant& thisValue,int childIndex, ::wxPGVariant& childValue) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,SIP_NULLPTR,sipName_ChildChanged);

    if (!sipMeth)
        return  ::wxImageFileProperty::ChildChanged(thisValue,childIndex,childValue);

    extern  ::wxPGVariant sipVH__propgrid_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int, ::wxPGVariant&);

    return sipVH__propgrid_11(sipGILState, 0, sipPySelf, sipMeth, thisValue, childIndex, childValue);
}

const  ::wxPGEditor* sipwxImageFileProperty::DoGetEditorClass() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,SIP_NULLPTR,sipName_DoGetEditorClass);

    if (!sipMeth)
        return  ::wxImageFileProperty::DoGetEditorClass();

    extern const  ::wxPGEditor* sipVH__propgrid_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_12(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxValidator* sipwxImageFileProperty::DoGetValidator() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,SIP_NULLPTR,sipName_DoGetValidator);

    if (!sipMeth)
        return  ::wxImageFileProperty::DoGetValidator();

    extern  ::wxValidator* sipVH__propgrid_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_13(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxImageFileProperty::OnCustomPaint( ::wxDC& dc,const  ::wxRect& rect, ::wxPGPaintData& paintdata)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,SIP_NULLPTR,sipName_OnCustomPaint);

    if (!sipMeth)
    {
         ::wxImageFileProperty::OnCustomPaint(dc,rect,paintdata);
        return;
    }

    extern void sipVH__propgrid_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&, ::wxPGPaintData&);

    sipVH__propgrid_14(sipGILState, 0, sipPySelf, sipMeth, dc, rect, paintdata);
}

 ::wxPGCellRenderer* sipwxImageFileProperty::GetCellRenderer(int column) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,SIP_NULLPTR,sipName_GetCellRenderer);

    if (!sipMeth)
        return  ::wxImageFileProperty::GetCellRenderer(column);

    extern  ::wxPGCellRenderer* sipVH__propgrid_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_15(sipGILState, 0, sipPySelf, sipMeth, column);
}

int sipwxImageFileProperty::GetChoiceSelection() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,SIP_NULLPTR,sipName_GetChoiceSelection);

    if (!sipMeth)
        return  ::wxImageFileProperty::GetChoiceSelection();

    extern int sipVH__propgrid_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_16(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxImageFileProperty::RefreshChildren()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,SIP_NULLPTR,sipName_RefreshChildren);

    if (!sipMeth)
    {
         ::wxImageFileProperty::RefreshChildren();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxImageFileProperty::DoSetAttribute(const  ::wxString& name, ::wxPGVariant& value)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,SIP_NULLPTR,sipName_DoSetAttribute);

    if (!sipMeth)
        return  ::wxImageFileProperty::DoSetAttribute(name,value);

    extern bool sipVH__propgrid_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxPGVariant&);

    return sipVH__propgrid_17(sipGILState, 0, sipPySelf, sipMeth, name, value);
}

 ::wxPGVariant sipwxImageFileProperty::DoGetAttribute(const  ::wxString& name) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,SIP_NULLPTR,sipName_DoGetAttribute);

    if (!sipMeth)
        return  ::wxImageFileProperty::DoGetAttribute(name);

    extern  ::wxPGVariant sipVH__propgrid_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__propgrid_18(sipGILState, 0, sipPySelf, sipMeth, name);
}

 ::wxPGEditorDialogAdapter* sipwxImageFileProperty::GetEditorDialog() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[18]),sipPySelf,SIP_NULLPTR,sipName_GetEditorDialog);

    if (!sipMeth)
        return  ::wxImageFileProperty::GetEditorDialog();

    extern  ::wxPGEditorDialogAdapter* sipVH__propgrid_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_19(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxImageFileProperty::OnValidationFailure( ::wxPGVariant& pendingValue)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,SIP_NULLPTR,sipName_OnValidationFailure);

    if (!sipMeth)
    {
         ::wxImageFileProperty::OnValidationFailure(pendingValue);
        return;
    }

    extern void sipVH__propgrid_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&);

    sipVH__propgrid_20(sipGILState, 0, sipPySelf, sipMeth, pendingValue);
}

 ::wxString sipwxImageFileProperty::GetValueAsString(int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[20]),sipPySelf,SIP_NULLPTR,sipName_GetValueAsString);

    if (!sipMeth)
        return  ::wxImageFileProperty::GetValueAsString(argFlags);

    extern  ::wxString sipVH__propgrid_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_21(sipGILState, 0, sipPySelf, sipMeth, argFlags);
}

bool sipwxImageFileProperty::sipProtectVirt_DisplayEditorDialog(bool sipSelfWasArg, ::wxPropertyGrid*pg, ::wxPGVariant& value)
{
    return (sipSelfWasArg ?  ::wxFileProperty::DisplayEditorDialog(pg,value) : DisplayEditorDialog(pg,value));
}


PyDoc_STRVAR(doc_wxImageFileProperty_DisplayEditorDialog, "DisplayEditorDialog(pg, value) -> (bool, value)\n"
"\n"
"Shows editor dialog.");

extern "C" {static PyObject *meth_wxImageFileProperty_DisplayEditorDialog(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageFileProperty_DisplayEditorDialog(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPropertyGrid* pg;
         ::wxPGVariant* value;
        int valueState = 0;
        sipwxImageFileProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pg,
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1", &sipSelf, sipType_wxImageFileProperty, &sipCpp, sipType_wxPropertyGrid, &pg, sipType_wxPGVariant,&value, &valueState))
        {
            bool sipRes;
            PyObject *sipResObj;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_DisplayEditorDialog(sipSelfWasArg,pg,*value);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            sipResObj = sipBuildResult(0,"(bD)",sipRes,value,sipType_wxPGVariant,SIP_NULLPTR);
            sipReleaseType(value,sipType_wxPGVariant,valueState);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImageFileProperty, sipName_DisplayEditorDialog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageFileProperty_OnSetValue, "OnSetValue()\n"
"\n"
"This virtual function is called after m_value has been set.");

extern "C" {static PyObject *meth_wxImageFileProperty_OnSetValue(PyObject *, PyObject *);}
static PyObject *meth_wxImageFileProperty_OnSetValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxImageFileProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxImageFileProperty, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxImageFileProperty::OnSetValue() : sipCpp->OnSetValue());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImageFileProperty, sipName_OnSetValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageFileProperty_OnMeasureImage, "OnMeasureImage(item) -> wx.Size\n"
"\n"
"Returns size of the custom painted image in front of property.");

extern "C" {static PyObject *meth_wxImageFileProperty_OnMeasureImage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageFileProperty_OnMeasureImage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int item;
        const  ::wxImageFileProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_item,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxImageFileProperty, &sipCpp, &item))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxImageFileProperty::OnMeasureImage(item) : sipCpp->OnMeasureImage(item)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImageFileProperty, sipName_OnMeasureImage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxImageFileProperty_OnCustomPaint, "OnCustomPaint(dc, rect, paintdata)\n"
"\n"
"Override to paint an image in front of the property value text or\n"
"drop-down list item (but only if wxPGProperty::OnMeasureImage is\n"
"overridden as well).");

extern "C" {static PyObject *meth_wxImageFileProperty_OnCustomPaint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxImageFileProperty_OnCustomPaint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxPGPaintData* paintdata;
         ::wxImageFileProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_rect,
            sipName_paintdata,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1J9", &sipSelf, sipType_wxImageFileProperty, &sipCpp, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, sipType_wxPGPaintData, &paintdata))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxImageFileProperty::OnCustomPaint(*dc,*rect,*paintdata) : sipCpp->OnCustomPaint(*dc,*rect,*paintdata));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImageFileProperty, sipName_OnCustomPaint, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxImageFileProperty(void *, const sipTypeDef *);}
static void *cast_wxImageFileProperty(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxImageFileProperty *sipCpp = reinterpret_cast< ::wxImageFileProperty *>(sipCppV);

    if (targetType == sipType_wxFileProperty)
        return static_cast< ::wxFileProperty *>(sipCpp);

    if (targetType == sipType_wxEditorDialogProperty)
        return static_cast< ::wxEditorDialogProperty *>(sipCpp);

    if (targetType == sipType_wxPGProperty)
        return static_cast< ::wxPGProperty *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxImageFileProperty(void *, int);}
static void release_wxImageFileProperty(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxImageFileProperty *>(sipCppV);
    else
        delete reinterpret_cast< ::wxImageFileProperty *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxImageFileProperty(void *, SIP_SSIZE_T, void *);}
static void assign_wxImageFileProperty(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxImageFileProperty *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxImageFileProperty *>(sipSrc);
}


extern "C" {static void *array_wxImageFileProperty(SIP_SSIZE_T);}
static void *array_wxImageFileProperty(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxImageFileProperty[sipNrElem];
}


extern "C" {static void *copy_wxImageFileProperty(const void *, SIP_SSIZE_T);}
static void *copy_wxImageFileProperty(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxImageFileProperty(reinterpret_cast<const  ::wxImageFileProperty *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxImageFileProperty(sipSimpleWrapper *);}
static void dealloc_wxImageFileProperty(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxImageFileProperty *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxImageFileProperty(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxImageFileProperty(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxImageFileProperty(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxImageFileProperty *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString& labeldef = wxPG_LABEL;
        const  ::wxString* label = &labeldef;
        int labelState = 0;
        const  ::wxString& namedef = wxPG_LABEL;
        const  ::wxString* name = &namedef;
        int nameState = 0;
        const  ::wxString& valuedef = wxEmptyString;
        const  ::wxString* value = &valuedef;
        int valueState = 0;

        static const char *sipKwdList[] = {
            sipName_label,
            sipName_name,
            sipName_value,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1J1J1", sipType_wxString,&label, &labelState, sipType_wxString,&name, &nameState, sipType_wxString,&value, &valueState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxImageFileProperty(*label,*name,*value);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(label),sipType_wxString,labelState);
            sipReleaseType(const_cast< ::wxString *>(name),sipType_wxString,nameState);
            sipReleaseType(const_cast< ::wxString *>(value),sipType_wxString,valueState);

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
        const  ::wxImageFileProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxImageFileProperty, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxImageFileProperty(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxImageFileProperty[] = {{12, 255, 1}};


static PyMethodDef methods_wxImageFileProperty[] = {
    {SIP_MLNAME_CAST(sipName_DisplayEditorDialog), SIP_MLMETH_CAST(meth_wxImageFileProperty_DisplayEditorDialog), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_OnCustomPaint), SIP_MLMETH_CAST(meth_wxImageFileProperty_OnCustomPaint), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxImageFileProperty_OnCustomPaint)},
    {SIP_MLNAME_CAST(sipName_OnMeasureImage), SIP_MLMETH_CAST(meth_wxImageFileProperty_OnMeasureImage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxImageFileProperty_OnMeasureImage)},
    {SIP_MLNAME_CAST(sipName_OnSetValue), meth_wxImageFileProperty_OnSetValue, METH_VARARGS, SIP_MLDOC_CAST(doc_wxImageFileProperty_OnSetValue)}
};

PyDoc_STRVAR(doc_wxImageFileProperty, "ImageFileProperty(label=PG_LABEL, name=PG_LABEL, value=wx.EmptyString)\n"
"\n"
"Property representing image file(name).");


sipClassTypeDef sipTypeDef__propgrid_wxImageFileProperty = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxImageFileProperty,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_ImageFileProperty,
        {0, 0, 1},
        4, methods_wxImageFileProperty,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxImageFileProperty,
    -1,
    -1,
    supers_wxImageFileProperty,
    SIP_NULLPTR,
    init_type_wxImageFileProperty,
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
    dealloc_wxImageFileProperty,
    assign_wxImageFileProperty,
    array_wxImageFileProperty,
    copy_wxImageFileProperty,
    release_wxImageFileProperty,
    cast_wxImageFileProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
