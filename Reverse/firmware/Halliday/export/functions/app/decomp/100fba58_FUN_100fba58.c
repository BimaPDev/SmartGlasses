/* FUN_100fba58 @ 0x100fba58 */

undefined4 FUN_100fba58(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    uVar5 = iVar2 + 0x20;
    *(int *)(param_1 + 0x50) = iVar2;
    *(int *)(param_1 + 0x54) = iVar2;
    *(uint *)(param_1 + 0x24) = uVar5;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if (*(uint *)(param_1 + 0x20) <= uVar5) {
    *(undefined4 *)(param_1 + 0x28) = 0x62;
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(uint *)(iVar2 + 8) = uVar5;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  bVar1 = *(byte *)(param_1 + 0xa4);
  uVar4 = (ushort)bVar1;
  if (param_2 == 2) {
    if (param_3 != 0) {
      uVar4 = bVar1 | 0x10;
    }
    *(ushort *)(iVar2 + 0xc) = uVar4;
  }
  else {
    if (param_3 != 0) {
      iVar3 = *(int *)(param_1 + 0x58);
      *(ushort *)(iVar2 + 0xc) = bVar1 | 0x28;
      goto joined_r0x100fbaa2;
    }
    *(ushort *)(iVar2 + 0xc) = bVar1 | 8;
  }
  iVar3 = *(int *)(param_1 + 0x58);
joined_r0x100fbaa2:
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x58) = iVar2;
  }
  *(char *)(param_1 + 0x5c) = (char)param_2;
  *(undefined2 *)(param_1 + 0x4e) = 1;
  return 0;
}

