/* FUN_2c652254 @ 0x2c652254 */

void FUN_2c652254(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (*(uint *)(param_1 + 4) < param_2) {
    uVar3 = FUN_2c65868c(DAT_2c65228c,DAT_2c652290,param_2);
    param_3 = extraout_r2;
  }
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_3 == -1) {
    iVar2 = *(int *)uVar3;
    *(int *)(param_1 + 4) = iVar1;
    *(undefined1 *)(iVar2 + iVar1) = 0;
  }
  else if (param_3 != 0) {
    FUN_2c65eb04();
    return;
  }
  return;
}

