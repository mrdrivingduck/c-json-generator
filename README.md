# c-json-generator
🎞️ A simple C JSON-string generator.

Created by : Mr Dk.

@2018.12.15, Nanjing, Jiangsu, China

I love Saturday~~~ 😆

---

### About

It is a simple _C_ JSON-string generator.

No support for parsing a JSON-string into a structure.

No support for reduplicated _keys_. (😅 SORRY...)

### Usage

For the simplest way to use :

* Add `dkjson.h` & `dkjson.c` into your project
* include `#include "dkjson.h"` in your source file and use it

```c
#include <stdio.h>

int main()
{
    dkJSON json = {NULL, 0, 0};
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
```

### Notice

The memory of JSON-string will be maintained inside the structure `dkJSON`.

It will __automatically reallocate memory__ if the capacity is not enough.

So, `dkjson_destroy` function must be called to recycle the inside maintaining memory.

---

