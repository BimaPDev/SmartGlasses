/* FUN_1013aa3a @ 0x1013aa3a */

undefined4
FUN_1013aa3a(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,ushort param_5,
            ushort param_6)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = (uint)param_6;
  if (((param_2 & 0x3f) == 0) && ((uVar3 != 0x426 || ((param_5 & 3) == 0)))) {
    FUN_1011ea48(param_1 + 3,0,0xb0,0x426,param_4);
    *(undefined2 *)(param_1 + 0x15) = 0x1f00;
    *(ushort *)((int)param_1 + 0xe) = param_6;
    param_1[5] = param_2;
    if (uVar3 < 0x406) {
      if (uVar3 < 0x404) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = uVar3 - 0x427 < 2;
    }
    *(byte *)((int)param_1 + 0x56) = bVar2 ^ 1;
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = (uint)param_5;
    *(bool *)(param_1 + 3) = uVar3 == 0x426;
    iVar1 = FUN_1013b39e(param_1,0,0xffffffff);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xffffffea;
}

