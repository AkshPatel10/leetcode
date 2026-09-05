// Last updated: 05/09/2026, 10:09:57
class Solution {
public:
    string capitalizeTitle(string title) {
        int start = 0;

        for (int i = 0; i <= title.size(); i++) {

            if (i == title.size() || title[i] == ' ') {

                int len = i - start;

                if (len <= 2) {
                    for (int j = start; j < i; j++)
                        title[j] = tolower(title[j]);
                }
                else {
                    for (int j = start; j < i; j++)
                        title[j] = tolower(title[j]);

                    title[start] = toupper(title[start]);
                }

                start = i + 1;
            }
        }

        return title;
    }
};