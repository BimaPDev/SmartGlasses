/* FUN_2c62e994 @ 0x2c62e994 */

int * FUN_2c62e994(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_2c62ca10(DAT_2c62e9d0);
  uVar1 = DAT_2c62e9d0;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((*piVar2 == param_1) && ((piVar2[1] == param_2 || (param_2 == 0)))) break;
    piVar2 = (int *)FUN_2c62ca20(uVar1,piVar2);
  }
  return piVar2;
}

