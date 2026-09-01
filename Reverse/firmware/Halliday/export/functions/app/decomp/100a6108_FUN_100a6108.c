/* FUN_100a6108 @ 0x100a6108 */

undefined4 FUN_100a6108(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0x10) {
    uVar1 = 0;
    *DAT_100a6120 = param_3;
    *DAT_100a6124 = param_2;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

