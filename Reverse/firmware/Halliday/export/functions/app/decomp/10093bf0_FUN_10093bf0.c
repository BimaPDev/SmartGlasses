/* FUN_10093bf0 @ 0x10093bf0 */

undefined2 FUN_10093bf0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  if (param_1 < 0x13) {
    uVar1 = *(undefined2 *)(DAT_10093c28 + param_1 * 2);
  }
  else {
    FUN_10094174(2,DAT_10093c24,0x11d,DAT_10093c20,DAT_10093c1c,param_1,param_3);
    uVar1 = 0;
  }
  return uVar1;
}

