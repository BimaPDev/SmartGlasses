/* FUN_2c5e9f54 @ 0x2c5e9f54 */

/* WARNING: Removing unreachable block (ram,0x2c5e6bfe) */
/* WARNING: Removing unreachable block (ram,0x2c5e6c00) */
/* WARNING: Removing unreachable block (ram,0x2c5e6bd4) */
/* WARNING: Removing unreachable block (ram,0x2c5e6c5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e9f54(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  piVar6 = (int *)FUN_2c5e7270(6,1);
  iVar5 = _LAB_2c5ea068;
  if (piVar6 == (int *)0x0) {
    uStack_20 = _LAB_2c5ea080;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ea074,300,_LAB_2c5ea070);
  }
  if (param_2 != 0 || param_1 != 0) {
    if (param_1 == 0) {
      iVar5 = FUN_2c66b624(piVar6[6],param_2);
      if ((iVar5 == 0) && (*piVar6 != 0)) {
        uStack_20 = _LAB_2c5ea06c;
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5ea074,0x142,_LAB_2c5ea070);
      }
      iVar5 = (**(code **)(_LAB_2c5ea068 + 0x3c))(1,param_2);
      if (iVar5 == 0) {
        uStack_20 = _LAB_2c5ea07c;
        uStack_1c = param_2;
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c5ea074,0x147,_LAB_2c5ea070);
      }
    }
    else {
      iVar5 = FUN_2c66b624(piVar6[7],param_1);
      if ((iVar5 == 0) && (*piVar6 != 0)) {
        uStack_20 = _LAB_2c5ea06c;
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5ea074,0x138,_LAB_2c5ea070);
      }
      iVar5 = (**(code **)(_LAB_2c5ea068 + 0x40))(1,param_1);
      if (iVar5 == 0) {
        uStack_20 = _LAB_2c5ea084;
        uStack_1c = param_1;
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c5ea074,0x13d,_LAB_2c5ea070);
      }
    }
    FUN_2c620fa4(0x3e85,0);
    FUN_2c5e6ce4(1,0);
                    /* WARNING: Could not recover jumptable at 0x2c5e9fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_LAB_2c5ea078 + 0x2c))(1,4);
    return;
  }
  uVar7 = (**(code **)(_LAB_2c5ea068 + 0x44))(1);
  if (uVar7 < 2) {
    return;
  }
  FUN_2c620fa4(0x3e85,piVar6);
  (**(code **)(iVar5 + 0x48))(1,0);
  piVar6 = DAT_2c5e6d68;
  FUN_2c60710c(*DAT_2c5e6d64,0x27d1);
  uVar7 = 0;
  iVar5 = DAT_2c5e6d6c;
  piVar8 = piVar6;
  while( true ) {
    iVar5 = (**(code **)(iVar5 + 0x44))(0);
    puVar3 = DAT_2c5e6d70;
    puVar1 = DAT_2c5e6c88;
    uVar7 = uVar7 + iVar5;
    if (piVar8 == piVar6 + 7) break;
    iVar5 = *piVar8;
    piVar8 = piVar8 + 1;
  }
  if (1 < uVar7) {
    if (*(char *)(DAT_2c5e6c84 + 0x20) == '\0') {
      uStack_18 = DAT_2c5e6c94;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5e6c9c,0x11e,DAT_2c5e6c98);
    }
    puVar3 = (undefined4 *)FUN_2c5e697c(*(char *)(DAT_2c5e6c84 + 0x20));
    FUN_2c608c7c(*puVar3);
    FUN_2c606abc(*puVar1,1);
    FUN_2c62e838(*puVar1,0);
    FUN_2c606e74(*puVar1,0xff,0);
    puVar1 = DAT_2c5e6c8c;
    FUN_2c606d6c(*DAT_2c5e6c8c,0);
    uVar4 = *puVar1;
    uStack_1c = *DAT_2c5e4cd0;
    FUN_2c62e7b4(&uStack_60,0,0xe,0);
    uStack_44 = DAT_2c5e4cd4;
    uStack_5c = DAT_2c5e4cd8;
    uStack_38 = 0xe;
    uStack_34 = 300;
    uStack_54 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_60 = uVar4;
    FUN_2c62e8ec(&uStack_60);
    if (*DAT_2c5e4cd0 != uStack_1c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  cVar2 = FUN_2c6033b4(*DAT_2c5e6d70,0,0x21);
  if ((cVar2 == '\0') && (iVar5 = FUN_2c6073f8(*puVar3), iVar5 != 0)) {
    uStack_20 = DAT_2c5e6d74;
    uStack_1c = uVar7;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5e6d78,0x14d,DAT_2c5e6d7c);
  }
  return;
}

