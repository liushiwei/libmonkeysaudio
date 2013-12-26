#pragma once

BOOL CALLBACK FileInfoDialogProcedureA(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
    
class CAPEInfoDialog
{
public:

    CAPEInfoDialog();
    ~CAPEInfoDialog();

    int ShowAPEInfoDialog(const str_utfn * pFilename, HINSTANCE hInstance, const str_utfn * lpszTemplateName, HWND hWndParent);

private:

    static LRESULT CALLBACK DialogProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
    int FillGenreComboBox(HWND hDlg, int nComboBoxID, char * pSelectedGenre);
    IAPEDecompress * m_pAPEDecompress;
};
