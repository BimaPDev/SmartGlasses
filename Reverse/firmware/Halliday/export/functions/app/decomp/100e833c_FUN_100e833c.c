/* FUN_100e833c @ 0x100e833c */

void FUN_100e833c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  FUN_1013c680(DAT_100e83b4,param_1,param_3,param_4,param_1,param_1,param_3);
  piVar1 = DAT_100e83b8;
  piVar5 = (int *)*DAT_100e83b8;
  piVar2 = (int *)0x0;
  piVar4 = piVar5;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      FUN_100a5b78((DAT_100e83c0 - DAT_100e83bc) * 0x20 & 0xff00U | 0xcf0031,DAT_100e83c8,
                   DAT_100e83c4);
      return;
    }
    if (param_1 == *piVar4) break;
    piVar2 = piVar4;
    piVar4 = (int *)piVar4[2];
  }
  if (piVar2 != (int *)0x0) {
    param_1 = piVar4[2];
    piVar2[2] = param_1;
  }
  if (piVar5 == piVar4) {
    param_1 = piVar4[2];
  }
  iVar3 = piVar4[1];
  if (piVar5 == piVar4) {
    *piVar1 = param_1;
  }
  *DAT_100e83cc = *DAT_100e83cc + -1;
  *DAT_100e83d0 = *DAT_100e83d0 - iVar3;
  FUN_1013c680(DAT_100e83d4,piVar4);
  return;
}

