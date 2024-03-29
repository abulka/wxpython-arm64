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

enum wxPG_ITERATOR_FLAGS
{
    wxPG_ITERATE_PROPERTIES,
    wxPG_ITERATE_HIDDEN,
    wxPG_ITERATE_FIXED_CHILDREN,
    wxPG_ITERATE_CATEGORIES,
    wxPG_ITERATE_ALL_PARENTS,
    wxPG_ITERATE_ALL_PARENTS_RECURSIVELY,
    wxPG_ITERATOR_FLAGS_ALL,
    wxPG_ITERATOR_MASK_OP_ITEM,
    wxPG_ITERATOR_MASK_OP_PARENT,
    wxPG_ITERATE_VISIBLE,
    wxPG_ITERATE_ALL,
    wxPG_ITERATE_NORMAL,
    wxPG_ITERATE_DEFAULT
};

class wxPropertyGridHitTestResult
{
    %Docstring
        PropertyGridHitTestResult()
    %End
    %TypeHeaderCode
        #include <wx/propgrid/propgridpagestate.h>
    %End

public:
    wxPropertyGridHitTestResult();

    ~wxPropertyGridHitTestResult();

    int GetColumn() const;
    %Docstring
        GetColumn() -> int
        
        Returns column hit.
    %End

    wxPGProperty * GetProperty() const;
    %Docstring
        GetProperty() -> PGProperty
        
        Returns property hit.
    %End

    int GetSplitter() const;
    %Docstring
        GetSplitter() -> int
        
        Returns index of splitter hit, -1 for none.
    %End

    int GetSplitterHitOffset() const;
    %Docstring
        GetSplitterHitOffset() -> int
        
        If splitter hit, then this member function returns offset to the exact
        splitter position.
    %End

    public:


    %Property(name=Column, get=GetColumn)
    %Property(name=Property, get=GetProperty)
    %Property(name=Splitter, get=GetSplitter)
    %Property(name=SplitterHitOffset, get=GetSplitterHitOffset)
};  // end of class wxPropertyGridHitTestResult


class wxPropertyGridIteratorBase
{
    %Docstring
        PropertyGridIteratorBase()
        
        Base for wxPropertyGridIterator classes.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/propgridpagestate.h>
    %End

public:
    wxPropertyGridIteratorBase();

    void Assign(
        const wxPropertyGridIteratorBase & it
    );
    %Docstring
        Assign(it)
    %End

    bool AtEnd() const;
    %Docstring
        AtEnd() -> bool
    %End

    wxPGProperty * GetProperty() const;
    %Docstring
        GetProperty() -> PGProperty
        
        Get current property.
    %End

    void Init(
        wxPropertyGridPageState * state,
        int flags,
        wxPGProperty * property,
        int dir = 1
    );
    %Docstring
        Init(state, flags, property, dir=1)
        Init(state, flags, startPos=wx.TOP, dir=0)
    %End

    void Init(
        wxPropertyGridPageState * state,
        int flags,
        int startPos = wxTOP,
        int dir = 0
    );

    void Next(
        bool iterateChildren = true
    );
    %Docstring
        Next(iterateChildren=True)
        
        Iterate to the next property.
    %End

    void Prev();
    %Docstring
        Prev()
        
        Iterate to the previous property.
    %End

    void SetBaseParent(
        wxPGProperty * baseParent
    );
    %Docstring
        SetBaseParent(baseParent)
        
        Set base parent, i.e.
    %End

    public:


    %Property(name=Property, get=GetProperty)
};  // end of class wxPropertyGridIteratorBase


class wxPropertyGridIterator : wxPropertyGridIteratorBase
{
    %Docstring
        PropertyGridIterator()
        PropertyGridIterator(state, flags=PG_ITERATE_DEFAULT, property=None, dir=1)
        PropertyGridIterator(state, flags, startPos, dir=0)
        PropertyGridIterator(it)
    %End
    %TypeHeaderCode
        #include <wx/propgrid/propgridpagestate.h>
    %End

public:
    wxPropertyGridIterator();

    wxPropertyGridIterator(
        wxPropertyGridPageState * state,
        int flags = wxPG_ITERATE_DEFAULT,
        wxPGProperty * property = NULL,
        int dir = 1
    );

    wxPropertyGridIterator(
        wxPropertyGridPageState * state,
        int flags,
        int startPos,
        int dir = 0
    );

    wxPropertyGridIterator(
        const wxPropertyGridIterator & it
    );

    ~wxPropertyGridIterator();

};  // end of class wxPropertyGridIterator


class wxPGVIterator
{
    %Docstring
        PGVIterator()
        PGVIterator(it)
    %End
    %TypeHeaderCode
        #include <wx/propgrid/propgridpagestate.h>
    %End

public:
    wxPGVIterator();

    wxPGVIterator(
        const wxPGVIterator & it
    );

    ~wxPGVIterator();

    void UnRef();
    %Docstring
        UnRef()
    %End

    void Next();
    %Docstring
        Next()
    %End

    bool AtEnd() const;
    %Docstring
        AtEnd() -> bool
    %End

    wxPGProperty * GetProperty() const;
    %Docstring
        GetProperty() -> PGProperty
    %End

    public:


    %Property(name=Property, get=GetProperty)
};  // end of class wxPGVIterator


class wxPropertyGridPageState
{
    %Docstring
        PropertyGridPageState()
        
        Contains low-level property page information (properties, column
        widths, etc.) of a single wxPropertyGrid or single wxPropertyGridPage.
    %End
    %TypeHeaderCode
        #include <wx/propgrid/propgridpagestate.h>
    %End

public:
    wxPropertyGridPageState();

    virtual
    ~wxPropertyGridPageState();

    void CheckColumnWidths(
        int widthChange = 0
    );
    %Docstring
        CheckColumnWidths(widthChange=0)
        
        Makes sure all columns have minimum width.
    %End

    virtual
    void DoDelete(
        wxPGProperty * item,
        bool doDelete = true
    );
    %Docstring
        DoDelete(item, doDelete=True)
        
        Override this member function to add custom behaviour on property
        deletion.
    %End

    wxSize DoFitColumns(
        bool allowGridResize = false
    );
    %Docstring
        DoFitColumns(allowGridResize=False) -> wx.Size
    %End

    wxPGProperty * DoGetItemAtY(
        int y
    ) const;
    %Docstring
        DoGetItemAtY(y) -> PGProperty
    %End

    virtual
    wxPGProperty * DoInsert(
        wxPGProperty * parent,
        int index,
        wxPGProperty * property
    );
    %Docstring
        DoInsert(parent, index, property) -> PGProperty
        
        Override this member function to add custom behaviour on property
        insertion.
    %End

    virtual
    void DoSetSplitterPosition(
        int pos,
        int splitterColumn = 0,
        int flags = 0
    );
    %Docstring
        DoSetSplitterPosition(pos, splitterColumn=0, flags=0)
        
        This needs to be overridden in grid used the manager so that splitter
        changes can be propagated to other pages.
    %End

    bool EnableCategories(
        bool enable
    );
    %Docstring
        EnableCategories(enable) -> bool
    %End

    void EnsureVirtualHeight();
    %Docstring
        EnsureVirtualHeight()
        
        Make sure virtual height is up-to-date.
    %End

    unsigned int GetVirtualHeight();
    %Docstring
        GetVirtualHeight() -> unsignedint
        
        Returns (precalculated) height of contained visible properties.
    %End

    unsigned int GetActualVirtualHeight() const;
    %Docstring
        GetActualVirtualHeight() -> unsignedint
        
        Returns actual height of contained visible properties.
    %End

    unsigned int GetColumnCount() const;
    %Docstring
        GetColumnCount() -> unsignedint
    %End

    int GetColumnWidth(
        unsigned int column
    ) const;
    %Docstring
        GetColumnWidth(column) -> int
    %End

    wxPropertyGrid * GetGrid() const;
    %Docstring
        GetGrid() -> PropertyGrid
    %End

    wxPGProperty * GetLastItem(
        int flags = wxPG_ITERATE_DEFAULT
    );
    %Docstring
        GetLastItem(flags=PG_ITERATE_DEFAULT) -> PGProperty
        
        Returns last item which could be iterated using given flags.
    %End

    wxPGProperty * GetSelection() const;
    %Docstring
        GetSelection() -> PGProperty
        
        Returns currently selected property.
    %End

    void DoSetSelection(
        wxPGProperty * prop
    );
    %Docstring
        DoSetSelection(prop)
    %End

    bool DoClearSelection();
    %Docstring
        DoClearSelection() -> bool
    %End

    void DoRemoveFromSelection(
        wxPGProperty * prop
    );
    %Docstring
        DoRemoveFromSelection(prop)
    %End

    void DoSetColumnProportion(
        unsigned int column,
        int proportion
    );
    %Docstring
        DoSetColumnProportion(column, proportion)
    %End

    int DoGetColumnProportion(
        unsigned int column
    ) const;
    %Docstring
        DoGetColumnProportion(column) -> int
    %End

    void ResetColumnSizes(
        int setSplitterFlags
    );
    %Docstring
        ResetColumnSizes(setSplitterFlags)
    %End

    wxPropertyCategory * GetPropertyCategory(
        const wxPGProperty * p
    ) const;
    %Docstring
        GetPropertyCategory(p) -> PropertyCategory
    %End

    wxPGVariant DoGetPropertyValues(
        const wxString & listname,
        wxPGProperty * baseparent,
        long flags
    ) const;
    %Docstring
        DoGetPropertyValues(listname, baseparent, flags) -> PGVariant
    %End

    wxPGProperty * DoGetRoot() const;
    %Docstring
        DoGetRoot() -> PGProperty
    %End

    void DoSetPropertyName(
        wxPGProperty * p,
        const wxString & newName
    );
    %Docstring
        DoSetPropertyName(p, newName)
    %End

    int GetVirtualWidth() const;
    %Docstring
        GetVirtualWidth() -> int
        
        Returns combined width of margin and all the columns.
    %End

    int GetColumnFitWidth(
        wxClientDC & dc,
        wxPGProperty * pwc,
        unsigned int col,
        bool subProps
    ) const;
    %Docstring
        GetColumnFitWidth(dc, pwc, col, subProps) -> int
        
        Returns minimal width for given column so that all images and texts
        will fit entirely.
    %End

    int GetColumnFullWidth(
        wxClientDC & dc,
        wxPGProperty * p,
        unsigned int col
    );
    %Docstring
        GetColumnFullWidth(dc, p, col) -> int
    %End

    wxPropertyGridHitTestResult HitTest(
        const wxPoint & pt
    ) const;
    %Docstring
        HitTest(pt) -> PropertyGridHitTestResult
        
        Returns information about arbitrary position in the grid.
    %End

    bool IsDisplayed() const;
    %Docstring
        IsDisplayed() -> bool
        
        Returns true if page is visibly displayed.
    %End

    bool IsInNonCatMode() const;
    %Docstring
        IsInNonCatMode() -> bool
    %End

    void DoLimitPropertyEditing(
        wxPGProperty * p,
        bool limit = true
    );
    %Docstring
        DoLimitPropertyEditing(p, limit=True)
    %End

    bool DoSelectProperty(
        wxPGProperty * p,
        unsigned int flags = 0
    );
    %Docstring
        DoSelectProperty(p, flags=0) -> bool
    %End

    void OnClientWidthChange(
        int newWidth,
        int widthChange,
        bool fromOnResize = false
    );
    %Docstring
        OnClientWidthChange(newWidth, widthChange, fromOnResize=False)
        
        widthChange is non-client.
    %End

    void RecalculateVirtualHeight();
    %Docstring
        RecalculateVirtualHeight()
        
        Recalculates m_virtualHeight.
    %End

    void SetColumnCount(
        int colCount
    );
    %Docstring
        SetColumnCount(colCount)
    %End

    void PropagateColSizeDec(
        int column,
        int decrease,
        int dir
    );
    %Docstring
        PropagateColSizeDec(column, decrease, dir)
    %End

    bool DoHideProperty(
        wxPGProperty * p,
        bool hide,
        int flags = wxPG_RECURSE
    );
    %Docstring
        DoHideProperty(p, hide, flags=PG_RECURSE) -> bool
    %End

    bool DoSetPropertyValueString(
        wxPGProperty * p,
        const wxString & value
    );
    %Docstring
        DoSetPropertyValueString(p, value) -> bool
    %End

    bool DoSetPropertyValue(
        wxPGProperty * p,
        wxPGVariant & value
    );
    %Docstring
        DoSetPropertyValue(p, value) -> bool
    %End

    bool DoSetPropertyValueWxObjectPtr(
        wxPGProperty * p,
        wxObject * value
    );
    %Docstring
        DoSetPropertyValueWxObjectPtr(p, value) -> bool
    %End

    void DoSetPropertyValues(
        const wxPGVariantList & list,
        wxPGProperty * default_category
    );
    %Docstring
        DoSetPropertyValues(list, default_category)
    %End

    void SetSplitterLeft(
        bool subProps = false
    );
    %Docstring
        SetSplitterLeft(subProps=False)
    %End

    void SetVirtualWidth(
        int width
    );
    %Docstring
        SetVirtualWidth(width)
        
        Set virtual width for this particular page.
    %End

    void DoSortChildren(
        wxPGProperty * p,
        int flags = 0
    );
    %Docstring
        DoSortChildren(p, flags=0)
    %End

    void DoSort(
        int flags = 0
    );
    %Docstring
        DoSort(flags=0)
    %End

    bool PrepareAfterItemsAdded();
    %Docstring
        PrepareAfterItemsAdded() -> bool
    %End

    void VirtualHeightChanged();
    %Docstring
        VirtualHeightChanged()
        
        Called after virtual height needs to be recalculated.
    %End

    wxPGProperty * DoAppend(
        wxPGProperty * property
    );
    %Docstring
        DoAppend(property) -> PGProperty
        
        Base append.
    %End

    wxPGProperty * BaseGetPropertyByName(
        const wxString & name
    ) const;
    %Docstring
        BaseGetPropertyByName(name) -> PGProperty
        
        Returns property by its name.
    %End

    void DoClear();
    %Docstring
        DoClear()
        
        Called in, for example, wxPropertyGrid::Clear.
    %End

    bool DoIsPropertySelected(
        wxPGProperty * prop
    ) const;
    %Docstring
        DoIsPropertySelected(prop) -> bool
    %End

    bool DoCollapse(
        wxPGProperty * p
    );
    %Docstring
        DoCollapse(p) -> bool
    %End

    bool DoExpand(
        wxPGProperty * p
    );
    %Docstring
        DoExpand(p) -> bool
    %End

    void CalculateFontAndBitmapStuff(
        int vspacing
    );
    %Docstring
        CalculateFontAndBitmapStuff(vspacing)
    %End

    public:


    %Property(name=ActualVirtualHeight, get=GetActualVirtualHeight)
    %Property(name=ColumnCount, get=GetColumnCount, set=SetColumnCount)
    %Property(name=Grid, get=GetGrid)
    %Property(name=LastItem, get=GetLastItem)
    %Property(name=Selection, get=GetSelection)
    %Property(name=VirtualHeight, get=GetVirtualHeight)
    %Property(name=VirtualWidth, get=GetVirtualWidth, set=SetVirtualWidth)
};  // end of class wxPropertyGridPageState



//---------------------------------------------------------------------------

