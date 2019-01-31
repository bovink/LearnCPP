//
// Created by 吴宗刚 on 2018/6/27.
//

#include "SentenceModel.h"

const std::string &unit5::SentenceModel::getSentenceText() const {
    return sentenceText;
}

void unit5::SentenceModel::setSentenceText(const std::string &sentenceText) {
    SentenceModel::sentenceText = sentenceText;
}

const std::string &unit5::SentenceModel::getSentenceVideoUrl() const {
    return sentenceVideoUrl;
}

void unit5::SentenceModel::setSentenceVideoUrl(const std::string &sentenceVideoUrl) {
    SentenceModel::sentenceVideoUrl = sentenceVideoUrl;
}

const std::string &unit5::SentenceModel::getSentenceAudioUrl() const {
    return sentenceAudioUrl;
}

void unit5::SentenceModel::setSentenceAudioUrl(const std::string &sentenceAudioUrl) {
    SentenceModel::sentenceAudioUrl = sentenceAudioUrl;
}

const std::string &unit5::SentenceModel::getSentEvalFile() const {
    return sentEvalFile;
}

void unit5::SentenceModel::setSentEvalFile(const std::string &sentEvalFile) {
    SentenceModel::sentEvalFile = sentEvalFile;
}

void unit5::to_json(json &j, const SentenceModel &s) {

    j = json {
            {"sentenceText",     s.getSentenceText()},
            {"sentenceVideoUrl", s.getSentenceVideoUrl()},
            {"sentenceAudioUrl", s.getSentenceAudioUrl()},
            {"sentEvalFile",     s.getSentEvalFile()}
    };
}

void unit5::from_json(const json &j, SentenceModel &s) {

    s.setSentenceText(j.at("sentenceText").get<std::string>());
    s.setSentenceVideoUrl(j.at("sentenceVideoUrl").get<std::string>());
    s.setSentenceAudioUrl(j.at("sentenceAudioUrl").get<std::string>());
    s.setSentEvalFile(j.at("sentEvalFile").get<std::string>());
}
