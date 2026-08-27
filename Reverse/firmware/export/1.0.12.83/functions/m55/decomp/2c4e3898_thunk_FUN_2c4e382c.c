/* thunk_FUN_2c4e382c @ 0x2c4e3898 */

int thunk_FUN_2c4e382c(int param_1,undefined4 param_2,undefined4 param_3)

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
  undefined4 uStack_10;
  
  if (param_1 == 0) {
LAB_2c4e3852:
    FUN_2c4e34f4(0x8ffd,0xb9,1);
    uStack_18 = DAT_2c4e3888;
    uStack_1c = 0x1300;
    uStack_20 = DAT_2c4e3890;
    uStack_24 = 0xb9;
    uStack_28 = DAT_2c4e3894;
    FUN_2c4e0504(DAT_2c4e388c,0,0);
    return 0;
  }
  uStack_10 = param_2;
  piVar2 = (int *)FUN_2c4dfa4e();
  if (piVar2 == (int *)0x0) goto LAB_2c4e3852;
  piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
  auStack_34[0] = uStack_10;
  iStack_14 = *DAT_2c4dd568;
  uStack_38 = param_3;
  FUN_2c4e2788(auStack_2c,piVar2 + 0x15,param_3,0);
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

