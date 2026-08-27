/* FUN_1406d628 @ 0x1406d628 */

undefined4 FUN_1406d628(undefined4 param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406d6b8,0xcd,DAT_1406d6b4);
  }
  iVar1 = FUN_14073fdc(param_2,2);
  iVar3 = DAT_1406d6ac;
  if (iVar1 == 0) {
    uVar2 = 0x4b;
  }
  else {
    *(int *)(iVar1 + 4) = param_3;
    *param_4 = iVar1;
    if (param_3 == iVar3) {
      iVar3 = FUN_140591ec(param_1);
      FUN_1406d5c0(param_1,iVar1,1);
      if (iVar3 != 0) {
        FUN_1406d5c0(param_1,iVar3,0);
        return 0;
      }
    }
    else {
      if (param_3 != DAT_1406d6b0) {
        FUN_1406d5c0(param_1,iVar1,0);
        return 0;
      }
      FUN_1406d5c0(param_1,iVar1,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

