#include <stdio.h>

struct occ_t;

struct emp_t
{
    char name[32];
    unsigned int emp_id;
    struct occ_t *occ;
};

struct occ_t
{
    char designation[32];
    unsigned int salary;
    struct emp_t boss;
};

int main(void)
{
    struct emp_t emp = {"John", 1, NULL};
    struct occ_t occ = {"Manager", 10000, emp};

    emp.occ = &occ;

    printf("Employee name: %s\n", emp.name);
    printf("Employee id: %d\n", emp.emp_id);
    printf("Employee designation: %s\n", emp.occ->designation);
    printf("Employee salary: %d\n", emp.occ->salary);
    printf("Employee boss name: %s\n", emp.occ->boss.name);
    printf("Employee boss id: %d\n", emp.occ->boss.emp_id);

    return 0;
}
