//
// Created by 吴宗刚 on 2018/6/27.
//

#ifndef PROJ_ANDROID_SENTENCEMODEL_H
#define PROJ_ANDROID_SENTENCEMODEL_H


#include <string>

#include "json.hpp"

using json = nlohmann::json;

namespace unit5 {

    class SentenceModel {

    public:

        const std::string &getSentenceText() const;

        void setSentenceText(const std::string &sentenceText);

        const std::string &getSentenceVideoUrl() const;

        void setSentenceVideoUrl(const std::string &sentenceVideoUrl);

        const std::string &getSentenceAudioUrl() const;

        void setSentenceAudioUrl(const std::string &sentenceAudioUrl);

        const std::string &getSentEvalFile() const;

        void setSentEvalFile(const std::string &sentEvalFile);

    private:

        std::string sentenceText;
        std::string sentenceVideoUrl;
        std::string sentenceAudioUrl;
        // 句子评测文件
        std::string sentEvalFile;
    };

    void to_json(json &j, const SentenceModel &s);

    void from_json(const json &j, SentenceModel &s);
}


#endif //PROJ_ANDROID_SENTENCEMODEL_H
