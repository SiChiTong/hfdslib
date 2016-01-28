#ifndef CTEST_H
#define CTEST_H

#ifdef __cplusplus
extern "C"
{
#endif


void test_init(void);

void test_push_back(void);

void run_test(void);

void test_list(void);
void test_hash(void);
void test_boost_map(void);
void test_rb_tree(void);


#ifdef __cplusplus
}
#endif

#endif // CTEST_H