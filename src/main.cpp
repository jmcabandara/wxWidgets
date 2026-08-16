#include <wx/wx.h>

class MyFrame : public wxFrame {
public:
  MyFrame()
      : wxFrame(nullptr, wxID_ANY, "wxWidgets Hello World", wxDefaultPosition,
                wxSize(500, 300)) {
    wxPanel *panel = new wxPanel(this);

    wxStaticText *text = new wxStaticText(
        panel, wxID_ANY, "Hello World from wxWidgets!", wxPoint(120, 100));

    text->SetFont(wxFontInfo(16).Bold());

    Centre();
  }
};

class MyApp : public wxApp {
public:
  virtual bool OnInit() {
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
  }
};

wxIMPLEMENT_APP(MyApp);