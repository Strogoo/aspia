//
// Aspia Project
// Copyright (C) 2018 Dmitry Chapyshev <dmitry@aspia.ru>
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

#ifndef IPC__IPC_SERVER_H
#define IPC__IPC_SERVER_H

#include "base/macros_magic.h"

#include <QPointer>

class QLocalServer;

namespace ipc {

class Channel;

class Server : public QObject
{
    Q_OBJECT

public:
    explicit Server(QObject* parent = nullptr);
    ~Server() = default;

    bool start();
    void stop();

    bool isStarted() const;

    void setChannelId(const QString& channel_id);
    QString channelId() const;

signals:
    void finished();
    void newConnection(Channel* channel);

private slots:
    void onNewConnection();

private:
    QString channel_id_;
    QPointer<QLocalServer> server_;

    DISALLOW_COPY_AND_ASSIGN(Server);
};

} // namespace ipc

#endif // IPC__IPC_SERVER_H
