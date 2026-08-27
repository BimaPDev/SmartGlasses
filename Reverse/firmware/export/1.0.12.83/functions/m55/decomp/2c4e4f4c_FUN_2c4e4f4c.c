/* FUN_2c4e4f4c @ 0x2c4e4f4c */

int FUN_2c4e4f4c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0x80;
  piVar1 = DAT_2c4e4fa4;
  do {
    if (*piVar1 == param_2) {
      param_3 = piVar1[1];
      *piVar1 = 0;
      goto LAB_2c4e4f64;
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 2;
  } while (iVar2 != 0);
  FUN_2c4e0504(DAT_2c4e4fa8,2,0,0,DAT_2c4e4fb4,0x75,DAT_2c4e4fb0,0x1300,DAT_2c4e4fac,param_1,
               *(undefined4 *)(param_1 + 8),param_2,param_3);
LAB_2c4e4f64:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_3;
  return param_3;
}

