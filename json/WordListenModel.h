//
// Created by 吴宗刚 on 2018/6/27.
//

#ifndef PROJ_ANDROID_WORDLISTENMODEL_H
#define PROJ_ANDROID_WORDLISTENMODEL_H


#include <string>
#include "json.hpp"

using json = nlohmann::json;

namespace unit6 {

    class WordListenModel {

    public:

        const std::string &getWordText() const;

        void setWordText(const std::string &wordText);

        const std::string &getWordCard() const;

        void setWordCard(const std::string &wordCard);

        const std::string &getWordAudioUrl() const;

        void setWordAudioUrl(const std::string &wordAudioUrl);

    private:

        // 单词英文
        std::string wordText;
        // 单词卡片
        std::string wordCard;
        // 单词音频
        std::string wordAudioUrl;
    };

    void to_json(json &j, const WordListenModel &w);

    void from_json(const json &j, WordListenModel &w);
}


#endif //PROJ_ANDROID_WORDLISTENMODEL_H
