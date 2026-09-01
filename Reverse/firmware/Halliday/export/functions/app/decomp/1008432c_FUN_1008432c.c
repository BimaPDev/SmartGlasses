/* FUN_1008432c @ 0x1008432c */

undefined4 FUN_1008432c(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  bVar1 = false;
  iVar3 = 0;
  piVar4 = DAT_10084384;
  do {
    if (*piVar4 == 0) {
      bVar1 = true;
    }
    else if (((*piVar4 == *param_1) && (piVar4[1] == param_1[2])) && (piVar4[2] == param_1[0xc])) {
      if (param_2 != 0) {
        return 0x10;
      }
      if ((short)DAT_10084384[iVar3 * 4 + 3] == 0x100) {
        return 0x10;
      }
      return 0;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 4;
    if (iVar3 == 0x10) {
      if (bVar1) {
        uVar2 = 0;
      }
      else if (param_2 == 2) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x12;
      }
      return uVar2;
    }
  } while( true );
}

