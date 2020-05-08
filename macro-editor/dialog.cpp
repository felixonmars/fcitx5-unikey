/*
 * SPDX-FileCopyrightText: 2012-2018 CSSlayer <wengxt@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 */
#include "dialog.h"
#include "ui_dialog.h"

namespace fcitx {
namespace unikey {
MacroDialog::MacroDialog(QWidget *parent) : QDialog(parent) { setupUi(this); }

QString MacroDialog::macro() const { return macroLineEdit->text(); }

QString MacroDialog::word() const { return wordLineEdit->text(); }

} // namespace unikey
} // namespace fcitx
