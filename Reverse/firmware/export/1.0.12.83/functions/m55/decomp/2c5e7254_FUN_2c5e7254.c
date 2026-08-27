/* FUN_2c5e7254 @ 0x2c5e7254 */

undefined4 FUN_2c5e7254(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c5e697c();
  piVar2 = (int *)(**(code **)(iVar1 + 0x34))(param_2);
  uVar3 = 0;
  if ((piVar2 != (int *)0x0) && (uVar3 = 0, *piVar2 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

