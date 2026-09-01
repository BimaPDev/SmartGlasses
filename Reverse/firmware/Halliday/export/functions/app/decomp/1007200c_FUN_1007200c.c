/* FUN_1007200c @ 0x1007200c */

int FUN_1007200c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  if (*(int *)(DAT_1007206c + 0x7c) != 0) {
    uVar5 = (uint)*(ushort *)(*(int *)(DAT_1007206c + 0x7c) + 0x2ff18008);
    FUN_10119dc2(DAT_10072070);
    iVar3 = DAT_10072080;
    iVar2 = DAT_1007207c;
    iVar1 = DAT_10072074;
    iVar4 = uVar5 + 0x2ff18000;
    iVar6 = 0;
    do {
      iVar7 = iVar6 + 0x10;
      FUN_10119dc2(DAT_10072078,iVar6,*(undefined4 *)(uVar5 + 0x2ff18000),
                   *(undefined4 *)(uVar5 + iVar1),*(undefined4 *)(uVar5 + iVar3),
                   *(undefined4 *)(uVar5 + iVar2),param_3);
      uVar5 = uVar5 + 0x10;
      iVar6 = iVar7;
    } while (iVar7 != 0x80);
  }
  return iVar4;
}

