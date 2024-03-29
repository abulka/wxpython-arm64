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
#include <wx/headercol.h>
%End


//---------------------------------------------------------------------------

enum 
{
    wxCOL_WIDTH_DEFAULT,
    wxCOL_WIDTH_AUTOSIZE
};

enum 
{
    wxCOL_RESIZABLE,
    wxCOL_SORTABLE,
    wxCOL_REORDERABLE,
    wxCOL_HIDDEN,
    wxCOL_DEFAULT_FLAGS
};

class wxHeaderColumn
{
    %Docstring
        Represents a column header in controls displaying tabular data such as
        wxDataViewCtrl or wxGrid.
    %End
    %TypeHeaderCode
        #include <wx/headercol.h>
    %End

    %InstanceCode
        sipCpp = new wxHeaderColumnSimple("");
    %End
public:
    virtual
    wxString GetTitle() const = 0;
    %Docstring
        GetTitle() -> String
        
        Get the text shown in the column header.
    %End

    virtual
    wxBitmap GetBitmap() const = 0;
    %Docstring
        GetBitmap() -> Bitmap
        
        Returns the bitmap in the header of the column, if any.
    %End

    virtual
    int GetWidth() const = 0;
    %Docstring
        GetWidth() -> int
        
        Returns the current width of the column.
    %End

    virtual
    int GetMinWidth() const = 0;
    %Docstring
        GetMinWidth() -> int
        
        Return the minimal column width.
    %End

    virtual
    wxAlignment GetAlignment() const = 0;
    %Docstring
        GetAlignment() -> Alignment
        
        Returns the current column alignment.
    %End

    virtual
    int GetFlags() const = 0;
    %Docstring
        GetFlags() -> int
        
        Get the column flags.
    %End

    bool HasFlag(
        int flag
    ) const;
    %Docstring
        HasFlag(flag) -> bool
        
        Return true if the specified flag is currently set for this column.
    %End

    virtual
    bool IsResizeable() const;
    %Docstring
        IsResizeable() -> bool
        
        Return true if the column can be resized by the user.
    %End

    virtual
    bool IsSortable() const;
    %Docstring
        IsSortable() -> bool
        
        Returns true if the column can be clicked by user to sort the control
        contents by the field in this column.
    %End

    virtual
    bool IsReorderable() const;
    %Docstring
        IsReorderable() -> bool
        
        Returns true if the column can be dragged by user to change its order.
    %End

    virtual
    bool IsHidden() const;
    %Docstring
        IsHidden() -> bool
        
        Returns true if the column is currently hidden.
    %End

    bool IsShown() const;
    %Docstring
        IsShown() -> bool
        
        Returns true if the column is currently shown.
    %End

    virtual
    bool IsSortKey() const = 0;
    %Docstring
        IsSortKey() -> bool
        
        Returns true if the column is currently used for sorting.
    %End

    virtual
    bool IsSortOrderAscending() const = 0;
    %Docstring
        IsSortOrderAscending() -> bool
        
        Returns true, if the sort order is ascending.
    %End

    public:


    %Property(name=Alignment, get=GetAlignment)
    %Property(name=Bitmap, get=GetBitmap)
    %Property(name=Flags, get=GetFlags)
    %Property(name=MinWidth, get=GetMinWidth)
    %Property(name=Title, get=GetTitle)
    %Property(name=Width, get=GetWidth)
    %Property(name=Resizeable, get=IsResizeable)
    %Property(name=Sortable, get=IsSortable)
    %Property(name=Reorderable, get=IsReorderable)
    %Property(name=Hidden, get=IsHidden)
    %Property(name=Shown, get=IsShown)
    %Property(name=SortOrderAscending, get=IsSortOrderAscending)
    %Property(name=SortKey, get=IsSortKey)
};  // end of class wxHeaderColumn


class wxSettableHeaderColumn : wxHeaderColumn
{
    %Docstring
        Adds methods to set the column attributes to wxHeaderColumn.
    %End
    %TypeHeaderCode
        #include <wx/headercol.h>
    %End

public:
    virtual
    void SetTitle(
        const wxString & title
    ) = 0;
    %Docstring
        SetTitle(title)
        
        Set the text to display in the column header.
    %End

    virtual
    void SetBitmap(
        const wxBitmap & bitmap
    ) = 0;
    %Docstring
        SetBitmap(bitmap)
        
        Set the bitmap to be displayed in the column header.
    %End

    virtual
    void SetWidth(
        int width
    ) = 0;
    %Docstring
        SetWidth(width)
        
        Set the column width.
    %End

    virtual
    void SetMinWidth(
        int minWidth
    ) = 0;
    %Docstring
        SetMinWidth(minWidth)
        
        Set the minimal column width.
    %End

    virtual
    void SetAlignment(
        wxAlignment align
    ) = 0;
    %Docstring
        SetAlignment(align)
        
        Set the alignment of the column header.
    %End

    virtual
    void SetFlags(
        int flags
    ) = 0;
    %Docstring
        SetFlags(flags)
        
        Set the column flags.
    %End

    void ChangeFlag(
        int flag,
        bool set
    );
    %Docstring
        ChangeFlag(flag, set)
        
        Set or clear the given flag.
    %End

    void SetFlag(
        int flag
    );
    %Docstring
        SetFlag(flag)
        
        Set the specified flag for the column.
    %End

    void ClearFlag(
        int flag
    );
    %Docstring
        ClearFlag(flag)
        
        Clear the specified flag for the column.
    %End

    void ToggleFlag(
        int flag
    );
    %Docstring
        ToggleFlag(flag)
        
        Toggle the specified flag for the column.
    %End

    virtual
    void SetResizeable(
        bool resizable
    );
    %Docstring
        SetResizeable(resizable)
        
        Call this to enable or disable interactive resizing of the column by
        the user.
    %End

    virtual
    void SetSortable(
        bool sortable
    );
    %Docstring
        SetSortable(sortable)
        
        Allow clicking the column to sort the control contents by the field in
        this column.
    %End

    virtual
    void SetReorderable(
        bool reorderable
    );
    %Docstring
        SetReorderable(reorderable)
        
        Allow changing the column order by dragging it.
    %End

    virtual
    void SetHidden(
        bool hidden
    );
    %Docstring
        SetHidden(hidden)
        
        Hide or show the column.
    %End

    void UnsetAsSortKey();
    %Docstring
        UnsetAsSortKey()
        
        Don't use this column for sorting.
    %End

    virtual
    void SetSortOrder(
        bool ascending
    ) = 0;
    %Docstring
        SetSortOrder(ascending)
        
        Sets this column as the sort key for the associated control.
    %End

    void ToggleSortOrder();
    %Docstring
        ToggleSortOrder()
        
        Inverses the sort order.
    %End

    public:


};  // end of class wxSettableHeaderColumn


%Extract(id=pycode_core)
SettableHeaderColumn.Title = property(HeaderColumn.GetTitle, SettableHeaderColumn.SetTitle)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.Bitmap = property(HeaderColumn.GetBitmap, SettableHeaderColumn.SetBitmap)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.Width = property(HeaderColumn.GetWidth, SettableHeaderColumn.SetWidth)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.MinWidth = property(HeaderColumn.GetMinWidth, SettableHeaderColumn.SetMinWidth)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.Alignment = property(HeaderColumn.GetAlignment, SettableHeaderColumn.SetAlignment)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.Flags = property(HeaderColumn.GetFlags, SettableHeaderColumn.SetFlags)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.Resizeable = property(HeaderColumn.IsResizeable, SettableHeaderColumn.SetResizeable)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.Sortable = property(HeaderColumn.IsSortable, SettableHeaderColumn.SetSortable)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.Reorderable = property(HeaderColumn.IsReorderable, SettableHeaderColumn.SetReorderable)
%End

%Extract(id=pycode_core)
SettableHeaderColumn.Hidden = property(HeaderColumn.IsHidden, SettableHeaderColumn.SetHidden)
%End

class wxHeaderColumnSimple : wxSettableHeaderColumn
{
    %Docstring
        HeaderColumnSimple(title, width=COL_WIDTH_DEFAULT, align=ALIGN_NOT, flags=COL_DEFAULT_FLAGS)
        HeaderColumnSimple(bitmap, width=COL_WIDTH_DEFAULT, align=ALIGN_CENTER, flags=COL_DEFAULT_FLAGS)
        
        Simple container for the information about the column.
    %End
    %TypeHeaderCode
        #include <wx/headercol.h>
    %End

public:
    wxHeaderColumnSimple(
        const wxString & title,
        int width = wxCOL_WIDTH_DEFAULT,
        wxAlignment align = wxALIGN_NOT,
        int flags = wxCOL_DEFAULT_FLAGS
    );

    wxHeaderColumnSimple(
        const wxBitmap & bitmap,
        int width = wxCOL_WIDTH_DEFAULT,
        wxAlignment align = wxALIGN_CENTER,
        int flags = wxCOL_DEFAULT_FLAGS
    );

    virtual
    void SetTitle(
        const wxString & title
    );
    %Docstring
        SetTitle(title)
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    wxString GetTitle() const;
    %Docstring
        GetTitle() -> String
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    void SetBitmap(
        const wxBitmap & bitmap
    );
    %Docstring
        SetBitmap(bitmap)
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    wxBitmap GetBitmap() const;
    %Docstring
        GetBitmap() -> Bitmap
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    void SetWidth(
        int width
    );
    %Docstring
        SetWidth(width)
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    int GetWidth() const;
    %Docstring
        GetWidth() -> int
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    void SetMinWidth(
        int minWidth
    );
    %Docstring
        SetMinWidth(minWidth)
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    int GetMinWidth() const;
    %Docstring
        GetMinWidth() -> int
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    void SetAlignment(
        wxAlignment align
    );
    %Docstring
        SetAlignment(align)
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    wxAlignment GetAlignment() const;
    %Docstring
        GetAlignment() -> Alignment
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    void SetFlags(
        int flags
    );
    %Docstring
        SetFlags(flags)
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    int GetFlags() const;
    %Docstring
        GetFlags() -> int
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    bool IsSortKey() const;
    %Docstring
        IsSortKey() -> bool
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    void SetSortOrder(
        bool ascending
    );
    %Docstring
        SetSortOrder(ascending)
        
        Trivial implementations of the base class pure virtual functions.
    %End

    virtual
    bool IsSortOrderAscending() const;
    %Docstring
        IsSortOrderAscending() -> bool
        
        Trivial implementations of the base class pure virtual functions.
    %End

    public:


    %Property(name=Alignment, get=GetAlignment, set=SetAlignment)
    %Property(name=Bitmap, get=GetBitmap, set=SetBitmap)
    %Property(name=Flags, get=GetFlags, set=SetFlags)
    %Property(name=MinWidth, get=GetMinWidth, set=SetMinWidth)
    %Property(name=Title, get=GetTitle, set=SetTitle)
    %Property(name=Width, get=GetWidth, set=SetWidth)
};  // end of class wxHeaderColumnSimple



//---------------------------------------------------------------------------

