/* FUN_1013152a @ 0x1013152a */

undefined4 FUN_1013152a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100bd864(param_1,0,param_3,param_4,param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_10136e8e(*(undefined1 *)(iVar1 + 1),param_2,param_3);
    return uVar2;
  }
  return 0xfffffffb;
}

