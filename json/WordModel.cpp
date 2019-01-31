//
// Created by 吴宗刚 on 2018/6/27.
//

#include "WordModel.h"

const std::string &unit1::WordModel::getWordImage() const {
    return wordImage;
}

void unit1::WordModel::setWordImage(const std::string &wordImage) {
    WordModel::wordImage = wordImage;
}

const std::string &unit1::WordModel::getWordText() const {
    return wordText;
}

void unit1::WordModel::setWordText(const std::string &wordText) {
    WordModel::wordText = wordText;
}

const std::string &unit1::WordModel::getWordAudio() const {
    return wordAudio;
}

void unit1::WordModel::setWordAudio(const std::string &wordAudio) {
    WordModel::wordAudio = wordAudio;
}

const std::string &unit1::WordModel::getWordImageMask() const {
    return wordImageMask;
}

void unit1::WordModel::setWordImageMask(const std::string &wordImageMask) {
    WordModel::wordImageMask = wordImageMask;
}

const std::string &unit1::WordModel::getWordTextImg() const {
    return wordTextImg;
}

void unit1::WordModel::setWordTextImg(const std::string &wordTextImg) {
    WordModel::wordTextImg = wordTextImg;
}

void unit1::to_json(json &j, const WordModel &w) {

    j = json{
            {"wordImage", w.getWordImage()},
            {"wordImageMask", w.getWordImageMask()},
            {"wordText", w.getWordText()},
            {"wordAudio", w.getWordAudio()},
            {"wordTextImg", w.getWordTextImg()}
    };
}

void unit1::from_json(const json &j, WordModel &w) {

    w.setWordImage(j.at("wordImage").get<std::string>());
    w.setWordImageMask(j.at("wordImageMask").get<std::string>());
    w.setWordText(j.at("wordText").get<std::string>());
    w.setWordAudio(j.at("wordAudio").get<std::string>());
    w.setWordTextImg(j.at("wordTextImg").get<std::string>());
}
