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
    PyObject* _wxDataObject_GetAllFormats(const wxDataObject* self, wxDataObject::Direction dir)
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
    bool _wxDataObject_GetDataHere(const wxDataObject* self, const wxDataFormat* format, wxPyBuffer* buf)
    {
        if (!buf->checkSize(self->GetDataSize(*format)))
            return false;
        return self->GetDataHere(*format, buf->m_ptr);
    }
    bool _wxDataObject_SetData(wxDataObject* self, const wxDataFormat* format, wxPyBuffer* buf)
    {
        return self->SetData(*format, buf->m_len, buf->m_ptr);
    }
    void _wxDataObject__testGetAllFormats(wxDataObject* self)
    {
        size_t count = self->GetFormatCount();
        wxDataFormat* fmts = new wxDataFormat[count];
        self->GetAllFormats(fmts);
    }


class sipwxDataObject : public  ::wxDataObject
{
public:
    sipwxDataObject();
    virtual ~sipwxDataObject();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool SetData(const  ::wxDataFormat&,size_t,const void*) SIP_OVERRIDE;
     ::wxDataFormat GetPreferredFormat( ::wxDataObject::Direction) const SIP_OVERRIDE;
    size_t GetFormatCount( ::wxDataObject::Direction) const SIP_OVERRIDE;
    size_t GetDataSize(const  ::wxDataFormat&) const SIP_OVERRIDE;
    bool GetDataHere(const  ::wxDataFormat&,void*) const SIP_OVERRIDE;
    void GetAllFormats( ::wxDataFormat*, ::wxDataObject::Direction) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxDataObject(const sipwxDataObject &);
    sipwxDataObject &operator = (const sipwxDataObject &);

    char sipPyMethods[6];
};

sipwxDataObject::sipwxDataObject():  ::wxDataObject(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDataObject::~sipwxDataObject()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxDataObject::SetData(const  ::wxDataFormat& format,size_t len,const void*buf)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_SetData);

    if (!sipMeth)
        return  ::wxDataObject::SetData(format,len,buf);

    extern bool sipVH__core_64(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataFormat&,size_t,const void*);

    return sipVH__core_64(sipGILState, 0, sipPySelf, sipMeth, format, len, buf);
}

 ::wxDataFormat sipwxDataObject::GetPreferredFormat( ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_DataObject,sipName_GetPreferredFormat);

    if (!sipMeth)
        return  ::wxDataFormat();

    extern  ::wxDataFormat sipVH__core_63(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataObject::Direction);

    return sipVH__core_63(sipGILState, 0, sipPySelf, sipMeth, dir);
}

size_t sipwxDataObject::GetFormatCount( ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_DataObject,sipName_GetFormatCount);

    if (!sipMeth)
        return 0;

    extern size_t sipVH__core_62(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataObject::Direction);

    return sipVH__core_62(sipGILState, 0, sipPySelf, sipMeth, dir);
}

size_t sipwxDataObject::GetDataSize(const  ::wxDataFormat& format) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_DataObject,sipName_GetDataSize);

    if (!sipMeth)
        return 0;

    extern size_t sipVH__core_61(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataFormat&);

    return sipVH__core_61(sipGILState, 0, sipPySelf, sipMeth, format);
}

bool sipwxDataObject::GetDataHere(const  ::wxDataFormat& format,void*buf) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_DataObject,sipName_GetDataHere);

    if (!sipMeth)
        return 0;

    extern bool sipVH__core_60(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxDataFormat&,void*);

    return sipVH__core_60(sipGILState, 0, sipPySelf, sipMeth, format, buf);
}

void sipwxDataObject::GetAllFormats( ::wxDataFormat*formats, ::wxDataObject::Direction dir) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_DataObject,sipName_GetAllFormats);

    if (!sipMeth)
        return;

    extern void sipVH__core_59(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDataFormat*, ::wxDataObject::Direction);

    sipVH__core_59(sipGILState, 0, sipPySelf, sipMeth, formats, dir);
}


PyDoc_STRVAR(doc_wxDataObject_GetAllFormats, "GetAllFormats(dir=Get)\n"
"\n"
"Returns a list of wx.DataFormat objects which this data object\n"
"supports transferring in the given direction.");

extern "C" {static PyObject *meth_wxDataObject_GetAllFormats(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataObject_GetAllFormats(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxDataObject::Direction dir = wxDataObject::Get;
        const  ::wxDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DataObject, sipName_GetAllFormats);
                return SIP_NULLPTR;
            }

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxDataObject_GetAllFormats(sipCpp, dir);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataObject, sipName_GetAllFormats, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataObject_GetDataHere, "GetDataHere(format, buf) -> bool\n"
"\n"
"Copies this data object's data in the requested format to the buffer\n"
"provided.");

extern "C" {static PyObject *meth_wxDataObject_GetDataHere(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataObject_GetDataHere(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxDataFormat* format;
         ::wxPyBuffer* buf;
        int bufState = 0;
        const  ::wxDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
            sipName_buf,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J0", &sipSelf, sipType_wxDataObject, &sipCpp, sipType_wxDataFormat, &format, sipType_wxPyBuffer,&buf, &bufState))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DataObject, sipName_GetDataHere);
                return SIP_NULLPTR;
            }

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxDataObject_GetDataHere(sipCpp, format, buf);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(buf,sipType_wxPyBuffer,bufState);

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataObject, sipName_GetDataHere, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataObject_GetDataSize, "GetDataSize(format) -> size_t\n"
"\n"
"Returns the data size of the given format format.");

extern "C" {static PyObject *meth_wxDataObject_GetDataSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataObject_GetDataSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxDataFormat* format;
        const  ::wxDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxDataObject, &sipCpp, sipType_wxDataFormat, &format))
        {
            size_t sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DataObject, sipName_GetDataSize);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDataSize(*format);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataObject, sipName_GetDataSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataObject_GetFormatCount, "GetFormatCount(dir=Get) -> size_t\n"
"\n"
"Returns the number of available formats for rendering or setting the\n"
"data.");

extern "C" {static PyObject *meth_wxDataObject_GetFormatCount(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataObject_GetFormatCount(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxDataObject::Direction dir =  ::wxDataObject::Get;
        const  ::wxDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
            size_t sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DataObject, sipName_GetFormatCount);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFormatCount(dir);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataObject, sipName_GetFormatCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataObject_GetPreferredFormat, "GetPreferredFormat(dir=Get) -> DataFormat\n"
"\n"
"Returns the preferred format for either rendering the data (if dir is\n"
"Get, its default value) or for setting it.");

extern "C" {static PyObject *meth_wxDataObject_GetPreferredFormat(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataObject_GetPreferredFormat(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxDataObject::Direction dir =  ::wxDataObject::Get;
        const  ::wxDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_wxDataObject, &sipCpp, sipType_wxDataObject_Direction, &dir))
        {
             ::wxDataFormat*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DataObject, sipName_GetPreferredFormat);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxDataFormat(sipCpp->GetPreferredFormat(dir));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxDataFormat,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataObject, sipName_GetPreferredFormat, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataObject_SetData, "SetData(format, buf) -> bool\n"
"\n"
"Copies data from the provided buffer to this data object for the\n"
"specified format.");

extern "C" {static PyObject *meth_wxDataObject_SetData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataObject_SetData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxDataFormat* format;
         ::wxPyBuffer* buf;
        int bufState = 0;
         ::wxDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
            sipName_buf,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J0", &sipSelf, sipType_wxDataObject, &sipCpp, sipType_wxDataFormat, &format, sipType_wxPyBuffer,&buf, &bufState))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxDataObject_SetData(sipCpp, format, buf);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(buf,sipType_wxPyBuffer,bufState);

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataObject, sipName_SetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataObject_IsSupported, "IsSupported(format, dir=Get) -> bool\n"
"\n"
"Returns true if this format is supported.");

extern "C" {static PyObject *meth_wxDataObject_IsSupported(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDataObject_IsSupported(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDataFormat* format;
         ::wxDataObject::Direction dir =  ::wxDataObject::Get;
        const  ::wxDataObject *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
            sipName_dir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9|E", &sipSelf, sipType_wxDataObject, &sipCpp, sipType_wxDataFormat, &format, sipType_wxDataObject_Direction, &dir))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsSupported(*format,dir);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataObject, sipName_IsSupported, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDataObject__testGetAllFormats, "_testGetAllFormats()");

extern "C" {static PyObject *meth_wxDataObject__testGetAllFormats(PyObject *, PyObject *);}
static PyObject *meth_wxDataObject__testGetAllFormats(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDataObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDataObject, &sipCpp))
        {
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxDataObject__testGetAllFormats(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataObject, sipName__testGetAllFormats, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDataObject(void *, int);}
static void release_wxDataObject(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxDataObject *>(sipCppV);
    else
        delete reinterpret_cast< ::wxDataObject *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDataObject(sipSimpleWrapper *);}
static void dealloc_wxDataObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxDataObject *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDataObject(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxDataObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDataObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxDataObject *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxDataObject();
            Py_END_ALLOW_THREADS

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


static PyMethodDef methods_wxDataObject[] = {
    {SIP_MLNAME_CAST(sipName_GetAllFormats), SIP_MLMETH_CAST(meth_wxDataObject_GetAllFormats), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataObject_GetAllFormats)},
    {SIP_MLNAME_CAST(sipName_GetDataHere), SIP_MLMETH_CAST(meth_wxDataObject_GetDataHere), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataObject_GetDataHere)},
    {SIP_MLNAME_CAST(sipName_GetDataSize), SIP_MLMETH_CAST(meth_wxDataObject_GetDataSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataObject_GetDataSize)},
    {SIP_MLNAME_CAST(sipName_GetFormatCount), SIP_MLMETH_CAST(meth_wxDataObject_GetFormatCount), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataObject_GetFormatCount)},
    {SIP_MLNAME_CAST(sipName_GetPreferredFormat), SIP_MLMETH_CAST(meth_wxDataObject_GetPreferredFormat), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataObject_GetPreferredFormat)},
    {SIP_MLNAME_CAST(sipName_IsSupported), SIP_MLMETH_CAST(meth_wxDataObject_IsSupported), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataObject_IsSupported)},
    {SIP_MLNAME_CAST(sipName_SetData), SIP_MLMETH_CAST(meth_wxDataObject_SetData), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDataObject_SetData)},
    {SIP_MLNAME_CAST(sipName__testGetAllFormats), meth_wxDataObject__testGetAllFormats, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDataObject__testGetAllFormats)}
};

static sipEnumMemberDef enummembers_wxDataObject[] = {
    {sipName_Both, static_cast<int>( ::wxDataObject::Both), 111},
    {sipName_Get, static_cast<int>( ::wxDataObject::Get), 111},
    {sipName_Set, static_cast<int>( ::wxDataObject::Set), 111},
};

sipVariableDef variables_wxDataObject[] = {
    {PropertyVariable, sipName_PreferredFormat, &methods_wxDataObject[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FormatCount, &methods_wxDataObject[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_DataHere, &methods_wxDataObject[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_AllFormats, &methods_wxDataObject[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxDataObject, "DataObject()\n"
"\n"
"A wxDataObject represents data that can be copied to or from the\n"
"clipboard, or dragged and dropped.");


sipClassTypeDef sipTypeDef__core_wxDataObject = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxDataObject,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_DataObject,
        {0, 0, 1},
        8, methods_wxDataObject,
        3, enummembers_wxDataObject,
        4, variables_wxDataObject,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDataObject,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxDataObject,
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
    dealloc_wxDataObject,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDataObject,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
