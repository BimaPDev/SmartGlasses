/* FUN_1403d9a0 @ 0x1403d9a0 */

void FUN_1403d9a0(byte *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  undefined1 auStack_60 [4];
  uint local_5c;
  undefined4 local_58;
  uint *puStack_54;
  undefined4 local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  int local_2c;
  
  local_2c = *DAT_1403dc08;
  if ((param_1 == (byte *)0x0) || (*(int *)(param_1 + 8) == 0)) {
    uVar7 = 0x1a1;
    uVar6 = DAT_1403dc2c;
  }
  else {
    if ((*DAT_1403dc0c == 0) || (iVar4 = FUN_140e5528(), iVar4 != 1)) {
      uVar11 = (uint)*param_1;
      iVar4 = FUN_14053dc8(1);
      if (iVar4 != 0) {
        iVar12 = iVar4 + uVar11 * 4;
        if (*(int *)(iVar12 + 0x14) != 0) {
          FUN_1402a6e8(4,0x1b1,DAT_1403dc18,DAT_1403dc14,DAT_1403dc10,uVar11,iVar4,
                       *(int *)(iVar12 + 0x14));
          uVar8 = (uint)*(ushort *)(*(int *)(iVar12 + 0x14) + 0x14);
          uVar10 = (uint)*(ushort *)(*(int *)(iVar12 + 0x14) + 0xc);
          uVar9 = (uint)*(ushort *)(param_1 + 2);
          FUN_1402a6e8(4,0x1b2,DAT_1403dc18,DAT_1403dc14,DAT_1403dc1c,uVar9,uVar10,uVar8);
          uVar7 = DAT_1403dc58;
          pbVar5 = DAT_1403dc38;
          if (*(short *)(*(int *)(iVar12 + 0x14) + 0xc) != *(short *)(param_1 + 2)) {
            if (*(short *)(*(int *)(iVar12 + 0x14) + 0x14) == *(short *)(param_1 + 2)) {
              pbVar5 = *(byte **)(param_1 + 8);
              uVar13 = (uint)*pbVar5;
              if (uVar13 == 0) {
                FUN_1403d82c(pbVar5,*(undefined2 *)(param_1 + 4));
                uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 6);
                local_58 = FUN_140e5278(auStack_60 + -(uVar8 + 7 & 0xfffffff8),
                                        *(int *)(param_1 + 8) + 8,uVar8);
                puStack_54 = &local_4c;
                local_50 = 2;
                local_5c = uVar8;
                local_4c = uVar13;
                uStack_48 = uVar13;
                local_44 = uVar13;
                uStack_40 = uVar13;
                local_3c = uVar13;
                uStack_38 = uVar13;
                local_34 = uVar13;
                uStack_30 = uVar13;
                FUN_1403d68c(uVar11,&local_5c);
              }
              else if (uVar13 == 1) {
                FUN_1403d8b4(pbVar5,*(undefined2 *)(param_1 + 4));
              }
              else {
                FUN_1402a6e8(4,0x1f0,DAT_1403dc18,DAT_1403dc14,DAT_1403dc20,uVar9,uVar10,uVar8);
              }
            }
            else {
              FUN_1402a6e8(4,0x1f5,DAT_1403dc18,DAT_1403dc14,DAT_1403dc30,uVar9,uVar10,uVar8);
            }
            goto LAB_1403da66;
          }
          pcVar14 = *(char **)(param_1 + 8);
          bVar2 = pcVar14[1];
          uVar9 = (uint)bVar2;
          uVar10 = (uint)(byte)pcVar14[2];
          bVar3 = pcVar14[3];
          uVar13 = (uint)bVar3;
          FUN_1402a6e8(4,0x6c,DAT_1403dc18,DAT_1403dc14,DAT_1403dc3c,DAT_1403dc58,*DAT_1403dc38,
                       uVar8);
          if (*pbVar5 == uVar11) {
            iVar4 = 0;
LAB_1403db38:
            pbVar5[uVar10 + iVar4 * 0xd + 1] = bVar3;
          }
          else {
            FUN_1402a6e8(4,0x6c,DAT_1403dc18,DAT_1403dc14,DAT_1403dc3c,uVar7,pbVar5[0xd],uVar8);
            if (pbVar5[0xd] == uVar11) {
              iVar4 = 1;
              goto LAB_1403db38;
            }
          }
          uVar8 = uVar10;
          uVar15 = uVar9;
          FUN_1402a6e8(4,0x1c0,DAT_1403dc18,DAT_1403dc14,DAT_1403dc40,uVar13,uVar10,uVar9);
          if ((bVar2 & 4) == 0) {
            cVar1 = *pcVar14;
            if (cVar1 == '\x01') {
              FUN_1402a6e8(4,0x1d2,DAT_1403dc18,DAT_1403dc14,DAT_1403dc54,uVar13,uVar8,uVar15);
            }
            else if (cVar1 == '\x02') {
              FUN_1402a6e8(4,0x1d7,DAT_1403dc18,DAT_1403dc14,DAT_1403dc4c,uVar13,uVar8,uVar15);
              FUN_140b0714(*(undefined4 *)(pcVar14 + 4));
            }
            else if (cVar1 == '\0') {
              FUN_1402a6e8(4,0x1cc,DAT_1403dc18,DAT_1403dc14,DAT_1403dc48,uVar13,uVar8,uVar15);
              FUN_140b0778(uVar11,*(undefined4 *)(pcVar14 + 4),pcVar14[2]);
            }
            *(byte *)(DAT_1403dc44 + uVar10) = bVar3;
          }
          else {
            FUN_1402a6e8(4,0x1c4,DAT_1403dc18,DAT_1403dc14,DAT_1403dc50,uVar9 & 4,uVar8,uVar15);
          }
          goto LAB_1403da66;
        }
      }
      FUN_1402a6e8(4,0x1ae,DAT_1403dc18,DAT_1403dc14,DAT_1403dc28,DAT_1403dc24,iVar4);
      goto LAB_1403da66;
    }
    uVar7 = 0x1a6;
    uVar6 = DAT_1403dc34;
  }
  FUN_1402a6e8(4,uVar7,DAT_1403dc18,DAT_1403dc14,uVar6,DAT_1403dc24);
LAB_1403da66:
  if (*DAT_1403dc08 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

