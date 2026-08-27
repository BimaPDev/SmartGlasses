/* FUN_140754f4 @ 0x140754f4 */

int FUN_140754f4(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 10);
  if (param_2 <= uVar1) {
    uVar2 = uVar1 - param_2;
    *(short *)(param_1 + 10) = (short)uVar2;
    *(short *)(param_1 + 8) = (short)param_2 + *(short *)(param_1 + 8);
    return param_1 + (uVar2 & 0xffff) + 0x10;
  }
  *(undefined2 *)(param_1 + 10) = 0;
  *(ushort *)(param_1 + 8) = uVar1 + *(short *)(param_1 + 8);
  return param_1 + 0x10;
}

