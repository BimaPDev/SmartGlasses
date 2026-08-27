/* FUN_1402ab1c @ 0x1402ab1c */

void FUN_1402ab1c(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_1402ab78;
  if (*DAT_1402ab78 != '\0') {
    FUN_14029cb0(DAT_1402ab7c,1,*DAT_1402ab78,param_1);
  }
  uVar2 = FUN_1402a350(DAT_1402ab84,100,DAT_1402ab80,param_1,param_2);
  if (*pcVar1 != '\0') {
    FUN_14029cb0(DAT_1402ab84,uVar2);
  }
  uVar3 = getMainStackPointerLimit();
  uVar2 = getProcessStackPointerLimit();
  uVar2 = FUN_1402a350(DAT_1402ab84,100,DAT_1402ab88,uVar3,uVar2);
  if (*pcVar1 != '\0') {
    FUN_14029cb0(DAT_1402ab84,uVar2);
    return;
  }
  return;
}

