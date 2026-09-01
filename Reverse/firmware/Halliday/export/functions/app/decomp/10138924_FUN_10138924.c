/* FUN_10138924 @ 0x10138924 */

undefined4 FUN_10138924(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == *(int *)(param_1 + 0xac)) {
    *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(param_1 + 0xb3);
    iVar1 = FUN_1013871c(param_1,1,0xd,0x31);
    if (iVar1 != 0) {
      FUN_101327da(iVar1 + 8,param_4 + 1);
      FUN_101386a6(iVar1,param_2);
      FUN_101386a0(iVar1,param_3,param_4);
      uVar2 = FUN_100e40e4(param_1,iVar1);
      return uVar2;
    }
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}

