/********************************************************************************
** Form generated from reading UI file 'OBSBasic.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASIC_H
#define UI_OBSBASIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "source-list-widget.hpp"
#include "vertical-scroll-area.hpp"
#include "window-basic-preview.hpp"
#include "window-basic-status-bar.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasic
{
public:
    QAction *actionAddScene;
    QAction *actionAddSource;
    QAction *actionRemoveScene;
    QAction *actionRemoveSource;
    QAction *actionSourceProperties;
    QAction *actionSceneUp;
    QAction *actionSourceUp;
    QAction *actionSceneDown;
    QAction *actionSourceDown;
    QAction *actionShow_Recordings;
    QAction *actionRemux;
    QAction *action_Settings;
    QAction *actionE_xit;
    QAction *actionShowLogs;
    QAction *actionUploadLastLog;
    QAction *actionUploadCurrentLog;
    QAction *actionViewCurrentLog;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionEditTransform;
    QAction *actionRotate90CW;
    QAction *actionRotate90CCW;
    QAction *actionRotate180;
    QAction *actionFitToScreen;
    QAction *actionStretchToScreen;
    QAction *actionResetTransform;
    QAction *actionCenterToScreen;
    QAction *actionFlipHorizontal;
    QAction *actionFlipVertical;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QAction *actionMoveToTop;
    QAction *actionMoveToBottom;
    QAction *actionCheckForUpdates;
    QAction *actionInteract;
    QAction *actionAdvAudioProperties;
    QAction *actionWebsite;
    QAction *actionNewSceneCollection;
    QAction *actionDupSceneCollection;
    QAction *actionRenameSceneCollection;
    QAction *actionRemoveSceneCollection;
    QAction *actionNewProfile;
    QAction *actionDupProfile;
    QAction *actionRenameProfile;
    QAction *actionRemoveProfile;
    QAction *actionShowSettingsFolder;
    QAction *actionShowProfileFolder;
    QAction *actionAlwaysOnTop;
    QAction *toggleListboxToolbars;
    QAction *toggleSceneTransitions;
    QAction *toggleStatusBar;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *mainSplitter;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *previewLayout;
    QVBoxLayout *previewTextLayout;
    OBSBasicPreview *preview;
    QLabel *previewDisabledLabel;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *buttonsVLayout;
    QPushButton *streamButton;
    QPushButton *recordButton;
    QPushButton *modeSwitch;
    QPushButton *settingsButton;
    QPushButton *VetvPreview;
    QPushButton *exitButton;
    QSpacerItem *expVSpacer_2;
    VScrollArea *scrollArea;
    QWidget *volumeWidgets;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *scenesVLayout;
    QFrame *scenesFrame;
    QVBoxLayout *verticalLayout_11;
    QListWidget *scenes;
    QToolBar *scenesToolbar;
    QSpacerItem *scenesFixedSizeHSpacer;
    QLabel *sourcesLabel;
    QHBoxLayout *mixadvHLayout;
    QLabel *mixerLabel;
    QPushButton *advAudioProps;
    QSpacerItem *mixadvHSpacer_4;
    QVBoxLayout *sourcesVLayout;
    QFrame *sourcesFrame;
    QVBoxLayout *verticalLayout_16;
    SourceListWidget *sources;
    QToolBar *sourcesToolbar;
    QSpacerItem *sourcesFixedSizeHSpacer;
    QLabel *scenesLabel;
    QLabel *sceneTransitionsLabel;
    QWidget *transitionsContainer;
    QVBoxLayout *verticalLayout;
    QComboBox *transitions;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *transitionAdd;
    QPushButton *transitionRemove;
    QPushButton *transitionProps;
    QHBoxLayout *horizontalLayout_3;
    QLabel *transitionDurationLabel;
    QSpinBox *transitionDuration;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuBasic_MainMenu_Help;
    QMenu *menuLogFiles;
    QMenu *menuBasic_MainMenu_Edit;
    QMenu *transformMenu;
    QMenu *orderMenu;
    QMenu *profileMenu;
    QMenu *sceneCollectionMenu;
    QMenu *viewMenu;
    QMenu *viewMenuToolbars;
    OBSBasicStatusBar *statusbar;

    void setupUi(QMainWindow *OBSBasic)
    {
        if (OBSBasic->objectName().isEmpty())
            OBSBasic->setObjectName(QStringLiteral("OBSBasic"));
        OBSBasic->resize(957, 724);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OBSBasic->sizePolicy().hasHeightForWidth());
        OBSBasic->setSizePolicy(sizePolicy);
        OBSBasic->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/images/obs.png"), QSize(), QIcon::Normal, QIcon::Off);
        OBSBasic->setWindowIcon(icon);
        OBSBasic->setStyleSheet(QStringLiteral(""));
        actionAddScene = new QAction(OBSBasic);
        actionAddScene->setObjectName(QStringLiteral("actionAddScene"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddScene->setIcon(icon1);
        actionAddScene->setProperty("themeID", QVariant(QStringLiteral("addIconSmall")));
        actionAddSource = new QAction(OBSBasic);
        actionAddSource->setObjectName(QStringLiteral("actionAddSource"));
        actionAddSource->setIcon(icon1);
        actionAddSource->setProperty("themeID", QVariant(QStringLiteral("addIconSmall")));
        actionRemoveScene = new QAction(OBSBasic);
        actionRemoveScene->setObjectName(QStringLiteral("actionRemoveScene"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/images/list_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveScene->setIcon(icon2);
        actionRemoveScene->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionRemoveScene->setProperty("themeID", QVariant(QStringLiteral("removeIconSmall")));
        actionRemoveSource = new QAction(OBSBasic);
        actionRemoveSource->setObjectName(QStringLiteral("actionRemoveSource"));
        actionRemoveSource->setIcon(icon2);
        actionRemoveSource->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionRemoveSource->setProperty("themeID", QVariant(QStringLiteral("removeIconSmall")));
        actionSourceProperties = new QAction(OBSBasic);
        actionSourceProperties->setObjectName(QStringLiteral("actionSourceProperties"));
        actionSourceProperties->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/images/properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSourceProperties->setIcon(icon3);
        actionSourceProperties->setProperty("themeID", QVariant(QStringLiteral("propertiesIconSmall")));
        actionSceneUp = new QAction(OBSBasic);
        actionSceneUp->setObjectName(QStringLiteral("actionSceneUp"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneUp->setIcon(icon4);
        actionSceneUp->setProperty("themeID", QVariant(QStringLiteral("upArrowIconSmall")));
        actionSourceUp = new QAction(OBSBasic);
        actionSourceUp->setObjectName(QStringLiteral("actionSourceUp"));
        actionSourceUp->setEnabled(true);
        actionSourceUp->setIcon(icon4);
        actionSourceUp->setProperty("themeID", QVariant(QStringLiteral("upArrowIconSmall")));
        actionSceneDown = new QAction(OBSBasic);
        actionSceneDown->setObjectName(QStringLiteral("actionSceneDown"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneDown->setIcon(icon5);
        actionSceneDown->setProperty("themeID", QVariant(QStringLiteral("downArrowIconSmall")));
        actionSourceDown = new QAction(OBSBasic);
        actionSourceDown->setObjectName(QStringLiteral("actionSourceDown"));
        actionSourceDown->setEnabled(true);
        actionSourceDown->setIcon(icon5);
        actionSourceDown->setProperty("themeID", QVariant(QStringLiteral("downArrowIconSmall")));
        actionShow_Recordings = new QAction(OBSBasic);
        actionShow_Recordings->setObjectName(QStringLiteral("actionShow_Recordings"));
        actionRemux = new QAction(OBSBasic);
        actionRemux->setObjectName(QStringLiteral("actionRemux"));
        action_Settings = new QAction(OBSBasic);
        action_Settings->setObjectName(QStringLiteral("action_Settings"));
        actionE_xit = new QAction(OBSBasic);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        actionShowLogs = new QAction(OBSBasic);
        actionShowLogs->setObjectName(QStringLiteral("actionShowLogs"));
        actionUploadLastLog = new QAction(OBSBasic);
        actionUploadLastLog->setObjectName(QStringLiteral("actionUploadLastLog"));
        actionUploadCurrentLog = new QAction(OBSBasic);
        actionUploadCurrentLog->setObjectName(QStringLiteral("actionUploadCurrentLog"));
        actionViewCurrentLog = new QAction(OBSBasic);
        actionViewCurrentLog->setObjectName(QStringLiteral("actionViewCurrentLog"));
        actionUndo = new QAction(OBSBasic);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionUndo->setEnabled(false);
        actionRedo = new QAction(OBSBasic);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionRedo->setEnabled(false);
        actionEditTransform = new QAction(OBSBasic);
        actionEditTransform->setObjectName(QStringLiteral("actionEditTransform"));
        actionRotate90CW = new QAction(OBSBasic);
        actionRotate90CW->setObjectName(QStringLiteral("actionRotate90CW"));
        actionRotate90CCW = new QAction(OBSBasic);
        actionRotate90CCW->setObjectName(QStringLiteral("actionRotate90CCW"));
        actionRotate180 = new QAction(OBSBasic);
        actionRotate180->setObjectName(QStringLiteral("actionRotate180"));
        actionFitToScreen = new QAction(OBSBasic);
        actionFitToScreen->setObjectName(QStringLiteral("actionFitToScreen"));
        actionStretchToScreen = new QAction(OBSBasic);
        actionStretchToScreen->setObjectName(QStringLiteral("actionStretchToScreen"));
        actionResetTransform = new QAction(OBSBasic);
        actionResetTransform->setObjectName(QStringLiteral("actionResetTransform"));
        actionCenterToScreen = new QAction(OBSBasic);
        actionCenterToScreen->setObjectName(QStringLiteral("actionCenterToScreen"));
        actionFlipHorizontal = new QAction(OBSBasic);
        actionFlipHorizontal->setObjectName(QStringLiteral("actionFlipHorizontal"));
        actionFlipVertical = new QAction(OBSBasic);
        actionFlipVertical->setObjectName(QStringLiteral("actionFlipVertical"));
        actionMoveUp = new QAction(OBSBasic);
        actionMoveUp->setObjectName(QStringLiteral("actionMoveUp"));
        actionMoveDown = new QAction(OBSBasic);
        actionMoveDown->setObjectName(QStringLiteral("actionMoveDown"));
        actionMoveToTop = new QAction(OBSBasic);
        actionMoveToTop->setObjectName(QStringLiteral("actionMoveToTop"));
        actionMoveToBottom = new QAction(OBSBasic);
        actionMoveToBottom->setObjectName(QStringLiteral("actionMoveToBottom"));
        actionCheckForUpdates = new QAction(OBSBasic);
        actionCheckForUpdates->setObjectName(QStringLiteral("actionCheckForUpdates"));
        actionInteract = new QAction(OBSBasic);
        actionInteract->setObjectName(QStringLiteral("actionInteract"));
        actionAdvAudioProperties = new QAction(OBSBasic);
        actionAdvAudioProperties->setObjectName(QStringLiteral("actionAdvAudioProperties"));
        actionWebsite = new QAction(OBSBasic);
        actionWebsite->setObjectName(QStringLiteral("actionWebsite"));
        actionNewSceneCollection = new QAction(OBSBasic);
        actionNewSceneCollection->setObjectName(QStringLiteral("actionNewSceneCollection"));
        actionDupSceneCollection = new QAction(OBSBasic);
        actionDupSceneCollection->setObjectName(QStringLiteral("actionDupSceneCollection"));
        actionRenameSceneCollection = new QAction(OBSBasic);
        actionRenameSceneCollection->setObjectName(QStringLiteral("actionRenameSceneCollection"));
        actionRemoveSceneCollection = new QAction(OBSBasic);
        actionRemoveSceneCollection->setObjectName(QStringLiteral("actionRemoveSceneCollection"));
        actionNewProfile = new QAction(OBSBasic);
        actionNewProfile->setObjectName(QStringLiteral("actionNewProfile"));
        actionDupProfile = new QAction(OBSBasic);
        actionDupProfile->setObjectName(QStringLiteral("actionDupProfile"));
        actionRenameProfile = new QAction(OBSBasic);
        actionRenameProfile->setObjectName(QStringLiteral("actionRenameProfile"));
        actionRemoveProfile = new QAction(OBSBasic);
        actionRemoveProfile->setObjectName(QStringLiteral("actionRemoveProfile"));
        actionShowSettingsFolder = new QAction(OBSBasic);
        actionShowSettingsFolder->setObjectName(QStringLiteral("actionShowSettingsFolder"));
        actionShowProfileFolder = new QAction(OBSBasic);
        actionShowProfileFolder->setObjectName(QStringLiteral("actionShowProfileFolder"));
        actionAlwaysOnTop = new QAction(OBSBasic);
        actionAlwaysOnTop->setObjectName(QStringLiteral("actionAlwaysOnTop"));
        actionAlwaysOnTop->setCheckable(true);
        toggleListboxToolbars = new QAction(OBSBasic);
        toggleListboxToolbars->setObjectName(QStringLiteral("toggleListboxToolbars"));
        toggleListboxToolbars->setCheckable(true);
        toggleListboxToolbars->setChecked(true);
        toggleSceneTransitions = new QAction(OBSBasic);
        toggleSceneTransitions->setObjectName(QStringLiteral("toggleSceneTransitions"));
        toggleSceneTransitions->setCheckable(true);
        toggleSceneTransitions->setChecked(true);
        toggleStatusBar = new QAction(OBSBasic);
        toggleStatusBar->setObjectName(QStringLiteral("toggleStatusBar"));
        toggleStatusBar->setCheckable(true);
        toggleStatusBar->setChecked(true);
        centralwidget = new QWidget(OBSBasic);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mainSplitter = new QSplitter(centralwidget);
        mainSplitter->setObjectName(QStringLiteral("mainSplitter"));
        mainSplitter->setOrientation(Qt::Vertical);
        mainSplitter->setChildrenCollapsible(false);
        verticalLayoutWidget_7 = new QWidget(mainSplitter);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        previewLayout = new QHBoxLayout();
        previewLayout->setSpacing(2);
        previewLayout->setObjectName(QStringLiteral("previewLayout"));
        previewTextLayout = new QVBoxLayout();
        previewTextLayout->setSpacing(4);
        previewTextLayout->setObjectName(QStringLiteral("previewTextLayout"));
        preview = new OBSBasicPreview(verticalLayoutWidget_7);
        preview->setObjectName(QStringLiteral("preview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(32, 32));
        preview->setFocusPolicy(Qt::ClickFocus);
        preview->setContextMenuPolicy(Qt::CustomContextMenu);

        previewTextLayout->addWidget(preview);


        previewLayout->addLayout(previewTextLayout);


        verticalLayout_14->addLayout(previewLayout);

        previewDisabledLabel = new QLabel(verticalLayoutWidget_7);
        previewDisabledLabel->setObjectName(QStringLiteral("previewDisabledLabel"));
        sizePolicy1.setHeightForWidth(previewDisabledLabel->sizePolicy().hasHeightForWidth());
        previewDisabledLabel->setSizePolicy(sizePolicy1);
        previewDisabledLabel->setContextMenuPolicy(Qt::CustomContextMenu);
        previewDisabledLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(previewDisabledLabel);

        mainSplitter->addWidget(verticalLayoutWidget_7);
        gridLayoutWidget_2 = new QWidget(mainSplitter);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonsVLayout = new QVBoxLayout();
        buttonsVLayout->setSpacing(2);
        buttonsVLayout->setObjectName(QStringLiteral("buttonsVLayout"));
        streamButton = new QPushButton(gridLayoutWidget_2);
        streamButton->setObjectName(QStringLiteral("streamButton"));
        streamButton->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(streamButton->sizePolicy().hasHeightForWidth());
        streamButton->setSizePolicy(sizePolicy2);
        streamButton->setCheckable(false);

        buttonsVLayout->addWidget(streamButton);

        recordButton = new QPushButton(gridLayoutWidget_2);
        recordButton->setObjectName(QStringLiteral("recordButton"));
        recordButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(recordButton->sizePolicy().hasHeightForWidth());
        recordButton->setSizePolicy(sizePolicy2);
        recordButton->setMinimumSize(QSize(130, 0));

        buttonsVLayout->addWidget(recordButton);

        modeSwitch = new QPushButton(gridLayoutWidget_2);
        modeSwitch->setObjectName(QStringLiteral("modeSwitch"));
        modeSwitch->setCheckable(true);

        buttonsVLayout->addWidget(modeSwitch);

        settingsButton = new QPushButton(gridLayoutWidget_2);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        sizePolicy2.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy2);

        buttonsVLayout->addWidget(settingsButton);

        VetvPreview = new QPushButton(gridLayoutWidget_2);
        VetvPreview->setObjectName(QStringLiteral("VetvPreview"));

        buttonsVLayout->addWidget(VetvPreview);

        exitButton = new QPushButton(gridLayoutWidget_2);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        sizePolicy2.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy2);

        buttonsVLayout->addWidget(exitButton);

        expVSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        buttonsVLayout->addItem(expVSpacer_2);


        gridLayout_2->addLayout(buttonsVLayout, 1, 4, 1, 1);

        scrollArea = new VScrollArea(gridLayoutWidget_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(220, 0));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        volumeWidgets = new QWidget();
        volumeWidgets->setObjectName(QStringLiteral("volumeWidgets"));
        volumeWidgets->setGeometry(QRect(0, 0, 201, 16));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(volumeWidgets->sizePolicy().hasHeightForWidth());
        volumeWidgets->setSizePolicy(sizePolicy3);
        verticalLayout_18 = new QVBoxLayout(volumeWidgets);
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(volumeWidgets);

        gridLayout_2->addWidget(scrollArea, 1, 2, 1, 1);

        scenesVLayout = new QVBoxLayout();
        scenesVLayout->setSpacing(0);
        scenesVLayout->setObjectName(QStringLiteral("scenesVLayout"));
        scenesFrame = new QFrame(gridLayoutWidget_2);
        scenesFrame->setObjectName(QStringLiteral("scenesFrame"));
        sizePolicy1.setHeightForWidth(scenesFrame->sizePolicy().hasHeightForWidth());
        scenesFrame->setSizePolicy(sizePolicy1);
        scenesFrame->setMinimumSize(QSize(160, 0));
        scenesFrame->setMaximumSize(QSize(260, 16777215));
        scenesFrame->setFrameShape(QFrame::StyledPanel);
        scenesFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_11 = new QVBoxLayout(scenesFrame);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        scenes = new QListWidget(scenesFrame);
        scenes->setObjectName(QStringLiteral("scenes"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scenes->sizePolicy().hasHeightForWidth());
        scenes->setSizePolicy(sizePolicy4);
        scenes->setContextMenuPolicy(Qt::CustomContextMenu);
        scenes->setFrameShape(QFrame::NoFrame);
        scenes->setFrameShadow(QFrame::Plain);
        scenes->setProperty("showDropIndicator", QVariant(true));
        scenes->setDragEnabled(true);
        scenes->setDragDropMode(QAbstractItemView::InternalMove);
        scenes->setDefaultDropAction(Qt::TargetMoveAction);

        verticalLayout_11->addWidget(scenes);

        scenesToolbar = new QToolBar(scenesFrame);
        scenesToolbar->setObjectName(QStringLiteral("scenesToolbar"));
        scenesToolbar->setIconSize(QSize(16, 16));
        scenesToolbar->setFloatable(false);

        verticalLayout_11->addWidget(scenesToolbar);

        scenesFixedSizeHSpacer = new QSpacerItem(150, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_11->addItem(scenesFixedSizeHSpacer);


        scenesVLayout->addWidget(scenesFrame);


        gridLayout_2->addLayout(scenesVLayout, 1, 0, 1, 1);

        sourcesLabel = new QLabel(gridLayoutWidget_2);
        sourcesLabel->setObjectName(QStringLiteral("sourcesLabel"));

        gridLayout_2->addWidget(sourcesLabel, 0, 1, 1, 1);

        mixadvHLayout = new QHBoxLayout();
        mixadvHLayout->setSpacing(2);
        mixadvHLayout->setObjectName(QStringLiteral("mixadvHLayout"));
        mixerLabel = new QLabel(gridLayoutWidget_2);
        mixerLabel->setObjectName(QStringLiteral("mixerLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mixerLabel->sizePolicy().hasHeightForWidth());
        mixerLabel->setSizePolicy(sizePolicy5);

        mixadvHLayout->addWidget(mixerLabel);

        advAudioProps = new QPushButton(gridLayoutWidget_2);
        advAudioProps->setObjectName(QStringLiteral("advAudioProps"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(advAudioProps->sizePolicy().hasHeightForWidth());
        advAudioProps->setSizePolicy(sizePolicy6);
        advAudioProps->setMaximumSize(QSize(22, 22));
        advAudioProps->setText(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/images/configuration21_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        advAudioProps->setIcon(icon6);
        advAudioProps->setFlat(true);
        advAudioProps->setProperty("themeID", QVariant(QStringLiteral("configIconSmall")));

        mixadvHLayout->addWidget(advAudioProps);

        mixadvHSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mixadvHLayout->addItem(mixadvHSpacer_4);


        gridLayout_2->addLayout(mixadvHLayout, 0, 2, 1, 1);

        sourcesVLayout = new QVBoxLayout();
        sourcesVLayout->setSpacing(0);
        sourcesVLayout->setObjectName(QStringLiteral("sourcesVLayout"));
        sourcesFrame = new QFrame(gridLayoutWidget_2);
        sourcesFrame->setObjectName(QStringLiteral("sourcesFrame"));
        sizePolicy1.setHeightForWidth(sourcesFrame->sizePolicy().hasHeightForWidth());
        sourcesFrame->setSizePolicy(sizePolicy1);
        sourcesFrame->setMinimumSize(QSize(160, 0));
        sourcesFrame->setMaximumSize(QSize(260, 16777215));
        sourcesFrame->setFrameShape(QFrame::StyledPanel);
        sourcesFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_16 = new QVBoxLayout(sourcesFrame);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        sources = new SourceListWidget(sourcesFrame);
        sources->setObjectName(QStringLiteral("sources"));
        sizePolicy4.setHeightForWidth(sources->sizePolicy().hasHeightForWidth());
        sources->setSizePolicy(sizePolicy4);
        sources->setContextMenuPolicy(Qt::CustomContextMenu);
        sources->setFrameShape(QFrame::NoFrame);
        sources->setProperty("showDropIndicator", QVariant(true));
        sources->setDragEnabled(true);
        sources->setDragDropMode(QAbstractItemView::InternalMove);
        sources->setDefaultDropAction(Qt::TargetMoveAction);
        sources->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_16->addWidget(sources);

        sourcesToolbar = new QToolBar(sourcesFrame);
        sourcesToolbar->setObjectName(QStringLiteral("sourcesToolbar"));
        sourcesToolbar->setIconSize(QSize(16, 16));
        sourcesToolbar->setFloatable(false);

        verticalLayout_16->addWidget(sourcesToolbar);

        sourcesFixedSizeHSpacer = new QSpacerItem(150, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_16->addItem(sourcesFixedSizeHSpacer);


        sourcesVLayout->addWidget(sourcesFrame);


        gridLayout_2->addLayout(sourcesVLayout, 1, 1, 1, 1);

        scenesLabel = new QLabel(gridLayoutWidget_2);
        scenesLabel->setObjectName(QStringLiteral("scenesLabel"));

        gridLayout_2->addWidget(scenesLabel, 0, 0, 1, 1);

        sceneTransitionsLabel = new QLabel(gridLayoutWidget_2);
        sceneTransitionsLabel->setObjectName(QStringLiteral("sceneTransitionsLabel"));

        gridLayout_2->addWidget(sceneTransitionsLabel, 0, 3, 1, 1);

        transitionsContainer = new QWidget(gridLayoutWidget_2);
        transitionsContainer->setObjectName(QStringLiteral("transitionsContainer"));
        verticalLayout = new QVBoxLayout(transitionsContainer);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 2);
        transitions = new QComboBox(transitionsContainer);
        transitions->setObjectName(QStringLiteral("transitions"));
        transitions->setMinimumSize(QSize(120, 0));

        verticalLayout->addWidget(transitions);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        transitionAdd = new QPushButton(transitionsContainer);
        transitionAdd->setObjectName(QStringLiteral("transitionAdd"));
        sizePolicy6.setHeightForWidth(transitionAdd->sizePolicy().hasHeightForWidth());
        transitionAdd->setSizePolicy(sizePolicy6);
        transitionAdd->setMaximumSize(QSize(22, 22));
        transitionAdd->setText(QStringLiteral(""));
        transitionAdd->setIcon(icon1);
        transitionAdd->setFlat(true);
        transitionAdd->setProperty("themeID", QVariant(QStringLiteral("addIconSmall")));

        horizontalLayout_4->addWidget(transitionAdd);

        transitionRemove = new QPushButton(transitionsContainer);
        transitionRemove->setObjectName(QStringLiteral("transitionRemove"));
        sizePolicy6.setHeightForWidth(transitionRemove->sizePolicy().hasHeightForWidth());
        transitionRemove->setSizePolicy(sizePolicy6);
        transitionRemove->setMaximumSize(QSize(22, 22));
        transitionRemove->setText(QStringLiteral(""));
        transitionRemove->setIcon(icon2);
        transitionRemove->setFlat(true);
        transitionRemove->setProperty("themeID", QVariant(QStringLiteral("removeIconSmall")));

        horizontalLayout_4->addWidget(transitionRemove);

        transitionProps = new QPushButton(transitionsContainer);
        transitionProps->setObjectName(QStringLiteral("transitionProps"));
        sizePolicy6.setHeightForWidth(transitionProps->sizePolicy().hasHeightForWidth());
        transitionProps->setSizePolicy(sizePolicy6);
        transitionProps->setMaximumSize(QSize(22, 22));
        transitionProps->setText(QStringLiteral(""));
        transitionProps->setIcon(icon6);
        transitionProps->setFlat(true);
        transitionProps->setProperty("themeID", QVariant(QStringLiteral("configIconSmall")));

        horizontalLayout_4->addWidget(transitionProps);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        transitionDurationLabel = new QLabel(transitionsContainer);
        transitionDurationLabel->setObjectName(QStringLiteral("transitionDurationLabel"));
        sizePolicy5.setHeightForWidth(transitionDurationLabel->sizePolicy().hasHeightForWidth());
        transitionDurationLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(transitionDurationLabel);

        transitionDuration = new QSpinBox(transitionsContainer);
        transitionDuration->setObjectName(QStringLiteral("transitionDuration"));
        transitionDuration->setMinimum(2);
        transitionDuration->setMaximum(10000);
        transitionDuration->setSingleStep(50);
        transitionDuration->setValue(300);

        horizontalLayout_3->addWidget(transitionDuration);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addWidget(transitionsContainer, 1, 3, 1, 1);

        mainSplitter->addWidget(gridLayoutWidget_2);

        horizontalLayout->addWidget(mainSplitter);

        OBSBasic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OBSBasic);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 957, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuBasic_MainMenu_Help = new QMenu(menubar);
        menuBasic_MainMenu_Help->setObjectName(QStringLiteral("menuBasic_MainMenu_Help"));
        menuLogFiles = new QMenu(menuBasic_MainMenu_Help);
        menuLogFiles->setObjectName(QStringLiteral("menuLogFiles"));
        menuBasic_MainMenu_Edit = new QMenu(menubar);
        menuBasic_MainMenu_Edit->setObjectName(QStringLiteral("menuBasic_MainMenu_Edit"));
        transformMenu = new QMenu(menuBasic_MainMenu_Edit);
        transformMenu->setObjectName(QStringLiteral("transformMenu"));
        orderMenu = new QMenu(menuBasic_MainMenu_Edit);
        orderMenu->setObjectName(QStringLiteral("orderMenu"));
        profileMenu = new QMenu(menubar);
        profileMenu->setObjectName(QStringLiteral("profileMenu"));
        sceneCollectionMenu = new QMenu(menubar);
        sceneCollectionMenu->setObjectName(QStringLiteral("sceneCollectionMenu"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QStringLiteral("viewMenu"));
        viewMenuToolbars = new QMenu(viewMenu);
        viewMenuToolbars->setObjectName(QStringLiteral("viewMenuToolbars"));
        OBSBasic->setMenuBar(menubar);
        statusbar = new OBSBasicStatusBar(OBSBasic);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        OBSBasic->setStatusBar(statusbar);

        scenes->addAction(actionRemoveScene);
        scenesToolbar->addAction(actionAddScene);
        scenesToolbar->addAction(actionRemoveScene);
        scenesToolbar->addSeparator();
        scenesToolbar->addAction(actionSceneUp);
        scenesToolbar->addAction(actionSceneDown);
        sources->addAction(actionRemoveSource);
        sourcesToolbar->addAction(actionAddSource);
        sourcesToolbar->addAction(actionRemoveSource);
        sourcesToolbar->addAction(actionSourceProperties);
        sourcesToolbar->addSeparator();
        sourcesToolbar->addAction(actionSourceUp);
        sourcesToolbar->addAction(actionSourceDown);
        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuBasic_MainMenu_Edit->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(profileMenu->menuAction());
        menubar->addAction(sceneCollectionMenu->menuAction());
        menubar->addAction(menuBasic_MainMenu_Help->menuAction());
        menu_File->addAction(actionShow_Recordings);
        menu_File->addAction(actionRemux);
        menu_File->addSeparator();
        menu_File->addAction(action_Settings);
        menu_File->addAction(actionShowSettingsFolder);
        menu_File->addAction(actionShowProfileFolder);
        menu_File->addSeparator();
        menu_File->addAction(actionAlwaysOnTop);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menuBasic_MainMenu_Help->addAction(actionWebsite);
        menuBasic_MainMenu_Help->addSeparator();
        menuBasic_MainMenu_Help->addAction(menuLogFiles->menuAction());
        menuBasic_MainMenu_Help->addAction(actionCheckForUpdates);
        menuLogFiles->addAction(actionShowLogs);
        menuLogFiles->addAction(actionUploadCurrentLog);
        menuLogFiles->addAction(actionUploadLastLog);
        menuLogFiles->addAction(actionViewCurrentLog);
        menuBasic_MainMenu_Edit->addAction(transformMenu->menuAction());
        menuBasic_MainMenu_Edit->addAction(orderMenu->menuAction());
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(actionAdvAudioProperties);
        transformMenu->addAction(actionEditTransform);
        transformMenu->addAction(actionResetTransform);
        transformMenu->addSeparator();
        transformMenu->addAction(actionRotate90CW);
        transformMenu->addAction(actionRotate90CCW);
        transformMenu->addAction(actionRotate180);
        transformMenu->addSeparator();
        transformMenu->addAction(actionFlipHorizontal);
        transformMenu->addAction(actionFlipVertical);
        transformMenu->addSeparator();
        transformMenu->addAction(actionFitToScreen);
        transformMenu->addAction(actionStretchToScreen);
        transformMenu->addAction(actionCenterToScreen);
        orderMenu->addAction(actionMoveUp);
        orderMenu->addAction(actionMoveDown);
        orderMenu->addSeparator();
        orderMenu->addAction(actionMoveToTop);
        orderMenu->addAction(actionMoveToBottom);
        profileMenu->addAction(actionNewProfile);
        profileMenu->addAction(actionDupProfile);
        profileMenu->addAction(actionRenameProfile);
        profileMenu->addAction(actionRemoveProfile);
        profileMenu->addSeparator();
        sceneCollectionMenu->addAction(actionNewSceneCollection);
        sceneCollectionMenu->addAction(actionDupSceneCollection);
        sceneCollectionMenu->addAction(actionRenameSceneCollection);
        sceneCollectionMenu->addAction(actionRemoveSceneCollection);
        sceneCollectionMenu->addSeparator();
        viewMenu->addAction(viewMenuToolbars->menuAction());
        viewMenu->addAction(toggleSceneTransitions);
        viewMenu->addAction(toggleStatusBar);
        viewMenuToolbars->addAction(toggleListboxToolbars);

        retranslateUi(OBSBasic);
        QObject::connect(actionE_xit, SIGNAL(triggered()), OBSBasic, SLOT(close()));
        QObject::connect(exitButton, SIGNAL(clicked()), OBSBasic, SLOT(close()));

        QMetaObject::connectSlotsByName(OBSBasic);
    } // setupUi

    void retranslateUi(QMainWindow *OBSBasic)
    {
        OBSBasic->setWindowTitle(QApplication::translate("OBSBasic", ".MainWindow", 0));
        actionAddScene->setText(QApplication::translate("OBSBasic", "Add", 0));
        actionAddSource->setText(QApplication::translate("OBSBasic", "Add", 0));
        actionRemoveScene->setText(QApplication::translate("OBSBasic", "Remove", 0));
        actionRemoveScene->setShortcut(QApplication::translate("OBSBasic", "Del", 0));
        actionRemoveSource->setText(QApplication::translate("OBSBasic", "Remove", 0));
        actionRemoveSource->setShortcut(QApplication::translate("OBSBasic", "Del", 0));
        actionSourceProperties->setText(QApplication::translate("OBSBasic", "Properties", 0));
        actionSceneUp->setText(QApplication::translate("OBSBasic", "MoveUp", 0));
        actionSourceUp->setText(QApplication::translate("OBSBasic", "MoveUp", 0));
        actionSceneDown->setText(QApplication::translate("OBSBasic", "MoveDown", 0));
        actionSourceDown->setText(QApplication::translate("OBSBasic", "MoveDown", 0));
        actionShow_Recordings->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowRecordings", 0));
        actionRemux->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.File.Remux", 0));
        action_Settings->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.File.Settings", 0));
        actionE_xit->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.File.Exit", 0));
        actionShowLogs->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.ShowLogs", 0));
        actionUploadLastLog->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.UploadLastLog", 0));
        actionUploadCurrentLog->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.UploadCurrentLog", 0));
        actionViewCurrentLog->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.ViewCurrentLog", 0));
        actionUndo->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Undo", 0));
        actionRedo->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Redo", 0));
        actionEditTransform->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.EditTransform", 0));
        actionRotate90CW->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate90CW", 0));
        actionRotate90CCW->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate90CCW", 0));
        actionRotate180->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate180", 0));
        actionFitToScreen->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FitToScreen", 0));
        actionFitToScreen->setShortcut(QApplication::translate("OBSBasic", "Ctrl+F", 0));
        actionStretchToScreen->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.StretchToScreen", 0));
        actionStretchToScreen->setShortcut(QApplication::translate("OBSBasic", "Ctrl+S", 0));
        actionResetTransform->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.ResetTransform", 0));
        actionResetTransform->setShortcut(QApplication::translate("OBSBasic", "Ctrl+R", 0));
        actionCenterToScreen->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.CenterToScreen", 0));
        actionCenterToScreen->setShortcut(QApplication::translate("OBSBasic", "Ctrl+D", 0));
        actionFlipHorizontal->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FlipHorizontal", 0));
        actionFlipVertical->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FlipVertical", 0));
        actionMoveUp->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveUp", 0));
        actionMoveUp->setShortcut(QApplication::translate("OBSBasic", "Ctrl+Up", 0));
        actionMoveDown->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveDown", 0));
        actionMoveDown->setShortcut(QApplication::translate("OBSBasic", "Ctrl+Down", 0));
        actionMoveToTop->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveToTop", 0));
        actionMoveToTop->setShortcut(QApplication::translate("OBSBasic", "Ctrl+Home", 0));
        actionMoveToBottom->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveToBottom", 0));
        actionMoveToBottom->setShortcut(QApplication::translate("OBSBasic", "Ctrl+End", 0));
        actionCheckForUpdates->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Help.CheckForUpdates", 0));
        actionInteract->setText(QApplication::translate("OBSBasic", "Interact", 0));
        actionAdvAudioProperties->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.AdvAudio", 0));
        actionWebsite->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.Help.Website", 0));
        actionNewSceneCollection->setText(QApplication::translate("OBSBasic", "New", 0));
        actionDupSceneCollection->setText(QApplication::translate("OBSBasic", "Duplicate", 0));
        actionRenameSceneCollection->setText(QApplication::translate("OBSBasic", "Rename", 0));
        actionRemoveSceneCollection->setText(QApplication::translate("OBSBasic", "Remove", 0));
        actionNewProfile->setText(QApplication::translate("OBSBasic", "New", 0));
        actionDupProfile->setText(QApplication::translate("OBSBasic", "Duplicate", 0));
        actionRenameProfile->setText(QApplication::translate("OBSBasic", "Rename", 0));
        actionRemoveProfile->setText(QApplication::translate("OBSBasic", "Remove", 0));
        actionShowSettingsFolder->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowSettingsFolder", 0));
        actionShowProfileFolder->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowProfileFolder", 0));
        actionAlwaysOnTop->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.AlwaysOnTop", 0));
        toggleListboxToolbars->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.View.Toolbars.Listboxes", 0));
        toggleSceneTransitions->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.View.SceneTransitions", 0));
        toggleStatusBar->setText(QApplication::translate("OBSBasic", "Basic.MainMenu.View.StatusBar", 0));
        previewDisabledLabel->setText(QApplication::translate("OBSBasic", "Basic.Main.PreviewDisabled", 0));
        streamButton->setText(QApplication::translate("OBSBasic", "Basic.Main.StartStreaming", 0));
        recordButton->setText(QApplication::translate("OBSBasic", "Basic.Main.StartRecording", 0));
        modeSwitch->setText(QApplication::translate("OBSBasic", "Basic.TogglePreviewProgramMode", 0));
        settingsButton->setText(QApplication::translate("OBSBasic", "Settings", 0));
        VetvPreview->setText(QApplication::translate("OBSBasic", "VETV", 0));
        exitButton->setText(QApplication::translate("OBSBasic", "Exit", 0));
        sourcesLabel->setText(QApplication::translate("OBSBasic", "Basic.Main.Sources", 0));
        mixerLabel->setText(QApplication::translate("OBSBasic", "Mixer", 0));
#ifndef QT_NO_ACCESSIBILITY
        advAudioProps->setAccessibleName(QApplication::translate("OBSBasic", "Basic.AdvAudio", 0));
#endif // QT_NO_ACCESSIBILITY
        scenesLabel->setText(QApplication::translate("OBSBasic", "Basic.Main.Scenes", 0));
        sceneTransitionsLabel->setText(QApplication::translate("OBSBasic", "Basic.SceneTransitions", 0));
#ifndef QT_NO_TOOLTIP
        transitionAdd->setToolTip(QApplication::translate("OBSBasic", "Basic.AddTransition", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        transitionAdd->setAccessibleName(QApplication::translate("OBSBasic", "Basic.AddTransition", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        transitionRemove->setToolTip(QApplication::translate("OBSBasic", "Basic.RemoveTransition", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        transitionRemove->setAccessibleName(QApplication::translate("OBSBasic", "Basic.RemoveTransition", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        transitionProps->setToolTip(QApplication::translate("OBSBasic", "Basic.TransitionProperties", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        transitionProps->setAccessibleName(QApplication::translate("OBSBasic", "Basic.TransitionProperties", 0));
#endif // QT_NO_ACCESSIBILITY
        transitionDurationLabel->setText(QApplication::translate("OBSBasic", "Basic.TransitionDuration", 0));
        transitionDuration->setSuffix(QApplication::translate("OBSBasic", "ms", 0));
        menu_File->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.File", 0));
        menuBasic_MainMenu_Help->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.Help", 0));
        menuLogFiles->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs", 0));
        menuBasic_MainMenu_Edit->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit", 0));
        transformMenu->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform", 0));
        orderMenu->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order", 0));
        profileMenu->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.Profile", 0));
        sceneCollectionMenu->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.SceneCollection", 0));
        viewMenu->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.View", 0));
        viewMenuToolbars->setTitle(QApplication::translate("OBSBasic", "Basic.MainMenu.View.Toolbars", 0));
    } // retranslateUi

};

namespace Ui {
    class OBSBasic: public Ui_OBSBasic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASIC_H
