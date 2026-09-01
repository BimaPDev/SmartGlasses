/* FUN_1011bebc @ 0x1011bebc */

undefined4 FUN_1011bebc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = FUN_1011bea2(iVar3);
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0;
    iVar3 = param_2 * 0x24 + iVar3;
    *(undefined4 *)(iVar3 + 0xc) = extraout_r2;
    *(undefined4 *)(iVar3 + 0x10) = param_4;
  }
  return uVar2;
}

