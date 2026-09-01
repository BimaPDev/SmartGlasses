/* FUN_100a09ec @ 0x100a09ec */

undefined4 FUN_100a09ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_100a0310(param_1,2,param_3,param_4,param_1,param_2,param_3);
  if (iVar4 == 0) {
    uVar5 = 0xffffffa8;
    *(undefined4 *)(param_2 + 0x38) = 0;
  }
  else {
    iVar4 = thunk_FUN_1013c70e();
    if (iVar4 == 0) {
      FUN_1011dbf4(param_1 + 0x3c,0xffffffff);
    }
    uVar1 = DAT_100a0a64;
    if (*(int *)(param_1 + 0x34) == param_2) {
      uVar5 = 0;
      iVar4 = DAT_100a0a60 - DAT_100a0a5c;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      uVar3 = DAT_100a0a6c;
      uVar2 = DAT_100a0a68;
      *(undefined4 *)(param_2 + 0x38) = 0;
      FUN_100a5b78(uVar1 | iVar4 * 0x20 & 0xff00U,uVar3,uVar2,param_1,param_2);
    }
    else {
      uVar5 = 0xffffffa8;
    }
    iVar4 = thunk_FUN_1013c70e();
    if (iVar4 == 0) {
      thunk_FUN_10113e2c(param_1 + 0x3c);
    }
  }
  return uVar5;
}

