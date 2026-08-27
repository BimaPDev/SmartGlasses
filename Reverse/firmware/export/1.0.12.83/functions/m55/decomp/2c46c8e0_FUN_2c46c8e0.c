/* FUN_2c46c8e0 @ 0x2c46c8e0 */

int * FUN_2c46c8e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_2c6685b4(1,0x10,param_3,param_4,param_4);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    piVar1[2] = 0x20;
    piVar1[3] = param_1;
    iVar2 = FUN_2c6685b4(4);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      FUN_2c669588(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

