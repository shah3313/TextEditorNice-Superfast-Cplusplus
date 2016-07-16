/***************************************************************
 * Name:      Text_EditorMain.h
 * Purpose:   Defines Application Frame
 * Author:    Lorenzo Campanile (campanile_098#outlook.it)
 * Created:   2016-02-08
 * Copyright: Lorenzo Campanile ()
 * License:
 **************************************************************/

#ifndef TEXT_EDITORMAIN_H
#define TEXT_EDITORMAIN_H

//(*Headers(Text_EditorFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/tglbtn.h>
#include <wx/panel.h>
#include <wx/filedlg.h>
#include <wx/hyperlink.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class Text_EditorFrame: public wxFrame
{
    public:

        Text_EditorFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Text_EditorFrame();

    private:

        //(*Handlers(Text_EditorFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1TextEnter(wxCommandEvent& event);
        void OnToggleButton1Toggle(wxCommandEvent& event);
        void OnMenuSaveSelected(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnMenuOpenSelected(wxCommandEvent& event);
        void OnMenuCreditsSelected(wxCommandEvent& event);
        //*)

        //(*Identifiers(Text_EditorFrame)
        static const long ID_STATICTEXT1;
        static const long ID_TOGGLEBUTTON1;
        static const long ID_BUTTON1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_HYPERLINKCTRL1;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long ID_MENUITEM1;
        static const long ID_MENUITEM3;
        static const long ID_MENUITEM2;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Text_EditorFrame)
        wxStaticText* StaticText2;
        wxMenuItem* MenuItem2;
        wxButton* Button1;
        wxMenuItem* MenuItem4;
        wxToggleButton* ToggleButton1;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxFileDialog* FileDialog1;
        wxHyperlinkCtrl* HyperlinkCtrl1;
        wxMenuItem* MenuItem3;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        wxMenu* Menu2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TEXT_EDITORMAIN_H
