/* FUN_2c596030 @ 0x2c596030 */

/* WARNING: Possible PIC construction at 0x2c59603e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c59604e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c59605e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c596052) */
/* WARNING: Removing unreachable block (ram,0x2c596042) */
/* WARNING: Removing unreachable block (ram,0x2c596062) */

bool FUN_2c596030(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c560668(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_2c560668(*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x18);
    }
    else {
      iVar1 = FUN_2c560668(*(undefined4 *)(param_1 + 4));
      if (iVar1 == 0) {
        iVar1 = FUN_2c560668(*(undefined4 *)(param_1 + 4));
        if (iVar1 == 0) {
          return false;
        }
        iVar1 = *(int *)(param_1 + 0x18);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
      }
    }
  }
  return (~*(uint *)(*(int *)(iVar1 + 0x14) + 0x1c) & 1) == 0;
}

