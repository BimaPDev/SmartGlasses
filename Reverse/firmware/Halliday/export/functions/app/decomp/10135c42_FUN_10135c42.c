/* FUN_10135c42 @ 0x10135c42 */

void FUN_10135c42(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  FUN_1013cb84(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x34] = 0;
  iVar2 = param_1[0x35];
  param_1[0x35] = 0;
  if (*(char *)(iVar3 + 3) == '\0') {
    uVar1 = 0xb;
  }
  else {
    uVar1 = 1;
  }
  FUN_10135440(param_1 + 0x34,uVar1,iVar2,param_4);
  return;
}

