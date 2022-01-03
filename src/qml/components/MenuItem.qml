import QtQuick 2.12
import QtQuick.Controls 2.12 as QC
import "../themes" 1.0

QC.MenuItem {
    contentItem: Text {
        id: contetItemText
        verticalAlignment: Text.AlignVCenter
        text: parent.text
        font: Theme.font
        color: parent.enabled ? Theme.textColor : Theme.altTextColor
    }
}
