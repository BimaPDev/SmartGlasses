/* FUN_1009ad0c @ 0x1009ad0c */

void FUN_1009ad0c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined1 uVar6;
  
  piVar4 = (int *)FUN_1008bbb4();
  iVar5 = DAT_1009ad84;
  bVar1 = *(byte *)(*piVar4 + 0x1c);
  bVar3 = FUN_1011e920(*param_1);
  *(byte *)(iVar5 + 2) = *(byte *)(iVar5 + 2) & 0xfd | (bVar3 & 1) << 1;
  if ((bVar1 & 0x40) == 0) {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
  }
  *(undefined1 *)(iVar5 + 3) = uVar6;
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0x7fff;
  *(undefined4 *)(iVar5 + 0x28) = 0x7fff;
  *(undefined4 *)(iVar5 + 0x14) = 0x7fff;
  *(undefined4 *)(iVar5 + 0x18) = 0x7fff;
  *(undefined4 *)(iVar5 + 4) = 0x7fff;
  *(undefined4 *)(iVar5 + 8) = 0x7fff;
  if ((*(byte *)(iVar5 + 1) & 4) != 0) {
    FUN_1012c724(param_1);
  }
  iVar2 = DAT_1009b624;
  if (-1 < (int)((uint)*(byte *)(iVar5 + 1) << 0x1e)) {
    return;
  }
  iVar5 = (((int *)param_1[1])[2] + 1) - *(int *)param_1[1];
  if ((bVar1 & 0x7f) >> 6 == 0) {
    *(undefined4 *)(DAT_1009b624 + 0x10) = 0x20;
    *(int *)(iVar2 + 0x14) = iVar5 * 2;
  }
  else {
    *(undefined4 *)(DAT_1009b624 + 0x10) = 0x400;
    *(int *)(iVar2 + 0x14) = iVar5 * 3;
  }
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar2 + 0x14);
  return;
}

