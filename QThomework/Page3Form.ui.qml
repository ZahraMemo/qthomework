import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtCharts 2.2

Item {
    id: item1
    property alias columnLayout: columnLayout
    property alias chartView: chartView

    Connections {
        target: netManager
        onCloseValue: {
            // auto range axis

            yAxis.min = y

            series3.append(x, y)
            if (x > xAxis.max) {
                xAxis.max = x
            }

            if (y > yAxis.max) {
                yAxis.max = y
            }
            if (y < yAxis.min) {
                yAxis.min = y
            }
        }
    }

    ColumnLayout {
        id: columnLayout
        anchors.fill: parent

        RowLayout {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            anchors.topMargin: 12
            Text {
                id: text1
                color: "#cc0527d1"
                text: qsTr("CloseValue (EUR to USD)")
                z: 1
                font.pointSize: 16
                font.italic: true
            }
        }
    }
    Item {
        id: item2
        x: 0
        y: 50
        width: parent.width
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 40
        anchors.top: parent.top
        anchors.topMargin: 40

        ChartView {
            id: chartView
            title: ""
            anchors.fill: parent
            ValueAxis {
                id: yAxis
                titleText: "Close value"
                titleVisible: true
                gridVisible: true
                tickCount: 11
                min: yAxis.min
                max: yAxis.max
            }
            DateTimeAxis {
                id: xAxis
                titleText: "Date"
                tickCount: 20
                visible: true
                labelsAngle: 90
                gridVisible: true
                format: "yyyy-MM-dd"
                min: "2018-08-22"
                max: "2018-12-15"
            }
            LineSeries {
                id: series3
                name: "Daily Forex Time Series"
                axisX: xAxis
                axisY: yAxis
                visible: true
            }
        }
    }
}

