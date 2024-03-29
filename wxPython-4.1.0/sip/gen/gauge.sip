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

const int wxGA_HORIZONTAL;
const int wxGA_VERTICAL;
const int wxGA_PROGRESS;
const int wxGA_SMOOTH;
const int wxGA_TEXT;
const char* wxGaugeNameStr;

class wxGauge : wxControl
{
    %Docstring
        Gauge()
        Gauge(parent, id=ID_ANY, range=100, pos=DefaultPosition, size=DefaultSize, style=GA_HORIZONTAL, validator=DefaultValidator, name=GaugeNameStr)
        
        A gauge is a horizontal or vertical bar which shows a quantity (often
        time).
    %End
    %TypeHeaderCode
        #include <wx/gauge.h>
    %End

public:
    wxGauge();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxGauge(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        int range = 100,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxGA_HORIZONTAL,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxGaugeNameStr
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    ~wxGauge();

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        int range = 100,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxGA_HORIZONTAL,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxGaugeNameStr
    );
    %Docstring
        Create(parent, id=ID_ANY, range=100, pos=DefaultPosition, size=DefaultSize, style=GA_HORIZONTAL, validator=DefaultValidator, name=GaugeNameStr) -> bool
        
        Creates the gauge for two-step construction.
    %End

    int GetRange() const;
    %Docstring
        GetRange() -> int
        
        Returns the maximum position of the gauge.
    %End

    int GetValue() const;
    %Docstring
        GetValue() -> int
        
        Returns the current position of the gauge.
    %End

    bool IsVertical() const;
    %Docstring
        IsVertical() -> bool
        
        Returns true if the gauge is vertical (has wxGA_VERTICAL style) and
        false otherwise.
    %End

    void Pulse();
    %Docstring
        Pulse()
        
        Switch the gauge to indeterminate mode (if required) and makes the
        gauge move a bit to indicate the user that some progress has been
        made.
    %End

    void SetRange(
        int range
    );
    %Docstring
        SetRange(range)
        
        Sets the range (maximum value) of the gauge.
    %End

    void SetValue(
        int pos
    );
    %Docstring
        SetValue(pos)
        
        Sets the position of the gauge.
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

    public:


    %Property(name=Range, get=GetRange, set=SetRange)
    %Property(name=Value, get=GetValue, set=SetValue)
};  // end of class wxGauge



//---------------------------------------------------------------------------

