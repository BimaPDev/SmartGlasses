/* FUN_100e87f8 @ 0x100e87f8 */

int * FUN_100e87f8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  uStack_10 = param_3;
  if (*(int *)(param_1 + 0x30) == param_2) {
    iVar1 = FUN_10138cba();
    if (iVar1 == 0) {
      piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0x30);
    }
    else {
      piVar2 = (int *)(*(int *)(param_1 + 0x38) + **(int **)(*(int *)(param_1 + 0xc) + 0x30));
    }
  }
  else {
    iVar1 = FUN_10138cc4(param_1,param_2,&local_14,*(int *)(param_1 + 0x30),param_1);
    if (((iVar1 < 0) && (*(int *)(param_1 + 0x30) != 0)) ||
       ((piVar2 = (int *)FUN_100e8784(*(undefined4 *)(param_1 + 0xc),param_2), piVar2 == (int *)0x0
        && (*(int *)(param_1 + 0x30) != 0)))) {
      piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0x30);
    }
    iVar1 = FUN_10138cba();
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        FUN_100a5b78(DAT_100e887c | (DAT_100e8878 - DAT_100e8874) * 0x20 & 0xff00U,DAT_100e8884,
                     DAT_100e8880);
      }
      else {
        piVar2 = (int *)(*piVar2 + *(int *)(param_1 + 0x38));
      }
    }
  }
  return piVar2;
}

