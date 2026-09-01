/* FUN_101188d0 @ 0x101188d0 */

void FUN_101188d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *DAT_101188fc;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
    FUN_101191b4(iVar1);
  }
  FUN_10117fb8(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}

