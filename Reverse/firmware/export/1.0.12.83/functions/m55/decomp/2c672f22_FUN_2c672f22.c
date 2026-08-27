/* FUN_2c672f22 @ 0x2c672f22 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c672f22(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    uVar3 = func_0x2c672ed0();
    iVar1 = _LAB_2c672f7c;
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = *(int *)(param_1 + 4);
    }
    uVar5 = 0;
    if (param_2 != 0) {
      uVar5 = (uint)((*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x50)) * 100) / param_2;
    }
    uVar3 = FUN_2c648600(_LAB_2c672f74,iVar1,uVar5,uVar3,param_4);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x4c);
    return uVar3;
  }
  iVar4 = *DAT_2c648674;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c672f78,&stack0xfffffff4,&stack0xfffffff4);
  if (-1 < iVar1) {
    if (iVar1 < 0x7ff) {
      if (iVar1 == 0) goto LAB_2c648630;
    }
    else {
      iVar1 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar2 = (code *)FUN_2c648328();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(_LAB_2c648678,iVar1);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar1);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

