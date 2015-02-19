/**
 *  Copyright (C) 2015 3D Repo Ltd
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef REPODIALOGSETTINGS_H
#define REPODIALOGSETTINGS_H

#include <QDialog>
#include <QModelIndex>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>

namespace Ui {
    class RepoDialogSettings;
}

namespace repo {
namespace gui {

class RepoDialogSettings : public QDialog
{
    Q_OBJECT

public:

    //! Default constructor.
    explicit RepoDialogSettings(QWidget *parent = 0);

    //! Destructor to clean up list view and model proxies.
    ~RepoDialogSettings();

public slots :

    //! Applies all of the currently selected settings.
    void apply();

    void changeOptionsPane(const QModelIndex &);

private:

    Ui::RepoDialogSettings *ui;

    QStandardItemModel *optionsModel;

    QSortFilterProxyModel *optionsProxy;

};

} // end namespace gui
} // end namespace repo

#endif // REPODIALOGSETTINGS_H
