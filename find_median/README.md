# Find Median

```
cc_binary(
    name = "find_median",
    srcs = ["find_median.cc"],
)
```

To build:
```
bazel build //main:find_median

# In Windows, note the three slashes

bazel build ///main:find_median
```
