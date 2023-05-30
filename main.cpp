#include <iostream>
#include <cstring>

bool hasSubstr(const char *origin, const char *substr) {
    char *found = strstr(origin, substr);

    return found != nullptr;
}

int main() {
    const char origin[] = "string one two ons";
    const char substr[] = "one";

    printf("String (%s)%s contains substring (%s)\n", origin, (hasSubstr(origin, substr) ? "" : " does not"), substr);
}
