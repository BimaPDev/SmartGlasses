/* FUN_140ae13c @ 0x140ae13c */

int FUN_140ae13c(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  piVar1 = DAT_140ae27c;
  puVar2 = DAT_140ae250;
  if (param_2 < 0x36000) {
    if (param_2 == 0) {
      FUN_1402a6e8(4,0x20b,DAT_140ae264,DAT_140ae260,DAT_140ae268,DAT_140ae258);
      iVar3 = 0;
    }
    else if (*DAT_140ae27c == 0) {
      FUN_1402a6e8(4,0x210,DAT_140ae264,DAT_140ae260,DAT_140ae26c,DAT_140ae258);
      iVar3 = 0;
    }
    else {
      FUN_140e5148(*DAT_140ae250,0xffffffff);
      iVar9 = *piVar1;
      iVar3 = FUN_140ae8c0(iVar9,param_2);
      uVar6 = DAT_140ae270;
      if (iVar3 == 0) {
        FUN_1402a6e8(4,0x2ac,DAT_140ae264,DAT_140ae260,DAT_140ae274,DAT_140ae270,param_2);
        FUN_140adf30(iVar9);
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140ae278,uVar6,0x2ae);
      }
      FUN_140e5658(iVar3,0,param_2);
      iVar4 = FUN_140ae7d8(iVar3);
      iVar9 = DAT_140ae254;
      iVar7 = DAT_140ae254 + param_1 * 0xc;
      uVar8 = 0;
      uVar5 = iVar4 + *(int *)(iVar7 + 0x1c);
      *(uint *)(iVar7 + 0x1c) = uVar5;
      if (uVar5 < *(uint *)(iVar7 + 0x24)) {
        uVar5 = *(uint *)(iVar7 + 0x24);
      }
      *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + 1;
      *(uint *)(iVar7 + 0x24) = uVar5;
      iVar4 = iVar9;
      do {
        piVar1 = (int *)(iVar4 + 0x1c);
        iVar4 = iVar4 + 0xc;
        uVar8 = uVar8 + *piVar1;
      } while (iVar9 + 0x90 != iVar4);
      uVar6 = *puVar2;
      uVar5 = *(uint *)(iVar9 + 0x14);
      if (*(uint *)(iVar9 + 0x14) < uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)(iVar9 + 0x14) = uVar5;
      FUN_140e52d8(uVar6);
    }
  }
  else {
    iVar3 = 0;
    FUN_1402a6e8(4,0x206,DAT_140ae264,DAT_140ae260,DAT_140ae25c,DAT_140ae258,0x36000);
  }
  return iVar3;
}

