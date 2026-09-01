/* FUN_100fe96c @ 0x100fe96c */

int FUN_100fe96c(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_2c;
  
  iVar7 = *(int *)(param_1 + 0x310);
  iVar2 = *(int *)(param_1 + 0x318);
  uVar13 = iVar7 + *(int *)(param_1 + 0x314);
  if (iVar2 == 0) {
    local_2c = 0;
  }
  else if (uVar13 < iVar7 + 10U) {
    local_2c = 0;
  }
  else {
    uVar14 = 1;
    local_2c = 0;
    param_3 = param_3 | param_2 << 0x10;
    uVar11 = iVar7 + 4;
    do {
      uVar12 = uVar11 + CONCAT11(*(undefined1 *)(uVar11 + 2),*(undefined1 *)(uVar11 + 3));
      if (uVar13 <= uVar12) {
        uVar12 = uVar13;
      }
      iVar7 = local_2c;
      if ((*(uint *)(param_1 + 0x31c) & uVar14) != 0) {
        puVar10 = (uint *)(uVar11 + 0xe);
        uVar8 = (uint)CONCAT11(*(undefined1 *)(uVar11 + 6),*(undefined1 *)(uVar11 + 7));
        iVar3 = uVar12 - (int)puVar10;
        if (iVar3 < (int)(uVar8 * 6)) {
          uVar8 = (int)((ulonglong)((longlong)DAT_100fea74 * (longlong)iVar3) >> 0x20) -
                  (iVar3 >> 0x1f);
        }
        if (*(char *)(uVar11 + 4) == '\0') {
          uVar5 = 0;
          if ((uVar14 & *(uint *)(param_1 + 800)) == 0) {
            if (uVar8 != 0) {
LAB_100fe9fc:
              uVar5 = *puVar10;
              if (param_3 !=
                  (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                  uVar5 >> 0x18)) goto LAB_100fe9f4;
              sVar1 = CONCAT11((char)puVar10[1],*(undefined1 *)((int)puVar10 + 5));
LAB_100fea0e:
              iVar7 = (int)sVar1;
              if ((*(byte *)(uVar11 + 5) & 8) == 0) {
                iVar7 = local_2c + sVar1;
              }
            }
          }
          else {
            while( true ) {
              uVar9 = uVar8;
              uVar6 = uVar9 + uVar5;
              iVar3 = (uVar6 & 0xfffffffe) + (uVar6 >> 1);
              if (uVar9 <= uVar5) break;
              uVar8 = *(uint *)((int)puVar10 + iVar3 * 2);
              uVar4 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                      uVar8 >> 0x18;
              if (param_3 == uVar4) {
                sVar1 = CONCAT11(*(undefined1 *)((int)puVar10 + iVar3 * 2 + 4),
                                 *(undefined1 *)((int)puVar10 + iVar3 * 2 + 5));
                goto LAB_100fea0e;
              }
              uVar8 = uVar6 >> 1;
              if (uVar4 <= param_3) {
                uVar5 = (uVar6 >> 1) + 1;
                uVar8 = uVar9;
              }
            }
          }
        }
      }
LAB_100fea1c:
      local_2c = iVar7;
      iVar2 = iVar2 + -1;
      uVar14 = uVar14 << 1;
    } while ((iVar2 != 0) && (uVar11 = uVar12, uVar12 + 6 <= uVar13));
  }
  return local_2c;
LAB_100fe9f4:
  uVar8 = uVar8 - 1;
  puVar10 = (uint *)((int)puVar10 + 6);
  if (uVar8 == 0) goto LAB_100fea1c;
  goto LAB_100fe9fc;
}

