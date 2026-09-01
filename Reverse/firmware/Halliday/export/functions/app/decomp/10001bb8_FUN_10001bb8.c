/* FUN_10001bb8 @ 0x10001bb8 */

void FUN_10001bb8(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_10001be0;
  *(uint *)(DAT_10001be0 + 0x338) = (uint)*(ushort *)(param_2 + 4) << 8;
  while (sVar1 = *(short *)(param_2 + 6), sVar1 != 0) {
    uVar3 = **(undefined4 **)(param_2 + 8);
    *(undefined4 **)(param_2 + 8) = *(undefined4 **)(param_2 + 8) + 1;
    *(undefined4 *)(iVar2 + 0x33c) = uVar3;
    *(short *)(param_2 + 6) = sVar1 + -1;
  }
  return;
}

