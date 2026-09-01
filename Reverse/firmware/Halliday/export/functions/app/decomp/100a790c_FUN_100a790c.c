/* FUN_100a790c @ 0x100a790c */

void FUN_100a790c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar2 = param_1;
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_100a7388();
  if (iVar1 != 0) {
    FUN_10118a1c(&uStack_10,5,DAT_100a7938,param_2,uVar2);
    iVar1 = FUN_1011ea10(&uStack_10);
    thunk_FUN_1009efe8(param_1,&uStack_10,iVar1 + 1);
  }
  return;
}

