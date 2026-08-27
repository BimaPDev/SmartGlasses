/* FUN_14093008 @ 0x14093008 */

undefined4 FUN_14093008(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1404a1b4();
  uVar2 = *(undefined4 *)(iVar1 + 0x38);
  FUN_140755e4();
  iVar1 = FUN_1407c2c8(uVar2,param_2);
  FUN_1407561c();
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

