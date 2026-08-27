/* FUN_2c621400 @ 0x2c621400 */

uint FUN_2c621400(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0x10) + (uVar3 & 0x1ff));
  uVar1 = (uint)*(ushort *)(*(int *)(param_2 + 0x14) + (uVar3 & 0x1ff) * 2);
  if (uVar5 < 10) {
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar5;
    *(uint *)(param_1 + 0x10) = uVar3 >> uVar5;
    return uVar1;
  }
  uVar3 = uVar3 >> 9;
  iVar4 = *(int *)(param_1 + 0xc) + 9;
  *(uint *)(param_1 + 0x10) = uVar3;
  *(int *)(param_1 + 0xc) = iVar4;
  iVar2 = uVar1 + (uVar3 & ~(-1 << (uVar5 - 9 & 0xff)));
  uVar1 = *(byte *)(*(int *)(param_2 + 0x10) + iVar2) - 9;
  *(uint *)(param_1 + 0xc) = iVar4 + uVar1;
  *(uint *)(param_1 + 0x10) = uVar3 >> (uVar1 & 0xff);
  return (uint)*(ushort *)(*(int *)(param_2 + 0x14) + iVar2 * 2);
}

