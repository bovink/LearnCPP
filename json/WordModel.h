//
// Created by 吴宗刚 on 2018/6/27.
//

#ifndef PROJ_ANDROID_WORDMODEL_H
#define PROJ_ANDROID_WORDMODEL_H


#include <string>

#include "json.hpp"

using json = nlohmann::json;

namespace unit1 {

    class WordModel {

    public:
        const std::string &getWordImage() const;

        void setWordImage(const std::string &wordImage);

        const std::string &getWordText() const;

        void setWordText(const std::string &wordText);

        const std::string &getWordAudio() const;

        void setWordAudio(const std::string &wordAudio);

        const std::string &getWordImageMask() const;

        void setWordImageMask(const std::string &wordImageMask);

        const std::string &getWordTextImg() const;

        void setWordTextImg(const std::string &wordTextImg);
    private:

        // 单词图片
        std::string wordImage;
        // 单词图片遮罩
        std::string wordImageMask;
        // 单词文字
        std::string wordText;
        // 单词文字图片
        std::string wordTextImg;
    private:
        // 单词音频
        std::string wordAudio;
    };

    void to_json(json &j, const WordModel &w);

    void from_json(const json &j, WordModel &w);
}


#endif //PROJ_ANDROID_WORDMODEL_H
