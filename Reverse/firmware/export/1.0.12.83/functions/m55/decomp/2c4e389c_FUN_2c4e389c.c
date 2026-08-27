/* FUN_2c4e389c @ 0x2c4e389c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e389c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_38;
  undefined4 auStack_34 [2];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  if (param_1 == 0) {
LAB_2c4e38c0:
    FUN_2c4e34f4(0x8ffd,0xc4,1);
    uStack_18 = _LAB_2c4e38f8;
    uStack_1c = 0x1300;
    uStack_20 = _LAB_2c4e3900;
    uStack_24 = 0xc4;
    uStack_28 = _LAB_2c4e3904;
    FUN_2c4e0504(_LAB_2c4e38fc,0,0);
    return 0;
  }
  piVar2 = (int *)func_0x2c4dfa02();
  if (piVar2 == (int *)0x0) goto LAB_2c4e38c0;
  piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
  auStack_34[0] = 0;
  iStack_14 = *DAT_2c4dd568;
  uStack_38 = param_2;
  FUN_2c4e2788(auStack_2c,piVar2 + 0x15,param_2,0);
  FUN_2c4de6ea(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x44))(piVar2,auStack_34,&uStack_38);
  if (iVar1 != 0) {
    do {
      FUN_2c4e2788(&uStack_20,piVar2 + 0x10);
      iVar1 = (**(code **)(*piVar2 + 0x4c))(piVar2,auStack_34[0],uStack_38);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*piVar2 + 0x50))(piVar2,auStack_34[0],uStack_38);
        FUN_2c4e279e(&uStack_20);
        goto LAB_2c4dd512;
      }
      FUN_2c4e279e(&uStack_20);
      iVar1 = (**(code **)(*piVar2 + 0x54))(piVar2,auStack_34[0],uStack_38);
    } while (iVar1 != 0);
    iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2,auStack_34[0],uStack_38);
    if (iVar1 != 0) goto LAB_2c4dd512;
  }
  iVar1 = (**(code **)(*piVar2 + 0x50))(piVar2,auStack_34[0],uStack_38);
LAB_2c4dd512:
  FUN_2c4e279e(auStack_2c);
  if (*DAT_2c4dd568 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar1;
}

