import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtCharts 2.2

Item {
    id: item1

    Connections {
        target: netManager
        onHighValue: {
            // auto range axis

            yAxis.min = y

            series.append(x, y)

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
                text: qsTr("HighValue (EUR to USD)")
                z: 1
                font.italic: true
                font.pointSize: 16
            }
        }
    }

    Item {
        id: item2
        x: 0
        y: 50
        width: parent.width
        height: parent.height
        anchors.top: parent.top
        anchors.topMargin: 40
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 40

        ChartView {
            id: chartView
            title: ""
            anchors.fill: parent
            theme: ChartView.ChartThemeLight
            ValueAxis {
                id: yAxis
                titleText: "HighValue"
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
                id: series
                name: "Daily Forex Time Series"
                color: "lightgreen"
                width: 2
                axisX: xAxis
                axisY: yAxis
                visible: true
            }
        }
    }
}

