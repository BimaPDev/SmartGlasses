/* FUN_2c64ee00 @ 0x2c64ee00 */

undefined4
FUN_2c64ee00(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uVar2 = 0;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  FUN_2c64ec84(&uStack_20,param_5);
  while( true ) {
    uVar3 = uVar2 + 1;
    if (param_3 <= uVar3) {
      if (uVar3 == param_3) {
        if (0xfffe < param_4) {
          param_4 = 0xffff;
        }
        FUN_2c64e740(&uStack_20,param_4);
      }
      return uStack_20;
    }
    uVar1 = FUN_2c64e740(&uStack_20,param_4);
    if (param_4 < uVar1) break;
    if (0xffff < uVar1) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 1;
  }
  return uStack_20;
}

