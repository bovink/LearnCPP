#include <iostream>
#include "tinyxml2/tinyxml2.h"

using namespace tinyxml2;

void printValue(XMLNode *node) {
    printf("%s\n", node->Value());
}

void printAllChildValue(XMLElement *element) {

    while (element) {

        printValue(element);
        if (!element->NoChildren()) {
            printAllChildValue(element->FirstChildElement());
        }
        element = element->NextSiblingElement();
    }
}

int main() {
    XMLDocument doc;
    doc.LoadFile("/Users/bovink/Development/MyProject/CLionProject/LearnCPP/helloworld.xml");

    XMLElement *element = doc.FirstChildElement();
    if (!element->NoChildren()) {

        printAllChildValue(element);
    }
    return 0;
}