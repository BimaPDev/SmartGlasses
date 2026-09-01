/* FUN_100840a8 @ 0x100840a8 */

/* WARNING: Removing unreachable block (ram,0x10083ecc) */
/* WARNING: Removing unreachable block (ram,0x10083f14) */
/* WARNING: Removing unreachable block (ram,0x10083ed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100840a8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined8 uVar14;
  
  uVar6 = (uint)*DAT_100840c4;
  if (uVar6 != 0) {
    FUN_10119dc2(DAT_100840c8);
    return 0;
  }
  uVar7 = (DAT_10084038 - DAT_10084034) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_1008403c | uVar7,DAT_10084044,DAT_10084040,param_1,0,param_2);
  uVar14 = FUN_10083e38(param_1);
  iVar2 = DAT_10084054;
  if ((int)uVar14 < 0) {
    FUN_100a5b78(DAT_10084048 | uVar7,DAT_10084044,DAT_10084050,DAT_1008404c,param_1,param_2);
    uVar4 = 0xffffffea;
  }
  else {
    iVar8 = (int)uVar14 * 0xe + *(int *)(DAT_10084054 + 0x20);
    FUN_1011401c(DAT_10084054,(int)((ulonglong)uVar14 >> 0x20),0xffffffff,0xffffffff);
    cVar1 = *(char *)(iVar8 + 1);
    if (cVar1 == '\0') {
      FUN_100a5b78(DAT_1008406c | uVar7,DAT_10084044,DAT_10084068,0,uVar6,param_2);
    }
    else {
      *(char *)(iVar8 + 1) = cVar1 + -1;
    }
    uVar11 = (uint)*(byte *)(iVar2 + 0x1a);
    uVar10 = (uint)*(byte *)(iVar2 + 0x18);
    do {
      uVar11 = uVar11 - 1;
      if (uVar11 == 0xffffffff) {
        FUN_100a5b78(uVar7 | 0xcd0031,DAT_1008405c,DAT_10084058,*(undefined1 *)(iVar2 + 0x19),uVar6,
                     param_2);
        uVar11 = (uint)*(byte *)(iVar2 + 0x19);
        goto LAB_10083f00;
      }
    } while (*(char *)(*(int *)(iVar2 + 0x20) + 1 + uVar11 * 0xe) == '\0');
    if (uVar10 == uVar11) {
      FUN_100a5b78(uVar7 | 0xc70031,DAT_1008405c,DAT_10084070,uVar10,uVar6,param_2);
    }
    else {
LAB_10083f00:
      uVar4 = DAT_1008407c;
      while (cVar1 = (char)uVar10, uVar10 != uVar11) {
        if ((int)uVar11 < (int)uVar10) {
          bVar12 = cVar1 - 1;
        }
        else {
          bVar12 = cVar1 + 1;
        }
        uVar13 = (uint)bVar12;
        iVar8 = *(int *)(iVar2 + 0x20);
        iVar9 = iVar8 + uVar13 * 0xe;
        uVar6 = FUN_10056630();
        FUN_10055d00();
        FUN_100a5b78(uVar7 | 0xe60032,DAT_1008405c,uVar4,*(undefined1 *)(iVar8 + uVar10 * 0xe),
                     *(undefined1 *)(iVar8 + uVar13 * 0xe));
        (*DAT_10084074)(1,uVar10,uVar13);
        pcVar3 = DAT_10084074;
        uVar5 = (uint)*(ushort *)(iVar9 + 0xc);
        if (uVar6 < uVar5) {
          if ((int)(_DAT_40004000 << 0xe) < 0) {
            iVar8 = uVar5 + 0x32;
          }
          else {
            iVar8 = uVar5 + 100;
          }
          FUN_10056678(iVar8);
          for (uVar5 = uVar6; uVar5 < *(ushort *)(iVar9 + 0xc); uVar5 = uVar5 + 0x32) {
            FUN_10056648();
          }
        }
        FUN_10119dc2(DAT_10084078,*(undefined2 *)(iVar9 + 4),*(undefined2 *)(iVar9 + 2),
                     *(undefined2 *)(iVar9 + 6),*(undefined2 *)(iVar9 + 8),
                     *(undefined2 *)(iVar9 + 10),*(undefined2 *)(iVar9 + 0xc));
        FUN_10055de0(*(undefined2 *)(iVar9 + 4),*(undefined2 *)(iVar9 + 2));
        FUN_10055d30(*(undefined2 *)(iVar9 + 6),*(undefined2 *)(iVar9 + 8),
                     *(undefined2 *)(iVar9 + 10));
        if (*(ushort *)(iVar9 + 0xc) < uVar6) {
          FUN_10056648();
          if ((_DAT_40004000 & 0x20000) == 0) {
            iVar8 = *(ushort *)(iVar9 + 0xc) + 100;
          }
          else {
            iVar8 = *(ushort *)(iVar9 + 0xc) + 0x32;
          }
          FUN_10056678(iVar8);
        }
        (*pcVar3)(2,uVar10,uVar13);
        uVar10 = uVar13;
      }
      *(char *)(iVar2 + 0x18) = cVar1;
    }
    FUN_10113fd0(DAT_10084054);
    uVar4 = 0;
  }
  return uVar4;
}

