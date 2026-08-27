/* FUN_2c5e6ce4 @ 0x2c5e6ce4 */

void FUN_2c5e6ce4(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_20;
  uint local_1c;
  
  piVar2 = DAT_2c5e6d68;
  FUN_2c60710c(*DAT_2c5e6d64,0x27d1);
  uVar11 = 0;
  iVar6 = DAT_2c5e6d6c;
  piVar10 = piVar2;
  while( true ) {
    iVar6 = (**(code **)(iVar6 + 0x44))(0);
    puVar4 = DAT_2c5e6d70;
    puVar1 = DAT_2c5e6c88;
    uVar11 = uVar11 + iVar6;
    if (piVar10 == piVar2 + 7) break;
    iVar6 = *piVar10;
    piVar10 = piVar10 + 1;
  }
  if (uVar11 < 2) {
    cVar3 = FUN_2c6033b4(*DAT_2c5e6d70,0,0x21);
    if ((cVar3 == '\0') && (iVar6 = FUN_2c6073f8(*puVar4), iVar6 != 0)) {
      local_20 = DAT_2c5e6d74;
      local_1c = uVar11;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5e6d78,0x14d,DAT_2c5e6d7c);
    }
    return;
  }
  if (*(char *)(DAT_2c5e6c84 + 0x20) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5e6c9c,0x11e,DAT_2c5e6c98);
  }
  puVar4 = (undefined4 *)FUN_2c5e697c(*(char *)(DAT_2c5e6c84 + 0x20));
  FUN_2c608c7c(*puVar4);
  FUN_2c606abc(*puVar1,1);
  FUN_2c62e838(*puVar1,0);
  FUN_2c606e74(*puVar1,0xff,0);
  puVar4 = DAT_2c5e6c8c;
  if (param_1 != 0) {
    if (param_2 == 0) {
      FUN_2c606d6c(*DAT_2c5e6c8c,0,0);
      FUN_2c5e4b48(*puVar1,0,0xff,0);
      uVar7 = 0xe;
      uVar5 = *puVar4;
      uVar8 = 0;
      uVar9 = DAT_2c5e6c90;
    }
    else {
      FUN_2c606d6c(*DAT_2c5e6c8c,0);
      uVar7 = 0;
      uVar8 = 0xe;
      uVar5 = *puVar4;
      uVar9 = uVar7;
    }
    local_1c = *DAT_2c5e4cd0;
    FUN_2c62e7b4(&local_60,uVar7,uVar8,0);
    local_44 = DAT_2c5e4cd4;
    local_5c = DAT_2c5e4cd8;
    local_34 = 300;
    local_60 = uVar5;
    local_54 = uVar9;
    local_40 = uVar7;
    uStack_3c = uVar7;
    local_38 = uVar8;
    FUN_2c62e8ec(&local_60);
    if (*DAT_2c5e4cd0 == local_1c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  if (param_2 != 0) {
    FUN_2c60710c(*DAT_2c5e6c8c,0xe);
    FUN_2c606d6c(*puVar4,0xff,0);
    FUN_2c5e4c10(*puVar4,0,0xff,0);
    return;
  }
  FUN_2c606d6c(*DAT_2c5e6c8c,0,0);
  FUN_2c5e4b48(*puVar1,0,0xff,0);
  FUN_2c5e4c10(*puVar4,DAT_2c5e6c90,0,0xff);
  return;
}

