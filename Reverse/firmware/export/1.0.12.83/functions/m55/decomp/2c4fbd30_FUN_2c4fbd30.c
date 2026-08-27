/* FUN_2c4fbd30 @ 0x2c4fbd30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4fbd30(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = _LAB_2c4fbd74;
  iVar3 = _LAB_2c4fbd70;
  iVar6 = _LAB_2c4fbd70 + param_1 * 0x14;
  *(undefined2 *)(iVar6 + 0xc) = param_3;
  uVar1 = *puVar4;
  *(undefined4 *)(iVar6 + 8) = param_2;
  *(undefined1 *)(iVar6 + 6) = uVar1;
  iVar5 = _LAB_2c4fbd78;
  bVar2 = *(byte *)(iVar6 + 0x13);
  *(byte *)(iVar6 + 7) = bVar2;
  iVar5 = *(int *)(iVar5 + (uint)bVar2 * 4);
  *(undefined1 *)(iVar6 + 4) = 0xb;
  if (0 < iVar5) {
    FUN_2c4fb894(param_1 * 0x14 + 4 + iVar3,0xc,(uint)bVar2);
  }
  return 0;
}

