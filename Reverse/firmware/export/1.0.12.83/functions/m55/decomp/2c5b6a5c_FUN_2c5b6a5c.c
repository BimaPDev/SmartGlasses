/* FUN_2c5b6a5c @ 0x2c5b6a5c */

void FUN_2c5b6a5c(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2[0x81];
  if (0 < iVar6) {
    iVar5 = 0;
    piVar4 = param_2;
    do {
      piVar4 = piVar4 + 1;
      if (*piVar4 == 0xff) {
        iVar6 = iVar5;
        if (iVar5 == 0) {
          return;
        }
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar6 != iVar5);
    iVar5 = 0;
    do {
      while( true ) {
        piVar4 = param_2 + 0x41;
        iVar5 = iVar5 + 1;
        piVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        iVar3 = FUN_2c5b6a08(*piVar1,*piVar4);
        if ((iVar3 != 0) || (iVar3 = FUN_2c5b653c(*param_2), iVar3 != 0)) break;
        if (iVar6 <= iVar5) {
          return;
        }
      }
      uVar2 = FUN_2c6313f4(param_1);
      FUN_2c63140c(uVar2,iVar3);
      FUN_2c607048(uVar2,0x27d1);
      FUN_2c6072bc(uVar2,9,0);
    } while (iVar5 < iVar6);
  }
  return;
}

