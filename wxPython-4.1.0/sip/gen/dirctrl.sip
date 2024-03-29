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
#include <wx/dirctrl.h>
%End


//---------------------------------------------------------------------------

enum 
{
    wxDIRCTRL_DIR_ONLY,
    wxDIRCTRL_SELECT_FIRST,
    wxDIRCTRL_SHOW_FILTERS,
    wxDIRCTRL_3D_INTERNAL,
    wxDIRCTRL_EDIT_LABELS,
    wxDIRCTRL_MULTIPLE,
    wxDIRCTRL_DEFAULT_STYLE
};

wxEventType wxEVT_DIRCTRL_SELECTIONCHANGED   /PyName=wxEVT_DIRCTRL_SELECTIONCHANGED/;

wxEventType wxEVT_DIRCTRL_FILEACTIVATED   /PyName=wxEVT_DIRCTRL_FILEACTIVATED/;

class wxGenericDirCtrl : wxControl
{
    %Docstring
        GenericDirCtrl()
        GenericDirCtrl(parent, id=ID_ANY, dir=DirDialogDefaultFolderStr, pos=DefaultPosition, size=DefaultSize, style=DIRCTRL_DEFAULT_STYLE, filter=EmptyString, defaultFilter=0, name=TreeCtrlNameStr)
        
        This control can be used to place a directory listing (with optional
        files) on an arbitrary window.
    %End
    %TypeHeaderCode
        #include <wx/dirctrl.h>
    %End

public:
    wxGenericDirCtrl();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxGenericDirCtrl(
        wxWindow * parent,
        wxWindowID id = wxID_ANY,
        const wxString & dir = wxDirDialogDefaultFolderStr,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxDIRCTRL_DEFAULT_STYLE,
        const wxString & filter = wxEmptyString,
        int defaultFilter = 0,
        const wxString & name = wxTreeCtrlNameStr
    )   /Transfer/;
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    ~wxGenericDirCtrl();

    bool CollapsePath(
        const wxString & path
    );
    %Docstring
        CollapsePath(path) -> bool
        
        Collapse the given path.
    %End

    void CollapseTree();
    %Docstring
        CollapseTree()
        
        Collapses the entire tree.
    %End

    bool Create(
        wxWindow * parent,
        wxWindowID id = wxID_ANY,
        const wxString & dir = wxDirDialogDefaultFolderStr,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxDIRCTRL_DEFAULT_STYLE,
        const wxString & filter = wxEmptyString,
        int defaultFilter = 0,
        const wxString & name = wxTreeCtrlNameStr
    )   /TransferThis/;
    %Docstring
        Create(parent, id=ID_ANY, dir=DirDialogDefaultFolderStr, pos=DefaultPosition, size=DefaultSize, style=DIRCTRL_DEFAULT_STYLE, filter=EmptyString, defaultFilter=0, name=TreeCtrlNameStr) -> bool
        
        Create function for two-step construction.
    %End

    bool ExpandPath(
        const wxString & path
    );
    %Docstring
        ExpandPath(path) -> bool
        
        Tries to expand as much of the given path as possible, so that the
        filename or directory is visible in the tree control.
    %End

    wxString GetDefaultPath() const;
    %Docstring
        GetDefaultPath() -> String
        
        Gets the default path.
    %End

    wxString GetFilePath() const;
    %Docstring
        GetFilePath() -> String
        
        Gets selected filename path only (else empty string).
    %End

    void GetFilePaths(
        wxArrayString & paths
    ) const;
    %Docstring
        GetFilePaths(paths)
        
        Fills the array paths with the currently selected filepaths.
    %End

    wxString GetFilter() const;
    %Docstring
        GetFilter() -> String
        
        Returns the filter string.
    %End

    int GetFilterIndex() const;
    %Docstring
        GetFilterIndex() -> int
        
        Returns the current filter index (zero-based).
    %End

    wxDirFilterListCtrl * GetFilterListCtrl() const;
    %Docstring
        GetFilterListCtrl() -> DirFilterListCtrl
        
        Returns a pointer to the filter list control (if present).
    %End

    wxString GetPath() const;
    %Docstring
        GetPath() -> String
        GetPath(itemId) -> String
        
        Gets the currently-selected directory or filename.
    %End

    wxString GetPath(
        wxTreeItemId itemId
    ) const;

    void GetPaths(
        wxArrayString & paths
    ) const;
    %Docstring
        GetPaths(paths)
        
        Fills the array paths with the selected directories and filenames.
    %End

    wxTreeItemId GetRootId();
    %Docstring
        GetRootId() -> TreeItemId
        
        Returns the root id for the tree control.
    %End

    wxTreeCtrl * GetTreeCtrl() const;
    %Docstring
        GetTreeCtrl() -> TreeCtrl
        
        Returns a pointer to the tree control.
    %End

    void Init();
    %Docstring
        Init()
        
        Initializes variables.
    %End

    void ReCreateTree();
    %Docstring
        ReCreateTree()
        
        Collapse and expand the tree, thus re-creating it from scratch.
    %End

    void SetDefaultPath(
        const wxString & path
    );
    %Docstring
        SetDefaultPath(path)
        
        Sets the default path.
    %End

    void SetFilter(
        const wxString & filter
    );
    %Docstring
        SetFilter(filter)
        
        Sets the filter string.
    %End

    void SetFilterIndex(
        int n
    );
    %Docstring
        SetFilterIndex(n)
        
        Sets the current filter index (zero-based).
    %End

    void SetPath(
        const wxString & path
    );
    %Docstring
        SetPath(path)
        
        Sets the current path.
    %End

    void ShowHidden(
        bool show
    );
    %Docstring
        ShowHidden(show)
    %End

    void SelectPath(
        const wxString & path,
        bool select = true
    );
    %Docstring
        SelectPath(path, select=True)
        
        Selects the given item.
    %End

    void SelectPaths(
        const wxArrayString & paths
    );
    %Docstring
        SelectPaths(paths)
        
        Selects only the specified paths, clearing any previous selection.
    %End

    void UnselectAll();
    %Docstring
        UnselectAll()
        
        Removes the selection from all currently selected items.
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


    %Property(name=DefaultPath, get=GetDefaultPath, set=SetDefaultPath)
    %Property(name=FilePath, get=GetFilePath)
    %Property(name=Filter, get=GetFilter, set=SetFilter)
    %Property(name=FilterIndex, get=GetFilterIndex, set=SetFilterIndex)
    %Property(name=FilterListCtrl, get=GetFilterListCtrl)
    %Property(name=Path, get=GetPath, set=SetPath)
    %Property(name=RootId, get=GetRootId)
    %Property(name=TreeCtrl, get=GetTreeCtrl)
};  // end of class wxGenericDirCtrl


class wxDirFilterListCtrl : wxChoice
{
    %Docstring
        DirFilterListCtrl()
        DirFilterListCtrl(parent, id=ID_ANY, pos=DefaultPosition, size=DefaultSize, style=0)
    %End
    %TypeHeaderCode
        #include <wx/dirctrl.h>
    %End

public:
    wxDirFilterListCtrl();

    wxDirFilterListCtrl(
        wxGenericDirCtrl * parent,
        wxWindowID id = wxID_ANY,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = 0
    );

    virtual
    ~wxDirFilterListCtrl();

    bool Create(
        wxGenericDirCtrl * parent,
        wxWindowID id = wxID_ANY,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = 0
    );
    %Docstring
        Create(parent, id=ID_ANY, pos=DefaultPosition, size=DefaultSize, style=0) -> bool
    %End

    void Init();
    %Docstring
        Init()
    %End

    void FillFilterList(
        const wxString & filter,
        int defaultFilter
    );
    %Docstring
        FillFilterList(filter, defaultFilter)
    %End

};  // end of class wxDirFilterListCtrl


%Extract(id=pycode_core)
EVT_DIRCTRL_SELECTIONCHANGED = wx.PyEventBinder( wxEVT_DIRCTRL_SELECTIONCHANGED, 1 )
EVT_DIRCTRL_FILEACTIVATED = wx.PyEventBinder( wxEVT_DIRCTRL_FILEACTIVATED, 1 )

%End


//---------------------------------------------------------------------------

