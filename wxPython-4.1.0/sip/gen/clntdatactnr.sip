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

class wxClientDataContainer
{
    %Docstring
        ClientDataContainer()
        
        This class is a mixin that provides storage and management of "client
        data".
    %End
    %TypeHeaderCode
        #include <wx/clntdata.h>
    %End

public:
    wxClientDataContainer();

    virtual
    ~wxClientDataContainer();

    wxClientData * GetClientObject() const   /PyName=GetClientData/;
    %Docstring
        GetClientData() -> ClientData
        
        Get a pointer to the client data object.
    %End

    void SetClientObject(
        wxClientData * data   /Transfer/
    )   /PyName=SetClientData/;
    %Docstring
        SetClientData(data)
        
        Set the client data object.
    %End

};  // end of class wxClientDataContainer


%Extract(id=pycode_core)
def _ClientDataContainer_GetClientObject(self):
    """
    Alias for :meth:`GetClientData`
    """
    return self.GetClientData()
ClientDataContainer.GetClientObject = _ClientDataContainer_GetClientObject
del _ClientDataContainer_GetClientObject
%End

%Extract(id=pycode_core)
def _ClientDataContainer_SetClientObject(self, data):
    """
    Alias for :meth:`SetClientData`
    """
    self.SetClientData(data)
ClientDataContainer.SetClientObject = _ClientDataContainer_SetClientObject
del _ClientDataContainer_SetClientObject
%End

%Extract(id=pycode_core)
ClientDataContainer.ClientData = property(ClientDataContainer.GetClientData, ClientDataContainer.SetClientData)
%End


//---------------------------------------------------------------------------

