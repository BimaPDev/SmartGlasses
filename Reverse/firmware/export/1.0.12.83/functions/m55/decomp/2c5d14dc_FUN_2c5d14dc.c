/* FUN_2c5d14dc @ 0x2c5d14dc */

undefined4 FUN_2c5d14dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = FUN_2c5c55d8();
  FUN_2c5c5660(uVar1,param_2,param_3);
  iVar5 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
  if (iVar5 == 0) {
    uVar1 = 0;
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 0x20) + -4);
    iVar3 = 0;
    while( true ) {
      piVar4 = piVar4 + 1;
      iVar2 = FUN_2c66b624(*(undefined4 *)(*piVar4 + 0xc),param_2);
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
      if (iVar3 == iVar5) {
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 0x72) = 1;
    FUN_2c5d0ff8(param_1,iVar3,0);
    uVar1 = 1;
  }
  return uVar1;
}

