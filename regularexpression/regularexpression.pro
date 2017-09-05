QT += widgets

HEADERS       = include/regularexpressiondialog.h
SOURCES       = src/regularexpressiondialog.cpp \
                src/main.cpp

RESOURCES += resources/regularexpression.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tools/regularexpression
INSTALLS += target
