/* FUN_2c5fdd40 @ 0x2c5fdd40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5fdd40(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_7c [12];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  char **ppcStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  int iStack_44;
  undefined4 uStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  int iStack_34;
  uint3 uStack_30;
  undefined1 uStack_2d;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if ((((param_1 == (char *)0x0) || (*param_1 == '\0')) || (param_2 == (char *)0x0)) ||
     ((*param_2 == '\0' || (iVar7 = FUN_2c5fe700(), iVar7 == 0)))) {
    return;
  }
  uVar8 = FUN_2c5febec();
  piVar3 = DAT_2c5fdd14;
  puVar2 = DAT_2c5fdd10;
  puVar1 = DAT_2c5fdbcc;
  if (uVar8 < 9) {
    if (uVar8 == 0) {
      iStack_2c = *DAT_2c5fdd18;
      FUN_2c644044(*DAT_2c5fdd10,0xffffffff,param_3,0);
      uVar4 = DAT_2c5fdd1c;
      *piVar3 = *piVar3 + 1;
      FUN_2c66b4b8(&pcStack_38,uVar4);
      uStack_30 = (uint3)(ushort)uStack_30;
      FUN_2c5fed48(auStack_60);
      iVar7 = DAT_2c5fdd20;
      if (param_3 == 0) {
        param_3 = DAT_2c5fdd3c;
      }
      uStack_40 = param_5;
      if (param_4 == 0) {
        uStack_40 = 0;
      }
      ppcStack_50 = &pcStack_38;
      pcStack_4c = param_1;
      pcStack_48 = param_2;
      iStack_44 = param_3;
      pcStack_3c = (char *)param_4;
      uVar4 = FUN_2c5fed6c(auStack_60);
      iVar5 = FUN_2c5fee3c(*(undefined4 *)(iVar7 + 4),uVar4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x616,DAT_2c5fdd34,DAT_2c5fdd30,DAT_2c5fdd38,DAT_2c5fdd28);
      }
      FUN_2c5fed9c(auStack_60,iVar5);
      FUN_2c5fe0cc(auStack_7c);
      uStack_70 = 1;
      uStack_64 = DAT_2c5fdd24;
      uStack_6c = uVar4;
      iStack_68 = iVar5;
      uVar4 = FUN_2c5fe0ec(auStack_7c);
      iVar6 = FUN_2c5fee3c(*(undefined4 *)(iVar7 + 4),uVar4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x622,DAT_2c5fdd34,DAT_2c5fdd30,DAT_2c5fdd2c,DAT_2c5fdd28);
      }
      FUN_2c5fe11c(auStack_7c,iVar6);
      (**(code **)(*(int *)(iVar7 + 0x48) + 0x30))(iVar6,uVar4,0);
      FUN_2c5fee30(*(undefined4 *)(iVar7 + 4),iVar6);
      FUN_2c5fee30(*(undefined4 *)(iVar7 + 4),iVar5);
      FUN_2c644080(*puVar2);
      if (*DAT_2c5fdd18 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
  }
  else if (uVar8 != 100) {
                    /* WARNING: Could not recover jumptable at 0x2c673d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c673d94)(4,0x647,_LAB_2c5fddc0,_LAB_2c5fddbc);
    return;
  }
  iStack_24 = *DAT_2c5fdbd0;
  FUN_2c644044(*DAT_2c5fdbcc,0xffffffff,param_3,0);
  FUN_2c5fec7c(&pcStack_48);
  if (*DAT_2c5fdbd4 == 0x7fffffff) {
    iStack_28 = 0;
  }
  else {
    iStack_28 = *DAT_2c5fdbd4 + 1;
  }
  *DAT_2c5fdbd4 = iStack_28;
  iVar7 = DAT_2c5fdbd8;
  iStack_34 = DAT_2c5fdbdc;
  if (param_3 != 0) {
    iStack_34 = param_3;
  }
  _uStack_30 = param_5;
  if (param_4 == 0) {
    _uStack_30 = 0;
  }
  pcStack_3c = param_1;
  pcStack_38 = param_2;
  iStack_2c = param_4;
  uVar4 = FUN_2c5feca0(&pcStack_48);
  iVar5 = FUN_2c5fee3c(*(undefined4 *)(iVar7 + 4),uVar4);
  if (iVar5 == 0) {
    ppcStack_50 = (char **)DAT_2c5fdbe4;
    pcStack_4c = (char *)DAT_2c5fdbe0;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5f4,DAT_2c5fdbec,DAT_2c5fdbe8);
  }
  FUN_2c5fecd0(&pcStack_48,iVar5);
  (**(code **)(*(int *)(iVar7 + 0x48) + 0x30))(iVar5,uVar4,0);
  FUN_2c5fee30(*(undefined4 *)(iVar7 + 4),iVar5);
  FUN_2c644080(*puVar1);
  if (*DAT_2c5fdbd0 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

