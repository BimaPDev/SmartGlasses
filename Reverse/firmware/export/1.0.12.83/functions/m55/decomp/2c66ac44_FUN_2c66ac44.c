/* FUN_2c66ac44 @ 0x2c66ac44 */

void FUN_2c66ac44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *DAT_2c66ac70;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
    FUN_2c668868(iVar1);
  }
  FUN_2c669d50(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}

