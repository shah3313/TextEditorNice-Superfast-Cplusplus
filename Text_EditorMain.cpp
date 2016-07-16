/***************************************************************
 * Name:      Text_EditorMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Lorenzo Campanile (campanile_098#outlook.it)
 * Created:   2016-02-08
 * Copyright: Lorenzo Campanile ()
 * License:
 **************************************************************/

#include "Text_EditorMain.h"
#include <wx/msgdlg.h>
#include "fileHandle.h"
#include <iostream>

//(*InternalHeaders(Text_EditorFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Text_EditorFrame)
const long Text_EditorFrame::ID_STATICTEXT1 = wxNewId();
const long Text_EditorFrame::ID_TOGGLEBUTTON1 = wxNewId();
const long Text_EditorFrame::ID_BUTTON1 = wxNewId();
const long Text_EditorFrame::ID_TEXTCTRL1 = wxNewId();
const long Text_EditorFrame::ID_STATICTEXT2 = wxNewId();
const long Text_EditorFrame::ID_HYPERLINKCTRL1 = wxNewId();
const long Text_EditorFrame::ID_PANEL1 = wxNewId();
const long Text_EditorFrame::idMenuQuit = wxNewId();
const long Text_EditorFrame::ID_MENUITEM1 = wxNewId();
const long Text_EditorFrame::ID_MENUITEM3 = wxNewId();
const long Text_EditorFrame::ID_MENUITEM2 = wxNewId();
const long Text_EditorFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Text_EditorFrame,wxFrame)
    //(*EventTable(Text_EditorFrame)
    //*)
END_EVENT_TABLE()

Text_EditorFrame::Text_EditorFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Text_EditorFrame)
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, id, _("Text Editor"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(627,371));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    FlexGridSizer1 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Insert text here"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    ToggleButton1 = new wxToggleButton(Panel1, ID_TOGGLEBUTTON1, _("Save All"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON1"));
    FlexGridSizer1->Add(ToggleButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Delete All"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(421,310), wxTE_MULTILINE|wxVSCROLL, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    FlexGridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Click for relaxing ->"), wxDefaultPosition, wxSize(101,14), 0, _T("ID_STATICTEXT2"));
    FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5);
    HyperlinkCtrl1 = new wxHyperlinkCtrl(Panel1, ID_HYPERLINKCTRL1, _("Here!"), _("https://www.youtube.com/watch\?v=heavvFOGOTY"), wxDefaultPosition, wxDefaultSize, wxHL_CONTEXTMENU|wxHL_ALIGN_CENTRE|wxNO_BORDER, _T("ID_HYPERLINKCTRL1"));
    FlexGridSizer1->Add(HyperlinkCtrl1, 1, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5);
    Panel1->SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(Panel1);
    FlexGridSizer1->SetSizeHints(Panel1);
    BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuItem2 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Save"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItem2);
    MenuItem4 = new wxMenuItem(Menu1, ID_MENUITEM3, _("Open"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItem4);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu2, ID_MENUITEM2, _("Credits"), wxEmptyString, wxITEM_NORMAL);
    Menu2->Append(MenuItem3);
    MenuBar1->Append(Menu2, _("&Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    FileDialog1 = new wxFileDialog(this, _("Select file"), wxEmptyString, wxEmptyString, _("*.txt"), wxFD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));
    SetSizer(BoxSizer1);
    Layout();

    Connect(ID_TOGGLEBUTTON1,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&Text_EditorFrame::OnToggleButton1Toggle);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Text_EditorFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Text_EditorFrame::OnQuit);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Text_EditorFrame::OnMenuSaveSelected);
    Connect(ID_MENUITEM3,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Text_EditorFrame::OnMenuOpenSelected);
    Connect(ID_MENUITEM2,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Text_EditorFrame::OnMenuCreditsSelected);
    //*)
}

Text_EditorFrame::~Text_EditorFrame()
{
    //(*Destroy(Text_EditorFrame)
    //*)
}

void Text_EditorFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Text_EditorFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Text_EditorFrame::OnToggleButton1Toggle(wxCommandEvent& event)
{
     int result; // Variable for the result of file dialog
     result = FileDialog1->ShowModal(); // Show the File dialog and put the result in the variable
     if (result==wxID_OK)  // If press ok..
     {
         wxString directoryFile = FileDialog1->GetPath(); // Save the path
         wxString wxText=TextCtrl1->GetValue();  // Save the text
         std::string text = wxText.ToStdString(); // Convert the text of framework in a standard string
         std::string directory = directoryFile.ToStdString(); // Convert the text of the directory in a standard string
         fileOpen *f1 = new fileOpen(); // Create an istance of fileOpen (See fileHandle.h and fileHandle.cpp)
         f1->setFileOpened(text, directory); // Save the file
         wxMessageBox("File saved!", "Success", wxOK); // Message of success
     }
}

// The same thing of Button Save (Button1Toggle)
void Text_EditorFrame::OnMenuSaveSelected(wxCommandEvent& event)
{
     int result;
     result = FileDialog1->ShowModal();
     if (result==wxID_OK)
     {
         wxString directoryFile = FileDialog1->GetPath();
         wxString wxText=TextCtrl1->GetValue();
         std::string text = wxText.ToStdString();
         std::string directory = directoryFile.ToStdString();
         fileOpen *f1 = new fileOpen();
         f1->setFileOpened(text, directory);
         wxMessageBox("File saved!", "Success", wxOK);
     }
}

void Text_EditorFrame::OnButton1Click(wxCommandEvent& event)
{
    wxString nothing = ""; // Empty string
    TextCtrl1->SetValue(nothing); // Set the empty string
}

void Text_EditorFrame::OnMenuOpenSelected(wxCommandEvent& event)
{
    int result; // Variable for the result of file dialog
    result = FileDialog1->ShowModal(); // Show the File dialog and put the result in the variable
    if (result==wxID_OK)  // If press ok..
    {
         fileOpen *f1 = new fileOpen(); // Create an istance of fileOpen (See fileHandle.h and fileHandle.cpp)
         wxString directoryFile = FileDialog1->GetPath(); // Save the path in a variable
         std::string directory = directoryFile.ToStdString(); // Convert the text of the directory in a standard string
         std::string textForTextCtrl = f1->readFile(directory); // Get the text of the file
         TextCtrl1->SetValue(textForTextCtrl); // Write the text on the screen
         wxMessageBox("File opened!", "Success", wxOK); // Success!!

    }
}

void Text_EditorFrame::OnMenuCreditsSelected(wxCommandEvent& event)
{
    wxMessageBox("This program is made by Lorenzo Campanile", ":)", wxOK);
}
