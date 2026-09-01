/* FUN_1011ebda @ 0x1011ebda */

undefined4 FUN_1011ebda(ushort *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = (uint)param_1[6];
  if (uVar2 != 0) {
    param_2 = (param_2 + 3U & 0xfffffffc) + uVar2;
  }
  uVar4 = FUN_1011ea58(param_1,param_2,param_3,uVar2,param_4);
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar3 = (uint)param_1[5];
  if ((uVar3 - 1) - (int)uVar4 < uVar2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    uVar2 = uVar2 + *param_1;
    if (uVar3 <= uVar2) {
      uVar2 = uVar2 - uVar3;
    }
    *param_1 = (ushort)uVar2;
    param_1[1] = (ushort)uVar2;
  }
  return uVar1;
}

