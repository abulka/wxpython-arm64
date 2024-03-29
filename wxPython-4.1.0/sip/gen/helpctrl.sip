//---------------------------------------------------------------------------
// This file is generated by wxPython's SIP generator.  Do not edit by hand.
//
// Copyright: (c) 2020 by Total Control Software
// License:   wxWindows License
//
// This file will be included by _html.sip
//
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

const int wxID_HTML_HELPFRAME;
const int wxHF_EMBEDDED;
const int wxHF_DIALOG;
const int wxHF_FRAME;
const int wxHF_MODAL;
class wxHtmlHelpController : wxHelpControllerBase
{
    %Docstring
        HtmlHelpController(style=HF_DEFAULT_STYLE, parentWindow=None)
        HtmlHelpController(parentWindow, style=HF_DEFAULT_STYLE)
        
        This help controller provides an easy way of displaying HTML help in
        your application (see HTML Sample, test example).
    %End
    %TypeHeaderCode
        #include <wx/html/helpctrl.h>
    %End

public:
    wxHtmlHelpController(
        int style = wxHF_DEFAULT_STYLE,
        wxWindow * parentWindow = NULL
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxHtmlHelpController(
        wxWindow * parentWindow,
        int style = wxHF_DEFAULT_STYLE
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    bool AddBook(
        const wxFileName & bookFile,
        bool showWaitMsg = false
    );
    %Docstring
        AddBook(bookFile, showWaitMsg=False) -> bool
        AddBook(bookUrl, showWaitMsg=False) -> bool
        
        Adds a book (i.e.
    %End

    bool AddBook(
        const wxString & bookUrl,
        bool showWaitMsg = false
    );

    bool Display(
        const wxString & x
    );
    %Docstring
        Display(x) -> bool
        Display(id) -> bool
        
        Displays page x.
    %End

    bool Display(
        int id
    );

    virtual
    bool DisplayContents();
    %Docstring
        DisplayContents() -> bool
        
        Displays help window and focuses contents panel.
    %End

    bool DisplayIndex();
    %Docstring
        DisplayIndex() -> bool
        
        Displays help window and focuses index panel.
    %End

    virtual
    bool KeywordSearch(
        const wxString & keyword,
        wxHelpSearchMode mode = wxHELP_SEARCH_ALL
    );
    %Docstring
        KeywordSearch(keyword, mode=wx.HELP_SEARCH_ALL) -> bool
        
        Displays the help window, focuses search panel and starts searching.
    %End

    virtual
    void ReadCustomization(
        wxConfigBase * cfg,
        const wxString & path = wxEmptyString
    );
    %Docstring
        ReadCustomization(cfg, path=wx.EmptyString)
        
        Reads the controller's setting (position of window, etc.)
    %End

    void SetShouldPreventAppExit(
        bool enable
    );
    %Docstring
        SetShouldPreventAppExit(enable)
        
        Sets whether the help frame should prevent application from exiting if
        it's the only remaining top level window.
    %End

    void SetTempDir(
        const wxString & path
    );
    %Docstring
        SetTempDir(path)
        
        Sets the path for storing temporary files - cached binary versions of
        index and contents files.
    %End

    void SetTitleFormat(
        const wxString & format
    );
    %Docstring
        SetTitleFormat(format)
        
        Sets format of title of the frame.
    %End

    void UseConfig(
        wxConfigBase * config,
        const wxString & rootpath = wxEmptyString
    );
    %Docstring
        UseConfig(config, rootpath=wx.EmptyString)
        
        Associates the config object with the controller.
    %End

    virtual
    void WriteCustomization(
        wxConfigBase * cfg,
        const wxString & path = wxEmptyString
    );
    %Docstring
        WriteCustomization(cfg, path=wx.EmptyString)
        
        Stores controllers setting (position of window etc.)
    %End

    wxHtmlHelpWindow * GetHelpWindow();
    %Docstring
        GetHelpWindow() -> HtmlHelpWindow
        
        Get the current help window.
    %End

    void SetHelpWindow(
        wxHtmlHelpWindow * helpWindow
    );
    %Docstring
        SetHelpWindow(helpWindow)
        
        Set the help window to be managed by this controller.
    %End

    wxHtmlHelpFrame * GetFrame();
    %Docstring
        GetFrame() -> HtmlHelpFrame
        
        Returns the current help frame.
    %End

    wxHtmlHelpDialog * GetDialog();
    %Docstring
        GetDialog() -> HtmlHelpDialog
        
        Returns the current help dialog.
    %End

    private:
        wxHtmlHelpController(const wxHtmlHelpController&);


            public:
            // Add implementations for the pure virtuals in the base class
            virtual bool Initialize(const wxString& file, int server);
            virtual bool Initialize(const wxString& file);
            virtual void SetViewer(const wxString& viewer, long flags = 0);
            virtual bool LoadFile(const wxString& file = "");
            virtual bool DisplaySection(int sectionNo);
            virtual bool DisplaySection(const wxString& section);
            virtual bool DisplayBlock(long blockNo);
            virtual bool DisplayTextPopup(const wxString& text, const wxPoint& pos);
            virtual bool DisplayContextPopup(int contextId);
            virtual bool Quit();
            virtual void OnQuit();
    
            virtual void SetFrameParameters(const wxString& titleFormat,
                                            const wxSize& size,
                                            const wxPoint& pos = wxDefaultPosition,
                                            bool newFrameEachTime = false);


    public:


    %Property(name=Dialog, get=GetDialog)
    %Property(name=Frame, get=GetFrame)
    %Property(name=HelpWindow, get=GetHelpWindow, set=SetHelpWindow)

protected:
    virtual
    wxHtmlHelpDialog * CreateHelpDialog(
        wxHtmlHelpData * data
    );
    %Docstring
        CreateHelpDialog(data) -> HtmlHelpDialog
        
        This protected virtual method may be overridden so that when
        specifying the wxHF_DIALOG style, the controller uses a different
        dialog.
    %End

    virtual
    wxHtmlHelpFrame * CreateHelpFrame(
        wxHtmlHelpData * data
    );
    %Docstring
        CreateHelpFrame(data) -> HtmlHelpFrame
        
        This protected virtual method may be overridden so that the controller
        uses a different frame.
    %End

};  // end of class wxHtmlHelpController


class wxHtmlModalHelp
{
    %Docstring
        HtmlModalHelp(parent, helpFile, topic=wx.EmptyString, style=HF_DEFAULT_STYLE|HF_DIALOG|HF_MODAL)
        
        This class uses wxHtmlHelpController to display help in a modal
        dialog.
    %End
    %TypeHeaderCode
        #include <wx/html/helpctrl.h>
    %End

public:
    wxHtmlModalHelp(
        wxWindow * parent,
        const wxString & helpFile,
        const wxString & topic = wxEmptyString,
        int style = wxHF_DEFAULT_STYLE|wxHF_DIALOG|wxHF_MODAL
    );

};  // end of class wxHtmlModalHelp



//---------------------------------------------------------------------------

