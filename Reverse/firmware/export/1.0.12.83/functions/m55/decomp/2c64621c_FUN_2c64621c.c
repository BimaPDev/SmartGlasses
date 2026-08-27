/* FUN_2c64621c @ 0x2c64621c */

void FUN_2c64621c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c643a80();
  if ((*(byte *)(param_1 + 0x22) & 0x10) == 0) {
    iVar3 = 0x60;
  }
  else {
    iVar3 = 0x20;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + iVar3) = param_2;
  FUN_2c645974(param_1);
  iVar3 = DAT_2c646284;
  if (param_3 != 0) {
    FUN_2c64610c();
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if (*(int *)(iVar3 + 0x24) == 0) {
    iVar3 = iVar3 + 0x1c;
  }
  else {
    iVar2 = iVar3 + 0x1c;
    iVar1 = *(int *)(iVar3 + 0x24);
    do {
      iVar3 = iVar1;
      if (*(char *)(iVar3 + 0x20) < *(char *)(param_1 + 0x20)) {
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 0xc) = iVar2;
        *(int *)(iVar2 + 8) = param_1;
        *(int *)(iVar3 + 0xc) = param_1;
        return;
      }
      iVar2 = iVar3;
      iVar1 = *(int *)(iVar3 + 8);
    } while (*(int *)(iVar3 + 8) != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = iVar3;
  *(int *)(iVar3 + 8) = param_1;
  return;
}

