//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _aui.sip
//
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

enum wxAuiToolBarStyle
{
    wxAUI_TB_TEXT,
    wxAUI_TB_NO_TOOLTIPS,
    wxAUI_TB_NO_AUTORESIZE,
    wxAUI_TB_GRIPPER,
    wxAUI_TB_OVERFLOW,
    wxAUI_TB_VERTICAL,
    wxAUI_TB_HORZ_LAYOUT,
    wxAUI_TB_HORIZONTAL,
    wxAUI_TB_PLAIN_BACKGROUND,
    wxAUI_TB_HORZ_TEXT,
    wxAUI_ORIENTATION_MASK,
    wxAUI_TB_DEFAULT_STYLE
};

enum wxAuiToolBarArtSetting
{
    wxAUI_TBART_SEPARATOR_SIZE,
    wxAUI_TBART_GRIPPER_SIZE,
    wxAUI_TBART_OVERFLOW_SIZE
};

enum wxAuiToolBarToolTextOrientation
{
    wxAUI_TBTOOL_TEXT_LEFT,
    wxAUI_TBTOOL_TEXT_RIGHT,
    wxAUI_TBTOOL_TEXT_TOP,
    wxAUI_TBTOOL_TEXT_BOTTOM
};

wxEventType wxEVT_AUITOOLBAR_TOOL_DROPDOWN   /PyName=wxEVT_AUITOOLBAR_TOOL_DROPDOWN/;

wxEventType wxEVT_AUITOOLBAR_OVERFLOW_CLICK   /PyName=wxEVT_AUITOOLBAR_OVERFLOW_CLICK/;

wxEventType wxEVT_AUITOOLBAR_RIGHT_CLICK   /PyName=wxEVT_AUITOOLBAR_RIGHT_CLICK/;

wxEventType wxEVT_AUITOOLBAR_MIDDLE_CLICK   /PyName=wxEVT_AUITOOLBAR_MIDDLE_CLICK/;

wxEventType wxEVT_AUITOOLBAR_BEGIN_DRAG   /PyName=wxEVT_AUITOOLBAR_BEGIN_DRAG/;

class wxAuiToolBarItem
{
    %Docstring
        AuiToolBarItem()
        AuiToolBarItem(c)
        
        wxAuiToolBarItem is part of the wxAUI class framework, representing a
        toolbar element.
    %End
    %TypeHeaderCode
        #include <wx/aui/auibar.h>
    %End

public:
    wxAuiToolBarItem();

    wxAuiToolBarItem(
        const wxAuiToolBarItem & c
    );

    void Assign(
        const wxAuiToolBarItem & c
    );
    %Docstring
        Assign(c)
        
        Assigns the properties of the wxAuiToolBarItem "c" to this.
    %End

    void SetWindow(
        wxWindow * w
    );
    %Docstring
        SetWindow(w)
        
        Assigns a window to the toolbar item.
    %End

    wxWindow * GetWindow();
    %Docstring
        GetWindow() -> wx.Window
        
        Returns the wxWindow* associated to the toolbar item.
    %End

    void SetId(
        int new_id
    );
    %Docstring
        SetId(new_id)
        
        Sets the toolbar item identifier.
    %End

    int GetId() const;
    %Docstring
        GetId() -> int
        
        Returns the toolbar item identifier.
    %End

    void SetKind(
        int new_kind
    );
    %Docstring
        SetKind(new_kind)
        
        Sets the wxAuiToolBarItem kind.
    %End

    int GetKind() const;
    %Docstring
        GetKind() -> int
        
        Returns the toolbar item kind.
    %End

    void SetState(
        int new_state
    );
    %Docstring
        SetState(new_state)
    %End

    int GetState() const;
    %Docstring
        GetState() -> int
    %End

    void SetSizerItem(
        wxSizerItem * s
    );
    %Docstring
        SetSizerItem(s)
    %End

    wxSizerItem * GetSizerItem() const;
    %Docstring
        GetSizerItem() -> wx.SizerItem
    %End

    void SetLabel(
        const wxString & s
    );
    %Docstring
        SetLabel(s)
    %End

    const wxString & GetLabel() const;
    %Docstring
        GetLabel() -> String
    %End

    void SetBitmap(
        const wxBitmap & bmp
    );
    %Docstring
        SetBitmap(bmp)
    %End

    const wxBitmap & GetBitmap() const;
    %Docstring
        GetBitmap() -> wx.Bitmap
    %End

    void SetDisabledBitmap(
        const wxBitmap & bmp
    );
    %Docstring
        SetDisabledBitmap(bmp)
    %End

    const wxBitmap & GetDisabledBitmap() const;
    %Docstring
        GetDisabledBitmap() -> wx.Bitmap
    %End

    void SetHoverBitmap(
        const wxBitmap & bmp
    );
    %Docstring
        SetHoverBitmap(bmp)
    %End

    const wxBitmap & GetHoverBitmap() const;
    %Docstring
        GetHoverBitmap() -> wx.Bitmap
    %End

    void SetShortHelp(
        const wxString & s
    );
    %Docstring
        SetShortHelp(s)
    %End

    const wxString & GetShortHelp() const;
    %Docstring
        GetShortHelp() -> String
    %End

    void SetLongHelp(
        const wxString & s
    );
    %Docstring
        SetLongHelp(s)
    %End

    const wxString & GetLongHelp() const;
    %Docstring
        GetLongHelp() -> String
    %End

    void SetMinSize(
        const wxSize & s
    );
    %Docstring
        SetMinSize(s)
    %End

    const wxSize & GetMinSize() const;
    %Docstring
        GetMinSize() -> wx.Size
    %End

    void SetSpacerPixels(
        int s
    );
    %Docstring
        SetSpacerPixels(s)
    %End

    int GetSpacerPixels() const;
    %Docstring
        GetSpacerPixels() -> int
    %End

    void SetProportion(
        int p
    );
    %Docstring
        SetProportion(p)
    %End

    int GetProportion() const;
    %Docstring
        GetProportion() -> int
    %End

    void SetActive(
        bool b
    );
    %Docstring
        SetActive(b)
    %End

    bool IsActive() const;
    %Docstring
        IsActive() -> bool
    %End

    void SetHasDropDown(
        bool b
    );
    %Docstring
        SetHasDropDown(b)
        
        Set whether this tool has a drop down button.
    %End

    bool HasDropDown() const;
    %Docstring
        HasDropDown() -> bool
        
        Returns whether the toolbar item has an associated drop down button.
    %End

    void SetSticky(
        bool b
    );
    %Docstring
        SetSticky(b)
    %End

    bool IsSticky() const;
    %Docstring
        IsSticky() -> bool
    %End

    void SetUserData(
        long l
    );
    %Docstring
        SetUserData(l)
    %End

    long GetUserData() const;
    %Docstring
        GetUserData() -> long
    %End

    void SetAlignment(
        int l
    );
    %Docstring
        SetAlignment(l)
    %End

    int GetAlignment() const;
    %Docstring
        GetAlignment() -> int
    %End

    public:


    %Property(name=Alignment, get=GetAlignment, set=SetAlignment)
    %Property(name=Bitmap, get=GetBitmap, set=SetBitmap)
    %Property(name=DisabledBitmap, get=GetDisabledBitmap, set=SetDisabledBitmap)
    %Property(name=HoverBitmap, get=GetHoverBitmap, set=SetHoverBitmap)
    %Property(name=Id, get=GetId, set=SetId)
    %Property(name=Kind, get=GetKind, set=SetKind)
    %Property(name=Label, get=GetLabel, set=SetLabel)
    %Property(name=LongHelp, get=GetLongHelp, set=SetLongHelp)
    %Property(name=MinSize, get=GetMinSize, set=SetMinSize)
    %Property(name=Proportion, get=GetProportion, set=SetProportion)
    %Property(name=ShortHelp, get=GetShortHelp, set=SetShortHelp)
    %Property(name=SizerItem, get=GetSizerItem, set=SetSizerItem)
    %Property(name=SpacerPixels, get=GetSpacerPixels, set=SetSpacerPixels)
    %Property(name=State, get=GetState, set=SetState)
    %Property(name=UserData, get=GetUserData, set=SetUserData)
    %Property(name=Window, get=GetWindow, set=SetWindow)
};  // end of class wxAuiToolBarItem


class wxAuiToolBarArt
{
    %Docstring
        AuiToolBarArt()
        
        wxAuiToolBarArt is part of the wxAUI class framework.
    %End
    %TypeHeaderCode
        #include <wx/aui/auibar.h>
    %End

public:
    wxAuiToolBarArt();

    virtual
    wxAuiToolBarArt * Clone() = 0;
    %Docstring
        Clone() -> AuiToolBarArt
    %End

    virtual
    void SetFlags(
        unsigned int flags
    ) = 0;
    %Docstring
        SetFlags(flags)
    %End

    virtual
    unsigned int GetFlags() = 0;
    %Docstring
        GetFlags() -> unsignedint
    %End

    virtual
    void SetFont(
        const wxFont & font
    ) = 0;
    %Docstring
        SetFont(font)
    %End

    virtual
    wxFont GetFont() = 0;
    %Docstring
        GetFont() -> wx.Font
    %End

    virtual
    void SetTextOrientation(
        int orientation
    ) = 0;
    %Docstring
        SetTextOrientation(orientation)
    %End

    virtual
    int GetTextOrientation() = 0;
    %Docstring
        GetTextOrientation() -> int
    %End

    virtual
    void DrawBackground(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect
    ) = 0;
    %Docstring
        DrawBackground(dc, wnd, rect)
    %End

    virtual
    void DrawPlainBackground(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect
    ) = 0;
    %Docstring
        DrawPlainBackground(dc, wnd, rect)
    %End

    virtual
    void DrawLabel(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item,
        const wxRect & rect
    ) = 0;
    %Docstring
        DrawLabel(dc, wnd, item, rect)
    %End

    virtual
    void DrawButton(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item,
        const wxRect & rect
    ) = 0;
    %Docstring
        DrawButton(dc, wnd, item, rect)
    %End

    virtual
    void DrawDropDownButton(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item,
        const wxRect & rect
    ) = 0;
    %Docstring
        DrawDropDownButton(dc, wnd, item, rect)
    %End

    virtual
    void DrawControlLabel(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item,
        const wxRect & rect
    ) = 0;
    %Docstring
        DrawControlLabel(dc, wnd, item, rect)
    %End

    virtual
    void DrawSeparator(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect
    ) = 0;
    %Docstring
        DrawSeparator(dc, wnd, rect)
    %End

    virtual
    void DrawGripper(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect
    ) = 0;
    %Docstring
        DrawGripper(dc, wnd, rect)
    %End

    virtual
    void DrawOverflowButton(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect,
        int state
    ) = 0;
    %Docstring
        DrawOverflowButton(dc, wnd, rect, state)
    %End

    virtual
    wxSize GetLabelSize(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item
    ) = 0;
    %Docstring
        GetLabelSize(dc, wnd, item) -> wx.Size
    %End

    virtual
    wxSize GetToolSize(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item
    ) = 0;
    %Docstring
        GetToolSize(dc, wnd, item) -> wx.Size
    %End

    virtual
    int GetElementSize(
        int element_id
    ) = 0;
    %Docstring
        GetElementSize(element_id) -> int
    %End

    virtual
    void SetElementSize(
        int element_id,
        int size
    ) = 0;
    %Docstring
        SetElementSize(element_id, size)
    %End

    virtual
    int ShowDropDown(
        wxWindow * wnd,
        const wxAuiToolBarItemArray & items
    ) = 0;
    %Docstring
        ShowDropDown(wnd, items) -> int
    %End

    public:


    %Property(name=Flags, get=GetFlags, set=SetFlags)
    %Property(name=Font, get=GetFont, set=SetFont)
    %Property(name=TextOrientation, get=GetTextOrientation, set=SetTextOrientation)
};  // end of class wxAuiToolBarArt


class wxAuiDefaultToolBarArt : wxAuiToolBarArt
{
    %Docstring
        AuiDefaultToolBarArt()
        
        wxAuiDefaultToolBarArt is part of the wxAUI class framework.
    %End
    %TypeHeaderCode
        #include <wx/aui/auibar.h>
    %End

public:
    wxAuiDefaultToolBarArt();

    virtual
    ~wxAuiDefaultToolBarArt();

    virtual
    wxAuiToolBarArt * Clone();
    %Docstring
        Clone() -> AuiToolBarArt
    %End

    virtual
    void SetFlags(
        unsigned int flags
    );
    %Docstring
        SetFlags(flags)
    %End

    virtual
    unsigned int GetFlags();
    %Docstring
        GetFlags() -> unsignedint
    %End

    virtual
    void SetFont(
        const wxFont & font
    );
    %Docstring
        SetFont(font)
    %End

    virtual
    wxFont GetFont();
    %Docstring
        GetFont() -> wx.Font
    %End

    virtual
    void SetTextOrientation(
        int orientation
    );
    %Docstring
        SetTextOrientation(orientation)
    %End

    virtual
    int GetTextOrientation();
    %Docstring
        GetTextOrientation() -> int
    %End

    virtual
    void DrawBackground(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect
    );
    %Docstring
        DrawBackground(dc, wnd, rect)
    %End

    virtual
    void DrawPlainBackground(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect
    );
    %Docstring
        DrawPlainBackground(dc, wnd, rect)
    %End

    virtual
    void DrawLabel(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item,
        const wxRect & rect
    );
    %Docstring
        DrawLabel(dc, wnd, item, rect)
    %End

    virtual
    void DrawButton(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item,
        const wxRect & rect
    );
    %Docstring
        DrawButton(dc, wnd, item, rect)
    %End

    virtual
    void DrawDropDownButton(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item,
        const wxRect & rect
    );
    %Docstring
        DrawDropDownButton(dc, wnd, item, rect)
    %End

    virtual
    void DrawControlLabel(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item,
        const wxRect & rect
    );
    %Docstring
        DrawControlLabel(dc, wnd, item, rect)
    %End

    virtual
    void DrawSeparator(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect
    );
    %Docstring
        DrawSeparator(dc, wnd, rect)
    %End

    virtual
    void DrawGripper(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect
    );
    %Docstring
        DrawGripper(dc, wnd, rect)
    %End

    virtual
    void DrawOverflowButton(
        wxDC & dc,
        wxWindow * wnd,
        const wxRect & rect,
        int state
    );
    %Docstring
        DrawOverflowButton(dc, wnd, rect, state)
    %End

    virtual
    wxSize GetLabelSize(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item
    );
    %Docstring
        GetLabelSize(dc, wnd, item) -> wx.Size
    %End

    virtual
    wxSize GetToolSize(
        wxDC & dc,
        wxWindow * wnd,
        const wxAuiToolBarItem & item
    );
    %Docstring
        GetToolSize(dc, wnd, item) -> wx.Size
    %End

    virtual
    int GetElementSize(
        int element
    );
    %Docstring
        GetElementSize(element) -> int
    %End

    virtual
    void SetElementSize(
        int element_id,
        int size
    );
    %Docstring
        SetElementSize(element_id, size)
    %End

    virtual
    int ShowDropDown(
        wxWindow * wnd,
        const wxAuiToolBarItemArray & items
    );
    %Docstring
        ShowDropDown(wnd, items) -> int
    %End

    public:


    %Property(name=Flags, get=GetFlags, set=SetFlags)
    %Property(name=Font, get=GetFont, set=SetFont)
    %Property(name=TextOrientation, get=GetTextOrientation, set=SetTextOrientation)
};  // end of class wxAuiDefaultToolBarArt


class wxAuiToolBar : wxControl
{
    %Docstring
        AuiToolBar()
        AuiToolBar(parent, id=wx.ID_ANY, position=wx.DefaultPosition, size=wx.DefaultSize, style=AUI_TB_DEFAULT_STYLE)
        
        wxAuiToolBar is a dockable toolbar, part of the wxAUI class framework.
    %End
    %TypeHeaderCode
        #include <wx/aui/auibar.h>
    %End

public:
    wxAuiToolBar();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxAuiToolBar(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxPoint & position = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxAUI_TB_DEFAULT_STYLE
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    ~wxAuiToolBar();

    bool Create(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxAUI_TB_DEFAULT_STYLE
    );
    %Docstring
        Create(parent, id=wx.ID_ANY, pos=wx.DefaultPosition, size=wx.DefaultSize, style=AUI_TB_DEFAULT_STYLE) -> bool
        
        Really create wxAuiToolBar created using default constructor.
    %End

    void SetWindowStyleFlag(
        long style
    );
    %Docstring
        SetWindowStyleFlag(style)
        
        Sets the style of the window.
    %End

    long GetWindowStyleFlag() const;
    %Docstring
        GetWindowStyleFlag() -> long
        
        Gets the window style that was passed to the constructor or Create()
        method.
    %End

    void SetArtProvider(
        wxAuiToolBarArt * art
    );
    %Docstring
        SetArtProvider(art)
    %End

    wxAuiToolBarArt * GetArtProvider() const;
    %Docstring
        GetArtProvider() -> AuiToolBarArt
    %End

    bool SetFont(
        const wxFont & font
    );
    %Docstring
        SetFont(font) -> bool
        
        Sets the font for this window.
    %End

    wxAuiToolBarItem * AddTool(
        int toolId,
        const wxString & label,
        const wxBitmap & bitmap,
        const wxString & short_help_string = wxEmptyString,
        wxItemKind kind = wxITEM_NORMAL
    );
    %Docstring
        AddTool(toolId, label, bitmap, short_help_string=wx.EmptyString, kind=wx.ITEM_NORMAL) -> AuiToolBarItem
        AddTool(toolId, label, bitmap, disabled_bitmap, kind, short_help_string, long_help_string, client_data) -> AuiToolBarItem
        AddTool(toolId, bitmap, disabled_bitmap, toggle=False, client_data=None, short_help_string=wx.EmptyString, long_help_string=wx.EmptyString) -> AuiToolBarItem
    %End

    wxAuiToolBarItem * AddTool(
        int toolId,
        const wxString & label,
        const wxBitmap & bitmap,
        const wxBitmap & disabled_bitmap,
        wxItemKind kind,
        const wxString & short_help_string,
        const wxString & long_help_string,
        wxObject * client_data
    );

    wxAuiToolBarItem * AddTool(
        int toolId,
        const wxBitmap & bitmap,
        const wxBitmap & disabled_bitmap,
        bool toggle = false,
        wxObject * client_data = NULL,
        const wxString & short_help_string = wxEmptyString,
        const wxString & long_help_string = wxEmptyString
    );

    wxAuiToolBarItem * AddLabel(
        int toolId,
        const wxString & label = wxEmptyString,
        const int width = -1
    );
    %Docstring
        AddLabel(toolId, label=wx.EmptyString, width=-1) -> AuiToolBarItem
    %End

    wxAuiToolBarItem * AddControl(
        wxControl * control,
        const wxString & label = wxEmptyString
    );
    %Docstring
        AddControl(control, label=wx.EmptyString) -> AuiToolBarItem
    %End

    wxAuiToolBarItem * AddSeparator();
    %Docstring
        AddSeparator() -> AuiToolBarItem
    %End

    wxAuiToolBarItem * AddSpacer(
        int pixels
    );
    %Docstring
        AddSpacer(pixels) -> AuiToolBarItem
    %End

    wxAuiToolBarItem * AddStretchSpacer(
        int proportion = 1
    );
    %Docstring
        AddStretchSpacer(proportion=1) -> AuiToolBarItem
    %End

    bool Realize();
    %Docstring
        Realize() -> bool
    %End

    wxControl * FindControl(
        int window_id
    );
    %Docstring
        FindControl(window_id) -> wx.Control
    %End

    wxAuiToolBarItem * FindToolByPosition(
        wxCoord x,
        wxCoord y
    ) const;
    %Docstring
        FindToolByPosition(x, y) -> AuiToolBarItem
    %End

    wxAuiToolBarItem * FindToolByIndex(
        int idx
    ) const;
    %Docstring
        FindToolByIndex(idx) -> AuiToolBarItem
    %End

    wxAuiToolBarItem * FindTool(
        int toolId
    ) const;
    %Docstring
        FindTool(toolId) -> AuiToolBarItem
    %End

    void ClearTools();
    %Docstring
        ClearTools()
    %End

    void Clear();
    %Docstring
        Clear()
    %End

    bool DestroyTool(
        int toolId
    );
    %Docstring
        DestroyTool(toolId) -> bool
        
        Destroys the tool with the given ID and its associated window, if any.
    %End

    bool DestroyToolByIndex(
        int idx
    );
    %Docstring
        DestroyToolByIndex(idx) -> bool
        
        Destroys the tool at the given position and its associated window, if
        any.
    %End

    bool DeleteTool(
        int toolId
    );
    %Docstring
        DeleteTool(toolId) -> bool
        
        Removes the tool with the given ID from the toolbar.
    %End

    bool DeleteByIndex(
        int idx
    );
    %Docstring
        DeleteByIndex(idx) -> bool
        
        Removes the tool at the given position from the toolbar.
    %End

    size_t GetToolCount() const;
    %Docstring
        GetToolCount() -> size_t
    %End

    int GetToolPos(
        int toolId
    ) const;
    %Docstring
        GetToolPos(toolId) -> int
    %End

    int GetToolIndex(
        int toolId
    ) const;
    %Docstring
        GetToolIndex(toolId) -> int
    %End

    bool GetToolFits(
        int toolId
    ) const;
    %Docstring
        GetToolFits(toolId) -> bool
    %End

    wxRect GetToolRect(
        int toolId
    ) const;
    %Docstring
        GetToolRect(toolId) -> wx.Rect
    %End

    bool GetToolFitsByIndex(
        int toolId
    ) const;
    %Docstring
        GetToolFitsByIndex(toolId) -> bool
    %End

    bool GetToolBarFits() const;
    %Docstring
        GetToolBarFits() -> bool
    %End

    void SetMargins(
        const wxSize & size
    );
    %Docstring
        SetMargins(size)
        SetMargins(x, y)
        SetMargins(left, right, top, bottom)
    %End

    void SetMargins(
        int x,
        int y
    );

    void SetMargins(
        int left,
        int right,
        int top,
        int bottom
    );

    void SetToolBitmapSize(
        const wxSize & size
    );
    %Docstring
        SetToolBitmapSize(size)
    %End

    wxSize GetToolBitmapSize() const;
    %Docstring
        GetToolBitmapSize() -> wx.Size
    %End

    bool GetOverflowVisible() const;
    %Docstring
        GetOverflowVisible() -> bool
    %End

    void SetOverflowVisible(
        bool visible
    );
    %Docstring
        SetOverflowVisible(visible)
    %End

    bool GetGripperVisible() const;
    %Docstring
        GetGripperVisible() -> bool
    %End

    void SetGripperVisible(
        bool visible
    );
    %Docstring
        SetGripperVisible(visible)
    %End

    void ToggleTool(
        int toolId,
        bool state
    );
    %Docstring
        ToggleTool(toolId, state)
    %End

    bool GetToolToggled(
        int toolId
    ) const;
    %Docstring
        GetToolToggled(toolId) -> bool
    %End

    void EnableTool(
        int toolId,
        bool state
    );
    %Docstring
        EnableTool(toolId, state)
    %End

    bool GetToolEnabled(
        int toolId
    ) const;
    %Docstring
        GetToolEnabled(toolId) -> bool
    %End

    void SetToolDropDown(
        int toolId,
        bool dropdown
    );
    %Docstring
        SetToolDropDown(toolId, dropdown)
        
        Set whether the specified toolbar item has a drop down button.
    %End

    bool GetToolDropDown(
        int toolId
    ) const;
    %Docstring
        GetToolDropDown(toolId) -> bool
        
        Returns whether the specified toolbar item has an associated drop down
        button.
    %End

    void SetToolBorderPadding(
        int padding
    );
    %Docstring
        SetToolBorderPadding(padding)
    %End

    int GetToolBorderPadding() const;
    %Docstring
        GetToolBorderPadding() -> int
    %End

    void SetToolTextOrientation(
        int orientation
    );
    %Docstring
        SetToolTextOrientation(orientation)
    %End

    int GetToolTextOrientation() const;
    %Docstring
        GetToolTextOrientation() -> int
    %End

    void SetToolPacking(
        int packing
    );
    %Docstring
        SetToolPacking(packing)
    %End

    int GetToolPacking() const;
    %Docstring
        GetToolPacking() -> int
    %End

    void SetToolProportion(
        int toolId,
        int proportion
    );
    %Docstring
        SetToolProportion(toolId, proportion)
    %End

    int GetToolProportion(
        int toolId
    ) const;
    %Docstring
        GetToolProportion(toolId) -> int
    %End

    void SetToolSeparation(
        int separation
    );
    %Docstring
        SetToolSeparation(separation)
    %End

    int GetToolSeparation() const;
    %Docstring
        GetToolSeparation() -> int
    %End

    void SetToolSticky(
        int toolId,
        bool sticky
    );
    %Docstring
        SetToolSticky(toolId, sticky)
    %End

    bool GetToolSticky(
        int toolId
    ) const;
    %Docstring
        GetToolSticky(toolId) -> bool
    %End

    wxString GetToolLabel(
        int toolId
    ) const;
    %Docstring
        GetToolLabel(toolId) -> String
    %End

    void SetToolLabel(
        int toolId,
        const wxString & label
    );
    %Docstring
        SetToolLabel(toolId, label)
    %End

    wxBitmap GetToolBitmap(
        int toolId
    ) const;
    %Docstring
        GetToolBitmap(toolId) -> wx.Bitmap
    %End

    void SetToolBitmap(
        int toolId,
        const wxBitmap & bitmap
    );
    %Docstring
        SetToolBitmap(toolId, bitmap)
    %End

    wxString GetToolShortHelp(
        int toolId
    ) const;
    %Docstring
        GetToolShortHelp(toolId) -> String
    %End

    void SetToolShortHelp(
        int toolId,
        const wxString & help_string
    );
    %Docstring
        SetToolShortHelp(toolId, help_string)
    %End

    wxString GetToolLongHelp(
        int toolId
    ) const;
    %Docstring
        GetToolLongHelp(toolId) -> String
    %End

    void SetToolLongHelp(
        int toolId,
        const wxString & help_string
    );
    %Docstring
        SetToolLongHelp(toolId, help_string)
    %End

    void SetCustomOverflowItems(
        const wxAuiToolBarItemArray & prepend,
        const wxAuiToolBarItemArray & append
    );
    %Docstring
        SetCustomOverflowItems(prepend, append)
    %End

    wxSize GetHintSize(
        int dock_direction
    ) const;
    %Docstring
        GetHintSize(dock_direction) -> wx.Size
        
        get size of hint rectangle for a particular dock location
    %End

    bool IsPaneValid(
        const wxAuiPaneInfo & pane
    ) const;
    %Docstring
        IsPaneValid(pane) -> bool
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


    %Property(name=ArtProvider, get=GetArtProvider, set=SetArtProvider)
    %Property(name=GripperVisible, get=GetGripperVisible, set=SetGripperVisible)
    %Property(name=OverflowVisible, get=GetOverflowVisible, set=SetOverflowVisible)
    %Property(name=ToolBarFits, get=GetToolBarFits)
    %Property(name=ToolBitmapSize, get=GetToolBitmapSize, set=SetToolBitmapSize)
    %Property(name=ToolBorderPadding, get=GetToolBorderPadding, set=SetToolBorderPadding)
    %Property(name=ToolCount, get=GetToolCount)
    %Property(name=ToolPacking, get=GetToolPacking, set=SetToolPacking)
    %Property(name=ToolSeparation, get=GetToolSeparation, set=SetToolSeparation)
    %Property(name=ToolTextOrientation, get=GetToolTextOrientation, set=SetToolTextOrientation)
    %Property(name=WindowStyleFlag, get=GetWindowStyleFlag, set=SetWindowStyleFlag)
};  // end of class wxAuiToolBar


class wxAuiToolBarEvent : wxNotifyEvent
{
    %Docstring
        AuiToolBarEvent(commandType=wx.wxEVT_NULL, winId=0)
        AuiToolBarEvent(c)
        
        wxAuiToolBarEvent is used for the events generated by wxAuiToolBar.
    %End
    %TypeHeaderCode
        #include <wx/aui/auibar.h>
    %End

public:
    wxAuiToolBarEvent(
        wxEventType commandType = wxEVT_NULL,
        int winId = 0
    );

    wxAuiToolBarEvent(
        const wxAuiToolBarEvent & c
    );

    bool IsDropDownClicked() const;
    %Docstring
        IsDropDownClicked() -> bool
        
        Returns whether the drop down menu has been clicked.
    %End

    wxPoint GetClickPoint() const;
    %Docstring
        GetClickPoint() -> wx.Point
        
        Returns the point where the user clicked with the mouse.
    %End

    wxRect GetItemRect() const;
    %Docstring
        GetItemRect() -> wx.Rect
        
        Returns the wxAuiToolBarItem rectangle bounding the mouse click point.
    %End

    int GetToolId() const;
    %Docstring
        GetToolId() -> int
        
        Returns the wxAuiToolBarItem identifier.
    %End

    void SetDropDownClicked(
        bool c
    );
    %Docstring
        SetDropDownClicked(c)
    %End

    void SetClickPoint(
        const wxPoint & p
    );
    %Docstring
        SetClickPoint(p)
    %End

    void SetItemRect(
        const wxRect & r
    );
    %Docstring
        SetItemRect(r)
    %End

    void SetToolId(
        int toolId
    );
    %Docstring
        SetToolId(toolId)
    %End

    public:
    virtual wxEvent* Clone() const /Factory/;


    private:
        wxAuiToolBarEvent& operator=(const wxAuiToolBarEvent&);


    public:


    %Property(name=ClickPoint, get=GetClickPoint, set=SetClickPoint)
    %Property(name=ItemRect, get=GetItemRect, set=SetItemRect)
    %Property(name=ToolId, get=GetToolId, set=SetToolId)
};  // end of class wxAuiToolBarEvent


%Extract(id=pycode_aui)
EVT_AUITOOLBAR_TOOL_DROPDOWN = wx.PyEventBinder( wxEVT_AUITOOLBAR_TOOL_DROPDOWN, 1 )
EVT_AUITOOLBAR_OVERFLOW_CLICK = wx.PyEventBinder( wxEVT_AUITOOLBAR_OVERFLOW_CLICK, 1 )
EVT_AUITOOLBAR_RIGHT_CLICK = wx.PyEventBinder( wxEVT_AUITOOLBAR_RIGHT_CLICK, 1 )
EVT_AUITOOLBAR_MIDDLE_CLICK = wx.PyEventBinder( wxEVT_AUITOOLBAR_MIDDLE_CLICK, 1 )
EVT_AUITOOLBAR_BEGIN_DRAG = wx.PyEventBinder( wxEVT_AUITOOLBAR_BEGIN_DRAG, 1 )

%End

class wxAuiToolBarItemArray
{
public:
    SIP_SSIZE_T __len__();
    %MethodCode
        sipRes = sipCpp->GetCount();
    %End

            wxAuiToolBarItem& __getitem__(long index);
        %MethodCode
            if (0 > index)
                index += sipCpp->GetCount();

            if ((index < sipCpp->GetCount()) && (0 <= index)) {
                sipRes = &sipCpp->Item(index);
            }
            else {
                wxPyErr_SetString(PyExc_IndexError, "sequence index out of range");
                sipError = sipErrorFail;
            }
        %End
        

    int __contains__(wxAuiToolBarItem& obj);
    %MethodCode
        int idx = sipCpp->Index(*obj, false);
        sipRes = idx != wxNOT_FOUND;
    %End

    void append(wxAuiToolBarItem& obj);
    %MethodCode
        sipCpp->Add(*obj);
    %End

    // TODO:  add support for index(value, [start, [stop]])
    int index(wxAuiToolBarItem& obj);
    %MethodCode
        int idx = sipCpp->Index(*obj, false);
        if (idx == wxNOT_FOUND) {
            sipError = sipErrorFail;
            wxPyErr_SetString(PyExc_ValueError,
                              "sequence.index(x): x not in sequence");
            }
        sipRes = idx;
    %End
};

%Extract(id=pycode_aui)
def _AuiToolBarItemArray___repr__(self):
    return "AuiToolBarItemArray: " + repr(list(self))
AuiToolBarItemArray.__repr__ = _AuiToolBarItemArray___repr__
del _AuiToolBarItemArray___repr__
%End



//---------------------------------------------------------------------------

