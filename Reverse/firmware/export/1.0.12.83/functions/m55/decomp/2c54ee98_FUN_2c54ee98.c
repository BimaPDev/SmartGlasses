/* FUN_2c54ee98 @ 0x2c54ee98 */

undefined4 FUN_2c54ee98(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *local_20;
  int local_1c;
  
  local_1c = *DAT_2c54ef10;
  iVar1 = FUN_2c48e42c();
  if ((iVar1 == 0) || (iVar2 = FUN_2c48e82c(), iVar2 != 0)) {
    if (param_4 != 0) {
      uVar4 = 0;
      *param_3 = 0x80000000;
      goto LAB_2c54eec4;
    }
  }
  else {
    iVar2 = FUN_2c48e83c(iVar1);
    uVar4 = 0;
    if (iVar2 != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x14);
      goto LAB_2c54eec4;
    }
    iVar2 = FUN_2c48e84c(iVar1);
    if ((iVar2 != 0) &&
       (uVar3 = FUN_2c66d418(*(undefined4 *)(iVar1 + 0x10),&local_20,10), *local_20 == '\0')) {
      *param_3 = uVar3;
      goto LAB_2c54eec4;
    }
  }
  uVar4 = 0xffffffff;
LAB_2c54eec4:
  if (*DAT_2c54ef10 == local_1c) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

