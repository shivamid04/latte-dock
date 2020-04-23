/*
 *  Copyright 2020  Michail Vourlakos <mvourlakos@gmail.com>
 *
 *  This file is part of Latte-Dock
 *
 *  Latte-Dock is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of
 *  the License, or (at your option) any later version.
 *
 *  Latte-Dock is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LATTECONTAINMENTTYPES_H
#define LATTECONTAINMENTTYPES_H

// Qt
#include <QObject>
#include <QMetaEnum>
#include <QMetaType>

namespace Latte {
namespace Containment {

class Types
{
    Q_GADGET

public:
    Types() = delete;
    ~Types() {}

    enum ActiveWindowFilterGroup
    {
        ActiveInCurrentScreen = 0,
        ActiveFromAllScreens
    };
    Q_ENUM(ActiveWindowFilterGroup);
};

}
}

#endif