/* FUN_100100d8 @ 0x100100d8 */

undefined4 FUN_100100d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *DAT_10010154;
  iVar1 = thunk_FUN_1009f30c(param_1 + 1,DAT_10010158,param_3,0,param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + param_1) = 0;
    iVar2 = FUN_100b63f0(iVar1,param_1,1000);
    if (iVar2 != param_1) goto LAB_10010126;
    iVar2 = thunk_FUN_10136ad2(iVar1,1);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = 1;
    }
    while( true ) {
      FUN_1012d1f4(iVar1);
LAB_10010118:
      if (*DAT_10010154 == iVar3) break;
      iVar2 = FUN_1013cdc0();
LAB_10010126:
      FUN_100a5b78((DAT_10010160 - DAT_1001015c) * 0x20 & 0xff00U | 0x670012,DAT_10010168,
                   DAT_10010164,iVar2,param_1);
      uVar4 = 1;
    }
    return uVar4;
  }
  uVar4 = 1;
  goto LAB_10010118;
}

