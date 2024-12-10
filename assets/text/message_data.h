#include "text/message_data.h"

DEFINE_MESSAGE(0x71B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(/* MISSING */)
,
MSG(
"Messege 1\n"
)
,
MSG("german"), MSG("french\n")
)

DEFINE_MESSAGE(0x71B4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(/* MISSING */)
,
MSG(
"Messege 2\n"
)
,
MSG("german"), MSG("french\n")
)

DEFINE_MESSAGE(0x71B5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(/* MISSING */)
,
MSG(
"Messege 3\n"
)
,
MSG("german"), MSG("french\n")
)

DEFINE_MESSAGE(0x71B6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(/* MISSING */)
,
MSG(
"Messege 4\n"
)
,
MSG("german"), MSG("french\n")
)

DEFINE_MESSAGE(0x71B7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(/* MISSING */)
,
MSG(
"Messege 5\n"
)
,
MSG("german"), MSG("french\n")
)

//Unused Id's in the vanilla game
DEFINE_MESSAGE(0x00FF, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(/* MISSING */)
,
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_NAYRUS_LOVE) QUICKTEXT_ENABLE "You found the " COLOR(BLUE) "Roc's Feather" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"You feel lighter already! Equip\n"
"it to " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " to jump with a\n"
"gust of wind, even in the air!\n"
)
,
MSG("german"), MSG("french")
)

/*
 * The following two messages should be kept last and in this order.
 * Message 0xFFFD must be last to not break the message debugger (see R_MESSAGE_DEBUGGER_TEXTID).
 * Message 0xFFFC must be immediately before message 0xFFFD to not break Font_LoadOrderedFont.
 */
DEFINE_MESSAGE_FFFC(0xFFFC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"０１２３４５６７８９あいうえおかきくけこ\n"
"さしすせそたちつてとなにぬねのはひふへほ\n"
"まみむめもやゆよらりるれろわをんぁぃぅぇ\n"
"ぉっゃゅょがぎぐげござじずぜぞだぢづでど\n"
"ばびぶべぼぱぴぷぺぽアイウエオカキクケコ\n"
"サシスセソタチツテトナニヌネノハヒフヘホ\n"
"マミムメモヤユヨラリルレロワヲンァィゥェ\n"
"ォッャュョガギグゲゴザジズゼゾダヂヅデド\n"
"バビブベボパピプペポヴＡＢＣＤＥＦＧＨＩ\n"
"ＪＫＬＭＮＯＰＱＲＳＴＵＶＷＸＹＺａｂｃ\n"
"ｄｅｆｇｈｉｊｋｌｍｎｏｐｑｒｓｔｕｖｗ\n"
"ｘｙｚ　┯？！：−（）゛゜，．／"
)
,
MSG(
"0123456789\n"
"ABCDEFGHIJKLMN\n"
"OPQRSTUVWXYZ\n"
"abcdefghijklmn\n"
"opqrstuvwxyz\n"
" -.\n"
)
,
MSG(/* UNUSED */)
,
MSG(/* UNUSED */)
)
DEFINE_MESSAGE(0xFFFD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE, MSG(), MSG(), MSG(), MSG())
