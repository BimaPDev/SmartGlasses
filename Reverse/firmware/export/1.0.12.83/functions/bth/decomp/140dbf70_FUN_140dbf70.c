/* FUN_140dbf70 @ 0x140dbf70 */

void FUN_140dbf70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *DAT_140dbf9c;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) {
    FUN_140dac50(iVar1);
  }
  FUN_140db9e4(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}

