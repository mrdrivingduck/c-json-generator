#include <stdio.h>
#include "dkjson.h"

int main() {

	dkJSON json;
	dkjson_init(&json);

	dkjson_put_string(&json, "emm", "hahahahaha");
	dkjson_put_string(&json, "333", "555555555");
	dkjson_put_int(&json, "age", 21);
	dkjson_put_float(&json, "price", 12.56f);
	dkjson_put_double(&json, "ddd", 12.59822221);

	char buf[1024];
	dkjson_generate(&json, buf);
	printf("%s\n", buf);

	dkjson_destroy(&json);
	return 0;
}