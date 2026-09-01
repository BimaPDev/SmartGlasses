/* FUN_10100f24 @ 0x10100f24 */

void FUN_10100f24(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,DAT_10100f58,param_2,param_1 + 0x200);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_100fae48(param_2,*(undefined4 *)(param_1 + 0x200),param_1 + 0x1fc), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x200) = 0;
    return;
  }
  return;
}

