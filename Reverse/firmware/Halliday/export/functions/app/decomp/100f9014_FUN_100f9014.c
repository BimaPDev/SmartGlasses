/* FUN_100f9014 @ 0x100f9014 */

int FUN_100f9014(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_3 = 0;
  if (param_1 == (int *)0x0) {
    return 0x21;
  }
  if (param_2 == (int *)0x0) {
    return 6;
  }
  iVar4 = *param_1;
  piVar1 = (int *)(**(code **)(iVar4 + 4))(iVar4,0x28);
  if (piVar1 == (int *)0x0) {
    return 0x40;
  }
  FUN_1011ea48(piVar1,0,0x28);
  iVar2 = *param_2;
  piVar1[7] = iVar4;
  if (iVar2 << 0x1f < 0) {
    iVar3 = param_2[1];
    iVar2 = param_2[2];
    piVar1[5] = 0;
    piVar1[6] = 0;
    *piVar1 = iVar3;
    piVar1[1] = iVar2;
    piVar1[2] = 0;
    piVar1[8] = 0;
  }
  else if (iVar2 << 0x1d < 0) {
    iVar2 = FUN_100f5dcc(piVar1,param_2[3]);
    piVar1[4] = param_2[3];
    if (iVar2 != 0) goto LAB_100f9098;
  }
  else {
    if ((-1 < iVar2 << 0x1e) || (param_2[4] == 0)) {
      iVar2 = 6;
LAB_100f9098:
      (**(code **)(iVar4 + 8))(iVar4,piVar1);
      piVar1 = (int *)0x0;
      goto LAB_100f9064;
    }
    (**(code **)(iVar4 + 8))(iVar4,piVar1);
    piVar1 = (int *)param_2[4];
  }
  iVar2 = 0;
  piVar1[7] = iVar4;
LAB_100f9064:
  *param_3 = piVar1;
  return iVar2;
}

