// UI.cpp
#include "uI.h"
#include <QVBoxLayout>

UI::UI(QWidget* parent) : QMainWindow(parent) {
    setWindowTitle("Manufacturing Unit Systems");

    startButton = new QPushButton("Start Simulation", this);
    stopButton = new QPushButton("Stop Simulation", this);
    logOutput = new QTextEdit(this);
    logOutput->setReadOnly(true);

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(startButton);
    layout->addWidget(stopButton);
    layout->addWidget(logOutput);

    QWidget* centralWidget = new QWidget();
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    connect(startButton, &QPushButton::clicked, this, &UI::startSimulation);
    connect(stopButton, &QPushButton::clicked, this, &UI::stopSimulation);
}

void UI::startSimulation() {
    logOutput->append("Simulation started.");
    simulation.run();
}

void UI::stopSimulation() {
    logOutput->append("Simulation stopped.");
    simulation.stop();
}