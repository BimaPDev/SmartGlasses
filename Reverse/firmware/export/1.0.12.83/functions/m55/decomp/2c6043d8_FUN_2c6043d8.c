/* FUN_2c6043d8 @ 0x2c6043d8 */

void FUN_2c6043d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c607df0();
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) {
    FUN_2c605b10(iVar2);
    iVar1 = FUN_2c602340(param_1,0x21,0);
    if (iVar1 != 0) {
      FUN_2c604248(param_1);
    }
    FUN_2c608c7c(iVar2);
    FUN_2c605b80(iVar2,0);
    FUN_2c605b10(iVar2);
    FUN_2c602340(iVar2,0x22,0);
    FUN_2c602340(iVar2,0x24,0);
    return;
  }
  iVar2 = FUN_2c604188(param_1);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x10);
    iVar1 = FUN_2c602340(param_1,0x21,0);
    if (iVar1 != 0) {
      FUN_2c604248(param_1);
    }
    if (iVar3 == param_1) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
  }
  return;
}

