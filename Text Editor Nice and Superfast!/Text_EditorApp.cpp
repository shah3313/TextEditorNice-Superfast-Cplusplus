/***************************************************************
 * Name:      Text_EditorApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Lorenzo Campanile (campanile_098#outlook.it)
 * Created:   2016-02-08
 * Copyright: Lorenzo Campanile ()
 * License:
 **************************************************************/

#include "Text_EditorApp.h"

//(*AppHeaders
#include "Text_EditorMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Text_EditorApp);

bool Text_EditorApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Text_EditorFrame* Frame = new Text_EditorFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
