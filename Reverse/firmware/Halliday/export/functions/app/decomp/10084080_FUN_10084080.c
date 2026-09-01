/* FUN_10084080 @ 0x10084080 */

/* WARNING: Removing unreachable block (ram,0x10083f22) */
/* WARNING: Removing unreachable block (ram,0x10083f28) */
/* WARNING: Removing unreachable block (ram,0x10083f24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10084080(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  if (*DAT_100840a0 != '\0') {
    FUN_10119dc2(DAT_100840a4);
    return 0;
  }
  uVar6 = (DAT_10084038 - DAT_10084034) * 0x20 & 0xff00;
  uVar14 = 1;
  FUN_100a5b78(DAT_1008403c | uVar6,DAT_10084044,DAT_10084040,param_1,1,param_2);
  uVar13 = FUN_10083e38(param_1);
  iVar2 = DAT_10084054;
  if ((int)uVar13 < 0) {
    FUN_100a5b78(DAT_10084048 | uVar6,DAT_10084044,DAT_10084050,DAT_1008404c,param_1,param_2);
    uVar14 = 0xffffffea;
  }
  else {
    iVar7 = (int)uVar13 * 0xe + *(int *)(DAT_10084054 + 0x20);
    FUN_1011401c(DAT_10084054,(int)((ulonglong)uVar13 >> 0x20),0xffffffff,0xffffffff);
    cVar1 = *(char *)(iVar7 + 1);
    if (cVar1 == -1) {
      FUN_100a5b78(DAT_10084064 | uVar6,DAT_10084044,DAT_10084060,0xff,uVar14,param_2);
    }
    else {
      *(char *)(iVar7 + 1) = cVar1 + '\x01';
    }
    uVar10 = (uint)*(byte *)(iVar2 + 0x1a);
    uVar9 = (uint)*(byte *)(iVar2 + 0x18);
    do {
      uVar10 = uVar10 - 1;
      if (uVar10 == 0xffffffff) {
        FUN_100a5b78(uVar6 | 0xcd0031,DAT_1008405c,DAT_10084058,*(undefined1 *)(iVar2 + 0x19),uVar14
                     ,param_2);
        uVar10 = (uint)*(byte *)(iVar2 + 0x19);
        goto LAB_10083f00;
      }
    } while (*(char *)(*(int *)(iVar2 + 0x20) + 1 + uVar10 * 0xe) == '\0');
    if (uVar9 == uVar10) {
      FUN_100a5b78(uVar6 | 0xc70031,DAT_1008405c,DAT_10084070,uVar9,uVar14,param_2);
    }
    else {
LAB_10083f00:
      uVar14 = DAT_1008407c;
      while (cVar1 = (char)uVar9, uVar9 != uVar10) {
        if ((int)uVar10 < (int)uVar9) {
          bVar11 = cVar1 - 1;
        }
        else {
          bVar11 = cVar1 + 1;
        }
        uVar12 = (uint)bVar11;
        iVar7 = *(int *)(iVar2 + 0x20);
        iVar8 = iVar7 + uVar12 * 0xe;
        uVar4 = FUN_10056630();
        FUN_10055d00();
        FUN_100a5b78(uVar6 | 0xe60032,DAT_1008405c,uVar14,*(undefined1 *)(iVar7 + uVar9 * 0xe),
                     *(undefined1 *)(iVar7 + uVar12 * 0xe));
        (*DAT_10084074)(1,uVar9,uVar12);
        pcVar3 = DAT_10084074;
        uVar5 = (uint)*(ushort *)(iVar8 + 0xc);
        if (uVar4 < uVar5) {
          if ((int)(_DAT_40004000 << 0xe) < 0) {
            iVar7 = uVar5 + 0x32;
          }
          else {
            iVar7 = uVar5 + 100;
          }
          FUN_10056678(iVar7);
          for (uVar5 = uVar4; uVar5 < *(ushort *)(iVar8 + 0xc); uVar5 = uVar5 + 0x32) {
            FUN_10056648();
          }
        }
        FUN_10119dc2(DAT_10084078,*(undefined2 *)(iVar8 + 4),*(undefined2 *)(iVar8 + 2),
                     *(undefined2 *)(iVar8 + 6),*(undefined2 *)(iVar8 + 8),
                     *(undefined2 *)(iVar8 + 10),*(undefined2 *)(iVar8 + 0xc));
        FUN_10055de0(*(undefined2 *)(iVar8 + 4),*(undefined2 *)(iVar8 + 2));
        FUN_10055d30(*(undefined2 *)(iVar8 + 6),*(undefined2 *)(iVar8 + 8),
                     *(undefined2 *)(iVar8 + 10));
        if (*(ushort *)(iVar8 + 0xc) < uVar4) {
          FUN_10056648();
          if ((_DAT_40004000 & 0x20000) == 0) {
            iVar7 = *(ushort *)(iVar8 + 0xc) + 100;
          }
          else {
            iVar7 = *(ushort *)(iVar8 + 0xc) + 0x32;
          }
          FUN_10056678(iVar7);
        }
        (*pcVar3)(2,uVar9,uVar12);
        uVar9 = uVar12;
      }
      *(char *)(iVar2 + 0x18) = cVar1;
    }
    FUN_10113fd0(DAT_10084054);
    uVar14 = 0;
  }
  return uVar14;
}

