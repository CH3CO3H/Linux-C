# struct

## define

```c
struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int isdst;
};
```

## initialize

```c
struct tm today={
    .tm_year=2014,
    .tm_mon=2,
    .tm_mday=29,
    .tm_hour=16,
    .tm_min=7,
    .tm_sec=5,
};
```

## access the fields

```c
printf("this year is %d, next year will be %d\n", today.tm_year, today.tm_year+1);
```

