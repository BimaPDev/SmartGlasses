/* FUN_14075520 @ 0x14075520 */

int FUN_14075520(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if (param_2 <= uVar1) {
    uVar2 = param_2 + *(ushort *)(param_1 + 10);
    *(short *)(param_1 + 10) = (short)uVar2;
    *(ushort *)(param_1 + 8) = uVar1 - (short)param_2;
    return param_1 + (uVar2 & 0xffff) + 0x10;
  }
  *(undefined2 *)(param_1 + 8) = 0;
  uVar2 = (uint)*(ushort *)(param_1 + 10) + (uint)uVar1;
  *(short *)(param_1 + 10) = (short)uVar2;
  return param_1 + (uVar2 & 0xffff) + 0x10;
}

