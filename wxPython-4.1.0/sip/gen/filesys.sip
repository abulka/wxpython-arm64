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

enum wxFileSystemOpenFlags
{
    wxFS_READ,
    wxFS_SEEKABLE
};

class wxFileSystem : wxObject
{
    %Docstring
        FileSystem()
        
        This class provides an interface for opening files on different file
        systems.
    %End
    %TypeHeaderCode
        #include <wx/filesys.h>
    %End

public:
    wxFileSystem();

    void ChangePathTo(
        const wxString & location,
        bool is_dir = false
    );
    %Docstring
        ChangePathTo(location, is_dir=False)
        
        Sets the current location.
    %End

    bool FindFileInPath(
        wxString * pStr,
        const wxString & path,
        const wxString & file
    );
    %Docstring
        FindFileInPath(pStr, path, file) -> bool
        
        Looks for the file with the given name file in a colon or semi-colon
        (depending on the current platform) separated list of directories in
        path.
    %End

    wxString FindFirst(
        const wxString & wildcard,
        int flags = 0
    );
    %Docstring
        FindFirst(wildcard, flags=0) -> String
        
        Works like wxFindFirstFile().
    %End

    wxString FindNext();
    %Docstring
        FindNext() -> String
        
        Returns the next filename that matches the parameters passed to
        FindFirst().
    %End

    wxString GetPath() const;
    %Docstring
        GetPath() -> String
        
        Returns the actual path (set by wxFileSystem::ChangePathTo).
    %End

    wxFSFile * OpenFile(
        const wxString & location,
        int flags = wxFS_READ
    );
    %Docstring
        OpenFile(location, flags=FS_READ) -> FSFile
        
        Opens the file and returns a pointer to a wxFSFile object or NULL if
        failed.
    %End

    static
    void AddHandler(
        wxFileSystemHandler * handler   /Transfer/
    );
    %Docstring
        AddHandler(handler)
        
        This static function adds new handler into the list of handlers (see
        wxFileSystemHandler) which provide access to virtual FS.
    %End

    static
    wxFileSystemHandler * RemoveHandler(
        wxFileSystemHandler * handler
    )   /TransferBack/;
    %Docstring
        RemoveHandler(handler) -> FileSystemHandler
        
        Remove a filesystem handler from the list of handlers.
    %End

    static
    wxString FileNameToURL(
        const wxFileName & filename
    );
    %Docstring
        FileNameToURL(filename) -> String
        
        Converts a wxFileName into an URL.
    %End

    static
    bool HasHandlerForPath(
        const wxString & location
    );
    %Docstring
        HasHandlerForPath(location) -> bool
        
        This static function returns true if there is a registered handler
        which can open the given location.
    %End

    static
    wxFileName URLToFileName(
        const wxString & url
    );
    %Docstring
        URLToFileName(url) -> FileName
        
        Converts URL into a well-formed filename.
    %End

    private:
        wxFileSystem(const wxFileSystem&);


    public:


    %Property(name=Path, get=GetPath)
};  // end of class wxFileSystem


class wxFSFile : wxObject
{
    %Docstring
        FSFile(stream, location, mimetype, anchor, modif)
        
        This class represents a single file opened by wxFileSystem.
    %End
    %TypeHeaderCode
        #include <wx/filesys.h>
    %End

public:
    wxFSFile(
        wxInputStream * stream   /KeepReference/,
        const wxString & location,
        const wxString & mimetype,
        const wxString & anchor,
        wxDateTime modif
    );

    wxInputStream * DetachStream();
    %Docstring
        DetachStream() -> InputStream
        
        Detaches the stream from the wxFSFile object.
    %End

    const wxString & GetAnchor() const;
    %Docstring
        GetAnchor() -> String
        
        Returns anchor (if present).
    %End

    const wxString & GetLocation() const;
    %Docstring
        GetLocation() -> String
        
        Returns full location of the file, including path and protocol.
    %End

    const wxString & GetMimeType() const;
    %Docstring
        GetMimeType() -> String
        
        Returns the MIME type of the content of this file.
    %End

    wxDateTime GetModificationTime() const;
    %Docstring
        GetModificationTime() -> DateTime
        
        Returns time when this file was modified.
    %End

    wxInputStream * GetStream() const;
    %Docstring
        GetStream() -> InputStream
        
        Returns pointer to the stream.
    %End

    private:
        wxFSFile(const wxFSFile&);


    public:


    %Property(name=Anchor, get=GetAnchor)
    %Property(name=Location, get=GetLocation)
    %Property(name=MimeType, get=GetMimeType)
    %Property(name=ModificationTime, get=GetModificationTime)
    %Property(name=Stream, get=GetStream)
};  // end of class wxFSFile


class wxFileSystemHandler : wxObject
{
    %Docstring
        FileSystemHandler()
        
        Classes derived from wxFileSystemHandler are used to access virtual
        file systems.
    %End
    %TypeHeaderCode
        #include <wx/filesys.h>
    %End

public:
    wxFileSystemHandler();

    virtual
    bool CanOpen(
        const wxString & location
    ) = 0;
    %Docstring
        CanOpen(location) -> bool
        
        Returns true if the handler is able to open this file.
    %End

    virtual
    wxString FindFirst(
        const wxString & wildcard,
        int flags = 0
    );
    %Docstring
        FindFirst(wildcard, flags=0) -> String
        
        Works like wxFindFirstFile().
    %End

    virtual
    wxString FindNext();
    %Docstring
        FindNext() -> String
        
        Returns next filename that matches parameters passed to
        wxFileSystem::FindFirst.
    %End

    virtual
    wxFSFile * OpenFile(
        wxFileSystem & fs,
        const wxString & location
    ) = 0   /Factory/;
    %Docstring
        OpenFile(fs, location) -> FSFile
        
        Opens the file and returns wxFSFile pointer or NULL if failed.
    %End

    static
    wxString GetMimeTypeFromExt(
        const wxString & location
    );
    %Docstring
        GetMimeTypeFromExt(location) -> String
        
        Returns the MIME type based on extension of location.
    %End


protected:
    static
    wxString GetAnchor(
        const wxString & location
    );
    %Docstring
        GetAnchor(location) -> String
        
        Returns the anchor if present in the location.
    %End

    static
    wxString GetLeftLocation(
        const wxString & location
    );
    %Docstring
        GetLeftLocation(location) -> String
        
        Returns the left location string extracted from location.
    %End

    static
    wxString GetProtocol(
        const wxString & location
    );
    %Docstring
        GetProtocol(location) -> String
        
        Returns the protocol string extracted from location.
    %End

    static
    wxString GetRightLocation(
        const wxString & location
    );
    %Docstring
        GetRightLocation(location) -> String
        
        Returns the right location string extracted from location.
    %End

};  // end of class wxFileSystemHandler


class wxMemoryFSHandler : wxFileSystemHandler
{
    %Docstring
        MemoryFSHandler()
        
        This wxFileSystem handler can store arbitrary data in memory stream
        and make them accessible via an URL.
    %End
    %TypeHeaderCode
        #include <wx/fs_mem.h>
    %End

public:
    wxMemoryFSHandler();

    static
    void AddFile(
        const wxString & filename,
        wxImage & image,
        wxBitmapType type
    );
    %Docstring
        AddFile(filename, image, type)
        AddFile(filename, bitmap, type)
        AddFile(filename, textdata)
        AddFile(filename, binarydata)
        
        Adds a file to the list of the files stored in memory.
    %End

    static
    void AddFile(
        const wxString & filename,
        const wxBitmap & bitmap,
        wxBitmapType type
    );

    static void AddFile(const wxString& filename,  const wxString& textdata);
    %MethodCode
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxMemoryFSHandler_AddFile(filename, textdata);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    void _wxMemoryFSHandler_AddFile(const wxString* filename, const wxString* textdata)
    {
        wxScopedCharBuffer buf = textdata->utf8_str();
        wxMemoryFSHandler::AddFile(*filename, (const char*)buf, strlen(buf));
    }
    %End

    static void AddFile(const wxString& filename,  wxPyBuffer* binarydata);
    %MethodCode
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxMemoryFSHandler_AddFile(filename, binarydata);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    void _wxMemoryFSHandler_AddFile(const wxString* filename, wxPyBuffer* binarydata)
    {
        wxMemoryFSHandler::AddFile(*filename, binarydata->m_ptr, binarydata->m_len);
    }
    %End

    static void AddFileWithMimeType(const wxString& filename,  const wxString& textdata,  const wxString& mimetype);
    %Docstring
        AddFileWithMimeType(filename, textdata, mimetype)
        AddFileWithMimeType(filename, binarydata, mimetype)
        
        Add a file from text data, which will first be converted to utf-8
        encoded bytes.
    %End
    %MethodCode
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxMemoryFSHandler_AddFileWithMimeType(filename, textdata, mimetype);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    void _wxMemoryFSHandler_AddFileWithMimeType(const wxString* filename, const wxString* textdata, const wxString* mimetype)
    {
        wxScopedCharBuffer buf = textdata->utf8_str();
        wxMemoryFSHandler::AddFileWithMimeType(*filename, (const char*)buf, strlen(buf), *mimetype);
    }
    %End

    static void AddFileWithMimeType(const wxString& filename,  wxPyBuffer* binarydata,  const wxString& mimetype);
    %MethodCode
        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxMemoryFSHandler_AddFileWithMimeType(filename, binarydata, mimetype);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
    %End
    %TypeCode
    void _wxMemoryFSHandler_AddFileWithMimeType(const wxString* filename, wxPyBuffer* binarydata, const wxString* mimetype)
    {
        wxMemoryFSHandler::AddFileWithMimeType(
                *filename, binarydata->m_ptr, binarydata->m_len, *mimetype);
    }
    %End

    static
    void RemoveFile(
        const wxString & filename
    );
    %Docstring
        RemoveFile(filename)
        
        Removes a file from memory FS and frees the occupied memory.
    %End

                virtual bool CanOpen(const wxString& location);
                virtual wxFSFile* OpenFile(wxFileSystem& fs, const wxString& location) /Factory/;
                virtual wxString FindFirst(const wxString& spec, int flags = 0);
                virtual wxString FindNext();


    private:
        wxMemoryFSHandler(const wxMemoryFSHandler&);


};  // end of class wxMemoryFSHandler


class wxArchiveFSHandler : wxFileSystemHandler
{
    %Docstring
        ArchiveFSHandler()
        
        A file system handler for accessing files inside of archives.
    %End
    %TypeHeaderCode
        #include <wx/fs_arc.h>
    %End

public:
    wxArchiveFSHandler();

    virtual
    ~wxArchiveFSHandler();

    void Cleanup();
    %Docstring
        Cleanup()
    %End

                virtual bool CanOpen(const wxString& location);
                virtual wxFSFile* OpenFile(wxFileSystem& fs, const wxString& location) /Factory/;
                virtual wxString FindFirst(const wxString& spec, int flags = 0);
                virtual wxString FindNext();


    private:
        wxArchiveFSHandler(const wxArchiveFSHandler&);


};  // end of class wxArchiveFSHandler


class wxFilterFSHandler : wxFileSystemHandler
{
    %Docstring
        FilterFSHandler()
        
        Filter file system handler.
    %End
    %TypeHeaderCode
        #include <wx/fs_filter.h>
    %End

public:
    wxFilterFSHandler();

    virtual
    ~wxFilterFSHandler();

                virtual bool CanOpen(const wxString& location);
                virtual wxFSFile* OpenFile(wxFileSystem& fs, const wxString& location) /Factory/;
                virtual wxString FindFirst(const wxString& spec, int flags = 0);
                virtual wxString FindNext();


    private:
        wxFilterFSHandler(const wxFilterFSHandler&);


};  // end of class wxFilterFSHandler


class wxInternetFSHandler : wxFileSystemHandler
{
    %Docstring
        InternetFSHandler()
        
        A file system handler for accessing files from internet servers.
    %End
    %TypeHeaderCode
        #include <wx/fs_inet.h>
    %End

public:
    wxInternetFSHandler();

                virtual bool CanOpen(const wxString& location);
                virtual wxFSFile* OpenFile(wxFileSystem& fs, const wxString& location) /Factory/;
                virtual wxString FindFirst(const wxString& spec, int flags = 0);
                virtual wxString FindNext();


    private:
        wxInternetFSHandler(const wxInternetFSHandler&);


};  // end of class wxInternetFSHandler


%Extract(id=pycode_core)
ZipFSHandler = wx.deprecated(ArchiveFSHandler, "Use ArchiveFSHandler instead.")

%End


//---------------------------------------------------------------------------

