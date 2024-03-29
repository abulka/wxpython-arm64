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
#include <wx/ribbon/panel.h>
%End


//---------------------------------------------------------------------------

enum wxRibbonPanelOption
{
    wxRIBBON_PANEL_NO_AUTO_MINIMISE,
    wxRIBBON_PANEL_EXT_BUTTON,
    wxRIBBON_PANEL_MINIMISE_BUTTON,
    wxRIBBON_PANEL_STRETCH,
    wxRIBBON_PANEL_FLEXIBLE,
    wxRIBBON_PANEL_DEFAULT_STYLE
};

wxEventType wxEVT_RIBBONPANEL_EXTBUTTON_ACTIVATED   /PyName=wxEVT_RIBBONPANEL_EXTBUTTON_ACTIVATED/;

class wxRibbonPanel : wxRibbonControl
{
    %Docstring
        RibbonPanel()
        RibbonPanel(parent, id=wx.ID_ANY, label=wx.EmptyString, minimised_icon=wx.NullBitmap, pos=wx.DefaultPosition, size=wx.DefaultSize, style=RIBBON_PANEL_DEFAULT_STYLE)
        
        Serves as a container for a group of (ribbon) controls.
    %End
    %TypeHeaderCode
        #include <wx/ribbon/panel.h>
    %End

public:
    wxRibbonPanel();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxRibbonPanel(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & label = wxEmptyString,
        const wxBitmap & minimised_icon = wxNullBitmap,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxRIBBON_PANEL_DEFAULT_STYLE
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    ~wxRibbonPanel();

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & label = wxEmptyString,
        const wxBitmap & icon = wxNullBitmap,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxRIBBON_PANEL_DEFAULT_STYLE
    );
    %Docstring
        Create(parent, id=wx.ID_ANY, label=wx.EmptyString, icon=wx.NullBitmap, pos=wx.DefaultPosition, size=wx.DefaultSize, style=RIBBON_PANEL_DEFAULT_STYLE) -> bool
        
        Create a ribbon panel in two-step ribbon panel construction.
    %End

    wxBitmap & GetMinimisedIcon();
    %Docstring
        GetMinimisedIcon() -> wx.Bitmap
        
        Get the bitmap to be used in place of the panel children when it is
        minimised.
    %End

    bool HasExtButton() const;
    %Docstring
        HasExtButton() -> bool
        
        Test if the panel has an extension button.
    %End

    bool IsMinimised() const;
    %Docstring
        IsMinimised() -> bool
        IsMinimised(at_size) -> bool
        
        Query if the panel is currently minimised.
    %End

    bool IsMinimised(
        wxSize at_size
    ) const;

    bool IsHovered() const;
    %Docstring
        IsHovered() -> bool
        
        Query is the mouse is currently hovered over the panel.
    %End

    bool IsExtButtonHovered() const;
    %Docstring
        IsExtButtonHovered() -> bool
        
        Query if the mouse is currently hovered over the extension button.
    %End

    bool CanAutoMinimise() const;
    %Docstring
        CanAutoMinimise() -> bool
        
        Query if the panel can automatically minimise itself at small sizes.
    %End

    bool ShowExpanded();
    %Docstring
        ShowExpanded() -> bool
        
        Show the panel externally expanded.
    %End

    bool HideExpanded();
    %Docstring
        HideExpanded() -> bool
        
        Hide the panel's external expansion.
    %End

    void SetArtProvider(
        wxRibbonArtProvider * art
    );
    %Docstring
        SetArtProvider(art)
        
        Set the art provider to be used.
    %End

    bool Realize();
    %Docstring
        Realize() -> bool
        
        Realize all children of the panel.
    %End

    wxRibbonPanel * GetExpandedDummy();
    %Docstring
        GetExpandedDummy() -> RibbonPanel
        
        Get the dummy panel of an expanded panel.
    %End

    wxRibbonPanel * GetExpandedPanel();
    %Docstring
        GetExpandedPanel() -> RibbonPanel
        
        Get the expanded panel of a dummy panel.
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


    %Property(name=ExpandedDummy, get=GetExpandedDummy)
    %Property(name=ExpandedPanel, get=GetExpandedPanel)
    %Property(name=MinimisedIcon, get=GetMinimisedIcon)
};  // end of class wxRibbonPanel


class wxRibbonPanelEvent : wxCommandEvent
{
    %Docstring
        RibbonPanelEvent(command_type=wx.wxEVT_NULL, win_id=0, panel=None)
        
        Event used to indicate various actions relating to a wxRibbonPanel.
    %End
    %TypeHeaderCode
        #include <wx/ribbon/panel.h>
    %End

public:
    wxRibbonPanelEvent(
        wxEventType command_type = wxEVT_NULL,
        int win_id = 0,
        wxRibbonPanel * panel = NULL
    );

    wxRibbonPanel * GetPanel();
    %Docstring
        GetPanel() -> RibbonPanel
        
        Returns the panel relating to this event.
    %End

    void SetPanel(
        wxRibbonPanel * page
    );
    %Docstring
        SetPanel(page)
        
        Sets the page relating to this event.
    %End

    public:
    virtual wxEvent* Clone() const /Factory/;


    private:
        wxRibbonPanelEvent& operator=(const wxRibbonPanelEvent&);


    public:


    %Property(name=Panel, get=GetPanel, set=SetPanel)
};  // end of class wxRibbonPanelEvent


%Extract(id=pycode_ribbon)
EVT_RIBBONPANEL_EXTBUTTON_ACTIVATED = wx.PyEventBinder(wxEVT_RIBBONPANEL_EXTBUTTON_ACTIVATED, 1)

%End


//---------------------------------------------------------------------------

