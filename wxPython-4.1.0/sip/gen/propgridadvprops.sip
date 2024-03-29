//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _propgrid.sip
//
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

const int wxPG_COLOUR_WEB_BASE;
const int wxPG_COLOUR_CUSTOM;
const int wxPG_COLOUR_UNSPECIFIED;
const int wxPG_PROP_TRANSLATE_CUSTOM;
class wxColourPropertyValue : wxObject
{
    %Docstring
        ColourPropertyValue()
        ColourPropertyValue(v)
        ColourPropertyValue(colour)
        ColourPropertyValue(type)
        ColourPropertyValue(type, colour)
        
        Because text, background and other colours tend to differ between
        platforms, wxSystemColourProperty must be able to select between
        system colour and, when necessary, to pick a custom one.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    wxColourPropertyValue();

    wxColourPropertyValue(
        const wxColourPropertyValue & v
    );

    wxColourPropertyValue(
        const wxColour & colour
    );

    wxColourPropertyValue(
        wxUint32 type
    );

    wxColourPropertyValue(
        wxUint32 type,
        const wxColour & colour
    );

    virtual
    ~wxColourPropertyValue();

    wxUint32 m_type;

    wxColour m_colour;

    void Init(
        wxUint32 type,
        const wxColour & colour
    );
    %Docstring
        Init(type, colour)
    %End

};  // end of class wxColourPropertyValue


class wxFontProperty : wxEditorDialogProperty
{
    %Docstring
        FontProperty(label=PG_LABEL, name=PG_LABEL, value=wx.Font())
        
        Property representing wxFont.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    wxFontProperty(
        const wxString & label = wxPG_LABEL,
        const wxString & name = wxPG_LABEL,
        const wxFont & value = wxFont()
    );

    virtual
    ~wxFontProperty();

    virtual
    void OnSetValue();
    %Docstring
        OnSetValue()
        
        This virtual function is called after m_value has been set.
    %End

    virtual
    wxString ValueToString(
        wxPGVariant & value,
        int argFlags = 0
    ) const;
    %Docstring
        ValueToString(value, argFlags=0) -> String
        
        Converts property value into a text representation.
    %End

    virtual
    wxPGVariant ChildChanged(
        wxPGVariant & thisValue,
        int childIndex,
        wxPGVariant & childValue
    ) const;
    %Docstring
        ChildChanged(thisValue, childIndex, childValue) -> PGVariant
        
        Called after value of a child property has been altered.
    %End

    virtual
    void RefreshChildren();
    %Docstring
        RefreshChildren()
        
        Refresh values of child properties.
    %End


protected:
    virtual
    bool DisplayEditorDialog(
        wxPropertyGrid * pg,
        wxPGVariant & value   /In, Out/
    );
    %Docstring
        DisplayEditorDialog(pg, value) -> (bool, value)
        
        Shows editor dialog.
    %End

};  // end of class wxFontProperty


class wxSystemColourProperty : wxEnumProperty
{
    %Docstring
        SystemColourProperty(label=PG_LABEL, name=PG_LABEL, value=ColourPropertyValue())
        
        Has dropdown list of wxWidgets system colours.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    wxSystemColourProperty(
        const wxString & label = wxPG_LABEL,
        const wxString & name = wxPG_LABEL,
        const wxColourPropertyValue & value = wxColourPropertyValue()
    );

    virtual
    ~wxSystemColourProperty();

    virtual
    void OnSetValue();
    %Docstring
        OnSetValue()
        
        This virtual function is called after m_value has been set.
    %End

    virtual
    bool IntToValue(
        wxPGVariant & variant   /Out/,
        int number,
        int argFlags = 0
    ) const;
    %Docstring
        IntToValue(number, argFlags=0) -> (bool, variant)
        
        Converts integer (possibly a choice selection) into wxVariant value
        appropriate for this property.
    %End

    virtual
    wxString ColourToString(
        const wxColour & col,
        int index,
        int argFlags = 0
    ) const;
    %Docstring
        ColourToString(col, index, argFlags=0) -> String
        
        Override in derived class to customize how colours are printed as
        strings.
    %End

    virtual
    int GetCustomColourIndex() const;
    %Docstring
        GetCustomColourIndex() -> int
        
        Returns index of entry that triggers colour picker dialog (default is
        last).
    %End

    virtual
    wxString ValueToString(
        wxPGVariant & value,
        int argFlags = 0
    ) const;
    %Docstring
        ValueToString(value, argFlags=0) -> String
        
        Converts property value into a text representation.
    %End

    virtual
    bool StringToValue(
        wxPGVariant & variant   /Out/,
        const wxString & text,
        int argFlags = 0
    ) const;
    %Docstring
        StringToValue(text, argFlags=0) -> (bool, variant)
        
        Converts text into wxVariant value appropriate for this property.
    %End

    virtual
    bool OnEvent(
        wxPropertyGrid * propgrid,
        wxWindow * wnd_primary,
        wxEvent & event
    );
    %Docstring
        OnEvent(propgrid, wnd_primary, event) -> bool
        
        Events received by editor widgets are processed here.
    %End

    virtual
    bool DoSetAttribute(
        const wxString & name,
        wxPGVariant & value
    );
    %Docstring
        DoSetAttribute(name, value) -> bool
        
        Reimplement this member function to add special handling for
        attributes of this property.
    %End

    virtual
    wxSize OnMeasureImage(
        int item
    ) const;
    %Docstring
        OnMeasureImage(item) -> wx.Size
        
        Returns size of the custom painted image in front of property.
    %End

    virtual
    void OnCustomPaint(
        wxDC & dc,
        const wxRect & rect,
        wxPGPaintData & paintdata
    );
    %Docstring
        OnCustomPaint(dc, rect, paintdata)
        
        Override to paint an image in front of the property value text or
        drop-down list item (but only if wxPGProperty::OnMeasureImage is
        overridden as well).
    %End

    bool QueryColourFromUser(
        wxPGVariant & variant
    ) const;
    %Docstring
        QueryColourFromUser(variant) -> bool
    %End

    virtual
    wxColour GetColour(
        int index
    ) const;
    %Docstring
        GetColour(index) -> wx.Colour
        
        Default is to use wxSystemSettings::GetColour(index).
    %End

    wxColourPropertyValue GetVal(
        const wxPGVariant * pVariant = NULL
    ) const;
    %Docstring
        GetVal(pVariant=None) -> ColourPropertyValue
    %End

    public:


    %Property(name=CustomColourIndex, get=GetCustomColourIndex)
    %Property(name=Val, get=GetVal)
};  // end of class wxSystemColourProperty


class wxColourProperty : wxSystemColourProperty
{
    %Docstring
        ColourProperty(label=PG_LABEL, name=PG_LABEL, value=wx.WHITE)
        
        Allows to select a colour from the list or with colour dialog.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    wxColourProperty(
        const wxString & label = wxPG_LABEL,
        const wxString & name = wxPG_LABEL,
        const wxColour & value = *wxWHITE
    );

    virtual
    ~wxColourProperty();

    virtual
    wxString ValueToString(
        wxPGVariant & value,
        int argFlags = 0
    ) const;
    %Docstring
        ValueToString(value, argFlags=0) -> String
        
        Converts property value into a text representation.
    %End

    virtual
    wxColour GetColour(
        int index
    ) const;
    %Docstring
        GetColour(index) -> wx.Colour
        
        Default is to use wxSystemSettings::GetColour(index).
    %End

};  // end of class wxColourProperty


class wxCursorProperty : wxEnumProperty
{
    %Docstring
        CursorProperty(label=PG_LABEL, name=PG_LABEL, value=0)
        
        Property representing wxCursor.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    wxCursorProperty(
        const wxString & label = wxPG_LABEL,
        const wxString & name = wxPG_LABEL,
        int value = 0
    );

    virtual
    ~wxCursorProperty();

    virtual
    wxSize OnMeasureImage(
        int item
    ) const;
    %Docstring
        OnMeasureImage(item) -> wx.Size
        
        Returns size of the custom painted image in front of property.
    %End

    virtual
    void OnCustomPaint(
        wxDC & dc,
        const wxRect & rect,
        wxPGPaintData & paintdata
    );
    %Docstring
        OnCustomPaint(dc, rect, paintdata)
        
        Override to paint an image in front of the property value text or
        drop-down list item (but only if wxPGProperty::OnMeasureImage is
        overridden as well).
    %End

};  // end of class wxCursorProperty


class wxImageFileProperty : wxFileProperty
{
    %Docstring
        ImageFileProperty(label=PG_LABEL, name=PG_LABEL, value=wx.EmptyString)
        
        Property representing image file(name).
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    wxImageFileProperty(
        const wxString & label = wxPG_LABEL,
        const wxString & name = wxPG_LABEL,
        const wxString & value = wxEmptyString
    );

    virtual
    ~wxImageFileProperty();

    virtual
    void OnSetValue();
    %Docstring
        OnSetValue()
        
        This virtual function is called after m_value has been set.
    %End

    virtual
    wxSize OnMeasureImage(
        int item
    ) const;
    %Docstring
        OnMeasureImage(item) -> wx.Size
        
        Returns size of the custom painted image in front of property.
    %End

    virtual
    void OnCustomPaint(
        wxDC & dc,
        const wxRect & rect,
        wxPGPaintData & paintdata
    );
    %Docstring
        OnCustomPaint(dc, rect, paintdata)
        
        Override to paint an image in front of the property value text or
        drop-down list item (but only if wxPGProperty::OnMeasureImage is
        overridden as well).
    %End

};  // end of class wxImageFileProperty


class wxMultiChoiceProperty : wxEditorDialogProperty
{
    %Docstring
        MultiChoiceProperty(label, name=PG_LABEL, choices=[], value=[])
        MultiChoiceProperty(label, name, choices, value=[])
        MultiChoiceProperty(label=PG_LABEL, name=PG_LABEL, value=[])
        
        Property that manages a value resulting from wxMultiChoiceDialog.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    wxMultiChoiceProperty(
        const wxString & label,
        const wxString & name = wxPG_LABEL,
        const wxArrayString & choices = wxArrayString(),
        const wxArrayString & value = wxArrayString()
    );

    wxMultiChoiceProperty(
        const wxString & label,
        const wxString & name,
        const wxPGChoices & choices,
        const wxArrayString & value = wxArrayString()
    );

    wxMultiChoiceProperty(
        const wxString & label = wxPG_LABEL,
        const wxString & name = wxPG_LABEL,
        const wxArrayString & value = wxArrayString()
    );

    virtual
    ~wxMultiChoiceProperty();

    virtual
    void OnSetValue();
    %Docstring
        OnSetValue()
        
        This virtual function is called after m_value has been set.
    %End

    virtual
    wxString ValueToString(
        wxPGVariant & value,
        int argFlags = 0
    ) const;
    %Docstring
        ValueToString(value, argFlags=0) -> String
        
        Converts property value into a text representation.
    %End

    virtual
    bool StringToValue(
        wxPGVariant & variant   /Out/,
        const wxString & text,
        int argFlags = 0
    ) const;
    %Docstring
        StringToValue(text, argFlags=0) -> (bool, variant)
        
        Converts text into wxVariant value appropriate for this property.
    %End

    wxArrayInt GetValueAsArrayInt() const;
    %Docstring
        GetValueAsArrayInt() -> ArrayInt
    %End

    public:


    %Property(name=ValueAsArrayInt, get=GetValueAsArrayInt)

protected:
    virtual
    bool DisplayEditorDialog(
        wxPropertyGrid * pg,
        wxPGVariant & value   /In, Out/
    );
    %Docstring
        DisplayEditorDialog(pg, value) -> (bool, value)
        
        Shows editor dialog.
    %End

};  // end of class wxMultiChoiceProperty


class wxDateProperty : wxPGProperty
{
    %Docstring
        DateProperty(label=PG_LABEL, name=PG_LABEL, value=wx.DateTime())
        
        Property representing wxDateTime.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    wxDateProperty(
        const wxString & label = wxPG_LABEL,
        const wxString & name = wxPG_LABEL,
        const wxDateTime & value = wxDateTime()
    );

    virtual
    ~wxDateProperty();

    virtual
    void OnSetValue();
    %Docstring
        OnSetValue()
        
        This virtual function is called after m_value has been set.
    %End

    virtual
    wxString ValueToString(
        wxPGVariant & value,
        int argFlags = 0
    ) const;
    %Docstring
        ValueToString(value, argFlags=0) -> String
        
        Converts property value into a text representation.
    %End

    virtual
    bool StringToValue(
        wxPGVariant & variant   /Out/,
        const wxString & text,
        int argFlags = 0
    ) const;
    %Docstring
        StringToValue(text, argFlags=0) -> (bool, variant)
        
        Converts text into wxVariant value appropriate for this property.
    %End

    virtual
    bool DoSetAttribute(
        const wxString & name,
        wxPGVariant & value
    );
    %Docstring
        DoSetAttribute(name, value) -> bool
        
        Reimplement this member function to add special handling for
        attributes of this property.
    %End

    void SetFormat(
        const wxString & format
    );
    %Docstring
        SetFormat(format)
    %End

    const wxString & GetFormat() const;
    %Docstring
        GetFormat() -> String
    %End

    void SetDateValue(
        const wxDateTime & dt
    );
    %Docstring
        SetDateValue(dt)
    %End

    wxDateTime GetDateValue() const;
    %Docstring
        GetDateValue() -> wx.DateTime
    %End

    long GetDatePickerStyle() const;
    %Docstring
        GetDatePickerStyle() -> long
    %End

    public:


    %Property(name=DatePickerStyle, get=GetDatePickerStyle)
    %Property(name=DateValue, get=GetDateValue, set=SetDateValue)
    %Property(name=Format, get=GetFormat, set=SetFormat)
};  // end of class wxDateProperty


class wxPGSpinCtrlEditor : wxPGTextCtrlEditor
{
    %Docstring
        
    %End
    %TypeHeaderCode
        #include <wx/propgrid/advprops.h>
    %End

public:
    virtual
    ~wxPGSpinCtrlEditor();

    virtual
    wxString GetName() const;
    %Docstring
        GetName() -> String
        
        Returns pointer to the name of the editor.
    %End

    virtual
    wxPGWindowList CreateControls(
        wxPropertyGrid * propgrid,
        wxPGProperty * property,
        const wxPoint & pos,
        const wxSize & size
    ) const;
    %Docstring
        CreateControls(propgrid, property, pos, size) -> PGWindowList
        
        Instantiates editor controls.
    %End

    virtual
    bool OnEvent(
        wxPropertyGrid * propgrid,
        wxPGProperty * property,
        wxWindow * wnd_primary,
        wxEvent & event
    ) const;
    %Docstring
        OnEvent(propgrid, property, wnd_primary, event) -> bool
        
        Handles events.
    %End

    public:


    %Property(name=Name, get=GetName)
};  // end of class wxPGSpinCtrlEditor


const wxString & wxPGGetDefaultImageWildcard();
%Docstring
    PGGetDefaultImageWildcard() -> String
%End

wxPGEditor * wxPGEditor_SpinCtrl;

wxPGEditor * wxPGEditor_DatePickerCtrl;

%Extract(id=pycode_propgrid)
PyArrayStringProperty = wx.deprecated(ArrayStringProperty, "Use ArrayStringProperty instead.")
PyChoiceEditor = wx.deprecated(PGChoiceEditor, "Use PGChoiceEditor instead.")
PyColourProperty = wx.deprecated(ColourProperty, "Use ColourProperty instead.")
PyComboBoxEditor = wx.deprecated(PGComboBoxEditor, "Use PGComboBoxEditor instead.")
PyEditEnumProperty = wx.deprecated(EditEnumProperty, "Use PGEditEnumProperty instead.")
PyEditor = wx.deprecated(PGEditor, "Use PGEditor instead.")
PyEditorDialogAdapter = wx.deprecated(PGEditorDialogAdapter, "Use PGEditorDialogAdapter instead.")
PyEnumProperty = wx.deprecated(EnumProperty, "Use EnumProperty instead.")
PyFileProperty = wx.deprecated(FileProperty, "Use FileProperty instead.")
PyFlagsProperty = wx.deprecated(FlagsProperty, "Use FlagsProperty instead.")
PyFloatProperty = wx.deprecated(FloatProperty, "Use FloatProperty instead.")
PyFontProperty = wx.deprecated(FontProperty, "Use FontProperty instead.")
PyIntProperty = wx.deprecated(IntProperty, "Use IntProperty instead.")
PyLongStringProperty = wx.deprecated(LongStringProperty, "Use LongStringProperty instead.")
PyProperty = wx.deprecated(PGProperty, "Use PGProperty instead.")
PyStringProperty = wx.deprecated(StringProperty, "Use StringProperty instead.")
PySystemColourProperty = wx.deprecated(SystemColourProperty, "Use SystemColourProperty instead.")
PyTextCtrlEditor = wx.deprecated(PGTextCtrlEditor, "Use PGTextCtrlEditor instead.")
PyUIntProperty = wx.deprecated(UIntProperty, "Use UIntProperty instead.")

%End

%Extract(id=pycode_propgrid)
@wx.deprecatedMsg("Use PropertyGrid.DoRegisterEditor instead")
def RegisterEditor(editor, editorName):
    return PropertyGrid.DoRegisterEditorClass(editor, editorName)

%End


//---------------------------------------------------------------------------

