# Text Editor

A text-editing app developed in QT, which allows you to  Bold / Unbold, Subscript and superscript to an individual text.

  - Input a text.
  - Use the features to edit the text.

### Ubuntu and Qt version

  - Compiled and Tested on Ubuntu 18.04 with Qt 5.

### Installation
* Install qt5:
```sh
$ sudo apt-get install qt5-default
```
* Go to folder "FardinAnsariNotepad", compile FardinAnsariNotepad.pro and make:
```sh
$ cd FardinAnsariNotepad
$ qmake FardinAnsariNotepad.pro
$ make
```

### How to run the code?

* Execute file Text-Editor in folder "Text-Editor"
```sh
$ ./FardinAnsariNotepad
```

### What has been done?

* CREATING A NEW PROJECT : 
In QT Creator, a QT widgets application is created.

`File -> New File or Project -> Application -> QT Widgets Application (Choose) -> Name & Location (Next) -> Desktop Kit (Next) -> Classname: FardinAnsariNotepad (Next) -> Finish`

* DESIGNING UI : 
Open `mainwindow.ui` file in QT Creator. Drag and Drop a "Text Edit" Input Widget into the editor area. In order to have the text edit widget occupy the whole screen, we add setCentralWidget to the main window.

```sh
this->setCentralWidget(ui->textEdit);
```
Press Ctrl+S (or Cmd+S) to save your changes.

* Add "Text" in menu bar and "Bold/unbold" in it. An action is created. Drag the action onto the task bar. Tick checkable for the action.

* To add an icon for "Bold" : 

``Text-Editor -> add New -> Qt -> Qt Resource File (Choose) -> Name (AppResources) & Location (inside Text-Editor) (Next) -> Finish.``

In the `appresources.qrc` file in "Resources", add a prefix `\Images` and add a file (bold.png) along with other images and necessary documents inside Images.
``"Edit action" of "Bold Action" -> Icon (select)``

* Right Click the action -> "Go to Slot" -> Triggered (bool) (Ok). Function "on_actionBold_triggered(bool checked)" is created in "mainwindows.cpp" . Add this line inside the function. 

```sh
checked ? ui->textEdit->setFontWeight(QFont::Bold) :
          ui->textEdit->setFontWeight(QFont::Normal);
```

* almost similar steps are done for subscript and superscript.
* Build and Run

### Issues / Challenges ? 

1. To understand the working of checkable action.
2. to understand the working of Qfont.
3. to understand how the designing tab works.

### Features 

1. Can bold / unbold a particular text.
2. can put text in subscript and superscript
3. displays My Resume and image (provided you have to change the directory in mainwindows.cpp to your current project directory manually)
