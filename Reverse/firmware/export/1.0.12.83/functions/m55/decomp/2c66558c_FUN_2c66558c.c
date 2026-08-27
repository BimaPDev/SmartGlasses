/* FUN_2c66558c @ 0x2c66558c */

void FUN_2c66558c(char *param_1,float *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  char *local_1c [2];
  
  uVar1 = FUN_2c669494(0);
  iVar2 = FUN_2c66c4ec();
  uVar3 = thunk_FUN_2c64ca5c(iVar2 + 1);
  FUN_2c674668(uVar3,uVar1,iVar2 + 1);
  FUN_2c669494(0,DAT_2c665618);
  fVar5 = (float)FUN_2c66d1d0(param_1,local_1c);
  *param_2 = fVar5;
  if ((local_1c[0] == param_1) || (*local_1c[0] != '\0')) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = DAT_2c665624;
    if (fVar5 != DAT_2c66561c) {
      if (fVar5 != DAT_2c665620) goto LAB_2c6655de;
      fVar4 = -3.4028235e+38;
    }
  }
  *param_2 = fVar4;
  *param_3 = 4;
LAB_2c6655de:
  FUN_2c669494(0,uVar3);
  thunk_FUN_2c669588(uVar3);
  return;
}

