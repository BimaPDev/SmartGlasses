/* FUN_101306dc @ 0x101306dc */

undefined4
FUN_101306dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100b33cc(0x120,0,param_4 + 8);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    FUN_1011ea40(iVar1 + 0x14,param_5,param_4);
    uVar2 = FUN_10064d1c(param_1,iVar1);
    FUN_1012d1f4(iVar1);
  }
  return uVar2;
}

