//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _core.sip
//
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

const char* wxStaticBoxNameStr;

class wxStaticBox : wxControl
{
    %Docstring
        StaticBox()
        StaticBox(parent, id=ID_ANY, label=EmptyString, pos=DefaultPosition, size=DefaultSize, style=0, name=StaticBoxNameStr)
        
        A static box is a rectangle drawn around other windows to denote a
        logical grouping of items.
    %End
    %TypeHeaderCode
        #include <wx/statbox.h>
    %End

public:
    wxStaticBox();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxStaticBox(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & label = wxEmptyString,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = 0,
        const wxString & name = wxStaticBoxNameStr
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    ~wxStaticBox();

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & label = wxEmptyString,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = 0,
        const wxString & name = wxStaticBoxNameStr
    );
    %Docstring
        Create(parent, id=ID_ANY, label=EmptyString, pos=DefaultPosition, size=DefaultSize, style=0, name=StaticBoxNameStr) -> bool
        
        Creates the static box for two-step construction.
    %End

    bool Enable(
        bool enable = true
    );
    %Docstring
        Enable(enable=True) -> bool
        
        Enables or disables the box without affecting its label window, if
        any.
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

    virtual
    void GetBordersForSizer(
        int* borderTop   /Out/,
        int* borderOther   /Out/
    ) const;
    %Docstring
        GetBordersForSizer() -> (borderTop, borderOther)
        
        Returns extra space that may be needed for borders within a StaticBox.
    %End

};  // end of class wxStaticBox



//---------------------------------------------------------------------------

