/* FUN_10131c54 @ 0x10131c54 */

undefined4 FUN_10131c54(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    uVar1 = FUN_10131956();
    uVar2 = FUN_10133c22(param_1,param_2);
    FUN_1013197e(uVar1);
  }
  return uVar2;
}

