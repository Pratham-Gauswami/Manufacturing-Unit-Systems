// UI.h
#ifndef UI_H
#define UI_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include "simulation.h"

class UI : public QMainWindow {
    Q_OBJECT

public:
    UI(QWidget* parent = nullptr);

private slots:
    void startSimulation();
    void stopSimulation();

private:
    QPushButton* startButton;
    QPushButton* stopButton;
    QTextEdit* logOutput;
    Simulation simulation;
};

#endif // UI_H