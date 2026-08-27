/* FUN_2c5d1cbc @ 0x2c5d1cbc */

void FUN_2c5d1cbc(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *local_30;
  int local_2c;
  
  local_2c = *DAT_2c5d1d6c;
  if (param_3[1] != *param_3) {
    param_3[1] = *param_3;
  }
  uVar3 = DAT_2c5d1d7c;
  uVar2 = DAT_2c5d1d78;
  uVar1 = DAT_2c5d1d74;
  iVar5 = *param_2;
  if (iVar5 != param_2[1]) {
    uVar6 = 0;
    do {
      local_30 = (uint *)FUN_2c5d12f8(param_1,*(undefined4 *)(iVar5 + uVar6 * 0x18));
      if (local_30 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,uVar3,0x394,uVar2,uVar1,*(undefined4 *)(*param_2 + uVar6 * 0x18));
      }
      *local_30 = uVar6;
      piVar4 = (int *)param_3[1];
      if (piVar4 == (int *)param_3[2]) {
        FUN_2c5d1bf0(param_3,piVar4,&local_30);
      }
      else {
        *piVar4 = (int)local_30;
        param_3[1] = param_3[1] + 4;
      }
      uVar6 = uVar6 + 1;
      iVar5 = *param_2;
    } while (uVar6 < (uint)(DAT_2c5d1d70 * (param_2[1] - iVar5 >> 3)));
  }
  if (*DAT_2c5d1d6c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

