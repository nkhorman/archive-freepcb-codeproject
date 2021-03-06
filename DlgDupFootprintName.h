#pragma once
#include "afxwin.h"


// CDlgDupFootprintName dialog

class CDlgDupFootprintName : public CDialog
{
	DECLARE_DYNAMIC(CDlgDupFootprintName)

public:
	CDlgDupFootprintName(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgDupFootprintName();
	void Initialize( CString * message, CShapeList * cache_shapes );
	BOOL GetReplaceAllFlag(){ return m_replace_all_flag; };

// Dialog Data
	enum { IDD = IDD_DUP_FP_NAME };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CShapeList * m_cache_shapes;
	BOOL m_replace_all_flag;
	CString m_new_name_str;
	CString * m_str;
	CEdit m_edit_message;
	CButton m_radio_replace_all;
	CButton m_radio_replace_this;
	CEdit m_edit_new_name;
	afx_msg void OnBnClickedRadioReplaceThis();
	afx_msg void OnBnClickedRadioReplaceAll();
	afx_msg void OnBnClickedOk();
};
