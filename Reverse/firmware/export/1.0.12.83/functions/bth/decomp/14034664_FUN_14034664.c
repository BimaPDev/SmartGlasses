/* FUN_14034664 @ 0x14034664 */

void FUN_14034664(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  
  bVar2 = FUN_1402e4f4();
  piVar1 = DAT_14034764;
  iVar6 = *DAT_14034764;
  if (iVar6 == 0) {
    FUN_1402e55c();
    iVar6 = *piVar1;
  }
  iVar4 = *DAT_14034768;
  *piVar1 = iVar6 + 1;
  iVar6 = DAT_1403476c;
  if (iVar4 == 0) {
    puVar5 = (undefined1 *)*DAT_14034774;
    iVar6 = *DAT_14034770;
    if (puVar5 != (undefined1 *)0x0) {
LAB_14034752:
      *puVar5 = 3;
    }
    if (iVar6 != 0) {
LAB_140346ea:
      *(undefined1 *)(iVar6 + 0x2b5) = 1;
      iVar4 = DAT_14034778;
      *(byte *)(iVar6 + 0x2b6) = bVar2;
      *(undefined4 *)(iVar6 + 0x2b8) = 0;
      *(undefined1 *)(iVar6 + 0x2b4) = 2;
      *(uint *)(iVar4 + 0x24) = (uint)bVar2 << 8 | *(uint *)(iVar4 + 0x24) & 0xffff00ff;
    }
  }
  else {
    uVar3 = bVar2 + 6;
    *(uint *)(DAT_1403476c + 0x3c) = *(uint *)(DAT_1403476c + 0x3c) & 0xfffffc00 | uVar3;
    *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & 0xffe003ff | uVar3 * 0x400;
    *(uint *)(iVar6 + 0x3c) = *(uint *)(iVar6 + 0x3c) & 0x1fffff | uVar3 * 0x200000;
    iVar6 = *DAT_14034770;
    if (iVar6 != 0) {
      puVar5 = (undefined1 *)*DAT_14034774;
      *(uint *)(iVar6 + 0x2a0) = bVar2 + 0x24;
      if (puVar5 != (undefined1 *)0x0) goto LAB_14034752;
      goto LAB_140346ea;
    }
    if ((undefined1 *)*DAT_14034774 != (undefined1 *)0x0) {
      *(undefined1 *)*DAT_14034774 = 3;
      iVar6 = *piVar1 + -1;
      *piVar1 = iVar6;
      goto joined_r0x1403473c;
    }
  }
  iVar6 = *piVar1 + -1;
  *piVar1 = iVar6;
joined_r0x1403473c:
  if (iVar6 == 0) {
    FUN_1402e5f8();
    return;
  }
  return;
}

