/* FUN_2c644388 @ 0x2c644388 */

undefined4 FUN_2c644388(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  if (param_2 != 0) {
    uVar1 = FUN_2c647824(*param_1);
    return uVar1;
  }
  return 0xffffff81;
}

