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

class wxItemContainerImmutable   /Abstract/
{
    %Docstring
        ItemContainerImmutable()
        
        wxItemContainer defines an interface which is implemented by all
        controls which have string subitems each of which may be selected.
    %End
    %TypeHeaderCode
        #include <wx/ctrlsub.h>
    %End

public:
    wxItemContainerImmutable();

    virtual
    unsigned int GetCount() const = 0;
    %Docstring
        GetCount() -> unsignedint
        
        Returns the number of items in the control.
    %End

    bool IsEmpty() const;
    %Docstring
        IsEmpty() -> bool
        
        Returns true if the control is empty or false if it has some items.
    %End

    virtual
    wxString GetString(
        unsigned int n
    ) const = 0;
    %Docstring
        GetString(n) -> String
        
        Returns the label of the item with the given index.
    %End

    wxArrayString GetStrings() const;
    %Docstring
        GetStrings() -> ArrayString
        
        Returns the array of the labels of all items in the control.
    %End

    virtual
    void SetString(
        unsigned int n,
        const wxString & string
    ) = 0;
    %Docstring
        SetString(n, string)
        
        Sets the label for the given item.
    %End

    virtual
    int FindString(
        const wxString & string,
        bool caseSensitive = false
    ) const;
    %Docstring
        FindString(string, caseSensitive=False) -> int
        
        Finds an item whose label matches the given string.
    %End

    virtual
    void SetSelection(
        int n
    ) = 0;
    %Docstring
        SetSelection(n)
        
        Sets the selection to the given item n or removes the selection
        entirely if n == wxNOT_FOUND.
    %End

    virtual
    int GetSelection() const = 0;
    %Docstring
        GetSelection() -> int
        
        Returns the index of the selected item or wxNOT_FOUND if no item is
        selected.
    %End

    bool SetStringSelection(
        const wxString & string
    );
    %Docstring
        SetStringSelection(string) -> bool
        
        Selects the item with the specified string in the control.
    %End

    virtual
    wxString GetStringSelection() const;
    %Docstring
        GetStringSelection() -> String
        
        Returns the label of the selected item or an empty string if no item
        is selected.
    %End

    void Select(
        int n
    );
    %Docstring
        Select(n)
        
        This is the same as SetSelection() and exists only because it is
        slightly more natural for controls which support multiple selection.
    %End

    public:


    %Property(name=Count, get=GetCount)
    %Property(name=Selection, get=GetSelection, set=SetSelection)
    %Property(name=StringSelection, get=GetStringSelection, set=SetStringSelection)
    %Property(name=Strings, get=GetStrings)
};  // end of class wxItemContainerImmutable


class wxItemContainer : wxItemContainerImmutable   /Abstract/
{
    %Docstring
        This class is an abstract base class for some wxWidgets controls which
        contain several items such as wxListBox, wxCheckListBox, wxComboBox or
        wxChoice.
    %End
    %TypeHeaderCode
        #include <wx/ctrlsub.h>
    %End

public:
    int Append(
        const wxString & item
    );
    %Docstring
        Append(item) -> int
        Append(item, clientData) -> int
        Append(items) -> int
        
        Appends item into the control.
    %End

    int Append(
        const wxString & item,
        wxClientData * clientData   /Transfer/
    );

    int Append(
        const wxArrayString & items
    );

    wxClientData * GetClientObject(
        unsigned int n
    ) const   /PyName=GetClientData/;
    %Docstring
        GetClientData(n) -> ClientData
        
        Returns a pointer to the client data associated with the given item
        (if any).
    %End

    void SetClientObject(
        unsigned int n,
        wxClientData * data   /Transfer/
    )   /PyName=SetClientData/;
    %Docstring
        SetClientData(n, data)
        
        Associates the given typed client data pointer with the given item:
        the data object will be deleted when the item is deleted (either
        explicitly by using Delete() or implicitly when the control itself is
        destroyed).
    %End

    int Insert(
        const wxString & item,
        unsigned int pos
    );
    %Docstring
        Insert(item, pos) -> int
        Insert(item, pos, clientData) -> int
        Insert(items, pos) -> int
        
        Inserts item into the control.
    %End

    int Insert(
        const wxString & item,
        unsigned int pos,
        wxClientData * clientData   /Transfer/
    );

    int Insert(
        const wxArrayString & items,
        unsigned int pos
    );

    void Set(
        const wxArrayString & items
    );
    %Docstring
        Set(items)
        
        Replaces the current control contents with the given items.
    %End

    void Clear();
    %Docstring
        Clear()
        
        Removes all items from the control.
    %End

    void Delete(
        unsigned int n
    );
    %Docstring
        Delete(n)
        
        Deletes an item from the control.
    %End

    wxClientData * DetachClientObject(
        unsigned int n
    )   /Transfer/;
    %Docstring
        DetachClientObject(n) -> ClientData
        
        Returns the client object associated with the given item and transfers
        its ownership to the caller.
    %End

    bool HasClientData() const;
    %Docstring
        HasClientData() -> bool
        
        Returns true, if either untyped data (void*) or object data
        (wxClientData*) is associated with the items of the control.
    %End

    bool HasClientObjectData() const;
    %Docstring
        HasClientObjectData() -> bool
        
        Returns true, if object data is associated with the items of the
        control.
    %End

    bool HasClientUntypedData() const;
    %Docstring
        HasClientUntypedData() -> bool
        
        Returns true, if untyped data (void*) is associated with the items of
        the control.
    %End

    public:


};  // end of class wxItemContainer


%Extract(id=pycode_core)
def _ItemContainer_GetClientObject(self, n):
    """
    Alias for :meth:`GetClientData`
    """
    return self.GetClientData(n)
ItemContainer.GetClientObject = _ItemContainer_GetClientObject
del _ItemContainer_GetClientObject
%End

%Extract(id=pycode_core)
def _ItemContainer_SetClientObject(self, n, data):
    """
    Alias for :meth:`SetClientData`
    """
    self.SetClientData(n, data)
ItemContainer.SetClientObject = _ItemContainer_SetClientObject
del _ItemContainer_SetClientObject
%End

%Extract(id=pycode_core)
def _ItemContainer_AppendItems(self, items):
    self.Append(items)
ItemContainer.AppendItems = _ItemContainer_AppendItems
del _ItemContainer_AppendItems
%End

%Extract(id=pycode_core)
def _ItemContainer_GetItems(self):
    return self.GetStrings()
ItemContainer.GetItems = _ItemContainer_GetItems
del _ItemContainer_GetItems
%End

%Extract(id=pycode_core)
def _ItemContainer_SetItems(self, items):
    self.Set(items)
ItemContainer.SetItems = _ItemContainer_SetItems
del _ItemContainer_SetItems
%End

%Extract(id=pycode_core)
ItemContainer.Items = property(ItemContainer.GetItems, ItemContainer.SetItems)
%End

class wxControlWithItems : wxControl, wxItemContainer   /Abstract/
{
    %Docstring
        This is convenience class that derives from both wxControl and
        wxItemContainer.
    %End
    %TypeHeaderCode
        #include <wx/ctrlsub.h>
    %End

public:
};  // end of class wxControlWithItems



//---------------------------------------------------------------------------

