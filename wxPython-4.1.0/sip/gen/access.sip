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
#include <wx/access.h>
#if !wxUSE_ACCESSIBILITY
class wxAccessible;
#define wxACC_STATE_SYSTEM_ALERT_HIGH  0x00000001
#define wxACC_STATE_SYSTEM_ALERT_MEDIUM  0x00000002
#define wxACC_STATE_SYSTEM_ALERT_LOW  0x00000004
#define wxACC_STATE_SYSTEM_ANIMATED  0x00000008
#define wxACC_STATE_SYSTEM_BUSY  0x00000010
#define wxACC_STATE_SYSTEM_CHECKED  0x00000020
#define wxACC_STATE_SYSTEM_COLLAPSED  0x00000040
#define wxACC_STATE_SYSTEM_DEFAULT  0x00000080
#define wxACC_STATE_SYSTEM_EXPANDED  0x00000100
#define wxACC_STATE_SYSTEM_EXTSELECTABLE  0x00000200
#define wxACC_STATE_SYSTEM_FLOATING  0x00000400
#define wxACC_STATE_SYSTEM_FOCUSABLE  0x00000800
#define wxACC_STATE_SYSTEM_FOCUSED  0x00001000
#define wxACC_STATE_SYSTEM_HOTTRACKED  0x00002000
#define wxACC_STATE_SYSTEM_INVISIBLE  0x00004000
#define wxACC_STATE_SYSTEM_MARQUEED  0x00008000
#define wxACC_STATE_SYSTEM_MIXED  0x00010000
#define wxACC_STATE_SYSTEM_MULTISELECTABLE  0x00020000
#define wxACC_STATE_SYSTEM_OFFSCREEN  0x00040000
#define wxACC_STATE_SYSTEM_PRESSED  0x00080000
#define wxACC_STATE_SYSTEM_PROTECTED  0x00100000
#define wxACC_STATE_SYSTEM_READONLY  0x00200000
#define wxACC_STATE_SYSTEM_SELECTABLE  0x00400000
#define wxACC_STATE_SYSTEM_SELECTED  0x00800000
#define wxACC_STATE_SYSTEM_SELFVOICING  0x01000000
#define wxACC_STATE_SYSTEM_UNAVAILABLE  0x02000000
#define wxACC_EVENT_SYSTEM_SOUND  0x0001
#define wxACC_EVENT_SYSTEM_ALERT  0x0002
#define wxACC_EVENT_SYSTEM_FOREGROUND  0x0003
#define wxACC_EVENT_SYSTEM_MENUSTART  0x0004
#define wxACC_EVENT_SYSTEM_MENUEND  0x0005
#define wxACC_EVENT_SYSTEM_MENUPOPUPSTART  0x0006
#define wxACC_EVENT_SYSTEM_MENUPOPUPEND  0x0007
#define wxACC_EVENT_SYSTEM_CAPTURESTART  0x0008
#define wxACC_EVENT_SYSTEM_CAPTUREEND  0x0009
#define wxACC_EVENT_SYSTEM_MOVESIZESTART  0x000A
#define wxACC_EVENT_SYSTEM_MOVESIZEEND  0x000B
#define wxACC_EVENT_SYSTEM_CONTEXTHELPSTART  0x000C
#define wxACC_EVENT_SYSTEM_CONTEXTHELPEND  0x000D
#define wxACC_EVENT_SYSTEM_DRAGDROPSTART  0x000E
#define wxACC_EVENT_SYSTEM_DRAGDROPEND  0x000F
#define wxACC_EVENT_SYSTEM_DIALOGSTART  0x0010
#define wxACC_EVENT_SYSTEM_DIALOGEND  0x0011
#define wxACC_EVENT_SYSTEM_SCROLLINGSTART  0x0012
#define wxACC_EVENT_SYSTEM_SCROLLINGEND  0x0013
#define wxACC_EVENT_SYSTEM_SWITCHSTART  0x0014
#define wxACC_EVENT_SYSTEM_SWITCHEND  0x0015
#define wxACC_EVENT_SYSTEM_MINIMIZESTART  0x0016
#define wxACC_EVENT_SYSTEM_MINIMIZEEND  0x0017
#define wxACC_EVENT_OBJECT_CREATE  0x8000
#define wxACC_EVENT_OBJECT_DESTROY  0x8001
#define wxACC_EVENT_OBJECT_SHOW  0x8002
#define wxACC_EVENT_OBJECT_HIDE  0x8003
#define wxACC_EVENT_OBJECT_REORDER  0x8004
#define wxACC_EVENT_OBJECT_FOCUS  0x8005
#define wxACC_EVENT_OBJECT_SELECTION  0x8006
#define wxACC_EVENT_OBJECT_SELECTIONADD  0x8007
#define wxACC_EVENT_OBJECT_SELECTIONREMOVE  0x8008
#define wxACC_EVENT_OBJECT_SELECTIONWITHIN  0x8009
#define wxACC_EVENT_OBJECT_STATECHANGE  0x800A
#define wxACC_EVENT_OBJECT_LOCATIONCHANGE  0x800B
#define wxACC_EVENT_OBJECT_NAMECHANGE  0x800C
#define wxACC_EVENT_OBJECT_DESCRIPTIONCHANGE  0x800D
#define wxACC_EVENT_OBJECT_VALUECHANGE  0x800E
#define wxACC_EVENT_OBJECT_PARENTCHANGE  0x800F
#define wxACC_EVENT_OBJECT_HELPCHANGE  0x8010
#define wxACC_EVENT_OBJECT_DEFACTIONCHANGE  0x8011
#define wxACC_EVENT_OBJECT_ACCELERATORCHANGE  0x8012
#define wxACC_SELF  0

enum wxAccStatus {
    wxACC_FAIL,
    wxACC_FALSE,
    wxACC_OK,
    wxACC_NOT_IMPLEMENTED,
    wxACC_NOT_SUPPORTED,
    wxACC_INVALID_ARG,
};

enum wxNavDir {
    wxNAVDIR_FIRSTCHILD,
    wxNAVDIR_LASTCHILD,
    wxNAVDIR_DOWN,
    wxNAVDIR_LEFT,
    wxNAVDIR_NEXT,
    wxNAVDIR_PREVIOUS,
    wxNAVDIR_RIGHT,
    wxNAVDIR_UP,
};

enum wxAccRole {
    wxROLE_NONE,
    wxROLE_SYSTEM_ALERT,
    wxROLE_SYSTEM_ANIMATION,
    wxROLE_SYSTEM_APPLICATION,
    wxROLE_SYSTEM_BORDER,
    wxROLE_SYSTEM_BUTTONDROPDOWN,
    wxROLE_SYSTEM_BUTTONDROPDOWNGRID,
    wxROLE_SYSTEM_BUTTONMENU,
    wxROLE_SYSTEM_CARET,
    wxROLE_SYSTEM_CELL,
    wxROLE_SYSTEM_CHARACTER,
    wxROLE_SYSTEM_CHART,
    wxROLE_SYSTEM_CHECKBUTTON,
    wxROLE_SYSTEM_CLIENT,
    wxROLE_SYSTEM_CLOCK,
    wxROLE_SYSTEM_COLUMN,
    wxROLE_SYSTEM_COLUMNHEADER,
    wxROLE_SYSTEM_COMBOBOX,
    wxROLE_SYSTEM_CURSOR,
    wxROLE_SYSTEM_DIAGRAM,
    wxROLE_SYSTEM_DIAL,
    wxROLE_SYSTEM_DIALOG,
    wxROLE_SYSTEM_DOCUMENT,
    wxROLE_SYSTEM_DROPLIST,
    wxROLE_SYSTEM_EQUATION,
    wxROLE_SYSTEM_GRAPHIC,
    wxROLE_SYSTEM_GRIP,
    wxROLE_SYSTEM_GROUPING,
    wxROLE_SYSTEM_HELPBALLOON,
    wxROLE_SYSTEM_HOTKEYFIELD,
    wxROLE_SYSTEM_INDICATOR,
    wxROLE_SYSTEM_LINK,
    wxROLE_SYSTEM_LIST,
    wxROLE_SYSTEM_LISTITEM,
    wxROLE_SYSTEM_MENUBAR,
    wxROLE_SYSTEM_MENUITEM,
    wxROLE_SYSTEM_MENUPOPUP,
    wxROLE_SYSTEM_OUTLINE,
    wxROLE_SYSTEM_OUTLINEITEM,
    wxROLE_SYSTEM_PAGETAB,
    wxROLE_SYSTEM_PAGETABLIST,
    wxROLE_SYSTEM_PANE,
    wxROLE_SYSTEM_PROGRESSBAR,
    wxROLE_SYSTEM_PROPERTYPAGE,
    wxROLE_SYSTEM_PUSHBUTTON,
    wxROLE_SYSTEM_RADIOBUTTON,
    wxROLE_SYSTEM_ROW,
    wxROLE_SYSTEM_ROWHEADER,
    wxROLE_SYSTEM_SCROLLBAR,
    wxROLE_SYSTEM_SEPARATOR,
    wxROLE_SYSTEM_SLIDER,
    wxROLE_SYSTEM_SOUND,
    wxROLE_SYSTEM_SPINBUTTON,
    wxROLE_SYSTEM_STATICTEXT,
    wxROLE_SYSTEM_STATUSBAR,
    wxROLE_SYSTEM_TABLE,
    wxROLE_SYSTEM_TEXT,
    wxROLE_SYSTEM_TITLEBAR,
    wxROLE_SYSTEM_TOOLBAR,
    wxROLE_SYSTEM_TOOLTIP,
    wxROLE_SYSTEM_WHITESPACE,
    wxROLE_SYSTEM_WINDOW,
};

enum wxAccObject {
    wxOBJID_WINDOW,
    wxOBJID_SYSMENU,
    wxOBJID_TITLEBAR,
    wxOBJID_MENU,
    wxOBJID_CLIENT,
    wxOBJID_VSCROLL,
    wxOBJID_HSCROLL,
    wxOBJID_SIZEGRIP,
    wxOBJID_CARET,
    wxOBJID_CURSOR,
    wxOBJID_ALERT,
    wxOBJID_SOUND,
};

enum wxAccSelectionFlags {
    wxACC_SEL_NONE,
    wxACC_SEL_TAKEFOCUS,
    wxACC_SEL_TAKESELECTION,
    wxACC_SEL_EXTENDSELECTION,
    wxACC_SEL_ADDSELECTION,
    wxACC_SEL_REMOVESELECTION,
};

class wxAccessible : public wxObject {
public:
    wxAccessible(wxWindow *win=NULL)
        { wxPyRaiseNotImplemented(); }

    ~wxAccessible()
        { }

    virtual wxAccStatus DoDefaultAction(int childId)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetChild(int childId, wxAccessible **child)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetChildCount(int *childCount)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetDefaultAction(int childId, wxString *actionName)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetDescription(int childId, wxString *description)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetFocus(int *childId, wxAccessible **child)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetHelpText(int childId, wxString *helpText)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetKeyboardShortcut(int childId, wxString *shortcut)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetLocation(wxRect &rect, int elementId)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetName(int childId, wxString *name)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetParent(wxAccessible **parent)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetRole(int childId, wxAccRole *role)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetSelections(wxVariant *selections)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetState(int childId, long *state)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus GetValue(int childId, wxString *strValue)
        { return wxACC_NOT_IMPLEMENTED; }

    wxWindow * GetWindow()
        { return NULL; }

    virtual wxAccStatus HitTest(const wxPoint &pt, int *childId, wxAccessible **childObject)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus Navigate(wxNavDir navDir, int fromId, int *toId, wxAccessible **toObject)
        { return wxACC_NOT_IMPLEMENTED; }

    virtual wxAccStatus Select(int childId, wxAccSelectionFlags selectFlags)
        { return wxACC_NOT_IMPLEMENTED; }

    void SetWindow(wxWindow *window)
        { }

    static void NotifyEvent(int eventType, wxWindow *window, wxAccObject objectType, int objectId)
        { wxPyRaiseNotImplemented(); }

};
#endif //!wxUSE_ACCESSIBILITY

%End


//---------------------------------------------------------------------------

const int wxACC_STATE_SYSTEM_ALERT_HIGH;
const int wxACC_STATE_SYSTEM_ALERT_MEDIUM;
const int wxACC_STATE_SYSTEM_ALERT_LOW;
const int wxACC_STATE_SYSTEM_ANIMATED;
const int wxACC_STATE_SYSTEM_BUSY;
const int wxACC_STATE_SYSTEM_CHECKED;
const int wxACC_STATE_SYSTEM_COLLAPSED;
const int wxACC_STATE_SYSTEM_DEFAULT;
const int wxACC_STATE_SYSTEM_EXPANDED;
const int wxACC_STATE_SYSTEM_EXTSELECTABLE;
const int wxACC_STATE_SYSTEM_FLOATING;
const int wxACC_STATE_SYSTEM_FOCUSABLE;
const int wxACC_STATE_SYSTEM_FOCUSED;
const int wxACC_STATE_SYSTEM_HOTTRACKED;
const int wxACC_STATE_SYSTEM_INVISIBLE;
const int wxACC_STATE_SYSTEM_MARQUEED;
const int wxACC_STATE_SYSTEM_MIXED;
const int wxACC_STATE_SYSTEM_MULTISELECTABLE;
const int wxACC_STATE_SYSTEM_OFFSCREEN;
const int wxACC_STATE_SYSTEM_PRESSED;
const int wxACC_STATE_SYSTEM_PROTECTED;
const int wxACC_STATE_SYSTEM_READONLY;
const int wxACC_STATE_SYSTEM_SELECTABLE;
const int wxACC_STATE_SYSTEM_SELECTED;
const int wxACC_STATE_SYSTEM_SELFVOICING;
const int wxACC_STATE_SYSTEM_UNAVAILABLE;
const int wxACC_EVENT_SYSTEM_SOUND;
const int wxACC_EVENT_SYSTEM_ALERT;
const int wxACC_EVENT_SYSTEM_FOREGROUND;
const int wxACC_EVENT_SYSTEM_MENUSTART;
const int wxACC_EVENT_SYSTEM_MENUEND;
const int wxACC_EVENT_SYSTEM_MENUPOPUPSTART;
const int wxACC_EVENT_SYSTEM_MENUPOPUPEND;
const int wxACC_EVENT_SYSTEM_CAPTURESTART;
const int wxACC_EVENT_SYSTEM_CAPTUREEND;
const int wxACC_EVENT_SYSTEM_MOVESIZESTART;
const int wxACC_EVENT_SYSTEM_MOVESIZEEND;
const int wxACC_EVENT_SYSTEM_CONTEXTHELPSTART;
const int wxACC_EVENT_SYSTEM_CONTEXTHELPEND;
const int wxACC_EVENT_SYSTEM_DRAGDROPSTART;
const int wxACC_EVENT_SYSTEM_DRAGDROPEND;
const int wxACC_EVENT_SYSTEM_DIALOGSTART;
const int wxACC_EVENT_SYSTEM_DIALOGEND;
const int wxACC_EVENT_SYSTEM_SCROLLINGSTART;
const int wxACC_EVENT_SYSTEM_SCROLLINGEND;
const int wxACC_EVENT_SYSTEM_SWITCHSTART;
const int wxACC_EVENT_SYSTEM_SWITCHEND;
const int wxACC_EVENT_SYSTEM_MINIMIZESTART;
const int wxACC_EVENT_SYSTEM_MINIMIZEEND;
const int wxACC_EVENT_OBJECT_CREATE;
const int wxACC_EVENT_OBJECT_DESTROY;
const int wxACC_EVENT_OBJECT_SHOW;
const int wxACC_EVENT_OBJECT_HIDE;
const int wxACC_EVENT_OBJECT_REORDER;
const int wxACC_EVENT_OBJECT_FOCUS;
const int wxACC_EVENT_OBJECT_SELECTION;
const int wxACC_EVENT_OBJECT_SELECTIONADD;
const int wxACC_EVENT_OBJECT_SELECTIONREMOVE;
const int wxACC_EVENT_OBJECT_SELECTIONWITHIN;
const int wxACC_EVENT_OBJECT_STATECHANGE;
const int wxACC_EVENT_OBJECT_LOCATIONCHANGE;
const int wxACC_EVENT_OBJECT_NAMECHANGE;
const int wxACC_EVENT_OBJECT_DESCRIPTIONCHANGE;
const int wxACC_EVENT_OBJECT_VALUECHANGE;
const int wxACC_EVENT_OBJECT_PARENTCHANGE;
const int wxACC_EVENT_OBJECT_HELPCHANGE;
const int wxACC_EVENT_OBJECT_DEFACTIONCHANGE;
const int wxACC_EVENT_OBJECT_ACCELERATORCHANGE;
const int wxACC_SELF;
enum wxAccStatus
{
    wxACC_FAIL,
    wxACC_FALSE,
    wxACC_OK,
    wxACC_NOT_IMPLEMENTED,
    wxACC_NOT_SUPPORTED,
    wxACC_INVALID_ARG
};

enum wxNavDir
{
    wxNAVDIR_FIRSTCHILD,
    wxNAVDIR_LASTCHILD,
    wxNAVDIR_DOWN,
    wxNAVDIR_LEFT,
    wxNAVDIR_NEXT,
    wxNAVDIR_PREVIOUS,
    wxNAVDIR_RIGHT,
    wxNAVDIR_UP
};

enum wxAccRole
{
    wxROLE_NONE,
    wxROLE_SYSTEM_ALERT,
    wxROLE_SYSTEM_ANIMATION,
    wxROLE_SYSTEM_APPLICATION,
    wxROLE_SYSTEM_BORDER,
    wxROLE_SYSTEM_BUTTONDROPDOWN,
    wxROLE_SYSTEM_BUTTONDROPDOWNGRID,
    wxROLE_SYSTEM_BUTTONMENU,
    wxROLE_SYSTEM_CARET,
    wxROLE_SYSTEM_CELL,
    wxROLE_SYSTEM_CHARACTER,
    wxROLE_SYSTEM_CHART,
    wxROLE_SYSTEM_CHECKBUTTON,
    wxROLE_SYSTEM_CLIENT,
    wxROLE_SYSTEM_CLOCK,
    wxROLE_SYSTEM_COLUMN,
    wxROLE_SYSTEM_COLUMNHEADER,
    wxROLE_SYSTEM_COMBOBOX,
    wxROLE_SYSTEM_CURSOR,
    wxROLE_SYSTEM_DIAGRAM,
    wxROLE_SYSTEM_DIAL,
    wxROLE_SYSTEM_DIALOG,
    wxROLE_SYSTEM_DOCUMENT,
    wxROLE_SYSTEM_DROPLIST,
    wxROLE_SYSTEM_EQUATION,
    wxROLE_SYSTEM_GRAPHIC,
    wxROLE_SYSTEM_GRIP,
    wxROLE_SYSTEM_GROUPING,
    wxROLE_SYSTEM_HELPBALLOON,
    wxROLE_SYSTEM_HOTKEYFIELD,
    wxROLE_SYSTEM_INDICATOR,
    wxROLE_SYSTEM_LINK,
    wxROLE_SYSTEM_LIST,
    wxROLE_SYSTEM_LISTITEM,
    wxROLE_SYSTEM_MENUBAR,
    wxROLE_SYSTEM_MENUITEM,
    wxROLE_SYSTEM_MENUPOPUP,
    wxROLE_SYSTEM_OUTLINE,
    wxROLE_SYSTEM_OUTLINEITEM,
    wxROLE_SYSTEM_PAGETAB,
    wxROLE_SYSTEM_PAGETABLIST,
    wxROLE_SYSTEM_PANE,
    wxROLE_SYSTEM_PROGRESSBAR,
    wxROLE_SYSTEM_PROPERTYPAGE,
    wxROLE_SYSTEM_PUSHBUTTON,
    wxROLE_SYSTEM_RADIOBUTTON,
    wxROLE_SYSTEM_ROW,
    wxROLE_SYSTEM_ROWHEADER,
    wxROLE_SYSTEM_SCROLLBAR,
    wxROLE_SYSTEM_SEPARATOR,
    wxROLE_SYSTEM_SLIDER,
    wxROLE_SYSTEM_SOUND,
    wxROLE_SYSTEM_SPINBUTTON,
    wxROLE_SYSTEM_STATICTEXT,
    wxROLE_SYSTEM_STATUSBAR,
    wxROLE_SYSTEM_TABLE,
    wxROLE_SYSTEM_TEXT,
    wxROLE_SYSTEM_TITLEBAR,
    wxROLE_SYSTEM_TOOLBAR,
    wxROLE_SYSTEM_TOOLTIP,
    wxROLE_SYSTEM_WHITESPACE,
    wxROLE_SYSTEM_WINDOW
};

enum wxAccObject
{
    wxOBJID_WINDOW,
    wxOBJID_SYSMENU,
    wxOBJID_TITLEBAR,
    wxOBJID_MENU,
    wxOBJID_CLIENT,
    wxOBJID_VSCROLL,
    wxOBJID_HSCROLL,
    wxOBJID_SIZEGRIP,
    wxOBJID_CARET,
    wxOBJID_CURSOR,
    wxOBJID_ALERT,
    wxOBJID_SOUND
};

enum wxAccSelectionFlags
{
    wxACC_SEL_NONE,
    wxACC_SEL_TAKEFOCUS,
    wxACC_SEL_TAKESELECTION,
    wxACC_SEL_EXTENDSELECTION,
    wxACC_SEL_ADDSELECTION,
    wxACC_SEL_REMOVESELECTION
};

class wxAccessible : wxObject
{
    %Docstring
        Accessible(win=None)
        
        The wxAccessible class allows wxWidgets applications, and wxWidgets
        itself, to return extended information about user interface elements
        to client applications such as screen readers.
    %End
    %TypeHeaderCode
        #include <wx/access.h>
    %End

public:
    wxAccessible(
        wxWindow * win = NULL
    );

    ~wxAccessible();

    virtual
    wxAccStatus DoDefaultAction(
        int childId
    );
    %Docstring
        DoDefaultAction(childId) -> AccStatus
        
        Performs the default action for the object.
    %End

    virtual
    wxAccStatus GetChild(
        int childId,
        wxAccessible ** child   /Out/
    );
    %Docstring
        GetChild(childId) -> (AccStatus, child)
        
        Gets the specified child (starting from 1).
    %End

    virtual
    wxAccStatus GetChildCount(
        int * childCount   /Out/
    );
    %Docstring
        GetChildCount() -> (AccStatus, childCount)
        
        Returns the number of children in childCount.
    %End

    virtual
    wxAccStatus GetDefaultAction(
        int childId,
        wxString * actionName   /Out/
    );
    %Docstring
        GetDefaultAction(childId) -> (AccStatus, actionName)
        
        Gets the default action for this object (0) or a child (greater than
        0).
    %End

    virtual
    wxAccStatus GetDescription(
        int childId,
        wxString * description   /Out/
    );
    %Docstring
        GetDescription(childId) -> (AccStatus, description)
        
        Returns the description for this object or a child.
    %End

    virtual
    wxAccStatus GetFocus(
        int * childId,
        wxAccessible ** child   /Out/
    );
    %Docstring
        GetFocus(childId) -> (AccStatus, child)
        
        Gets the window with the keyboard focus.
    %End

    virtual
    wxAccStatus GetHelpText(
        int childId,
        wxString * helpText   /Out/
    );
    %Docstring
        GetHelpText(childId) -> (AccStatus, helpText)
        
        Returns help text for this object or a child, similar to tooltip text.
    %End

    virtual
    wxAccStatus GetKeyboardShortcut(
        int childId,
        wxString * shortcut   /Out/
    );
    %Docstring
        GetKeyboardShortcut(childId) -> (AccStatus, shortcut)
        
        Returns the keyboard shortcut for this object or child.
    %End

    virtual
    wxAccStatus GetLocation(
        wxRect & rect   /Out/,
        int elementId
    );
    %Docstring
        GetLocation(elementId) -> (AccStatus, rect)
        
        Returns the rectangle for this object (id is 0) or a child element (id
        is greater than 0).
    %End

    virtual
    wxAccStatus GetName(
        int childId,
        wxString * name   /Out/
    );
    %Docstring
        GetName(childId) -> (AccStatus, name)
        
        Gets the name of the specified object.
    %End

    virtual
    wxAccStatus GetParent(
        wxAccessible ** parent   /Out/
    );
    %Docstring
        GetParent() -> (AccStatus, parent)
        
        Returns the parent of this object, or NULL.
    %End

    virtual
    wxAccStatus GetRole(
        int childId,
        wxAccRole * role   /Out/
    );
    %Docstring
        GetRole(childId) -> (AccStatus, role)
        
        Returns a role constant describing this object.
    %End

    virtual
    wxAccStatus GetSelections(
        wxVariant * selections   /Out/
    );
    %Docstring
        GetSelections() -> (AccStatus, selections)
        
        Gets a variant representing the selected children of this object.
    %End

    virtual
    wxAccStatus GetState(
        int childId,
        long * state   /Out/
    );
    %Docstring
        GetState(childId) -> (AccStatus, state)
        
        Returns a state constant.
    %End

    virtual
    wxAccStatus GetValue(
        int childId,
        wxString * strValue   /Out/
    );
    %Docstring
        GetValue(childId) -> (AccStatus, strValue)
        
        Returns a localized string representing the value for the object or
        child.
    %End

    wxWindow * GetWindow();
    %Docstring
        GetWindow() -> Window
        
        Returns the window associated with this object.
    %End

    virtual
    wxAccStatus HitTest(
        const wxPoint & pt,
        int * childId,
        wxAccessible ** childObject
    );
    %Docstring
        HitTest(pt, childId, childObject) -> AccStatus
        
        Returns a status value and object id to indicate whether the given
        point was on this or a child object.
    %End

    virtual
    wxAccStatus Navigate(
        wxNavDir navDir,
        int fromId,
        int * toId,
        wxAccessible ** toObject
    );
    %Docstring
        Navigate(navDir, fromId, toId, toObject) -> AccStatus
        
        Navigates from fromId to toId or to toObject.
    %End

    virtual
    wxAccStatus Select(
        int childId,
        wxAccSelectionFlags selectFlags
    );
    %Docstring
        Select(childId, selectFlags) -> AccStatus
        
        Selects the object or child.
    %End

    void SetWindow(
        wxWindow * window
    );
    %Docstring
        SetWindow(window)
        
        Sets the window associated with this object.
    %End

    static
    void NotifyEvent(
        int eventType,
        wxWindow * window,
        wxAccObject objectType,
        int objectId
    );
    %Docstring
        NotifyEvent(eventType, window, objectType, objectId)
        
        Allows the application to send an event when something changes in an
        accessible object.
    %End

    private:
        wxAccessible(const wxAccessible&);


    public:


    %Property(name=Window, get=GetWindow, set=SetWindow)
};  // end of class wxAccessible


const int wxUSE_ACCESSIBILITY;

//---------------------------------------------------------------------------

