/* FUN_1406690c @ 0x1406690c */

int FUN_1406690c(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4,byte param_5
                ,short *param_6,ushort param_7,undefined2 *param_8)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  ushort uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  short *psVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar6 = FUN_140668a4(param_1,param_4,param_8);
  if (iVar6 == 0) {
    iVar10 = (uint)param_5 * 6;
    uVar13 = iVar10 + 0x14;
    puVar7 = (undefined4 *)FUN_14073fdc(uVar13 + param_7,1);
    if (puVar7 == (undefined4 *)0x0) {
      iVar6 = 0x4b;
    }
    else {
      uVar2 = *param_8;
      *(byte *)((int)puVar7 + 10) = (byte)param_2 & 0xef;
      uVar11 = (param_2 & 0x7f) >> 5;
      *(undefined2 *)(puVar7 + 1) = uVar2;
      *(char *)((int)puVar7 + 7) = (char)param_4;
      *(char *)((int)puVar7 + 0xb) = (char)param_1;
      *(byte *)((int)puVar7 + 6) = param_5;
      puVar8 = (undefined4 *)((int)puVar7 + uVar13);
      if (uVar11 == 1) {
        puVar9 = puVar8 + 1;
        *(undefined4 *)((int)puVar7 + uVar13) = *param_3;
        *(short *)(puVar7 + 2) = (short)uVar13;
        uVar13 = iVar10 + 0x18;
      }
      else if (uVar11 == 2) {
        uVar16 = param_3[1];
        uVar15 = param_3[2];
        uVar12 = param_3[3];
        puVar9 = puVar8 + 4;
        *puVar8 = *param_3;
        puVar8[1] = uVar16;
        puVar8[2] = uVar15;
        puVar8[3] = uVar12;
        *(short *)(puVar7 + 2) = (short)uVar13;
        uVar13 = iVar10 + 0x24;
      }
      else {
        puVar9 = puVar8;
        if (uVar11 == 0) {
          *(undefined2 *)(puVar7 + 2) = *(undefined2 *)param_3;
        }
        else {
          iVar6 = 0x40;
        }
      }
      if (param_5 != 0) {
        psVar14 = param_6 + (short)(param_5 - 1 & 0xff) * 10 + 10;
        puVar8 = puVar7;
LAB_140669be:
        do {
          uVar4 = param_6[8];
          *(ushort *)(puVar8 + 3) = uVar4;
          uVar4 = uVar4 >> 0xe;
          *(short *)(puVar8 + 4) = param_6[9];
          if (uVar4 == 1) {
            *puVar9 = *(undefined4 *)param_6;
            *(short *)((int)puVar8 + 0xe) = (short)uVar13;
            uVar13 = uVar13 + 4 & 0xffff;
            puVar9 = puVar9 + 1;
          }
          else {
            if (uVar4 == 2) {
              uVar16 = *(undefined4 *)param_6;
              uVar15 = *(undefined4 *)(param_6 + 2);
              uVar17 = *(undefined4 *)(param_6 + 4);
              uVar12 = *(undefined4 *)(param_6 + 6);
              param_6 = param_6 + 10;
              *puVar9 = uVar16;
              puVar9[1] = uVar15;
              puVar9[2] = uVar17;
              puVar9[3] = uVar12;
              *(short *)((int)puVar8 + 0xe) = (short)uVar13;
              uVar13 = uVar13 + 0x10 & 0xffff;
              puVar9 = puVar9 + 4;
              puVar8 = (undefined4 *)((int)puVar8 + 6);
              if (param_6 == psVar14) break;
              goto LAB_140669be;
            }
            if (uVar4 == 0) {
              sVar3 = *param_6;
              *(short *)((int)puVar8 + 0xe) = sVar3;
              if (sVar3 == 0x2803) {
                *(undefined2 *)(puVar8 + 4) = 0;
                *(undefined2 *)(puVar8 + 3) = 2;
              }
              else if ((sVar3 == 0x2802) || (sVar3 == 0x2900)) {
                *(undefined2 *)(puVar8 + 3) = 2;
              }
            }
          }
          param_6 = param_6 + 10;
          puVar8 = (undefined4 *)((int)puVar8 + 6);
        } while (param_6 != psVar14);
      }
      iVar10 = DAT_14066ad8;
      puVar8 = (undefined4 *)(DAT_14066ad8 + 0x84);
      if (*(undefined4 **)(DAT_14066ad8 + 0x84) != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)(DAT_14066ad8 + 0x84);
        puVar5 = *(undefined4 **)(DAT_14066ad8 + 0x84);
        do {
          puVar8 = puVar5;
          if (*(ushort *)(puVar7 + 1) < *(ushort *)(puVar8 + 1)) {
            *puVar7 = puVar8;
            *puVar9 = puVar7;
            goto LAB_14066a30;
          }
          puVar9 = puVar8;
          puVar5 = (undefined4 *)*puVar8;
        } while ((undefined4 *)*puVar8 != (undefined4 *)0x0);
      }
      *puVar8 = puVar7;
      *puVar7 = 0;
LAB_14066a30:
      if ((param_2 & 0x10) == 0) {
        sVar3 = *(short *)(puVar7 + 1);
        bVar1 = *(byte *)((int)puVar7 + 6);
        *(undefined1 *)(iVar10 + 0x96) = 0;
        FUN_1405bc78(sVar3,(ushort)bVar1 + sVar3 + -1);
      }
    }
  }
  return iVar6;
}

