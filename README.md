# Test Cases for GitHub Actions

## Overview

This repository provides test cases for troubleshooting various issues
with GitHub Actions.

To run a test case, switch to the directory associated with the test
directory and run the indicated commands.

## Test Cases

### https://github.com/actions/virtual-environments/issues/74

See the github-actions-virtual-environments-issue74 directory.  This
is a Boost.Build project that uses the library version of Boost.Test
the simplest way possible to show an issue with the Boost setup on the
Windows virtual environment.

``` shell
b2
```
