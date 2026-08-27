/* FUN_2c48dea0 @ 0x2c48dea0 */

void FUN_2c48dea0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_2c48deec;
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    piVar3 = (int *)*param_1;
    iVar2 = param_1[3];
    if (-1 < iVar2 << 0x17) {
      if (param_1[2] != 0) {
        FUN_2c48dea0();
        iVar2 = param_1[3];
        if (iVar2 << 0x17 < 0) goto LAB_2c48dece;
      }
      if (param_1[4] != 0) {
        (**(code **)(iVar1 + 4))();
        iVar2 = param_1[3];
      }
    }
LAB_2c48dece:
    if ((-1 < iVar2 << 0x16) && (param_1[8] != 0)) {
      (**(code **)(iVar1 + 4))();
    }
    (**(code **)(iVar1 + 4))(param_1);
    param_1 = piVar3;
    if (piVar3 == (int *)0x0) {
      return;
    }
  } while( true );
}

