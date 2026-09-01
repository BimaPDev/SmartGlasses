/* FUN_10114e40 @ 0x10114e40 */

void FUN_10114e40(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_10114e08();
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 2;
  piVar2 = DAT_10114eb4;
  if (param_2 != (int *)0x0) {
    param_1[2] = (int)param_2;
    if (param_1 == piVar2) {
      uVar4 = extraout_r2;
      FUN_10119dc2(DAT_10114ec0,DAT_10114ebc,DAT_10114eb8,0xb1,uVar3,extraout_r2,piVar2,param_4);
      FUN_1011a1f0(DAT_10114eb8,0xb1,uVar4,piVar2);
    }
    piVar2 = (int *)*param_2;
    if ((param_2 != piVar2) && (piVar2 != (int *)0x0)) {
      do {
        if (((int)*(char *)((int)param_1 + 0xe) != (int)*(char *)((int)piVar2 + 0xe)) &&
           (0 < (int)*(char *)((int)piVar2 + 0xe) - (int)*(char *)((int)param_1 + 0xe))) {
          piVar1 = (int *)piVar2[1];
          *param_1 = (int)piVar2;
          param_1[1] = (int)piVar1;
          *piVar1 = (int)param_1;
          piVar2[1] = (int)param_1;
          return;
        }
      } while ((piVar2 != (int *)param_2[1]) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0));
    }
    piVar2 = (int *)param_2[1];
    *param_1 = (int)param_2;
    param_1[1] = (int)piVar2;
    *piVar2 = (int)param_1;
    param_2[1] = (int)param_1;
  }
  return;
}

