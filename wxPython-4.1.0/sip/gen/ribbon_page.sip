//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _ribbon.sip
//
//---------------------------------------------------------------------------

%ModuleHeaderCode
#include <wx/ribbon/page.h>
%End


//---------------------------------------------------------------------------

class wxRibbonPage : wxRibbonControl
{
    %Docstring
        RibbonPage()
        RibbonPage(parent, id=wx.ID_ANY, label=wx.EmptyString, icon=wx.NullBitmap, style=0)
        
        Container for related ribbon panels, and a tab within a ribbon bar.
    %End
    %TypeHeaderCode
        #include <wx/ribbon/page.h>
    %End

public:
    wxRibbonPage();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxRibbonPage(
        wxRibbonBar * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & label = wxEmptyString,
        const wxBitmap & icon = wxNullBitmap,
        long style = 0
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    ~wxRibbonPage();

    bool Create(
        wxRibbonBar * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & label = wxEmptyString,
        const wxBitmap & icon = wxNullBitmap,
        long style = 0
    );
    %Docstring
        Create(parent, id=wx.ID_ANY, label=wx.EmptyString, icon=wx.NullBitmap, style=0) -> bool
        
        Create a ribbon page in two-step ribbon page construction.
    %End

    void SetArtProvider(
        wxRibbonArtProvider * art
    );
    %Docstring
        SetArtProvider(art)
        
        Set the art provider to be used.
    %End

    wxBitmap & GetIcon();
    %Docstring
        GetIcon() -> wx.Bitmap
        
        Get the icon used for the page in the ribbon bar tab area (only
        displayed if the ribbon bar is actually showing icons).
    %End

    void SetSizeWithScrollButtonAdjustment(
        int x,
        int y,
        int width,
        int height
    );
    %Docstring
        SetSizeWithScrollButtonAdjustment(x, y, width, height)
        
        Set the size of the page and the external scroll buttons (if any).
    %End

    void AdjustRectToIncludeScrollButtons(
        wxRect * rect
    ) const;
    %Docstring
        AdjustRectToIncludeScrollButtons(rect)
        
        Expand a rectangle of the page to include external scroll buttons (if
        any).
    %End

    bool DismissExpandedPanel();
    %Docstring
        DismissExpandedPanel() -> bool
        
        Dismiss the current externally expanded panel, if there is one.
    %End

    bool Realize();
    %Docstring
        Realize() -> bool
        
        Perform a full re-layout of all panels on the page.
    %End

    bool ScrollLines(
        int lines
    );
    %Docstring
        ScrollLines(lines) -> bool
        
        Scroll the page by some amount up / down / left / right.
    %End

    bool ScrollPixels(
        int pixels
    );
    %Docstring
        ScrollPixels(pixels) -> bool
        
        Scroll the page by a set number of pixels up / down / left / right.
    %End

    bool ScrollSections(
        int sections
    );
    %Docstring
        ScrollSections(sections) -> bool
        
        Scroll the page by an entire child section.
    %End

    wxOrientation GetMajorAxis() const;
    %Docstring
        GetMajorAxis() -> Orientation
        
        Get the direction in which ribbon panels are stacked within the page.
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
        GetClassDefaultAttributes(variant=wx.WINDOW_VARIANT_NORMAL) -> wx.VisualAttributes
    %End
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    public:


    %Property(name=Icon, get=GetIcon)
    %Property(name=MajorAxis, get=GetMajorAxis)
};  // end of class wxRibbonPage



//---------------------------------------------------------------------------

