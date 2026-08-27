/* FUN_2c58c084 @ 0x2c58c084 */

undefined4 FUN_2c58c084(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c48e3b8(*(undefined4 *)(param_1 + 4));
  iVar2 = FUN_2c555db8(uVar1,param_2);
  if (iVar2 < 0) {
    FUN_2c48dea0(uVar1);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_2c48dea0(uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

