/* FUN_2c4f4884 @ 0x2c4f4884 */

uint FUN_2c4f4884(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = *DAT_2c4f4974;
  puVar3 = param_2 + 2;
  local_28 = param_3;
  uVar1 = FUN_2c4f278c(param_1,puVar3,&local_28,0);
  if (-1 < (int)uVar1) {
    if (uVar1 >> 0x14 == 2) {
      uVar1 = (uVar1 & 0xfffff) >> 10;
      if (uVar1 == 0x3ff) {
        local_24 = *(undefined4 *)(param_1 + 0x20);
        uStack_20 = *(undefined4 *)(param_1 + 0x24);
      }
      else {
        uVar1 = FUN_2c4f221c(param_1,puVar3,DAT_2c4f497c,DAT_2c4f4978 | uVar1 << 10,0,&local_24,8);
        if ((int)uVar1 < 0) goto LAB_2c4f492e;
      }
      uVar1 = FUN_2c4f1b28(param_1,puVar3,&local_24,0xffffffff,0xffffffff,0,0,0);
      if (uVar1 == 0) {
        *(undefined2 *)(param_2 + 1) = 0;
        param_2[0xc] = param_2[3];
        param_2[10] = 0;
        param_2[0xb] = param_2[2];
        *(undefined1 *)((int)param_2 + 6) = 2;
        *param_2 = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 **)(param_1 + 0x28) = param_2;
        goto LAB_2c4f48f8;
      }
      if (-1 < (int)uVar1) goto LAB_2c4f48f8;
    }
    else {
      uVar1 = 0xffffffec;
    }
  }
LAB_2c4f492e:
  iVar5 = 0;
  uVar4 = 0;
  while (uVar4 != uVar1) {
    iVar5 = iVar5 + 1;
    uVar2 = DAT_2c4f4984;
    if (iVar5 == 0xf) goto LAB_2c4f4946;
    uVar4 = (uint)*(char *)(DAT_2c4f4980 + iVar5 * 8);
  }
  uVar2 = *(undefined4 *)(DAT_2c4f4980 + iVar5 * 8 + 4);
LAB_2c4f4946:
  FUN_2c66ac44(DAT_2c4f4994,DAT_2c4f4990,0x14cf,DAT_2c4f498c,uVar2,DAT_2c4f4988);
LAB_2c4f48f8:
  if (*DAT_2c4f4974 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar1;
}

