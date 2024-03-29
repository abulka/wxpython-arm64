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

const int wxHW_SCROLLBAR_NEVER;
const int wxHW_SCROLLBAR_AUTO;
const int wxHW_NO_SELECTION;
const int wxHW_DEFAULT_STYLE;
enum wxHtmlOpeningStatus
{
    wxHTML_OPEN,
    wxHTML_BLOCK,
    wxHTML_REDIRECT
};

wxEventType wxEVT_HTML_CELL_CLICKED   /PyName=wxEVT_HTML_CELL_CLICKED/;

wxEventType wxEVT_HTML_CELL_HOVER   /PyName=wxEVT_HTML_CELL_HOVER/;

wxEventType wxEVT_HTML_LINK_CLICKED   /PyName=wxEVT_HTML_LINK_CLICKED/;

class wxHtmlWindowInterface
{
    %Docstring
        HtmlWindowInterface()
        
        Abstract interface to a HTML rendering window (such as wxHtmlWindow or
        wxHtmlListBox) that is passed to wxHtmlWinParser.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlwin.h>
    %End

public:
    enum HTMLCursor
    {
        HTMLCursor_Default,
        HTMLCursor_Link,
        HTMLCursor_Text    
    };

    wxHtmlWindowInterface();

    virtual
    ~wxHtmlWindowInterface();

    virtual
    void SetHTMLWindowTitle(
        const wxString & title
    ) = 0;
    %Docstring
        SetHTMLWindowTitle(title)
        
        Called by the parser to set window's title to given text.
    %End

    virtual
    void OnHTMLLinkClicked(
        const wxHtmlLinkInfo & link
    ) = 0;
    %Docstring
        OnHTMLLinkClicked(link)
        
        Called when a link is clicked.
    %End

    virtual
    wxHtmlOpeningStatus OnHTMLOpeningURL(
        wxHtmlURLType type,
        const wxString & url,
        wxString * redirectTo   /Out/
    ) const = 0;
    %Docstring
        OnHTMLOpeningURL(type, url) -> (HtmlOpeningStatus, redirectTo)
        
        Called when the parser needs to open another URL (e.g.
    %End

    virtual
    wxPoint HTMLCoordsToWindow(
        wxHtmlCell * cell,
        const wxPoint & pos
    ) const = 0;
    %Docstring
        HTMLCoordsToWindow(cell, pos) -> wx.Point
        
        Converts coordinates pos relative to given cell to physical
        coordinates in the window.
    %End

    virtual
    wxWindow * GetHTMLWindow() = 0;
    %Docstring
        GetHTMLWindow() -> wx.Window
        
        Returns the window used for rendering (may be NULL).
    %End

    virtual
    wxColour GetHTMLBackgroundColour() const = 0;
    %Docstring
        GetHTMLBackgroundColour() -> wx.Colour
        
        Returns background colour to use by default.
    %End

    virtual
    void SetHTMLBackgroundColour(
        const wxColour & clr
    ) = 0;
    %Docstring
        SetHTMLBackgroundColour(clr)
        
        Sets window's background to colour clr.
    %End

    virtual
    void SetHTMLBackgroundImage(
        const wxBitmap & bmpBg
    ) = 0;
    %Docstring
        SetHTMLBackgroundImage(bmpBg)
        
        Sets window's background to given bitmap.
    %End

    virtual
    void SetHTMLStatusText(
        const wxString & text
    ) = 0;
    %Docstring
        SetHTMLStatusText(text)
        
        Sets status bar text.
    %End

    virtual
    wxCursor GetHTMLCursor(
        wxHtmlWindowInterface::HTMLCursor type
    ) const = 0;
    %Docstring
        GetHTMLCursor(type) -> wx.Cursor
        
        Returns mouse cursor of given type.
    %End

    public:


    %Property(name=HTMLBackgroundColour, get=GetHTMLBackgroundColour, set=SetHTMLBackgroundColour)
    %Property(name=HTMLWindow, get=GetHTMLWindow)
};  // end of class wxHtmlWindowInterface


class wxHtmlWindow : wxScrolledWindow, wxHtmlWindowInterface
{
    %Docstring
        HtmlWindow()
        HtmlWindow(parent, id=wx.ID_ANY, pos=wx.DefaultPosition, size=wx.DefaultSize, style=HW_DEFAULT_STYLE, name="htmlWindow")
        
        wxHtmlWindow is probably the only class you will directly use unless
        you want to do something special (like adding new tag handlers or MIME
        filters).
    %End
    %TypeHeaderCode
        #include <wx/html/htmlwin.h>
    %End

public:
    wxHtmlWindow();
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    wxHtmlWindow(
        wxWindow * parent   /TransferThis/,
        wxWindowID id = wxID_ANY,
        const wxPoint & pos = wxDefaultPosition,
        const wxSize & size = wxDefaultSize,
        long style = wxHW_DEFAULT_STYLE,
        const wxString & name = "htmlWindow"
    );
    %PreMethodCode
        if (!wxPyCheckForApp()) return NULL;
    %End

    bool AppendToPage(
        const wxString & source
    );
    %Docstring
        AppendToPage(source) -> bool
        
        Appends HTML fragment to currently displayed text and refreshes the
        window.
    %End

    wxHtmlContainerCell * GetInternalRepresentation() const;
    %Docstring
        GetInternalRepresentation() -> HtmlContainerCell
        
        Returns pointer to the top-level container.
    %End

    wxString GetOpenedAnchor() const;
    %Docstring
        GetOpenedAnchor() -> String
        
        Returns anchor within currently opened page (see
        wxHtmlWindow::GetOpenedPage).
    %End

    wxString GetOpenedPage() const;
    %Docstring
        GetOpenedPage() -> String
        
        Returns full location of the opened page.
    %End

    wxString GetOpenedPageTitle() const;
    %Docstring
        GetOpenedPageTitle() -> String
        
        Returns title of the opened page or wxEmptyString if the current page
        does not contain <TITLE> tag.
    %End

    wxHtmlWinParser * GetParser() const;
    %Docstring
        GetParser() -> HtmlWinParser
        
        Returns a pointer to the current parser.
    %End

    wxFrame * GetRelatedFrame() const;
    %Docstring
        GetRelatedFrame() -> wx.Frame
        
        Returns the related frame.
    %End

    bool HistoryBack();
    %Docstring
        HistoryBack() -> bool
        
        Moves back to the previous page.
    %End

    bool HistoryCanBack();
    %Docstring
        HistoryCanBack() -> bool
        
        Returns true if it is possible to go back in the history i.e.
    %End

    bool HistoryCanForward();
    %Docstring
        HistoryCanForward() -> bool
        
        Returns true if it is possible to go forward in the history i.e.
    %End

    void HistoryClear();
    %Docstring
        HistoryClear()
        
        Clears history.
    %End

    bool HistoryForward();
    %Docstring
        HistoryForward() -> bool
        
        Moves to next page in history.
    %End

    bool LoadFile(
        const wxFileName & filename
    );
    %Docstring
        LoadFile(filename) -> bool
        
        Loads an HTML page from a file and displays it.
    %End

    bool LoadPage(
        const wxString & location
    );
    %Docstring
        LoadPage(location) -> bool
        
        Unlike SetPage() this function first loads the HTML page from location
        and then displays it.
    %End

    virtual
    void OnLinkClicked(
        const wxHtmlLinkInfo & link
    );
    %Docstring
        OnLinkClicked(link)
        
        Called when user clicks on hypertext link.
    %End

    virtual
    wxHtmlOpeningStatus OnOpeningURL(
        wxHtmlURLType type,
        const wxString & url,
        wxString * redirectTo   /Out/
    ) const;
    %Docstring
        OnOpeningURL(type, url) -> (HtmlOpeningStatus, redirectTo)
        
        Called when an URL is being opened (either when the user clicks on a
        link or an image is loaded).
    %End

    virtual
    void OnSetTitle(
        const wxString & title
    );
    %Docstring
        OnSetTitle(title)
        
        Called on parsing <TITLE> tag.
    %End

    void ReadCustomization(
        wxConfigBase * cfg,
        wxString path = wxEmptyString
    );
    %Docstring
        ReadCustomization(cfg, path=wx.EmptyString)
        
        This reads custom settings from wxConfig.
    %End

    void SelectAll();
    %Docstring
        SelectAll()
        
        Selects all text in the window.
    %End

    void SelectLine(
        const wxPoint & pos
    );
    %Docstring
        SelectLine(pos)
        
        Selects the line of text that pos points at.
    %End

    void SelectWord(
        const wxPoint & pos
    );
    %Docstring
        SelectWord(pos)
        
        Selects the word at position pos.
    %End

    wxString SelectionToText();
    %Docstring
        SelectionToText() -> String
        
        Returns the current selection as plain text.
    %End

    void SetBorders(
        int b
    );
    %Docstring
        SetBorders(b)
        
        This function sets the space between border of window and HTML
        contents.
    %End

    void SetFonts(
        const wxString & normal_face,
        const wxString & fixed_face,
        const wxArrayInt& sizes
    );
    %Docstring
        SetFonts(normal_face, fixed_face, sizes)
        
        This function sets font sizes and faces.
    %End
    %MethodCode
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxHtmlWindow_SetFonts(sipCpp, normal_face, fixed_face, sizes);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    void _wxHtmlWindow_SetFonts(wxHtmlWindow* self, const wxString * normal_face, const wxString * fixed_face, const wxArrayInt* sizes)
    {
        if (sizes->GetCount() != 7) {
            wxPyErr_SetString(PyExc_ValueError, "Sequence of 7 integers expected.");
            return;
        }
        self->SetFonts(*normal_face, *fixed_face, &sizes->Item(0));
    }
    %End

    void SetStandardFonts(
        int size = -1,
        const wxString & normal_face = wxEmptyString,
        const wxString & fixed_face = wxEmptyString
    );
    %Docstring
        SetStandardFonts(size=-1, normal_face=wx.EmptyString, fixed_face=wx.EmptyString)
        
        Sets default font sizes and/or default font size.
    %End

    bool SetPage(
        const wxString & source
    );
    %Docstring
        SetPage(source) -> bool
        
        Sets the source of a page and displays it, for example:
    %End

    void SetRelatedFrame(
        wxFrame * frame,
        const wxString & format
    );
    %Docstring
        SetRelatedFrame(frame, format)
        
        Sets the frame in which page title will be displayed.
    %End

    void SetRelatedStatusBar(
        int index
    );
    %Docstring
        SetRelatedStatusBar(index)
        SetRelatedStatusBar(statusbar, index=0)
        
        After calling SetRelatedFrame(), this sets statusbar slot where
        messages will be displayed.
    %End

    void SetRelatedStatusBar(
        wxStatusBar * statusbar,
        int index = 0
    );

    wxString ToText();
    %Docstring
        ToText() -> String
        
        Returns content of currently displayed page as plain text.
    %End

    void WriteCustomization(
        wxConfigBase * cfg,
        wxString path = wxEmptyString
    );
    %Docstring
        WriteCustomization(cfg, path=wx.EmptyString)
        
        Saves custom settings into wxConfig.
    %End

    static
    void AddFilter(
        wxHtmlFilter * filter   /Transfer/
    );
    %Docstring
        AddFilter(filter)
        
        Adds an input filter to the static list of available filters.
    %End

    static
    wxCursor GetDefaultHTMLCursor(
        HTMLCursor type
    );
    %Docstring
        GetDefaultHTMLCursor(type) -> wx.Cursor
        
        Retrieves the default cursor for a given HTMLCursor type.
    %End

    static
    void SetDefaultHTMLCursor(
        HTMLCursor type,
        const wxCursor & cursor
    );
    %Docstring
        SetDefaultHTMLCursor(type, cursor)
        
        Sets the default cursor for a given HTMLCursor type.
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

            virtual void SetHTMLWindowTitle(const wxString& title);
            virtual void OnHTMLLinkClicked(const wxHtmlLinkInfo& link);
            virtual wxHtmlOpeningStatus OnHTMLOpeningURL(wxHtmlURLType type,
                                                         const wxString& url,
                                                         wxString *redirectTo /Out/) const;
            virtual wxPoint HTMLCoordsToWindow(wxHtmlCell *cell,
                                               const wxPoint& pos) const;
            virtual wxWindow* GetHTMLWindow();
            virtual wxColour GetHTMLBackgroundColour() const;
            virtual void SetHTMLBackgroundColour(const wxColour& clr);
            virtual void SetHTMLBackgroundImage(const wxBitmap& bmpBg);
            virtual void SetHTMLStatusText(const wxString& text);
            virtual wxCursor GetHTMLCursor(wxHtmlWindowInterface::HTMLCursor type) const;


    public:


    %Property(name=InternalRepresentation, get=GetInternalRepresentation)
    %Property(name=OpenedAnchor, get=GetOpenedAnchor)
    %Property(name=OpenedPage, get=GetOpenedPage)
    %Property(name=OpenedPageTitle, get=GetOpenedPageTitle)
    %Property(name=Parser, get=GetParser)
    %Property(name=RelatedFrame, get=GetRelatedFrame, set=SetRelatedFrame)

protected:
    virtual
    bool OnCellClicked(
        wxHtmlCell * cell,
        wxCoord x,
        wxCoord y,
        const wxMouseEvent & event
    );
    %Docstring
        OnCellClicked(cell, x, y, event) -> bool
        
        This method is called when a mouse button is clicked inside
        wxHtmlWindow.
    %End

    virtual
    void OnCellMouseHover(
        wxHtmlCell * cell,
        wxCoord x,
        wxCoord y
    );
    %Docstring
        OnCellMouseHover(cell, x, y)
        
        This method is called when a mouse moves over an HTML cell.
    %End

    bool ScrollToAnchor(
        const wxString& anchor
    );
    %Docstring
        ScrollToAnchor(anchor) -> bool
    %End

};  // end of class wxHtmlWindow


class wxHtmlLinkEvent : wxCommandEvent
{
    %Docstring
        HtmlLinkEvent(id, linkinfo)
        
        This event class is used for the events generated by wxHtmlWindow.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlwin.h>
    %End

public:
    wxHtmlLinkEvent(
        int id,
        const wxHtmlLinkInfo & linkinfo
    );

    const wxHtmlLinkInfo & GetLinkInfo() const;
    %Docstring
        GetLinkInfo() -> HtmlLinkInfo
        
        Returns the wxHtmlLinkInfo which contains info about the cell clicked
        and the hyperlink it contains.
    %End

    public:
    virtual wxEvent* Clone() const /Factory/;


    private:
        wxHtmlLinkEvent& operator=(const wxHtmlLinkEvent&);


    public:


    %Property(name=LinkInfo, get=GetLinkInfo)
};  // end of class wxHtmlLinkEvent


class wxHtmlCellEvent : wxCommandEvent
{
    %Docstring
        HtmlCellEvent(commandType, id, cell, point, ev)
        
        This event class is used for the events generated by wxHtmlWindow.
    %End
    %TypeHeaderCode
        #include <wx/html/htmlwin.h>
    %End

public:
    wxHtmlCellEvent(
        wxEventType commandType,
        int id,
        wxHtmlCell * cell,
        const wxPoint & point,
        const wxMouseEvent & ev
    );

    wxHtmlCell * GetCell() const;
    %Docstring
        GetCell() -> HtmlCell
        
        Returns the wxHtmlCellEvent associated with the event.
    %End

    bool GetLinkClicked() const;
    %Docstring
        GetLinkClicked() -> bool
        
        Returns true if SetLinkClicked(true) has previously been called; false
        otherwise.
    %End

    wxPoint GetPoint() const;
    %Docstring
        GetPoint() -> wx.Point
        
        Returns the wxPoint associated with the event.
    %End

    wxMouseEvent GetMouseEvent() const;
    %Docstring
        GetMouseEvent() -> wx.MouseEvent
        
        Returns the wxMouseEvent associated with the event.
    %End

    void SetLinkClicked(
        bool linkclicked
    );
    %Docstring
        SetLinkClicked(linkclicked)
        
        Call this function with linkclicked set to true if the cell which has
        been clicked contained a link or false otherwise (which is the
        default).
    %End

    public:
    virtual wxEvent* Clone() const /Factory/;


    private:
        wxHtmlCellEvent& operator=(const wxHtmlCellEvent&);


    public:


    %Property(name=Cell, get=GetCell)
    %Property(name=LinkClicked, get=GetLinkClicked, set=SetLinkClicked)
    %Property(name=MouseEvent, get=GetMouseEvent)
    %Property(name=Point, get=GetPoint)
};  // end of class wxHtmlCellEvent


%Extract(id=pycode_html)
EVT_HTML_CELL_CLICKED = wx.PyEventBinder( wxEVT_HTML_CELL_CLICKED, 1 )
EVT_HTML_CELL_HOVER   = wx.PyEventBinder( wxEVT_HTML_CELL_HOVER, 1 )
EVT_HTML_LINK_CLICKED = wx.PyEventBinder( wxEVT_HTML_LINK_CLICKED, 1 )

# deprecated wxEVT aliases
wxEVT_COMMAND_HTML_CELL_CLICKED  = wxEVT_HTML_CELL_CLICKED
wxEVT_COMMAND_HTML_CELL_HOVER    = wxEVT_HTML_CELL_HOVER
wxEVT_COMMAND_HTML_LINK_CLICKED  = wxEVT_HTML_LINK_CLICKED

%End


//---------------------------------------------------------------------------

