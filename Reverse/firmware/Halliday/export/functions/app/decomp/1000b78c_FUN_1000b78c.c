/* FUN_1000b78c @ 0x1000b78c */

int FUN_1000b78c(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint local_30;
  int local_2c;
  
  iVar10 = 0;
  local_2c = *DAT_1000b894;
  FUN_10114a38();
  FUN_1011ea48(param_2,0,param_4);
  puVar1 = DAT_1000b898;
  puVar5 = (undefined4 *)*DAT_1000b898;
  do {
    if (puVar5 == puVar1) {
      FUN_101150e0();
      if (*DAT_1000b894 == local_2c) {
        return iVar10;
      }
      FUN_1013cdc0();
    }
    iVar6 = 0;
    iVar3 = puVar5[3];
    iVar4 = (iVar3 + 4) * 4;
    for (iVar9 = 0; iVar9 < (int)puVar5[3]; iVar9 = iVar9 + 1) {
      if (puVar5[5] == 0) {
        FUN_1011b7b0(puVar5[2],iVar9 * 4 + 0x10);
        FUN_1005c6dc(puVar5[2],&local_30,4);
      }
      else {
        local_30 = *(uint *)(puVar5[5] + iVar9 * 4);
      }
      if ((local_30 & 0xff) == param_1) {
        uVar2 = (local_30 & 0xfffff) >> 8;
        uVar11 = uVar2;
        if (uVar2 < param_3) {
          uVar11 = param_3;
        }
        uVar7 = uVar2 + (local_30 >> 0x14);
        if (param_4 + param_3 < uVar7) {
          iVar8 = (param_4 + param_3) - uVar11;
        }
        else {
          iVar8 = uVar7 - uVar11;
        }
        if (0 < iVar8) {
          iVar6 = (uVar11 - param_3) + param_2;
          if (puVar5[4] == 0) {
            FUN_1011b7b0(puVar5[2],(uVar11 - uVar2) + iVar4,0);
            FUN_1005c6dc(puVar5[2],iVar6,iVar8);
          }
          else {
            FUN_1011ea40(iVar6,(uVar11 - uVar2) + (iVar3 + 4) * -4 + iVar4 + puVar5[4],iVar8);
          }
          iVar6 = 1;
        }
      }
      iVar4 = iVar4 + (local_30 >> 0x14);
    }
    puVar5 = (undefined4 *)*puVar5;
    iVar10 = iVar10 + iVar6;
  } while( true );
}

