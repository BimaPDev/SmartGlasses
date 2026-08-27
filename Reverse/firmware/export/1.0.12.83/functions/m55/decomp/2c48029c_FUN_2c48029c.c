/* FUN_2c48029c @ 0x2c48029c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48029c(int param_1,int param_2,uint *param_3,int param_4,short param_5,char *param_6)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iStack_e4;
  int iStack_e0;
  uint auStack_d4 [8];
  undefined4 auStack_b4 [7];
  undefined4 uStack_98;
  undefined4 auStack_94 [8];
  undefined4 auStack_74 [7];
  undefined4 uStack_58;
  undefined4 auStack_54 [8];
  int iStack_34;
  
  iStack_34 = *_LAB_2c480594;
  iVar11 = (int)*param_6;
  if (iVar11 < 1) {
    iStack_e0 = iVar11 << 2;
    iStack_e4 = param_2 + iVar11 * 4;
    if (param_4 == 0) {
      auStack_d4[0] = 1;
    }
  }
  else {
    uVar2 = iVar11 - 1;
    puVar5 = (undefined4 *)(param_2 + -4);
    puVar10 = &uStack_98;
    do {
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
      *puVar10 = *puVar5;
    } while ((undefined4 *)(param_2 + (uVar2 & 0xff) * 4) != puVar5);
    iStack_e0 = iVar11 * 4;
    iStack_e4 = param_2 + iVar11 * 4;
    puVar5 = (undefined4 *)(iStack_e0 + -4 + param_2);
    puVar10 = &uStack_58;
    do {
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
      *puVar10 = *puVar5;
    } while ((undefined4 *)(iStack_e4 + (uVar2 & 0xff) * 4) != puVar5);
    if (param_4 == 0) {
      puVar7 = auStack_d4;
      do {
        puVar6 = puVar7 + 1;
        *puVar7 = 0;
        puVar7 = puVar6;
      } while (puVar6 != auStack_d4 + (uVar2 & 0xff) + 1);
      auStack_d4[0] = 1;
    }
    else {
      puVar7 = (uint *)(param_4 + -4);
      puVar6 = auStack_d4;
      do {
        puVar7 = puVar7 + 1;
        *puVar6 = *puVar7;
        puVar6 = puVar6 + 1;
      } while ((uint *)(param_4 + (uVar2 & 0xff) * 4) != puVar7);
    }
    cVar4 = '\0';
    puVar10 = auStack_b4;
    do {
      cVar4 = cVar4 + '\x01';
      *puVar10 = puVar10[8];
      puVar10 = puVar10 + 1;
    } while (cVar4 < iVar11);
    cVar4 = '\0';
    puVar10 = auStack_74;
    do {
      cVar4 = cVar4 + '\x01';
      *puVar10 = puVar10[8];
      puVar10 = puVar10 + 1;
    } while (cVar4 < iVar11);
  }
  uVar2 = (uint)(short)(param_5 + -2);
  FUN_2c47f6cc(auStack_94,auStack_54,auStack_d4,param_6);
  (**(code **)(param_6 + 0xa4))(auStack_94,auStack_54,auStack_d4,param_6);
  FUN_2c47f6cc(auStack_b4,auStack_74,auStack_d4,param_6);
  if (0 < (int)uVar2) {
    do {
      sVar1 = (short)uVar2 + -1;
      uVar2 = (uint)((1 << (uVar2 & 0x1f) & param_3[(int)uVar2 >> 5]) == 0);
      puVar13 = auStack_b4 + uVar2 * 8;
      puVar9 = auStack_74 + uVar2 * 8;
      puVar5 = auStack_b4 + (1 - uVar2) * 8;
      puVar10 = auStack_74 + (1 - uVar2) * 8;
      FUN_2c4800b0(puVar5,puVar10,puVar13,puVar9,param_6);
      FUN_2c47ff3c(puVar13,puVar9,puVar5,puVar10,param_6);
      uVar2 = (uint)sVar1;
    } while (sVar1 != 0);
  }
  uVar2 = *param_3 & 1;
  uVar12 = ~*param_3 & 1;
  puVar9 = auStack_b4 + uVar2 * 8;
  puVar5 = auStack_74 + uVar2 * 8;
  puVar10 = auStack_b4 + uVar12 * 8;
  puVar13 = auStack_74 + uVar12 * 8;
  FUN_2c4800b0(puVar9,puVar5,puVar10,puVar13,param_6);
  iVar3 = FUN_2c47f470(auStack_d4,auStack_94,auStack_b4,iVar11);
  if (iVar3 != 0) {
    FUN_2c47f410(auStack_d4,auStack_d4,param_6 + 4,iVar11);
  }
  FUN_2c47f554(auStack_d4,auStack_d4,puVar5,param_6);
  FUN_2c47f554(auStack_d4,auStack_d4,param_2,param_6);
  if (iVar11 < 1) {
    FUN_2c47f554(auStack_d4,auStack_d4,iStack_e4,param_6);
    FUN_2c47f554(auStack_d4,auStack_d4,puVar9,param_6);
    FUN_2c47ff3c(puVar10,puVar13,puVar9,puVar5,param_6);
    FUN_2c47f6cc(auStack_b4,auStack_74,auStack_d4,param_6);
  }
  else {
    uVar12 = iVar11 - 1U & 0xff;
    puVar6 = auStack_d4 + uVar12 + 1;
    uVar2 = 0;
    puVar7 = auStack_d4;
    do {
      puVar8 = puVar7 + 1;
      uVar2 = uVar2 | *puVar7;
      puVar7 = puVar8;
    } while (puVar6 != puVar8);
    puVar7 = auStack_d4;
    if (uVar2 == 0) {
      do {
        puVar8 = puVar7 + 1;
        *puVar7 = 0;
        if (puVar6 == puVar8) break;
        puVar7 = puVar7 + 2;
        *puVar8 = 0;
      } while (puVar6 != puVar7);
    }
    else {
      FUN_2c47fc18(auStack_d4,auStack_d4,param_6 + 4,iVar11);
    }
    FUN_2c47f554(auStack_d4,auStack_d4,iStack_e4,param_6);
    FUN_2c47f554(auStack_d4,auStack_d4,puVar9,param_6);
    FUN_2c47ff3c(puVar10,puVar13,puVar9,puVar5,param_6);
    FUN_2c47f6cc(auStack_b4,auStack_74,auStack_d4,param_6);
    puVar9 = (undefined4 *)(uVar12 * 4 + param_1);
    puVar10 = (undefined4 *)(param_1 + -4);
    puVar5 = auStack_b4;
    do {
      puVar10 = puVar10 + 1;
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (puVar9 != puVar10);
    puVar10 = (undefined4 *)(param_1 + iStack_e0 + -4);
    puVar5 = auStack_74;
    do {
      puVar10 = puVar10 + 1;
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
    } while ((undefined4 *)((int)puVar9 + iStack_e0) != puVar10);
  }
  if (*_LAB_2c480594 != iStack_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

