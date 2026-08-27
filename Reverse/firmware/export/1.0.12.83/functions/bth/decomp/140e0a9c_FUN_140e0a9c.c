/* FUN_140e0a9c @ 0x140e0a9c */

int FUN_140e0a9c(undefined4 param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int extraout_r1;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_r3;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  
  uVar12 = (int)param_3 >> 5;
  iVar2 = *(int *)(param_2 + 4);
  iVar9 = *(int *)(param_2 + 0x10) + uVar12;
  iVar5 = *(int *)(param_2 + 8);
  iVar8 = iVar9 + 1;
  do {
    if (iVar8 <= iVar5) {
      iVar2 = FUN_140e05e4(param_1,iVar2);
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)(iVar2 + 0x10);
        for (iVar5 = 0; iVar5 < (int)uVar12; iVar5 = iVar5 + 1) {
          puVar4 = puVar4 + 1;
          *puVar4 = 0;
        }
        puVar6 = (uint *)(param_2 + 0x14);
        uVar10 = param_3 & 0x1f;
        puVar3 = (uint *)(iVar2 + 0x14 + (uVar12 & ~((int)param_3 >> 0x1f)) * 4);
        puVar1 = puVar6 + *(int *)(param_2 + 0x10);
        if (uVar10 == 0) {
          puVar3 = puVar3 + -1;
          do {
            puVar11 = puVar6 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = *puVar6;
            puVar6 = puVar11;
          } while (puVar11 < puVar1);
        }
        else {
          uVar12 = 0;
          puVar11 = puVar3;
          do {
            *puVar11 = *puVar6 << uVar10 | uVar12;
            puVar7 = puVar6 + 1;
            uVar12 = *puVar6 >> (0x20 - uVar10 & 0xff);
            puVar6 = puVar7;
            puVar11 = puVar11 + 1;
          } while (puVar7 < puVar1);
          iVar5 = ((int)puVar1 + (-0x15 - param_2) & 0xfffffffcU) + 4;
          if (puVar1 < (uint *)(param_2 + 0x15)) {
            iVar5 = 4;
          }
          *(uint *)((int)puVar3 + iVar5) = uVar12;
          if (uVar12 != 0) {
            iVar8 = iVar9 + 2;
          }
        }
        *(int *)(iVar2 + 0x10) = iVar8 + -1;
        FUN_140e0664(param_1,param_2);
        return iVar2;
      }
      FUN_140da8c8(DAT_140e0b78,0x1d9,0,DAT_140e0b74);
      iVar2 = extraout_r1;
      iVar5 = extraout_r3;
    }
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 << 1;
  } while( true );
}

