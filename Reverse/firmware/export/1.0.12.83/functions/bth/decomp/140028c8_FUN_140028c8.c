/* FUN_140028c8 @ 0x140028c8 */

undefined4 FUN_140028c8(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (0x100 < param_4) {
    return 2;
  }
  uVar2 = *(uint *)(DAT_14002988 + param_1 * 4);
  if ((int)(uVar2 << 0xd) < 0) {
    uVar3 = 0x32;
  }
  else if ((uVar2 & 0x20000) == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0xa2;
  }
  FUN_140017b4(param_1);
  uVar2 = FUN_140015c8(param_1,param_3,param_4);
  FUN_1400168c(param_1,6,0);
  FUN_14001878(param_1,param_2);
  FUN_1400168c(param_1,uVar3,param_2);
  while (uVar1 = uVar2, uVar1 != 0) {
    param_3 = param_3 + (param_4 - uVar1);
    uVar2 = FUN_14001620(param_1,param_3,uVar1);
    param_4 = uVar1;
  }
  FUN_1400175c(param_1);
  if ((**(char **)(DAT_14002990 + (uint)*(byte *)(DAT_1400298c + param_1) * 4) == -0x7b) &&
     (param_4 < 0x100)) {
    FUN_14002db4(0x1c2);
  }
  uVar3 = FUN_14001db8(param_1,param_5);
  FUN_14001720(param_1);
  return uVar3;
}

