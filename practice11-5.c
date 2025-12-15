#include<stdio.h>
#include<string.h>

// my_strcat関数の修正
char *my_strcat(char *dest, const char *source) {
    char *tmp = dest;

    // destの終端（'\0'）までポインタを進める
    while (*dest != '\0') {
        dest++;
    }

    // sourceの文字列をdestの終端にコピーする
    while ((*dest++ = *source++) != '\0') {
        // ループ内で特に処理は不要
    }

    return tmp;
}

// my_strncat関数の修正
char *my_strncat(char *dest, const char *src, size_t n) {
    size_t dest_len = strlen(dest);
    size_t i;

    // srcの文字列を最大n文字、または終端までdestにコピー
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }

    // 連結した文字列の終端をヌル文字で終端する
    dest[dest_len + i] = '\0';

    return dest;
}

int main(void) {
    // バッファオーバーフローを防ぐため、十分なサイズの配列を用意する
    char s1[20]; // サイズを20に拡大

    char *x = "ABC";

    // my_strcatの使用例
    strcpy(s1, x); // s1を"ABC"で初期化
    my_strcat(s1, "DEFG");
    printf("my_strcat: s1=\"%s\"\n", s1); // 出力: my_strcat: s1="ABCDEFG"

    // my_strncatの使用例
    strcpy(s1, x); // s1を再度"ABC"で初期化
    my_strncat(s1, "12345", 3);
    printf("my_strncat: s1=\"%s\"\n", s1); // 出力: my_strncat: s1="ABC123"

    return 0;
}