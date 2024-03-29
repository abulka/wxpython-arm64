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

class wxBusyInfo
{
    %Docstring
        BusyInfo(flags)
        BusyInfo(msg, parent=None)
        
        This class makes it easy to tell your user that the program is
        temporarily busy.
    %End
    %TypeHeaderCode
        #include <wx/busyinfo.h>
    %End

public:
    wxBusyInfo(
        const wxBusyInfoFlags & flags
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxBusyInfo(
        const wxString & msg,
        wxWindow * parent = NULL
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    virtual
    ~wxBusyInfo();

    void UpdateText(
        const wxString & str
    );
    %Docstring
        UpdateText(str)
        
        Update the information text.
    %End

    void UpdateLabel(
        const wxString & str
    );
    %Docstring
        UpdateLabel(str)
        
        Same as UpdateText() but doesn't interpret the string as containing
        markup.
    %End

    private:
        wxBusyInfo(const wxBusyInfo&);


};  // end of class wxBusyInfo


%Extract(id=pycode_core)
def _BusyInfo___enter__(self):
    return self
BusyInfo.__enter__ = _BusyInfo___enter__
del _BusyInfo___enter__
%End

%Extract(id=pycode_core)
def _BusyInfo___exit__(self, exc_type, exc_val, exc_tb):
    return False
BusyInfo.__exit__ = _BusyInfo___exit__
del _BusyInfo___exit__
%End

class wxBusyInfoFlags
{
    %Docstring
        BusyInfoFlags()
        
        Parameters for wxBusyInfo.
    %End
    %TypeHeaderCode
        #include <wx/busyinfo.h>
    %End

public:
    wxBusyInfoFlags();

    wxBusyInfoFlags & Parent(
        wxWindow * parent
    );
    %Docstring
        Parent(parent) -> BusyInfoFlags
        
        Sets the parent for wxBusyInfo.
    %End

    wxBusyInfoFlags & Icon(
        const wxIcon & icon
    );
    %Docstring
        Icon(icon) -> BusyInfoFlags
        
        Sets the icon to show in wxBusyInfo.
    %End

    wxBusyInfoFlags & Title(
        const wxString & title
    );
    %Docstring
        Title(title) -> BusyInfoFlags
        
        Sets the title, shown prominently in wxBusyInfo window.
    %End

    wxBusyInfoFlags & Text(
        const wxString & text
    );
    %Docstring
        Text(text) -> BusyInfoFlags
        
        Sets the more detailed text, shown under the title, if any.
    %End

    wxBusyInfoFlags & Label(
        const wxString & label
    );
    %Docstring
        Label(label) -> BusyInfoFlags
        
        Same as Text() but doesn't interpret the string as containing markup.
    %End

    wxBusyInfoFlags & Foreground(
        const wxColour & foreground
    );
    %Docstring
        Foreground(foreground) -> BusyInfoFlags
        
        Sets the foreground colour of the title and text strings.
    %End

    wxBusyInfoFlags & Background(
        const wxColour & background
    );
    %Docstring
        Background(background) -> BusyInfoFlags
        
        Sets the background colour of wxBusyInfo window.
    %End

    wxBusyInfoFlags & Transparency(
        wxByte alpha
    );
    %Docstring
        Transparency(alpha) -> BusyInfoFlags
        
        Sets the transparency of wxBusyInfo window.
    %End

};  // end of class wxBusyInfoFlags



//---------------------------------------------------------------------------

