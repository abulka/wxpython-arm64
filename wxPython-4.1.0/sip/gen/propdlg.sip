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
#include <wx/propdlg.h>
%End


//---------------------------------------------------------------------------

enum wxPropertySheetDialogFlags
{
    wxPROPSHEET_DEFAULT,
    wxPROPSHEET_NOTEBOOK,
    wxPROPSHEET_TOOLBOOK,
    wxPROPSHEET_CHOICEBOOK,
    wxPROPSHEET_LISTBOOK,
    wxPROPSHEET_BUTTONTOOLBOOK,
    wxPROPSHEET_TREEBOOK,
    wxPROPSHEET_SHRINKTOFIT
};

class wxPropertySheetDialog : wxDialog
{
    %Docstring
        PropertySheetDialog()
        PropertySheetDialog(parent, id=wx.ID_ANY, title=wx.EmptyString, pos=wx.DefaultPosition, size=wx.DefaultSize, style=wx.DEFAULT_DIALOG_STYLE, name=wx.DialogNameStr)
        
        This class represents a property sheet dialog: a tabbed dialog for
        showing settings.
    %End
    %TypeHeaderCode
        #include <wx/propdlg.h>
    %End

public:
    wxPropertySheetDialog();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxPropertySheetDialog(
        wxWindow * parent,
        wxWindowID id = wxID_ANY,
        const wxString & title = wxEmptyString,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxDEFAULT_DIALOG_STYLE,
        const wxString & name = wxDialogNameStr
    )   /Transfer/;
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    virtual
    void AddBookCtrl(
        wxSizer * sizer
    );
    %Docstring
        AddBookCtrl(sizer)
        
        Override this if you wish to add the book control in a way different
        from the standard way (for example, using different spacing).
    %End

    bool Create(
        wxWindow * parent,
        wxWindowID id = wxID_ANY,
        const wxString & title = wxEmptyString,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxDEFAULT_DIALOG_STYLE,
        const wxString & name = wxDialogNameStr
    )   /TransferThis/;
    %Docstring
        Create(parent, id=wx.ID_ANY, title=wx.EmptyString, pos=wx.DefaultPosition, size=wx.DefaultSize, style=wx.DEFAULT_DIALOG_STYLE, name=wx.DialogNameStr) -> bool
        
        Call this from your own Create function, before adding buttons and
        pages.
    %End

    virtual
    wxBookCtrlBase * CreateBookCtrl();
    %Docstring
        CreateBookCtrl() -> wx.BookCtrlBase
        
        Override this if you wish to create a different kind of book control;
        by default, the value passed to SetSheetStyle() is used to determine
        the control.
    %End

    virtual
    void CreateButtons(
        int flags = wxOK|wxCANCEL
    );
    %Docstring
        CreateButtons(flags=wx.OK|wx.CANCEL)
        
        Call this to create the buttons for the dialog.
    %End

    wxBookCtrlBase * GetBookCtrl() const;
    %Docstring
        GetBookCtrl() -> wx.BookCtrlBase
        
        Returns the book control that will contain your settings pages.
    %End

    wxSizer * GetInnerSizer() const;
    %Docstring
        GetInnerSizer() -> wx.Sizer
        
        Returns the inner sizer that contains the book control and button
        sizer.
    %End

    void SetInnerSizer(
        wxSizer * sizer
    );
    %Docstring
        SetInnerSizer(sizer)
        
        Set the inner sizer that contains the book control and button sizer.
    %End

    long GetSheetStyle() const;
    %Docstring
        GetSheetStyle() -> long
        
        Returns the sheet style.
    %End

    virtual
    void LayoutDialog(
        int centreFlags = wxBOTH
    );
    %Docstring
        LayoutDialog(centreFlags=wx.BOTH)
        
        Call this to lay out the dialog.
    %End

    void SetBookCtrl(
        wxBookCtrlBase * bookCtrl
    );
    %Docstring
        SetBookCtrl(bookCtrl)
        
        Sets the book control used for the dialog.
    %End

    void SetSheetStyle(
        long style
    );
    %Docstring
        SetSheetStyle(style)
        
        You can customize the look and feel of the dialog by setting the sheet
        style.
    %End

    void SetSheetOuterBorder(
        int border
    );
    %Docstring
        SetSheetOuterBorder(border)
        
        Set the border around the whole dialog.
    %End

    int GetSheetOuterBorder() const;
    %Docstring
        GetSheetOuterBorder() -> int
        
        Returns the border around the whole dialog.
    %End

    void SetSheetInnerBorder(
        int border
    );
    %Docstring
        SetSheetInnerBorder(border)
        
        Set the border around the book control only.
    %End

    int GetSheetInnerBorder() const;
    %Docstring
        GetSheetInnerBorder() -> int
        
        Returns the border around the book control only.
    %End

    virtual
    wxWindow * GetContentWindow() const;
    %Docstring
        GetContentWindow() -> wx.Window
        
        Override this to return a window containing the main content of the
        dialog.
    %End

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


    %Property(name=BookCtrl, get=GetBookCtrl, set=SetBookCtrl)
    %Property(name=ContentWindow, get=GetContentWindow)
    %Property(name=InnerSizer, get=GetInnerSizer, set=SetInnerSizer)
    %Property(name=SheetInnerBorder, get=GetSheetInnerBorder, set=SetSheetInnerBorder)
    %Property(name=SheetOuterBorder, get=GetSheetOuterBorder, set=SetSheetOuterBorder)
    %Property(name=SheetStyle, get=GetSheetStyle, set=SetSheetStyle)
};  // end of class wxPropertySheetDialog



//---------------------------------------------------------------------------

