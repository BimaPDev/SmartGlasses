/* FUN_1012237c @ 0x1012237c */

void FUN_1012237c(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  char *pcVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined4 local_24;
  undefined4 uStack_20;
  
  uVar7 = 0;
  pcVar12 = (char *)*param_1;
  *(undefined1 *)((int)param_2 + 0x1a) = 0;
  if (param_1[0xe] != 0) {
    local_24 = param_2;
    uStack_20 = param_3;
    if (*pcVar12 == '\x04') {
      uVar10 = 0x40;
      uVar5 = 0;
      iVar9 = *(int *)(pcVar12 + 0x10);
      for (; uVar7 < *(byte *)(iVar9 + 0x23); uVar7 = uVar7 + 1) {
        if ((uVar10 & 0x1f) == 0) {
          uVar10 = uVar10 + 2;
        }
        uVar1 = *(undefined1 *)(iVar9 + uVar10 + 1);
        uVar11 = CONCAT11(uVar1,*(undefined1 *)(iVar9 + uVar10));
        iVar3 = FUN_101242f6(uVar11,&local_24,3,uVar1,param_1);
        if (iVar3 < 1) goto LAB_101223ac;
        uVar6 = uVar5;
        if (iVar3 == 1) {
          uVar11 = (ushort)(byte)local_24;
        }
        else if (iVar3 == 2) {
          uVar11 = (ushort)local_24._1_1_;
          *(byte *)((int)param_2 + uVar5 + 0x1a) = (byte)local_24;
          uVar6 = uVar5 + 1;
        }
        else if (iVar3 == 3) {
          *(byte *)((int)param_2 + uVar5 + 0x1a) = (byte)local_24;
          uVar11 = (ushort)local_24._2_1_;
          uVar6 = uVar5 + 2;
          *(byte *)((int)param_2 + uVar5 + 0x1b) = local_24._1_1_;
        }
        if (0xfe < uVar6) goto LAB_101223ac;
        *(char *)((int)param_2 + uVar6 + 0x1a) = (char)uVar11;
        uVar10 = uVar10 + 2;
        uVar5 = uVar6 + 1;
      }
      if (uVar5 == 0) {
LAB_101223ac:
        uVar5 = 1;
        *(undefined1 *)((int)param_2 + 0x1a) = 0x3f;
      }
      *(undefined1 *)((int)param_2 + uVar5 + 0x1a) = 0;
      *(undefined1 *)((int)param_2 + 0xd) = 0;
      bVar13 = *(byte *)(iVar9 + 4);
      *(byte *)((int)param_2 + 0xc) = bVar13;
      if ((int)((uint)bVar13 << 0x1b) < 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = FUN_1012228a(iVar9 + 0x38);
      }
      *param_2 = uVar14;
      *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(iVar9 + 0xc);
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar9 + 0xe);
    }
    else {
      uVar5 = uVar7;
      puVar15 = param_1;
      if (param_1[0x13] == -1) {
        param_1[0x13] = param_1[0xc];
      }
      else {
        while( true ) {
          uVar10 = (uint)*(ushort *)(*(int *)(pcVar12 + 0xc) + uVar5);
          if (uVar10 == 0) break;
          iVar9 = FUN_101242f6(uVar10,&local_24,3,*(int *)(pcVar12 + 0xc),puVar15);
          if (iVar9 < 1) {
LAB_101224d8:
            uVar7 = 0;
            break;
          }
          uVar6 = uVar7;
          if (iVar9 == 1) {
            uVar10 = (uint)local_24 & 0xff;
          }
          else if (iVar9 == 2) {
            uVar10 = (uint)local_24._1_1_;
            *(byte *)((int)param_2 + uVar7 + 0x1a) = (byte)local_24;
            uVar6 = uVar7 + 1;
          }
          else if (iVar9 == 3) {
            *(byte *)((int)param_2 + uVar7 + 0x1a) = (byte)local_24;
            uVar10 = (uint)local_24 >> 0x10 & 0xff;
            uVar6 = uVar7 + 2;
            *(byte *)((int)param_2 + uVar7 + 0x1b) = local_24._1_1_;
          }
          if (0xfe < uVar6) goto LAB_101224d8;
          *(char *)((int)param_2 + uVar6 + 0x1a) = (char)uVar10;
          uVar7 = uVar6 + 1;
          uVar5 = uVar5 + 2;
        }
        *(undefined1 *)((int)param_2 + uVar7 + 0x1a) = 0;
      }
      iVar3 = 0;
      iVar9 = param_1[0xf];
      uVar7 = 0;
      cVar2 = *(char *)((int)param_2 + 0x1a);
      pbVar8 = (byte *)(iVar9 + -1);
      do {
        pbVar8 = pbVar8 + 1;
        uVar5 = (uint)*pbVar8;
        uVar7 = uVar7 + 1;
        if (uVar5 != 0x20) {
          if (uVar5 == 5) {
            uVar5 = 0xe5;
          }
          if (uVar7 == 9) {
            if (cVar2 == '\0') {
              *(undefined1 *)((int)param_2 + iVar3 + 0x1a) = 0x2e;
            }
            *(undefined1 *)((int)param_2 + iVar3 + 0xd) = 0x2e;
            iVar3 = iVar3 + 1;
          }
          *(char *)((int)param_2 + iVar3 + 0xd) = (char)uVar5;
          if (cVar2 == '\0') {
            if (uVar5 - 0x41 < 0x1a) {
              if (uVar7 < 9) {
                bVar13 = 8;
              }
              else {
                bVar13 = 0x10;
              }
              if ((*(byte *)(iVar9 + 0xc) & bVar13) != 0) {
                uVar5 = uVar5 + 0x20 & 0xff;
              }
            }
            *(char *)((int)param_2 + iVar3 + 0x1a) = (char)uVar5;
          }
          iVar3 = iVar3 + 1;
        }
      } while (uVar7 != 0xb);
      if ((cVar2 == '\0') &&
         (*(undefined1 *)((int)param_2 + iVar3 + 0x1a) = 0, *(char *)(iVar9 + 0xc) == '\0')) {
        iVar3 = 0;
      }
      *(undefined1 *)((int)param_2 + iVar3 + 0xd) = 0;
      *(undefined1 *)((int)param_2 + 0xc) = *(undefined1 *)(iVar9 + 0xb);
      uVar14 = FUN_1012227a(iVar9 + 0x1c);
      *(int *)param_2 = (int)uVar14;
      *(undefined4 *)((int)param_2 + 4) = 0;
      uVar4 = FUN_1012227a((int)((ulonglong)uVar14 >> 0x20) + 0x16);
      *(short *)((int)param_2 + 10) = (short)uVar4;
      *(short *)(param_2 + 1) = (short)((uint)uVar4 >> 0x10);
    }
  }
  return;
}

