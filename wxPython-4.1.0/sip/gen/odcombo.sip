//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _adv.sip
//
//---------------------------------------------------------------------------

%ModuleHeaderCode
#include <wx/odcombo.h>
%End


//---------------------------------------------------------------------------

enum wxOwnerDrawnComboBoxPaintingFlags
{
    wxODCB_PAINTING_CONTROL,
    wxODCB_PAINTING_SELECTED
};

enum 
{
    wxODCB_DCLICK_CYCLES,
    wxODCB_STD_CONTROL_PAINT
};

class wxOwnerDrawnComboBox : wxComboCtrl, wxItemContainer
{
    %Docstring
        OwnerDrawnComboBox()
        OwnerDrawnComboBox(parent, id=wx.ID_ANY, value=wx.EmptyString, pos=wx.DefaultPosition, size=wx.DefaultSize, choices=[], style=0, validator=wx.DefaultValidator, name="comboBox")
        
        wxOwnerDrawnComboBox is a combobox with owner-drawn list items.
    %End
    %TypeHeaderCode
        #include <wx/odcombo.h>
    %End

public:
    wxOwnerDrawnComboBox();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxOwnerDrawnComboBox(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & value = wxEmptyString,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        const wxArrayString & choices = wxArrayString(),
        long style = 0,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = "comboBox"
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    ~wxOwnerDrawnComboBox();

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxString & value = wxEmptyString,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        const wxArrayString & choices = wxArrayString(),
        long style = 0,
        const wxValidator & validator = wxDefaultValidator,
        const wxString & name = wxComboBoxNameStr
    );
    %Docstring
        Create(parent, id=wx.ID_ANY, value=wx.EmptyString, pos=wx.DefaultPosition, size=wx.DefaultSize, choices=[], style=0, validator=wx.DefaultValidator, name=wx.ComboBoxNameStr) -> bool
        
        Creates the combobox for two-step construction.
    %End

    bool IsListEmpty() const;
    %Docstring
        IsListEmpty() -> bool
        
        Returns true if the list of combobox choices is empty.
    %End

    bool IsTextEmpty() const;
    %Docstring
        IsTextEmpty() -> bool
        
        Returns true if the text of the combobox is empty.
    %End

    int GetWidestItem();
    %Docstring
        GetWidestItem() -> int
        
        Returns index to the widest item in the list.
    %End

    int GetWidestItemWidth();
    %Docstring
        GetWidestItemWidth() -> int
        
        Returns width of the widest item in the list.
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

            virtual unsigned int GetCount() const;
            virtual wxString GetString(unsigned int n) const;
            virtual void SetString(unsigned int n, const wxString& s);
            virtual int GetSelection() const;
            virtual void SetSelection(int n);
    
            virtual wxString GetStringSelection() const;
            %MethodCode
                sipRes = new wxString(sipCpp->wxItemContainerImmutable::GetStringSelection());
            %End
            %VirtualCallCode
                sipRes = wxItemContainerImmutable::GetStringSelection();
            %End


            protected:
            virtual void DoSetPopupControl(wxComboPopup* popup);
            virtual void DoShowPopup(const wxRect& rect, int flags);


    public:


    %Property(name=WidestItem, get=GetWidestItem)
    %Property(name=WidestItemWidth, get=GetWidestItemWidth)

protected:
    virtual
    void OnDrawBackground(
        wxDC & dc,
        const wxRect & rect,
        int item,
        int flags
    ) const;
    %Docstring
        OnDrawBackground(dc, rect, item, flags)
        
        This method is used to draw the items background and, maybe, a border
        around it.
    %End

    virtual
    void OnDrawItem(
        wxDC & dc,
        const wxRect & rect,
        int item,
        int flags
    ) const;
    %Docstring
        OnDrawItem(dc, rect, item, flags)
        
        The derived class may implement this function to actually draw the
        item with the given index on the provided DC.
    %End

    virtual
    wxCoord OnMeasureItem(
        size_t item
    ) const;
    %Docstring
        OnMeasureItem(item) -> Coord
        
        The derived class may implement this method to return the height of
        the specified item (in pixels).
    %End

    virtual
    wxCoord OnMeasureItemWidth(
        size_t item
    ) const;
    %Docstring
        OnMeasureItemWidth(item) -> Coord
        
        The derived class may implement this method to return the width of the
        specified item (in pixels).
    %End

};  // end of class wxOwnerDrawnComboBox



//---------------------------------------------------------------------------

