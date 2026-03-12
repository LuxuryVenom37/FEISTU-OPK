add_test([=[CameraFrame.NewFrameFIFOIsEmpty]=]  /media/viktor/Data/OPK/CV3/cmake-build-debug/tests/fifo_tests [==[--gtest_filter=CameraFrame.NewFrameFIFOIsEmpty]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[CameraFrame.NewFrameFIFOIsEmpty]=]  PROPERTIES WORKING_DIRECTORY /media/viktor/Data/OPK/CV3/cmake-build-debug/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  fifo_tests_TESTS CameraFrame.NewFrameFIFOIsEmpty)
