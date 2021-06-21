QT += core gui quick

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    source/defines.h \
    source/enum_class_compliance.h \
    source/person/employee/artist.h \
    source/person/employee/astronaut.h \
    source/person/employee/chef.h \
    source/person/employee/construction_worker.h \
    source/person/employee/doctor.h \
    source/person/employee/employee.h \
    source/person/employee/engeneer.h \
    source/person/employee/firefighter.h \
    source/person/employee/police.h \
    source/person/person.h \
    source/person/person_factory.h \
    source/person/person_type.h \
    source/pch.h \
    source/test.h

SOURCES += \
    source/person/employee/artist.cpp \
    source/person/employee/astronaut.cpp \
    source/person/employee/chef.cpp \
    source/person/employee/construction_worker.cpp \
    source/person/employee/doctor.cpp \
    source/person/employee/employee.cpp \
    source/person/employee/engeneer.cpp \
    source/person/employee/firefighter.cpp \
    source/person/employee/police.cpp \
    source/person/person.cpp \
    source/main.cpp \
    source/person/person_factory.cpp \
    source/test.cpp

INCLUDEPATH += source/
