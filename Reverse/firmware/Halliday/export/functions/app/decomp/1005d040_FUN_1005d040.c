/* FUN_1005d040 @ 0x1005d040 */

undefined4 FUN_1005d040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_1005d074;
  if (param_1 == 0) {
    FUN_1011efd2(*DAT_1005d074);
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_1006ce8c(*DAT_1005d074,DAT_1005d078,DAT_1005d074,param_4,param_4);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    uVar3 = 1;
  }
  FUN_1006ce2c(*puVar1,1,uVar3);
  return 0;
}

