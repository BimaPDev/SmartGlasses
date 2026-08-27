/* FUN_1409f860 @ 0x1409f860 */

uint FUN_1409f860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar5 = (uint *)*DAT_1409f8bc;
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  if (*puVar5 == 0) {
    return 0;
  }
  uVar4 = 0;
  do {
    iVar1 = (short)uVar4 * 0x72;
    uVar7 = *(undefined4 *)((int)puVar5 + iVar1 + 0x5f);
    uVar6 = *(undefined4 *)((int)puVar5 + iVar1 + 99);
    uVar2 = *(undefined4 *)((int)puVar5 + iVar1 + 0x67);
    iVar3 = param_1 + uVar4 * 0x10;
    *(undefined4 *)(param_1 + uVar4 * 0x10) = *(undefined4 *)((int)puVar5 + iVar1 + 0x5b);
    *(undefined4 *)(iVar3 + 4) = uVar7;
    *(undefined4 *)(iVar3 + 8) = uVar6;
    *(undefined4 *)(iVar3 + 0xc) = uVar2;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < *puVar5);
  return *puVar5 & 0xff;
}

