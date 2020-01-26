# Find Median

## Sources:
https://docs.bazel.build/versions/master/install-ubuntu.html
https://docs.bazel.build/versions/master/tutorial/cpp.html
https://stackoverflow.com/questions/45814669/c-project-with-bazel-and-gtest
https://medium.com/@ratanparai/writing-unit-tests-for-c-with-bazel-and-googletest-70c3606c5378


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
