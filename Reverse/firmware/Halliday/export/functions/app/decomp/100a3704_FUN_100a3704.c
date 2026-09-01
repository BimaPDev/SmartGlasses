/* FUN_100a3704 @ 0x100a3704 */

undefined4 FUN_100a3704(int param_1,short *param_2,undefined4 param_3)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  short *psVar6;
  char *pcVar7;
  short *psVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  pcVar13 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 8);
  if (pcVar13 != (code *)0x0) {
    (*pcVar13)(*(int *)(param_1 + 4),&local_2c,param_3,pcVar13,param_1);
  }
  bVar19 = (local_28 & 0xffff) == 1;
  iVar10 = *DAT_100a387c;
  *param_2 = (short)local_2c;
  param_2[1] = local_2c._2_2_;
  *(bool *)(param_2 + 4) = bVar19;
  psVar8 = DAT_100a388c;
  psVar6 = DAT_100a3884;
  psVar5 = DAT_100a3880;
  if (iVar10 != 0) {
    *(undefined1 *)(param_2 + 2) = local_28._2_1_;
    *(undefined1 *)((int)param_2 + 5) = local_28._2_1_;
    goto LAB_100a3820;
  }
  if ((char)DAT_100a3880[4] == '\0') {
    uVar14 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if ((local_28 & 0xffff) == 1) {
      sVar3 = (short)local_2c - *DAT_100a3880;
      sVar4 = local_2c._2_2_ - DAT_100a3880[1];
      psVar1 = DAT_100a388c + 1;
      uVar18 = (uint)(short)(*DAT_100a388c + sVar3);
      uVar15 = (uint)(short)(*psVar1 + sVar4);
      *DAT_100a388c = *DAT_100a388c + sVar3;
      psVar8[1] = *psVar1 + sVar4;
      uVar16 = (uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f) & 0xffff;
      uVar17 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f) & 0xffff;
      if ((*(byte *)(param_1 + 0x14) < uVar16) || (*(byte *)(param_1 + 0x14) < uVar17)) {
        if (uVar16 < uVar17) {
          if ((int)uVar15 < 1) {
            uVar9 = 2;
          }
          else {
            uVar9 = 1;
          }
        }
        else if ((int)uVar18 < 1) {
          uVar9 = 3;
        }
        else {
          uVar9 = 4;
        }
      }
      uVar15 = (int)sVar3 >> 0x1f;
      if (((((int)sVar3 ^ uVar15) - uVar15 & 0xffff) < (uint)*(byte *)(param_1 + 0x16)) &&
         (uVar15 = (int)sVar4 >> 0x1f,
         (((int)sVar4 ^ uVar15) - uVar15 & 0xffff) < (uint)*(byte *)(param_1 + 0x16))) {
        *psVar6 = 0;
        psVar6[1] = 0;
      }
      bVar2 = *(byte *)(param_1 + 0x17);
      uVar16 = (uint)(short)(sVar3 + *psVar6);
      uVar17 = (uint)(short)(sVar4 + psVar6[1]);
      *psVar6 = sVar3 + *psVar6;
      psVar6[1] = sVar4 + psVar6[1];
      uVar18 = (uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f) & 0xffff;
      uVar15 = (uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f) & 0xffff;
      if ((bVar2 < uVar18) || (bVar2 < uVar15)) {
        if (uVar18 < uVar15) {
          if ((int)uVar17 < 1) {
            uVar14 = 2;
          }
          else {
            uVar14 = 1;
          }
        }
        else if ((int)uVar16 < 1) {
          uVar14 = 3;
        }
        else {
          uVar14 = 4;
        }
        goto LAB_100a3814;
      }
    }
    else {
      *DAT_100a3884 = 0;
      psVar6[1] = 0;
      *psVar8 = 0;
      psVar8[1] = 0;
    }
    uVar14 = 0;
  }
LAB_100a3814:
  *(undefined1 *)(param_2 + 2) = uVar14;
  *(undefined1 *)((int)param_2 + 5) = uVar9;
  uVar11 = *(undefined4 *)(param_2 + 2);
  uVar12 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)psVar5 = *(undefined4 *)param_2;
  *(undefined4 *)(psVar5 + 2) = uVar11;
  *(undefined4 *)(psVar5 + 4) = uVar12;
LAB_100a3820:
  pcVar7 = DAT_100a3888;
  if ((bool)*DAT_100a3888 != bVar19) {
    FUN_100a36ac(bVar19);
    sVar3 = param_2[4];
    *pcVar7 = (char)sVar3;
    if ((char)sVar3 == '\x01') {
      FUN_1011aab8();
    }
    else {
      FUN_1011aabe(1);
    }
  }
  return 0;
}

