/* FUN_100e0978 @ 0x100e0978 */

void FUN_100e0978(uint param_1,code *param_2,undefined4 param_3)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  uint uStack_28;
  code *pcStack_24;
  undefined4 uStack_20;
  
  uVar1 = *DAT_100e09b8;
  pbVar2 = DAT_100e09bc;
  uStack_28 = param_1;
  pcStack_24 = param_2;
  uStack_20 = param_3;
  for (iVar3 = 0; iVar3 < (int)((uVar1 & 0x7ff) >> 7); iVar3 = iVar3 + 1) {
    if ((*(short *)(pbVar2 + 0xe) != 0) && (*pbVar2 == param_1)) {
      FUN_10137fb6(&uStack_28,pbVar2 + 1);
      (*param_2)(&uStack_28,param_3);
    }
    pbVar2 = pbVar2 + 0x60;
  }
  return;
}

