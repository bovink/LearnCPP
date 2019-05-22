#include <iostream>
#include "tinyxml2/tinyxml2.h"

using namespace tinyxml2;

int main() {
    XMLDocument doc;
    doc.LoadFile("/Users/bovink/Development/MyProject/CLionProject/LearnCPP/helloworld.xml");

    const char *content = doc.FirstChildElement("Hello")->GetText();
    const char *id = doc.FirstChildElement("Hello")->Attribute("id");

    printf("id,%s\n", id);
    printf("Hello,%s", content);
    return 0;
}