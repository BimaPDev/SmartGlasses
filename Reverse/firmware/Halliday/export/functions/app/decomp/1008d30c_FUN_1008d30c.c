/* FUN_1008d30c @ 0x1008d30c */

int FUN_1008d30c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_1012a75c();
  iVar1 = DAT_1008d374;
  iVar3 = FUN_1008dbd4(DAT_1008d374,param_1,param_2,param_3);
  if (iVar3 == 0) {
    FUN_10094174(2,DAT_1008d37c,0x7d,DAT_1008d380,DAT_1008d378);
    FUN_1011ea48(iVar1,0,0x28);
    *(undefined4 *)(iVar1 + 0x28) = 0x80000000;
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    iVar3 = DAT_1008d374;
    if (*(int *)(iVar1 + 0x1c) == 0) {
      iVar3 = FUN_1012a764(uVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0x1c) = 1;
        iVar3 = iVar1;
      }
      else {
        *(int *)(iVar1 + 0x1c) = iVar3;
        iVar3 = DAT_1008d374;
      }
    }
  }
  return iVar3;
}

