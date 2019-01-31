//
// Created by 吴宗刚 on 2018/6/27.
//

#include "WordListenModel.h"

const std::string &unit6::WordListenModel::getWordText() const {
    return wordText;
}

void unit6::WordListenModel::setWordText(const std::string &wordText) {
    WordListenModel::wordText = wordText;
}

const std::string &unit6::WordListenModel::getWordCard() const {
    return wordCard;
}

void unit6::WordListenModel::setWordCard(const std::string &wordCard) {
    WordListenModel::wordCard = wordCard;
}

const std::string &unit6::WordListenModel::getWordAudioUrl() const {
    return wordAudioUrl;
}

void unit6::WordListenModel::setWordAudioUrl(const std::string &wordAudioUrl) {
    WordListenModel::wordAudioUrl = wordAudioUrl;
}

void unit6::to_json(json &j, const WordListenModel &w) {

    j = json {
            {"wordText",     w.getWordText()},
            {"wordCard",     w.getWordCard()},
            {"wordAudioUrl", w.getWordAudioUrl()}
    };
}

void unit6::from_json(const json &j, WordListenModel &w) {

    w.setWordText(j.at("wordText").get<std::string>());
    w.setWordCard(j.at("wordCard").get<std::string>());
    w.setWordAudioUrl(j.at("wordAudioUrl").get<std::string>());
}
