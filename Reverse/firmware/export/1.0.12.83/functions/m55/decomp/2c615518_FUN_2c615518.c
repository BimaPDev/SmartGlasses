/* FUN_2c615518 @ 0x2c615518 */

void FUN_2c615518(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_2c602400();
  iVar2 = FUN_2c602410(param_1);
  if (*(int *)(iVar2 + 0x34) != 0x50000) {
    return;
  }
  if (*(uint *)(iVar2 + 0x38) < 7) {
    *(undefined1 *)(*(int *)(iVar2 + 0x10) + 3) = 0;
    *(undefined1 *)(*(int *)(iVar2 + 0x10) + 0x3a) = 0;
  }
  else {
    iVar3 = func_0x2c635fe4(uVar1,*(uint *)(iVar2 + 0x38) & 0xffff,0x20);
    if (iVar3 != 0) {
      *(undefined1 *)(*(int *)(iVar2 + 0x10) + 3) = 0;
      *(undefined1 *)(*(int *)(iVar2 + 0x10) + 0x3a) = 0;
      iVar3 = *(int *)(iVar2 + 0x14);
      uVar4 = FUN_2c62ee64(0x12);
      *(undefined4 *)(iVar3 + 0xc) = uVar4;
    }
  }
  iVar3 = func_0x2c635fe4(uVar1,*(undefined2 *)(iVar2 + 0x38),0x8000);
  if (iVar3 != 0) {
    *(undefined1 *)(*(int *)(iVar2 + 0x10) + 3) = 0x66;
    iVar3 = *(int *)(iVar2 + 0x10);
    uVar4 = FUN_2c60272c(uVar1);
    *(undefined4 *)(iVar3 + 4) = uVar4;
    uVar5 = FUN_2c635f80(uVar1);
    uVar6 = *(uint *)(iVar2 + 0x38);
    if (uVar5 != uVar6) goto LAB_2c615556;
    *(undefined1 *)(*(int *)(iVar2 + 0x10) + 3) = 0xb2;
  }
  uVar6 = *(uint *)(iVar2 + 0x38);
LAB_2c615556:
  iVar3 = func_0x2c635fe4(uVar1,uVar6 & 0xffff,0x4000);
  if (iVar3 == 0) {
    return;
  }
  *(undefined1 *)(*(int *)(iVar2 + 0x10) + 0x3a) = 0xff;
  iVar3 = *(int *)(iVar2 + 0x10);
  uVar1 = FUN_2c60272c(uVar1);
  *(undefined4 *)(iVar3 + 0x34) = uVar1;
  *(short *)(*(int *)(iVar2 + 0x10) + 0x38) = *(short *)(*(int *)(iVar2 + 0x10) + 0x38) + 1;
  return;
}

