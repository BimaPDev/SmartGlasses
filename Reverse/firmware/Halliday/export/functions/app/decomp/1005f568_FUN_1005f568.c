/* FUN_1005f568 @ 0x1005f568 */

undefined4 FUN_1005f568(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 < 3) {
    iVar1 = param_1 * 0x34 + DAT_1005f5a4;
    iVar4 = *(int *)(iVar1 + 0x28);
    if (iVar4 != 0) {
      FUN_1011ea48(iVar1,0,0x34,iVar4,param_4);
      return 0;
    }
    uVar2 = 0x4a;
    uVar3 = DAT_1005f5a8;
  }
  else {
    uVar2 = 0x49;
    uVar3 = DAT_1005f598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_1005f5a0,uVar2,DAT_1005f59c,uVar3);
}

