/* FUN_2c5832b4 @ 0x2c5832b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5832b4(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  uint *puStack_64;
  int iStack_60;
  uint auStack_5c [4];
  undefined4 uStack_4c;
  uint *puStack_48;
  int iStack_44;
  uint auStack_40 [4];
  undefined1 uStack_30;
  undefined1 uStack_2f;
  int iStack_2c;
  
  piVar6 = _LAB_2c58344c;
  iStack_2c = *_LAB_2c583450;
  if (*_LAB_2c58344c == 0) {
    FUN_2c4723c4(param_1,param_2,0);
    *piVar6 = 1;
  }
  piVar6 = (int *)FUN_2c47245c(0,0x68);
  FUN_2c674268(piVar6,0,0x68);
  iVar3 = _LAB_2c583454;
  piVar6[0x19] = param_2;
  piVar6[0x18] = param_3;
  uVar7 = _LAB_2c583460;
  *piVar6 = iVar3;
  piVar6[1] = (int)(piVar6 + 3);
  *(undefined1 *)(piVar6 + 3) = 0;
  *(undefined1 *)(piVar6 + 10) = 0;
  *(undefined1 *)(piVar6 + 0x14) = 0;
  piVar6[8] = (int)(piVar6 + 10);
  piVar6[0x12] = (int)(piVar6 + 0x14);
  iStack_44 = 0;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  uStack_2f = 0;
  uStack_4c = uVar7;
  puStack_48 = auStack_40;
  FUN_2c58c9d8(&puStack_64,piVar6);
  uVar5 = auStack_40[0];
  puVar4 = puStack_48;
  if (puStack_64 == auStack_5c) {
    if (iStack_60 != 0) {
      if (iStack_60 == 1) {
        *(undefined1 *)puStack_48 = (undefined1)auStack_5c[0];
      }
      else {
        FUN_2c674668(puStack_48,auStack_5c);
      }
    }
    *(undefined1 *)((int)puStack_48 + iStack_60) = 0;
    iStack_44 = iStack_60;
  }
  else {
    bVar8 = puStack_48 != auStack_40;
    puStack_48 = puStack_64;
    if (bVar8) {
      iStack_44 = iStack_60;
      auStack_40[0] = auStack_5c[0];
      if (puVar4 != (uint *)0x0) {
        auStack_5c[0] = uVar5;
        puStack_64 = puVar4;
        goto LAB_2c583352;
      }
    }
    auStack_40[0] = auStack_5c[0];
    iStack_44 = iStack_60;
    puStack_64 = auStack_5c;
  }
LAB_2c583352:
  iStack_60 = 0;
  *(undefined1 *)puStack_64 = 0;
  if (puStack_64 != auStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  uStack_30 = 0;
  FUN_2c58c9d8(&puStack_64,&uStack_4c);
  FUN_2c592760(param_1,2,&puStack_64);
  if (puStack_64 != auStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  uStack_4c = uVar7;
  if (puStack_48 != auStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*(code **)(*piVar6 + 8) == _LAB_2c583458) {
    *piVar6 = *(int *)(_LAB_2c58345c + 4);
    puVar2 = DAT_2c4726d4;
    piVar1 = DAT_2c4726d0;
    if (piVar6 + 0x14 != (int *)piVar6[0x12]) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (piVar6 + 10 != (int *)piVar6[8]) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (piVar6 + 3 != (int *)piVar6[1]) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*_LAB_2c583450 == iStack_2c) {
      if (piVar6 == (int *)0x0) {
        return;
      }
      uStack_4c = uVar7;
      if (*DAT_2c4726d0 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4);
      }
      FUN_2c644044(*DAT_2c4726d4,0xffffffff);
      FUN_2c47231c(*piVar1,DAT_2c4726d8,0,piVar6);
      FUN_2c644080(*puVar2);
      return;
    }
  }
  else if (*_LAB_2c583450 == iStack_2c) {
                    /* WARNING: Could not recover jumptable at 0x2c58343a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar6 + 8))(piVar6,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

