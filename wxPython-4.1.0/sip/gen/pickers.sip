//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _core.sip
//
//---------------------------------------------------------------------------

%ModuleHeaderCode
#include <wx/clrpicker.h>
#include <wx/filepicker.h>
#include <wx/fontpicker.h>
%End


//---------------------------------------------------------------------------

const int wxPB_USE_TEXTCTRL;
const int wxPB_SMALL;
const int wxCLRP_USE_TEXTCTRL;
const int wxCLRP_DEFAULT_STYLE;
const int wxCLRP_SHOW_LABEL;
const int wxCLRP_SHOW_ALPHA;
wxEventType wxEVT_COLOURPICKER_CHANGED   /PyName=wxEVT_COLOURPICKER_CHANGED/;

wxEventType wxEVT_COLOURPICKER_CURRENT_CHANGED   /PyName=wxEVT_COLOURPICKER_CURRENT_CHANGED/;

wxEventType wxEVT_COLOURPICKER_DIALOG_CANCELLED   /PyName=wxEVT_COLOURPICKER_DIALOG_CANCELLED/;

const int wxFLP_OPEN;
const int wxFLP_SAVE;
const int wxFLP_OVERWRITE_PROMPT;
const int wxFLP_FILE_MUST_EXIST;
const int wxFLP_CHANGE_DIR;
const int wxFLP_SMALL;
const int wxFLP_USE_TEXTCTRL;
const int wxFLP_DEFAULT_STYLE;
const int wxDIRP_DIR_MUST_EXIST;
const int wxDIRP_CHANGE_DIR;
const int wxDIRP_SMALL;
const int wxDIRP_USE_TEXTCTRL;
const int wxDIRP_DEFAULT_STYLE;
wxEventType wxEVT_FILEPICKER_CHANGED   /PyName=wxEVT_FILEPICKER_CHANGED/;

wxEventType wxEVT_DIRPICKER_CHANGED   /PyName=wxEVT_DIRPICKER_CHANGED/;

const int wxFNTP_FONTDESC_AS_LABEL;
const int wxFNTP_USEFONT_FOR_LABEL;
const int wxFONTBTN_DEFAULT_STYLE;
const int wxFNTP_USE_TEXTCTRL;
const int wxFNTP_DEFAULT_STYLE;
wxEventType wxEVT_FONTPICKER_CHANGED   /PyName=wxEVT_FONTPICKER_CHANGED/;

class wxPickerBase : wxControl
{
    %Docstring
        PickerBase()
        
        Base abstract class for all pickers which support an auxiliary text
        control.
    %End
    %TypeHeaderCode
        #include <wx/pickerbase.h>
    %End

public:
    wxPickerBase();

    virtual
    ~wxPickerBase();

    bool CreateBase(
        wxWindow * parent,
        wxWindowID id = wxID_ANY,
        const wxString & text = wxEmptyString,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = 0,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxButtonNameStr
    );
    %Docstring
        CreateBase(parent, id=ID_ANY, text=EmptyString, pos=DefaultPosition, size=DefaultSize, style=0, validator=DefaultValidator, name=ButtonNameStr) -> bool
    %End

    int GetInternalMargin() const;
    %Docstring
        GetInternalMargin() -> int
        
        Returns the margin (in pixel) between the picker and the text control.
    %End

    int GetPickerCtrlProportion() const;
    %Docstring
        GetPickerCtrlProportion() -> int
        
        Returns the proportion value of the picker.
    %End

    wxTextCtrl * GetTextCtrl();
    %Docstring
        GetTextCtrl() -> TextCtrl
        
        Returns a pointer to the text control handled by this window or NULL
        if the wxPB_USE_TEXTCTRL style was not specified when this control was
        created.
    %End

    wxControl * GetPickerCtrl();
    %Docstring
        GetPickerCtrl() -> Control
        
        Returns the native implementation of the real picker control.
    %End

    int GetTextCtrlProportion() const;
    %Docstring
        GetTextCtrlProportion() -> int
        
        Returns the proportion value of the text control.
    %End

    bool HasTextCtrl() const;
    %Docstring
        HasTextCtrl() -> bool
        
        Returns true if this window has a valid text control (i.e. if the
        wxPB_USE_TEXTCTRL style was given when creating this control).
    %End

    bool IsPickerCtrlGrowable() const;
    %Docstring
        IsPickerCtrlGrowable() -> bool
        
        Returns true if the picker control is growable.
    %End

    bool IsTextCtrlGrowable() const;
    %Docstring
        IsTextCtrlGrowable() -> bool
        
        Returns true if the text control is growable.
    %End

    void SetInternalMargin(
        int margin
    );
    %Docstring
        SetInternalMargin(margin)
        
        Sets the margin (in pixel) between the picker and the text control.
    %End

    void SetPickerCtrlGrowable(
        bool grow = true
    );
    %Docstring
        SetPickerCtrlGrowable(grow=True)
        
        Sets the picker control as growable when grow is true.
    %End

    void SetPickerCtrlProportion(
        int prop
    );
    %Docstring
        SetPickerCtrlProportion(prop)
        
        Sets the proportion value of the picker.
    %End

    void SetTextCtrlGrowable(
        bool grow = true
    );
    %Docstring
        SetTextCtrlGrowable(grow=True)
        
        Sets the text control as growable when grow is true.
    %End

    void SetTextCtrlProportion(
        int prop
    );
    %Docstring
        SetTextCtrlProportion(prop)
        
        Sets the proportion value of the text control.
    %End

    void SetTextCtrl(
        wxTextCtrl * text
    );
    %Docstring
        SetTextCtrl(text)
    %End

    void SetPickerCtrl(
        wxControl * picker
    );
    %Docstring
        SetPickerCtrl(picker)
    %End

    virtual
    void UpdatePickerFromTextCtrl() = 0;
    %Docstring
        UpdatePickerFromTextCtrl()
    %End

    virtual
    void UpdateTextCtrlFromPicker() = 0;
    %Docstring
        UpdateTextCtrlFromPicker()
    %End

    public:


    %Property(name=InternalMargin, get=GetInternalMargin, set=SetInternalMargin)
    %Property(name=PickerCtrl, get=GetPickerCtrl, set=SetPickerCtrl)
    %Property(name=PickerCtrlProportion, get=GetPickerCtrlProportion, set=SetPickerCtrlProportion)
    %Property(name=TextCtrl, get=GetTextCtrl, set=SetTextCtrl)
    %Property(name=TextCtrlProportion, get=GetTextCtrlProportion, set=SetTextCtrlProportion)

protected:
    virtual
    long GetTextCtrlStyle(
        long style
    ) const;
    %Docstring
        GetTextCtrlStyle(style) -> long
    %End

    virtual
    long GetPickerStyle(
        long style
    ) const;
    %Docstring
        GetPickerStyle(style) -> long
    %End

    void PostCreation();
    %Docstring
        PostCreation()
    %End

};  // end of class wxPickerBase


const char* wxColourPickerWidgetNameStr;

const char* wxColourPickerCtrlNameStr;

class wxColourPickerCtrl : wxPickerBase
{
    %Docstring
        ColourPickerCtrl()
        ColourPickerCtrl(parent, id=ID_ANY, colour=BLACK, pos=DefaultPosition, size=DefaultSize, style=CLRP_DEFAULT_STYLE, validator=DefaultValidator, name=ColourPickerCtrlNameStr)
        
        This control allows the user to select a colour.
    %End
    %TypeHeaderCode
        #include <wx/clrpicker.h>
    %End

public:
    wxColourPickerCtrl();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxColourPickerCtrl(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxColour & colour = *wxBLACK,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxCLRP_DEFAULT_STYLE,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxColourPickerCtrlNameStr
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    void SetColour(
        const wxColour & col
    );
    %Docstring
        SetColour(col)
        SetColour(colname)
        
        Sets the currently selected colour.
    %End

    void SetColour(
        const wxString & colname
    );

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxColour & colour = *wxBLACK,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxCLRP_DEFAULT_STYLE,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxColourPickerCtrlNameStr
    );
    %Docstring
        Create(parent, id=ID_ANY, colour=BLACK, pos=DefaultPosition, size=DefaultSize, style=CLRP_DEFAULT_STYLE, validator=DefaultValidator, name=ColourPickerCtrlNameStr) -> bool
        
        Creates a colour picker with the given arguments.
    %End

    wxColour GetColour() const;
    %Docstring
        GetColour() -> Colour
        
        Returns the currently selected colour.
    %End

    public:
    virtual wxPoint GetClientAreaOrigin() const;
    virtual bool Validate();
    virtual bool TransferDataToWindow();
    virtual bool TransferDataFromWindow();
    virtual void InitDialog();
    virtual bool AcceptsFocus() const;
    virtual bool AcceptsFocusRecursively() const;
    virtual bool AcceptsFocusFromKeyboard() const;
    virtual void AddChild( wxWindowBase *child );
    virtual void RemoveChild( wxWindowBase *child );
    virtual void InheritAttributes();
    virtual bool ShouldInheritColours() const;
    virtual void OnInternalIdle();
    virtual wxWindow *GetMainWindowOfCompositeControl();
    virtual bool InformFirstDirection(int direction, int size, int availableOtherDir);
    virtual void SetCanFocus(bool canFocus);
    virtual bool Destroy();
    virtual void SetValidator( const wxValidator &validator );
    virtual wxValidator* GetValidator();


    protected:
    virtual bool ProcessEvent(wxEvent & event);
    virtual void DoEnable(bool enable);
    virtual void DoGetPosition(int *x, int *y) const;
    virtual void DoGetSize(int *width, int *height) const;
    virtual void DoGetClientSize(int *width, int *height) const;
    virtual wxSize DoGetBestSize() const;
    virtual wxSize DoGetBestClientSize() const;
    virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags);
    virtual void DoSetClientSize(int width, int height);
    virtual void DoSetSizeHints( int minW, int minH, int maxW, int maxH, int incW, int incH );
    virtual wxSize DoGetBorderSize() const;
    virtual void DoMoveWindow(int x, int y, int width, int height);
    virtual void DoSetWindowVariant( wxWindowVariant variant);
    virtual wxBorder GetDefaultBorder() const;
    virtual wxBorder GetDefaultBorderForControl() const;
    virtual void DoFreeze();
    virtual void DoThaw();
    virtual bool HasTransparentBackground();
    virtual bool TryBefore(wxEvent& event);
    virtual bool TryAfter(wxEvent& event);


    public:


    static
    wxVisualAttributes GetClassDefaultAttributes(
        wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL
    );
    %Docstring
        GetClassDefaultAttributes(variant=WINDOW_VARIANT_NORMAL) -> VisualAttributes
    %End
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

            virtual void UpdatePickerFromTextCtrl();
            virtual void UpdateTextCtrlFromPicker();


    public:


    %Property(name=Colour, get=GetColour, set=SetColour)
};  // end of class wxColourPickerCtrl


class wxColourPickerEvent : wxCommandEvent
{
    %Docstring
        ColourPickerEvent()
        ColourPickerEvent(generator, id, colour)
        
        This event class is used for the events generated by
        wxColourPickerCtrl.
    %End
    %TypeHeaderCode
        #include <wx/clrpicker.h>
    %End

public:
    wxColourPickerEvent();

    wxColourPickerEvent(
        wxObject * generator,
        int id,
        const wxColour & colour
    );

    wxColour GetColour() const;
    %Docstring
        GetColour() -> Colour
        
        Retrieve the colour the user has just selected.
    %End

    void SetColour(
        const wxColour & pos
    );
    %Docstring
        SetColour(pos)
        
        Set the colour associated with the event.
    %End

    public:
    virtual wxEvent* Clone() const /Factory/;


    private:
        wxColourPickerEvent& operator=(const wxColourPickerEvent&);


    public:


    %Property(name=Colour, get=GetColour, set=SetColour)
};  // end of class wxColourPickerEvent


const char* wxFilePickerWidgetLabel;

const char* wxFilePickerWidgetNameStr;

const char* wxFilePickerCtrlNameStr;

const char* wxFileSelectorPromptStr;

const char* wxFileSelectorDefaultWildcardStr;

class wxFilePickerCtrl : wxPickerBase
{
    %Docstring
        FilePickerCtrl()
        FilePickerCtrl(parent, id=ID_ANY, path=EmptyString, message=FileSelectorPromptStr, wildcard=FileSelectorDefaultWildcardStr, pos=DefaultPosition, size=DefaultSize, style=FLP_DEFAULT_STYLE, validator=DefaultValidator, name=FilePickerCtrlNameStr)
        
        This control allows the user to select a file.
    %End
    %TypeHeaderCode
        #include <wx/filepicker.h>
    %End

public:
    wxFilePickerCtrl();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxFilePickerCtrl(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & path = wxEmptyString,
        const wxString & message = wxFileSelectorPromptStr,
        const wxString & wildcard = wxFileSelectorDefaultWildcardStr,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxFLP_DEFAULT_STYLE,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxFilePickerCtrlNameStr
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & path = wxEmptyString,
        const wxString & message = wxFileSelectorPromptStr,
        const wxString & wildcard = wxFileSelectorDefaultWildcardStr,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxFLP_DEFAULT_STYLE,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxFilePickerCtrlNameStr
    );
    %Docstring
        Create(parent, id=ID_ANY, path=EmptyString, message=FileSelectorPromptStr, wildcard=FileSelectorDefaultWildcardStr, pos=DefaultPosition, size=DefaultSize, style=FLP_DEFAULT_STYLE, validator=DefaultValidator, name=FilePickerCtrlNameStr) -> bool
        
        Creates this widget with the given parameters.
    %End

    wxString GetPath() const;
    %Docstring
        GetPath() -> String
        
        Returns the absolute path of the currently selected file.
    %End

    void SetInitialDirectory(
        const wxString & dir
    );
    %Docstring
        SetInitialDirectory(dir)
        
        Set the directory to show when starting to browse for files.
    %End

    void SetPath(
        const wxString & filename
    );
    %Docstring
        SetPath(filename)
        
        Sets the absolute path of the currently selected file.
    %End

    public:
    virtual wxPoint GetClientAreaOrigin() const;
    virtual bool Validate();
    virtual bool TransferDataToWindow();
    virtual bool TransferDataFromWindow();
    virtual void InitDialog();
    virtual bool AcceptsFocus() const;
    virtual bool AcceptsFocusRecursively() const;
    virtual bool AcceptsFocusFromKeyboard() const;
    virtual void AddChild( wxWindowBase *child );
    virtual void RemoveChild( wxWindowBase *child );
    virtual void InheritAttributes();
    virtual bool ShouldInheritColours() const;
    virtual void OnInternalIdle();
    virtual wxWindow *GetMainWindowOfCompositeControl();
    virtual bool InformFirstDirection(int direction, int size, int availableOtherDir);
    virtual void SetCanFocus(bool canFocus);
    virtual bool Destroy();
    virtual void SetValidator( const wxValidator &validator );
    virtual wxValidator* GetValidator();


    protected:
    virtual bool ProcessEvent(wxEvent & event);
    virtual void DoEnable(bool enable);
    virtual void DoGetPosition(int *x, int *y) const;
    virtual void DoGetSize(int *width, int *height) const;
    virtual void DoGetClientSize(int *width, int *height) const;
    virtual wxSize DoGetBestSize() const;
    virtual wxSize DoGetBestClientSize() const;
    virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags);
    virtual void DoSetClientSize(int width, int height);
    virtual void DoSetSizeHints( int minW, int minH, int maxW, int maxH, int incW, int incH );
    virtual wxSize DoGetBorderSize() const;
    virtual void DoMoveWindow(int x, int y, int width, int height);
    virtual void DoSetWindowVariant( wxWindowVariant variant);
    virtual wxBorder GetDefaultBorder() const;
    virtual wxBorder GetDefaultBorderForControl() const;
    virtual void DoFreeze();
    virtual void DoThaw();
    virtual bool HasTransparentBackground();
    virtual bool TryBefore(wxEvent& event);
    virtual bool TryAfter(wxEvent& event);


    public:


    static
    wxVisualAttributes GetClassDefaultAttributes(
        wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL
    );
    %Docstring
        GetClassDefaultAttributes(variant=WINDOW_VARIANT_NORMAL) -> VisualAttributes
    %End
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

            virtual void UpdatePickerFromTextCtrl();
            virtual void UpdateTextCtrlFromPicker();


    public:


    %Property(name=Path, get=GetPath, set=SetPath)
};  // end of class wxFilePickerCtrl


const char* wxDirPickerWidgetLabel;

const char* wxDirPickerWidgetNameStr;

const char* wxDirPickerCtrlNameStr;

const char* wxDirSelectorPromptStr;

class wxDirPickerCtrl : wxPickerBase
{
    %Docstring
        DirPickerCtrl()
        DirPickerCtrl(parent, id=ID_ANY, path=EmptyString, message=DirSelectorPromptStr, pos=DefaultPosition, size=DefaultSize, style=DIRP_DEFAULT_STYLE, validator=DefaultValidator, name=DirPickerCtrlNameStr)
        
        This control allows the user to select a directory.
    %End
    %TypeHeaderCode
        #include <wx/filepicker.h>
    %End

public:
    wxDirPickerCtrl();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxDirPickerCtrl(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & path = wxEmptyString,
        const wxString & message = wxDirSelectorPromptStr,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxDIRP_DEFAULT_STYLE,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxDirPickerCtrlNameStr
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & path = wxEmptyString,
        const wxString & message = wxDirSelectorPromptStr,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxDIRP_DEFAULT_STYLE,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxDirPickerCtrlNameStr
    );
    %Docstring
        Create(parent, id=ID_ANY, path=EmptyString, message=DirSelectorPromptStr, pos=DefaultPosition, size=DefaultSize, style=DIRP_DEFAULT_STYLE, validator=DefaultValidator, name=DirPickerCtrlNameStr) -> bool
        
        Creates the widgets with the given parameters.
    %End

    wxString GetPath() const;
    %Docstring
        GetPath() -> String
        
        Returns the absolute path of the currently selected directory.
    %End

    void SetInitialDirectory(
        const wxString & dir
    );
    %Docstring
        SetInitialDirectory(dir)
        
        Set the directory to show when starting to browse for directories.
    %End

    void SetPath(
        const wxString & dirname
    );
    %Docstring
        SetPath(dirname)
        
        Sets the absolute path of the currently selected directory.
    %End

    public:
    virtual wxPoint GetClientAreaOrigin() const;
    virtual bool Validate();
    virtual bool TransferDataToWindow();
    virtual bool TransferDataFromWindow();
    virtual void InitDialog();
    virtual bool AcceptsFocus() const;
    virtual bool AcceptsFocusRecursively() const;
    virtual bool AcceptsFocusFromKeyboard() const;
    virtual void AddChild( wxWindowBase *child );
    virtual void RemoveChild( wxWindowBase *child );
    virtual void InheritAttributes();
    virtual bool ShouldInheritColours() const;
    virtual void OnInternalIdle();
    virtual wxWindow *GetMainWindowOfCompositeControl();
    virtual bool InformFirstDirection(int direction, int size, int availableOtherDir);
    virtual void SetCanFocus(bool canFocus);
    virtual bool Destroy();
    virtual void SetValidator( const wxValidator &validator );
    virtual wxValidator* GetValidator();


    protected:
    virtual bool ProcessEvent(wxEvent & event);
    virtual void DoEnable(bool enable);
    virtual void DoGetPosition(int *x, int *y) const;
    virtual void DoGetSize(int *width, int *height) const;
    virtual void DoGetClientSize(int *width, int *height) const;
    virtual wxSize DoGetBestSize() const;
    virtual wxSize DoGetBestClientSize() const;
    virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags);
    virtual void DoSetClientSize(int width, int height);
    virtual void DoSetSizeHints( int minW, int minH, int maxW, int maxH, int incW, int incH );
    virtual wxSize DoGetBorderSize() const;
    virtual void DoMoveWindow(int x, int y, int width, int height);
    virtual void DoSetWindowVariant( wxWindowVariant variant);
    virtual wxBorder GetDefaultBorder() const;
    virtual wxBorder GetDefaultBorderForControl() const;
    virtual void DoFreeze();
    virtual void DoThaw();
    virtual bool HasTransparentBackground();
    virtual bool TryBefore(wxEvent& event);
    virtual bool TryAfter(wxEvent& event);


    public:


    static
    wxVisualAttributes GetClassDefaultAttributes(
        wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL
    );
    %Docstring
        GetClassDefaultAttributes(variant=WINDOW_VARIANT_NORMAL) -> VisualAttributes
    %End
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

            virtual void UpdatePickerFromTextCtrl();
            virtual void UpdateTextCtrlFromPicker();


    public:


    %Property(name=Path, get=GetPath, set=SetPath)
};  // end of class wxDirPickerCtrl


class wxFileDirPickerEvent : wxCommandEvent
{
    %Docstring
        FileDirPickerEvent()
        FileDirPickerEvent(type, generator, id, path)
        
        This event class is used for the events generated by wxFilePickerCtrl
        and by wxDirPickerCtrl.
    %End
    %TypeHeaderCode
        #include <wx/filepicker.h>
    %End

public:
    wxFileDirPickerEvent();

    wxFileDirPickerEvent(
        wxEventType type,
        wxObject * generator,
        int id,
        const wxString & path
    );

    wxString GetPath() const;
    %Docstring
        GetPath() -> String
        
        Retrieve the absolute path of the file/directory the user has just
        selected.
    %End

    void SetPath(
        const wxString & path
    );
    %Docstring
        SetPath(path)
        
        Set the absolute path of the file/directory associated with the event.
    %End

    public:
    virtual wxEvent* Clone() const /Factory/;


    private:
        wxFileDirPickerEvent& operator=(const wxFileDirPickerEvent&);


    public:


    %Property(name=Path, get=GetPath, set=SetPath)
};  // end of class wxFileDirPickerEvent


const char* wxFontPickerWidgetNameStr;

const char* wxFontPickerCtrlNameStr;

class wxFontPickerCtrl : wxPickerBase
{
    %Docstring
        FontPickerCtrl()
        FontPickerCtrl(parent, id=ID_ANY, font=NullFont, pos=DefaultPosition, size=DefaultSize, style=FNTP_DEFAULT_STYLE, validator=DefaultValidator, name=FontPickerCtrlNameStr)
        
        This control allows the user to select a font.
    %End
    %TypeHeaderCode
        #include <wx/fontpicker.h>
    %End

public:
    wxFontPickerCtrl();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxFontPickerCtrl(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxFont & font = wxNullFont,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxFNTP_DEFAULT_STYLE,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxFontPickerCtrlNameStr
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxFont & font = wxNullFont,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxFNTP_DEFAULT_STYLE,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxFontPickerCtrlNameStr
    );
    %Docstring
        Create(parent, id=ID_ANY, font=NullFont, pos=DefaultPosition, size=DefaultSize, style=FNTP_DEFAULT_STYLE, validator=DefaultValidator, name=FontPickerCtrlNameStr) -> bool
        
        Creates this widget with given parameters.
    %End

    unsigned int GetMaxPointSize() const;
    %Docstring
        GetMaxPointSize() -> unsignedint
        
        Returns the maximum point size value allowed for the user-chosen font.
    %End

    unsigned int GetMinPointSize() const;
    %Docstring
        GetMinPointSize() -> unsignedint
        
        Returns the minimum point size value allowed for the user-chosen font.
    %End

    wxColour GetSelectedColour() const;
    %Docstring
        GetSelectedColour() -> Colour
        
        Returns the currently selected colour.
    %End

    wxFont GetSelectedFont() const;
    %Docstring
        GetSelectedFont() -> Font
        
        Returns the currently selected font.
    %End

    void SetMaxPointSize(
        unsigned int max
    );
    %Docstring
        SetMaxPointSize(max)
        
        Sets the maximum point size value allowed for the user-chosen font.
    %End

    void SetMinPointSize(
        unsigned int min
    );
    %Docstring
        SetMinPointSize(min)
        
        Sets the minimum point size value allowed for the user-chosen font.
    %End

    void SetSelectedColour(
        const wxColour & colour
    );
    %Docstring
        SetSelectedColour(colour)
        
        Sets the font colour.
    %End

    void SetSelectedFont(
        const wxFont & font
    );
    %Docstring
        SetSelectedFont(font)
        
        Sets the currently selected font.
    %End

    public:
    virtual wxPoint GetClientAreaOrigin() const;
    virtual bool Validate();
    virtual bool TransferDataToWindow();
    virtual bool TransferDataFromWindow();
    virtual void InitDialog();
    virtual bool AcceptsFocus() const;
    virtual bool AcceptsFocusRecursively() const;
    virtual bool AcceptsFocusFromKeyboard() const;
    virtual void AddChild( wxWindowBase *child );
    virtual void RemoveChild( wxWindowBase *child );
    virtual void InheritAttributes();
    virtual bool ShouldInheritColours() const;
    virtual void OnInternalIdle();
    virtual wxWindow *GetMainWindowOfCompositeControl();
    virtual bool InformFirstDirection(int direction, int size, int availableOtherDir);
    virtual void SetCanFocus(bool canFocus);
    virtual bool Destroy();
    virtual void SetValidator( const wxValidator &validator );
    virtual wxValidator* GetValidator();


    protected:
    virtual bool ProcessEvent(wxEvent & event);
    virtual void DoEnable(bool enable);
    virtual void DoGetPosition(int *x, int *y) const;
    virtual void DoGetSize(int *width, int *height) const;
    virtual void DoGetClientSize(int *width, int *height) const;
    virtual wxSize DoGetBestSize() const;
    virtual wxSize DoGetBestClientSize() const;
    virtual void DoSetSize(int x, int y, int width, int height, int sizeFlags);
    virtual void DoSetClientSize(int width, int height);
    virtual void DoSetSizeHints( int minW, int minH, int maxW, int maxH, int incW, int incH );
    virtual wxSize DoGetBorderSize() const;
    virtual void DoMoveWindow(int x, int y, int width, int height);
    virtual void DoSetWindowVariant( wxWindowVariant variant);
    virtual wxBorder GetDefaultBorder() const;
    virtual wxBorder GetDefaultBorderForControl() const;
    virtual void DoFreeze();
    virtual void DoThaw();
    virtual bool HasTransparentBackground();
    virtual bool TryBefore(wxEvent& event);
    virtual bool TryAfter(wxEvent& event);


    public:


    static
    wxVisualAttributes GetClassDefaultAttributes(
        wxWindowVariant variant = wxWINDOW_VARIANT_NORMAL
    );
    %Docstring
        GetClassDefaultAttributes(variant=WINDOW_VARIANT_NORMAL) -> VisualAttributes
    %End
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

            virtual void UpdatePickerFromTextCtrl();
            virtual void UpdateTextCtrlFromPicker();


    public:


    %Property(name=MaxPointSize, get=GetMaxPointSize, set=SetMaxPointSize)
    %Property(name=MinPointSize, get=GetMinPointSize, set=SetMinPointSize)
    %Property(name=SelectedColour, get=GetSelectedColour, set=SetSelectedColour)
    %Property(name=SelectedFont, get=GetSelectedFont, set=SetSelectedFont)
};  // end of class wxFontPickerCtrl


class wxFontPickerEvent : wxCommandEvent
{
    %Docstring
        FontPickerEvent(generator, id, font)
        
        This event class is used for the events generated by wxFontPickerCtrl.
    %End
    %TypeHeaderCode
        #include <wx/fontpicker.h>
    %End

public:
    wxFontPickerEvent(
        wxObject * generator,
        int id,
        const wxFont & font
    );

    wxFont GetFont() const;
    %Docstring
        GetFont() -> Font
        
        Retrieve the font the user has just selected.
    %End

    void SetFont(
        const wxFont & f
    );
    %Docstring
        SetFont(f)
        
        Set the font associated with the event.
    %End

    public:
    virtual wxEvent* Clone() const /Factory/;


    private:
        wxFontPickerEvent& operator=(const wxFontPickerEvent&);


    public:


    %Property(name=Font, get=GetFont, set=SetFont)
};  // end of class wxFontPickerEvent


%Extract(id=pycode_core)
EVT_COLOURPICKER_CHANGED = wx.PyEventBinder( wxEVT_COLOURPICKER_CHANGED, 1 )
EVT_COLOURPICKER_CURRENT_CHANGED = wx.PyEventBinder( wxEVT_COLOURPICKER_CURRENT_CHANGED, 1 )
EVT_COLOURPICKER_DIALOG_CANCELLED = wx.PyEventBinder( wxEVT_COLOURPICKER_DIALOG_CANCELLED, 1 )

# deprecated wxEVT alias
wxEVT_COMMAND_COLOURPICKER_CHANGED  = wxEVT_COLOURPICKER_CHANGED

%End

%Extract(id=pycode_core)
EVT_FILEPICKER_CHANGED = wx.PyEventBinder( wxEVT_FILEPICKER_CHANGED, 1 )
EVT_DIRPICKER_CHANGED = wx.PyEventBinder( wxEVT_DIRPICKER_CHANGED, 1 )

# deprecated wxEVT aliases
wxEVT_COMMAND_FILEPICKER_CHANGED   = wxEVT_FILEPICKER_CHANGED
wxEVT_COMMAND_DIRPICKER_CHANGED    = wxEVT_DIRPICKER_CHANGED

%End

%Extract(id=pycode_core)
EVT_FONTPICKER_CHANGED = wx.PyEventBinder( wxEVT_FONTPICKER_CHANGED, 1 )

# deprecated wxEVT alias
wxEVT_COMMAND_FONTPICKER_CHANGED  = wxEVT_FONTPICKER_CHANGED

%End

%Extract(id=pycode_core)
if 'wxMac' in wx.PlatformInfo:
    class ColourPickerCtrl(PickerBase):
        '''
        This control allows the user to select a colour. The
        implementation varies by platform but is usually a button which
        brings up a `wx.ColourDialog` when clicked.


        Window Styles
        -------------

            ======================  ============================================
            wx.CLRP_DEFAULT         Default style.
            wx.CLRP_USE_TEXTCTRL    Creates a text control to the left of the
                                    picker button which is completely managed
                                    by the `wx.ColourPickerCtrl` and which can
                                    be used by the user to specify a colour.
                                    The text control is automatically synchronized
                                    with the button's value. Use functions defined in
                                    `wx.PickerBase` to modify the text control.
            wx.CLRP_SHOW_LABEL      Shows the colour in HTML form (AABBCC) as the
                                    colour button label (instead of no label at all).
            ======================  ============================================

        Events
        ------

            ========================  ==========================================
            EVT_COLOURPICKER_CHANGED  The user changed the colour selected in the
                                      control either using the button or using the
                                      text control (see wx.CLRP_USE_TEXTCTRL; note
                                      that in this case the event is fired only if
                                      the user's input is valid, i.e. recognizable).
            ========================  ==========================================
        '''

        # ColourData object to be shared by all colour pickers, so they can
        # share the custom colours
        _colourData = None

        #--------------------------------------------------
        class ColourPickerButton(BitmapButton):
            def __init__(self, parent, id=-1, colour=wx.BLACK,
                         pos=wx.DefaultPosition, size=wx.DefaultSize,
                         style = CLRP_DEFAULT_STYLE,
                         validator = wx.DefaultValidator,
                         name = "colourpickerwidget"):

                wx.BitmapButton.__init__(self, parent, id, wx.Bitmap(1,1),
                                         pos, size, style, validator, name)
                self.SetColour(colour)
                self.InvalidateBestSize()
                self.SetInitialSize(size)
                self.Bind(wx.EVT_BUTTON, self.OnButtonClick)

                if ColourPickerCtrl._colourData is None:
                    ColourPickerCtrl._colourData = wx.ColourData()
                    ColourPickerCtrl._colourData.SetChooseFull(True)
                    grey = 0
                    for i in range(16):
                        c = wx.Colour(grey, grey, grey)
                        ColourPickerCtrl._colourData.SetCustomColour(i, c)
                        grey += 16

            def SetColour(self, colour):
                # force a copy, in case the _colorData is shared
                self.colour = wx.Colour(colour)
                bmp = self._makeBitmap()
                self.SetBitmapLabel(bmp)

            def GetColour(self):
                return self.colour

            def OnButtonClick(self, evt):
                ColourPickerCtrl._colourData.SetColour(self.colour)
                dlg = wx.ColourDialog(self, ColourPickerCtrl._colourData)
                if dlg.ShowModal() == wx.ID_OK:
                    ColourPickerCtrl._colourData = dlg.GetColourData()
                    self.SetColour(ColourPickerCtrl._colourData.GetColour())
                    evt = wx.ColourPickerEvent(self, self.GetId(), self.GetColour())
                    self.GetEventHandler().ProcessEvent(evt)

            def _makeBitmap(self):
                width = height = 24
                bg = self.GetColour()
                if self.HasFlag(CLRP_SHOW_LABEL):
                    w, h = self.GetTextExtent(bg.GetAsString(wx.C2S_HTML_SYNTAX))
                    width += w
                bmp = wx.Bitmap(width, height)
                dc = wx.MemoryDC(bmp)
                dc.SetBackground(wx.Brush(self.colour))
                dc.Clear()
                if self.HasFlag(CLRP_SHOW_LABEL):
                    from wx.lib.colourutils import BestLabelColour
                    fg = BestLabelColour(bg)
                    dc.SetTextForeground(fg)
                    dc.DrawText(bg.GetAsString(wx.C2S_HTML_SYNTAX),
                                (width - w)/2, (height - h)/2)
                return bmp

        #--------------------------------------------------

        def __init__(self, parent, id=-1, colour=wx.BLACK,
                     pos=wx.DefaultPosition, size=wx.DefaultSize,
                     style = CLRP_DEFAULT_STYLE,
                     validator = wx.DefaultValidator,
                     name = "colourpicker"):
            if type(colour) != wx.Colour:
                colour = wx.Colour(colour)
            wx.PickerBase.__init__(self)
            self.CreateBase(parent, id, colour.GetAsString(),
                            pos, size, style, validator, name)
            widget = ColourPickerCtrl.ColourPickerButton(
                self, -1, colour, style=self.GetPickerStyle(style))
            self.SetPickerCtrl(widget)
            widget.Bind(wx.EVT_COLOURPICKER_CHANGED, self.OnColourChange)
            self.PostCreation()


        def GetColour(self):
            '''Set the displayed colour.'''
            return self.GetPickerCtrl().GetColour()

        def SetColour(self, colour):
            '''Returns the currently selected colour.'''
            self.GetPickerCtrl().SetColour(colour)
            self.UpdateTextCtrlFromPicker()
        Colour = property(GetColour, SetColour)


        def UpdatePickerFromTextCtrl(self):
            col = wx.Colour(self.GetTextCtrl().GetValue())
            if not col.IsOk():
                return
            if self.GetColour() != col:
                self.GetPickerCtrl().SetColour(col)
                evt = wx.ColourPickerEvent(self, self.GetId(), self.GetColour())
                self.GetEventHandler().ProcessEvent(evt)

        def UpdateTextCtrlFromPicker(self):
            if not self.GetTextCtrl():
                return
            self.GetTextCtrl().SetValue(self.GetColour().GetAsString())

        def GetPickerStyle(self, style):
            return style & CLRP_SHOW_LABEL

        def OnColourChange(self, evt):
            self.UpdateTextCtrlFromPicker()
            evt = wx.ColourPickerEvent(self, self.GetId(), self.GetColour())
            self.GetEventHandler().ProcessEvent(evt)

%End


//---------------------------------------------------------------------------

