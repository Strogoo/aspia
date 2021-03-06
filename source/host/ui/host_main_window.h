//
// Aspia Project
// Copyright (C) 2019 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef HOST__UI__HOST_MAIN_WINDOW_H
#define HOST__UI__HOST_MAIN_WINDOW_H

#include "base/macros_magic.h"
#include "common/locale_loader.h"
#include "host/host_settings.h"
#include "ui_host_main_window.h"

#include <QMainWindow>
#include <QPointer>
#include <QSystemTrayIcon>

namespace proto::host {
class Credentials;
} // namespace proto::host

namespace host {

class NotifierWindow;
class UiClient;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Settings& settings, common::LocaleLoader& locale_loader, QWidget* parent = nullptr);
    ~MainWindow();

public slots:
    void connectToService();
    void activateHost();
    void hideToTray();

protected:
    // QMainWindow implementation.
    void closeEvent(QCloseEvent* event) override;

private slots:
    void realClose();

    void onCredentialsReceived(const proto::host::Credentials& credentials);
    void onLanguageChanged(QAction* action);
    void onSettings();
    void onShowHide();
    void onHelp();
    void onAbout();
    void onExit();

private:
    void createLanguageMenu(const QString& current_locale);
    void refeshCredentials();

    Ui::HostMainWindow ui;

    bool should_be_quit_ = false;

    Settings& settings_;
    common::LocaleLoader& locale_loader_;

    QSystemTrayIcon tray_icon_;
    QMenu tray_menu_;

    QPointer<NotifierWindow> notifier_;
    QPointer<UiClient> client_;

    std::string id_;
    std::string ip_;
    std::string username_;
    std::string password_;

    DISALLOW_COPY_AND_ASSIGN(MainWindow);
};

} // namespace host

#endif // HOST__UI__HOST_MAIN_WINDOW_H
