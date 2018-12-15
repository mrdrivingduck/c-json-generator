#include <stdio.h>
#include "dkjson.h"

int main() {

    dkJSON json;
    dkjson_init(&json);

    dkjson_put_string(&json, "str", "hahahahaha");
    dkjson_put_int(&json, "int", 21474);
    dkjson_put_short(&json, "short", 585);
    dkjson_put_float(&json, "float", 12.56f);
    dkjson_put_double(&json, "double", 12.59822221);
    dkjson_put_unsignedint(&json, "unsignedint", 2147483855);
    dkjson_put_unsignedshort(&json, "unsignedshort", 49526);

    char buf[1024];
    dkjson_generate(&json, buf);
    printf("%s\n", buf);

    dkjson_destroy(&json);
    return 0;
}