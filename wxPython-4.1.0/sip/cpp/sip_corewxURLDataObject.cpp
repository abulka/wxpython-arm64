/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/dataobj.h>

        #include <wx/dataobj.h>
        #include <wx/dataobj.h>
    PyObject* _wxURLDataObject_GetAllFormats(const wxURLDataObject* self, wxDataObject::Direction dir)
    {
        size_t count = self->GetFormatCount(dir);
        wxDataFormat* formats = new wxDataFormat[count];
        self->GetAllFormats(formats, dir);
        wxPyThreadBlocker blocker;
        PyObject* list = PyList_New(count);
        for (size_t i=0; i<count; i++) {
            wxDataFormat* format = new wxDataFormat(formats[i]);
            PyObject* obj = wxPyConstructObject((void*)format, wxT("wxDataFormat"), true);
            PyList_SET_ITEM(list, i, obj); // PyList_SET_ITEM steals a reference
        }
        delete [] formats;
        return list;
    }
    bool _wxURLDataObject_SetData(wxURLDataObject* self, const wxDataFormat* format, wxPyBuffer* buf)
    {
        return self->SetData(*format, buf->m_len, buf->m_ptr);
    }


class sipwxURLDataObject : public  ::wxURLDataObject
{
public:
    sipwxURLDataObject(const  ::wxString&);
    virtual ~sipwxURLDataObject();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void GetAllFormats( ::wxDataFormat*, ::wxDataObject::Direction) const SIP_OVERRIDE;
    size_t GetFormatCount( ::wxDataObject::Direction) const SIP_OVERRIDE;
     ::wxDataFormat GetPreferredFormat( ::wxDataObject::Direction) const SIP_OVERRIDE;
    bool SetData(const  ::wxDataFormat&,size_t,const void*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxURLDataObject(const sipwxURLDataObject &);
    sipwxURLDataObject &operator = (const sipwxURLDataObject &);

    char sipPyMethods[4];
};

sipwxURLDataObject::sipwxURLDataObject(const  ::wxString& url):  ::wxURLDataObject(url), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxURLDataObject::~sipwxURLDataObject()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxURLDataObject::GetAllFormats( ::wxDataFormat*formats, ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetAllFormats);

    if (!sipMeth)
    {
         ::wxURLDataObject::GetAllFormats(formats,dir);
        return;
    }

    extern void sipVH__core_59(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataFormat*, ::wxDataObject::Direction);

    sipVH__core_59(sipGILState, 0, sipPySelf, sipMeth, formats, dir);
}

size_t sipwxURLDataObject::GetFormatCount( ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetFormatCount);

    if (!sipMeth)
        return  ::wxURLDataObject::GetFormatCount(dir);

    extern size_t sipVH__core_62(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataObject::Direction);

    return sipVH__core_62(sipGILState, 0, sipPySelf, sipMeth, dir);
}

 ::wxDataFormat sipwxURLDataObject::GetPreferredFormat( ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,SIP_NULLPTR,sipName_GetPreferredFormat);

    if (!sipMeth)
        return  ::wxURLDataObject::GetPreferredFormat(dir);

    extern  ::wxDataFormat sipVH__core_63(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataObject::Direction);

    return sipVH__core_63(sipGILState, 0, sipPySelf, sipMeth, dir);
}

bool sipwxURLDataObject::SetData(const  ::wxDataFormat& format,size_t len,const void*buf)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_SetData);

    if (!sipMeth)
        return  ::wxURLDataObject::SetData(format,len,buf);

    extern bool sipVH__core_78(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataFormat&,size_t,const void*);

    return sipVH__core_78(sipGILState, 0, sipPySelf, sipMeth, format, len, buf);
}


PyDoc_STRVAR(doc_wxURLDataObject_GetURL, "GetURL() -> String\n"
"\n"
"Returns the URL stored by this object, as a string.");

extern "C" {static PyObject *meth_wxURLDataObject_GetURL(PyObject *, PyObject *);}
static PyObject *meth_wxURLDataObject_GetURL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxURLDataObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxURLDataObject, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetURL());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_URLDataObject, sipName_GetURL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxURLDataObject_SetURL, "SetURL(url)\n"
"\n"
"Sets the URL stored by this object.");

extern "C" {static PyObject *meth_wxURLDataObject_SetURL(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxURLDataObject_SetURL(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* url;
        int urlState = 0;
         ::wxURLDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_url,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxURLDataObject, &sipCpp, sipType_wxString,&url, &urlState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetURL(*url);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(url),sipType_wxString,urlState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_URLDataObject, sipName_SetURL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxURLDataObject_GetAllFormats, "GetAllFormats(dir=DataObject.Get)\n"
"\n"
"Returns a list of wx.DataFormat objects which this data object\n"
"supports transferring in the given direction.");

extern "C" {static PyObject *meth_wxURLDataObject_GetAllFormats(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxURLDataObject_GetAllFormats(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDataObject::Direction dir = wxDataObject::Get;
        const  ::wxURLDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxURLDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxURLDataObject_GetAllFormats(sipCpp, dir);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_URLDataObject, sipName_GetAllFormats, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxURLDataObject_SetData, "SetData(format, buf) -> bool");

extern "C" {static PyObject *meth_wxURLDataObject_SetData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxURLDataObject_SetData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxDataFormat* format;
         ::wxPyBuffer* buf;
        int bufState = 0;
         ::wxURLDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
            sipName_buf,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J0", &sipSelf, sipType_wxURLDataObject, &sipCpp, sipType_wxDataFormat, &format, sipType_wxPyBuffer,&buf, &bufState))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxURLDataObject_SetData(sipCpp, format, buf);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(buf,sipType_wxPyBuffer,bufState);

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_URLDataObject, sipName_SetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxURLDataObject_GetFormatCount, "GetFormatCount(self, dir: DataObject.Direction = wxDataObject.Get) -> int");

extern "C" {static PyObject *meth_wxURLDataObject_GetFormatCount(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxURLDataObject_GetFormatCount(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDataObject::Direction dir =  ::wxDataObject::Get;
        const  ::wxURLDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxURLDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxURLDataObject::GetFormatCount(dir) : sipCpp->GetFormatCount(dir));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_URLDataObject, sipName_GetFormatCount, doc_wxURLDataObject_GetFormatCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxURLDataObject_GetPreferredFormat, "GetPreferredFormat(self, dir: DataObject.Direction = wxDataObject.Get) -> DataFormat");

extern "C" {static PyObject *meth_wxURLDataObject_GetPreferredFormat(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxURLDataObject_GetPreferredFormat(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDataObject::Direction dir =  ::wxDataObject::Get;
        const  ::wxURLDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxURLDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
             ::wxDataFormat*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxDataFormat((sipSelfWasArg ? sipCpp-> ::wxURLDataObject::GetPreferredFormat(dir) : sipCpp->GetPreferredFormat(dir)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxDataFormat,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_URLDataObject, sipName_GetPreferredFormat, doc_wxURLDataObject_GetPreferredFormat);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_wxURLDataObject_GetDataSize(PyObject *, PyObject *);}
static PyObject *meth_wxURLDataObject_GetDataSize(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(SIP_NULLPTR, sipName_URLDataObject, sipName_GetDataSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_wxURLDataObject_GetDataHere(PyObject *, PyObject *);}
static PyObject *meth_wxURLDataObject_GetDataHere(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(SIP_NULLPTR, sipName_URLDataObject, sipName_GetDataHere, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxURLDataObject(void *, const sipTypeDef *);}
static void *cast_wxURLDataObject(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxURLDataObject *sipCpp = reinterpret_cast< ::wxURLDataObject *>(sipCppV);

    if (targetType == sipType_wxDataObject)
        return static_cast< ::wxDataObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxURLDataObject(void *, int);}
static void release_wxURLDataObject(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxURLDataObject *>(sipCppV);
    else
        delete reinterpret_cast< ::wxURLDataObject *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxURLDataObject(sipSimpleWrapper *);}
static void dealloc_wxURLDataObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxURLDataObject *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxURLDataObject(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxURLDataObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxURLDataObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxURLDataObject *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString& urldef = wxEmptyString;
        const  ::wxString* url = &urldef;
        int urlState = 0;

        static const char *sipKwdList[] = {
            sipName_url,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_wxString,&url, &urlState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxURLDataObject(*url);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(url),sipType_wxString,urlState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxURLDataObject[] = {{110, 255, 1}};


static PyMethodDef methods_wxURLDataObject[] = {
    {SIP_MLNAME_CAST(sipName_GetAllFormats), SIP_MLMETH_CAST(meth_wxURLDataObject_GetAllFormats), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxURLDataObject_GetAllFormats)},
    {SIP_MLNAME_CAST(sipName_GetDataHere), meth_wxURLDataObject_GetDataHere, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_GetDataSize), meth_wxURLDataObject_GetDataSize, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_GetFormatCount), SIP_MLMETH_CAST(meth_wxURLDataObject_GetFormatCount), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxURLDataObject_GetFormatCount)},
    {SIP_MLNAME_CAST(sipName_GetPreferredFormat), SIP_MLMETH_CAST(meth_wxURLDataObject_GetPreferredFormat), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxURLDataObject_GetPreferredFormat)},
    {SIP_MLNAME_CAST(sipName_GetURL), meth_wxURLDataObject_GetURL, METH_VARARGS, SIP_MLDOC_CAST(doc_wxURLDataObject_GetURL)},
    {SIP_MLNAME_CAST(sipName_SetData), SIP_MLMETH_CAST(meth_wxURLDataObject_SetData), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxURLDataObject_SetData)},
    {SIP_MLNAME_CAST(sipName_SetURL), SIP_MLMETH_CAST(meth_wxURLDataObject_SetURL), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxURLDataObject_SetURL)}
};

sipVariableDef variables_wxURLDataObject[] = {
    {PropertyVariable, sipName_URL, &methods_wxURLDataObject[5], &methods_wxURLDataObject[7], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_AllFormats, &methods_wxURLDataObject[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxURLDataObject, "URLDataObject(url=EmptyString)\n"
"\n"
"wxURLDataObject is a wxDataObject containing an URL and can be used\n"
"e.g.");


sipClassTypeDef sipTypeDef__core_wxURLDataObject = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxURLDataObject,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_URLDataObject,
        {0, 0, 1},
        8, methods_wxURLDataObject,
        0, SIP_NULLPTR,
        2, variables_wxURLDataObject,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxURLDataObject,
    -1,
    -1,
    supers_wxURLDataObject,
    SIP_NULLPTR,
    init_type_wxURLDataObject,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxURLDataObject,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxURLDataObject,
    cast_wxURLDataObject,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
