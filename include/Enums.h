#ifndef ENUMS_H
#define ENUMS_H

enum class Status {
    CREATED,
    AT_WAREHOUSE,
    LOADED,
    IN_TRANSIT,
    DELIVERED
};

enum class Priority {
    LOW,
    MEDIUM,
    HIGH
};

#endif