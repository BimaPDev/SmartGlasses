/* FUN_1013178c @ 0x1013178c */

undefined4 FUN_1013178c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x54);
  if (*(char *)(iVar3 + 0x2c) == '\0') {
    uVar1 = 0xfffffffb;
  }
  else {
    iVar4 = iVar3 + 0x40;
    FUN_1011dbf4(iVar4,0xffffffff,param_3,*(char *)(iVar3 + 0x2c),param_4);
    if (*(int *)(iVar3 + 0x3c) == 0) {
      iVar2 = FUN_100b9d90(*(undefined4 *)(iVar3 + 0x38));
      *(int *)(iVar3 + 0x3c) = iVar2;
      if (iVar2 == 0) {
        thunk_FUN_10113e2c(iVar4);
        return 0xfffffff4;
      }
      uVar1 = *(undefined4 *)(iVar3 + 0x38);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    thunk_FUN_10113e2c(iVar4);
    uVar1 = 0;
  }
  return uVar1;
}

