/* FUN_10122322 @ 0x10122322 */

uint FUN_10122322(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = (*(byte *)(param_1 + 1) + 1) * 0x20;
  do {
    bVar4 = uVar3 == 2;
    if (bVar4) {
      uVar3 = 3;
    }
    else {
      param_4 = (uint)*(byte *)(param_1 + uVar3);
    }
    uVar3 = uVar3 + 1;
    if (!bVar4) {
      param_4 = param_4 + uVar1 * 0x8000 + (uVar1 >> 1);
      uVar1 = param_4 & 0xffff;
    }
  } while (uVar3 <= uVar2 && uVar2 - uVar3 != 0);
  return uVar1;
}

