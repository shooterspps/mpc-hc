/*
 * (C) 2006-2012 see Authors.txt
 *
 * This file is part of MPC-HC.
 *
 * MPC-HC is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * MPC-HC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <afxcmn.h>
#include "CMPCThemePPageBase.h"
#include "CMPCThemeButton.h"
#include "CMPCThemeRadioOrCheck.h"
#include "CMPCThemeEdit.h"
#include "CMPCThemeSpinButtonCtrl.h"
#include "CMPCThemeSliderCtrl.h"


// CPPageMisc dialog

class CPPageMisc : public CMPCThemePPageBase
{
    DECLARE_DYNAMIC(CPPageMisc)

private:
    int m_iBrightness;
    int m_iContrast;
    int m_iHue;
    int m_iSaturation;
    CString m_sBrightness;
    CString m_sContrast;
    CString m_sHue;
    CString m_sSaturation;

    CMPCThemeRadioOrCheck m_updaterAutoCheckCtrl;
    CMPCThemeEdit m_updaterDelayCtrl;
    CMPCThemeSpinButtonCtrl m_updaterDelaySpin;

    int m_nUpdaterAutoCheck;
    int m_nUpdaterDelay;

public:
    CPPageMisc();
    virtual ~CPPageMisc();

    // Dialog Data
    enum { IDD = IDD_PPAGEMISC };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    virtual BOOL OnInitDialog();
    virtual BOOL OnApply();

    DECLARE_MESSAGE_MAP()

public:
    CMPCThemeSliderCtrl m_SliContrast;
    CMPCThemeSliderCtrl m_SliBrightness;
    CMPCThemeSliderCtrl m_SliHue;
    CMPCThemeSliderCtrl m_SliSaturation;
    CMPCThemeButton m_ExportKeys;
    afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnBnClickedReset();

    afx_msg void OnUpdateDelayEditBox(CCmdUI* pCmdUI);

    afx_msg void OnResetSettings();
    afx_msg void OnExportSettings();
    afx_msg void OnExportKeys();

    virtual void OnCancel();
    void AdjustDynamicWidgets();
};
