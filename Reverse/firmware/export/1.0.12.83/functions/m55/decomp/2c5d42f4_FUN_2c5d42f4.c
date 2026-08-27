/* FUN_2c5d42f4 @ 0x2c5d42f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d42f4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char acStack_18 [8];
  
  iVar2 = *param_4;
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x94),param_3,param_3,0);
  iVar1 = FUN_2c5e31b4(0x2d,acStack_18);
  if (iVar1 == 0) {
    acStack_18[0] = '\x03';
  }
  else if (acStack_18[0] == '\0') goto LAB_2c5d431c;
  FUN_2c5d4180(param_1,acStack_18[0]);
LAB_2c5d431c:
  func_0x2c5d31f4(param_1,1);
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_2c5d2bb8(param_1,1);
  }
  FUN_2c5d3494(param_1,*(undefined4 *)(param_1 + 0x44));
  FUN_2c5d3494(param_1,*(undefined4 *)(param_1 + 0x30));
  FUN_2c5d3670(param_1);
  FUN_2c5d3494(param_1,*(undefined4 *)(param_1 + 0x6c));
  FUN_2c5d3f50(param_1);
  if (*_LAB_2c5d4380 == iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d3f44,0x437,DAT_2c5d3f40,DAT_2c5d3f3c,1);
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

