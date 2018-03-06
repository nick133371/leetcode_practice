ass Solution {
public:
    bool judgeCircle(string moves) {
        // declare and initial variable
        int cx{0};
        int cy{0};

        // for each char in the moves (string)
        for(const char move : moves)
        {
            switch (move)
            {
                case 'U':
                    ++cy;
                    break;
                case 'D':
                    --cy;
                    break;
                case 'R':
                    ++cx;
                    break;
                case 'L':
                    --cx;
                    break;
            }
        }
        
        return cx==0 && cy==0;
    }
};
