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

const char* wxART_EDIT;

const char* wxART_FULL_SCREEN;

const char* wxART_FIND_AND_REPLACE;

const char* wxART_FIND;

const char* wxART_QUIT;

const char* wxART_CLOSE;

const char* wxART_MINUS;

const char* wxART_PLUS;

const char* wxART_REDO;

const char* wxART_UNDO;

const char* wxART_NEW;

const char* wxART_DELETE;

const char* wxART_PASTE;

const char* wxART_CUT;

const char* wxART_COPY;

const char* wxART_MISSING_IMAGE;

const char* wxART_INFORMATION;

const char* wxART_WARNING;

const char* wxART_QUESTION;

const char* wxART_ERROR;

const char* wxART_CROSS_MARK;

const char* wxART_TICK_MARK;

const char* wxART_NORMAL_FILE;

const char* wxART_EXECUTABLE_FILE;

const char* wxART_GO_DIR_UP;

const char* wxART_FOLDER_OPEN;

const char* wxART_FOLDER;

const char* wxART_REMOVABLE;

const char* wxART_CDROM;

const char* wxART_FLOPPY;

const char* wxART_HARDDISK;

const char* wxART_NEW_DIR;

const char* wxART_LIST_VIEW;

const char* wxART_REPORT_VIEW;

const char* wxART_TIP;

const char* wxART_HELP;

const char* wxART_PRINT;

const char* wxART_FILE_SAVE_AS;

const char* wxART_FILE_SAVE;

const char* wxART_FILE_OPEN;

const char* wxART_GOTO_LAST;

const char* wxART_GOTO_FIRST;

const char* wxART_GO_HOME;

const char* wxART_GO_TO_PARENT;

const char* wxART_GO_DOWN;

const char* wxART_GO_UP;

const char* wxART_GO_FORWARD;

const char* wxART_GO_BACK;

const char* wxART_HELP_PAGE;

const char* wxART_HELP_FOLDER;

const char* wxART_HELP_BOOK;

const char* wxART_HELP_SETTINGS;

const char* wxART_HELP_SIDE_PANEL;

const char* wxART_DEL_BOOKMARK;

const char* wxART_ADD_BOOKMARK;

const char* wxART_OTHER;

const char* wxART_LIST;

const char* wxART_BUTTON;

const char* wxART_MESSAGE_BOX;

const char* wxART_HELP_BROWSER;

const char* wxART_CMN_DIALOG;

const char* wxART_FRAME_ICON;

const char* wxART_MENU;

const char* wxART_TOOLBAR;

typedef wxString wxArtClient;

typedef wxString wxArtID;

class wxArtProvider : wxObject
{
    %Docstring
        wxArtProvider class is used to customize the look of wxWidgets
        application.
    %End
    %TypeHeaderCode
        #include <wx/artprov.h>
    %End

public:
    virtual
    ~wxArtProvider();

    static
    bool Delete(
        wxArtProvider * provider
    );
    %Docstring
        Delete(provider) -> bool
        
        Delete the given provider.
    %End

    static
    wxBitmap GetBitmap(
        const wxArtID & id,
        const wxArtClient & client = wxART_OTHER,
        const wxSize & size = wxDefaultSize
    );
    %Docstring
        GetBitmap(id, client=ART_OTHER, size=DefaultSize) -> Bitmap
        
        Query registered providers for bitmap with given ID.
    %End
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    static
    wxIcon GetIcon(
        const wxArtID & id,
        const wxArtClient & client = wxART_OTHER,
        const wxSize & size = wxDefaultSize
    );
    %Docstring
        GetIcon(id, client=ART_OTHER, size=DefaultSize) -> Icon
        
        Same as wxArtProvider::GetBitmap, but return a wxIcon object (or
        wxNullIcon on failure).
    %End
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    static
    wxSize GetNativeSizeHint(
        const wxArtClient & client
    );
    %Docstring
        GetNativeSizeHint(client) -> Size
        
        Returns native icon size for use specified by client hint.
    %End

    static
    wxSize GetSizeHint(
        const wxArtClient & client,
        bool platform_default = false
    );
    %Docstring
        GetSizeHint(client, platform_default=False) -> Size
        
        Returns a suitable size hint for the given wxArtClient.
    %End

    static
    wxIconBundle GetIconBundle(
        const wxArtID & id,
        const wxArtClient & client = wxART_OTHER
    );
    %Docstring
        GetIconBundle(id, client=ART_OTHER) -> IconBundle
        
        Query registered providers for icon bundle with given ID.
    %End

    static
    bool HasNativeProvider();
    %Docstring
        HasNativeProvider() -> bool
        
        Returns true if the platform uses native icons provider that should
        take precedence over any customizations.
    %End

    static
    bool Pop();
    %Docstring
        Pop() -> bool
        
        Remove latest added provider and delete it.
    %End

    static
    void Push(
        wxArtProvider * provider   /Transfer/
    );
    %Docstring
        Push(provider)
        
        Register new art provider and add it to the top of providers stack
        (i.e.
    %End

    static
    void PushBack(
        wxArtProvider * provider   /Transfer/
    );
    %Docstring
        PushBack(provider)
        
        Register new art provider and add it to the bottom of providers stack.
    %End

    static
    bool Remove(
        wxArtProvider * provider   /TransferBack/
    );
    %Docstring
        Remove(provider) -> bool
        
        Remove a provider from the stack if it is on it.
    %End

    static
    wxArtID GetMessageBoxIconId(
        int flags
    );
    %Docstring
        GetMessageBoxIconId(flags) -> ArtID
        
        Helper used by GetMessageBoxIcon(): return the art id corresponding to
        the standard wxICON_INFORMATION/WARNING/ERROR/QUESTION flags (only one
        can be set)
    %End

    static
    wxIcon GetMessageBoxIcon(
        int flags
    );
    %Docstring
        GetMessageBoxIcon(flags) -> Icon
        
        Helper used by several generic classes: return the icon corresponding
        to the standard wxICON_INFORMATION/WARNING/ERROR/QUESTION flags (only
        one can be set)
    %End


protected:
    virtual
    wxBitmap CreateBitmap(
        const wxArtID & id,
        const wxArtClient & client,
        const wxSize & size
    );
    %Docstring
        CreateBitmap(id, client, size) -> Bitmap
        
        Derived art provider classes must override this method to create
        requested art resource.
    %End

    virtual
    wxIconBundle CreateIconBundle(
        const wxArtID & id,
        const wxArtClient & client
    );
    %Docstring
        CreateIconBundle(id, client) -> IconBundle
        
        This method is similar to CreateBitmap() but can be used when a bitmap
        (or an icon) exists in several sizes.
    %End

};  // end of class wxArtProvider



//---------------------------------------------------------------------------

