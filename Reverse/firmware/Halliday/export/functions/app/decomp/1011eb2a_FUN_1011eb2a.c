/* FUN_1011eb2a @ 0x1011eb2a */

undefined4 FUN_1011eb2a(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    param_2 = (param_2 + 3U & 0xfffffffc) + (uint)*(ushort *)(param_1 + 0xc);
  }
  uVar3 = FUN_1011ea58(param_1,param_2);
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  if ((uint)uVar3 < uVar2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    uVar2 = uVar2 + *(ushort *)(param_1 + 4);
    if (*(ushort *)(param_1 + 10) <= uVar2) {
      uVar2 = uVar2 - *(ushort *)(param_1 + 10);
    }
    *(short *)(param_1 + 4) = (short)uVar2;
    *(short *)(param_1 + 6) = (short)uVar2;
  }
  return uVar1;
}

