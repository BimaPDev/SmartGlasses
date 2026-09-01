/* FUN_10062810 @ 0x10062810 */

int FUN_10062810(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = DAT_10062950;
  piVar1 = DAT_10062938;
  iVar5 = *DAT_10062938;
  *(undefined4 *)(iVar5 + (*(uint *)(DAT_10062950 + 0x44) & 0xfffffffc)) = DAT_1006293c;
  uVar4 = DAT_10062940;
  *(undefined4 *)((*(uint *)(iVar2 + 0x44) & 0xfffffffc) + iVar5 + 4) = 1;
  iVar7 = DAT_10062944;
  *(int *)((*(uint *)(iVar2 + 0x44) & 0xfffffffc) + iVar5 + 8) = DAT_10062944;
  *(undefined4 *)((*(uint *)(iVar2 + 0x44) & 0xfffffffc) + iVar5 + 0xc) = 0;
  uVar3 = DAT_10062954;
  *(int *)((*(uint *)(iVar2 + 0x44) & 0xfffffffc) + iVar5 + 0x10) = iVar7 + 0x10000000;
  *(undefined4 *)((*(uint *)(iVar2 + 0x44) & 0xfffffffc) + iVar5 + 0x14) = 0;
  *(undefined4 *)((*(uint *)(iVar2 + 0x44) & 0xfffffffc) + iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + (*(uint *)(iVar2 + 0x44) & 0xfffffffc) + 0x1c) = 0;
  iVar7 = *(int *)(iVar2 + 0x44);
  FUN_1011c47a(uVar4);
  uVar4 = DAT_10062958;
  uVar8 = iVar7 + 0x20;
  uVar9 = uVar8 >> 2;
  for (uVar6 = 0; uVar6 < uVar9; uVar6 = uVar6 + 4) {
    iVar5 = *piVar1;
    FUN_1011c47a(uVar4,*(undefined4 *)(iVar5 + uVar6 * 4),*(undefined4 *)(iVar5 + uVar6 * 4 + 4));
    if (uVar6 + 2 <= uVar9 - 1) {
      iVar5 = uVar6 * 4 + *piVar1;
      FUN_1011c47a(uVar3,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc));
    }
  }
  FUN_1011c47a(DAT_10062948,uVar8);
  iVar5 = 0x1f5;
  uVar4 = *(undefined4 *)(iVar2 + 0x40);
  FUN_1011c454();
  FUN_1011c48e(0x500,uVar4);
  FUN_1011c48e(0x504,iVar7 + 0x27U >> 3);
  do {
    iVar7 = FUN_1011c482(0x10);
    if (iVar7 != 0) {
      iVar7 = 0;
      goto LAB_100628e4;
    }
    thunk_FUN_1011598c(2);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar7 = 4;
LAB_100628e4:
  thunk_FUN_1011598c(2);
  if (iVar7 == 0) {
    FUN_1011c47a(DAT_1006294c);
  }
  return iVar7;
}

