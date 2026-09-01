/* FUN_1011acfe @ 0x1011acfe */

int FUN_1011acfe(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  uVar2 = param_3 + (uint)*(byte *)(param_1 + 0xc);
  uVar1 = param_2 + (uint)*(byte *)(param_1 + 0xc);
  return (uVar2 - uVar3 * (uVar2 / uVar3)) - (uVar1 - uVar3 * (uVar1 / uVar3));
}

