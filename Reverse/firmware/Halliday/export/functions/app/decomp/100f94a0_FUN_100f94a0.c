/* FUN_100f94a0 @ 0x100f94a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f94a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (undefined4 *)0x0) {
LAB_100f954c:
    iVar5 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x60) == 0) {
      return 0x22;
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x60) + 0xc);
    iVar5 = *(int *)(param_1 + 100);
    iVar6 = *(int *)(iVar7 + 0x28);
    *param_2 = 0;
    if (iVar6 < 1) {
      if (iVar6 != 0) goto LAB_100f954c;
      puVar3 = (undefined4 *)
               (**(code **)(iVar5 + 4))(iVar5,0xc,param_3,*(code **)(iVar5 + 4),param_4);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x100f95c0);
        _MasterStackPointer = param_1;
        (*pcVar4)();
      }
    }
    else {
      piVar1 = (int *)(**(code **)(iVar5 + 4))(iVar5,iVar6);
      if (piVar1 != (int *)0x0) {
        FUN_1011ea48(piVar1,0,iVar6);
        piVar2 = (int *)(**(code **)(iVar5 + 4))(iVar5,0xc);
        if (piVar2 == (int *)0x0) {
          iVar6 = 0x40;
        }
        else {
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          pcVar4 = *(code **)(iVar5 + 4);
          *piVar1 = param_1;
          iVar6 = (*pcVar4)(iVar5,0x24);
          if (iVar6 == 0) {
            iVar6 = 0x40;
          }
          else {
            FUN_1011ea48(iVar6,0,0x24);
            pcVar4 = *(code **)(iVar7 + 0x38);
            piVar1[10] = iVar6;
            if ((pcVar4 == (code *)0x0) || (iVar6 = (*pcVar4)(piVar1), iVar6 == 0)) {
              *param_2 = piVar1;
              piVar2[2] = (int)piVar1;
              if (param_1 == -0x6c) {
                return 0;
              }
              iVar5 = *(int *)(param_1 + 0x70);
              *piVar2 = iVar5;
              piVar2[1] = 0;
              if (iVar5 == 0) {
                *(int **)(param_1 + 0x6c) = piVar2;
              }
              else {
                *(int **)(iVar5 + 4) = piVar2;
              }
              *(int **)(param_1 + 0x70) = piVar2;
              return 0;
            }
          }
          (**(code **)(iVar5 + 8))(iVar5,piVar2);
        }
        if (piVar1[10] != 0) {
          (**(code **)(iVar5 + 8))(iVar5);
        }
        piVar1[10] = 0;
        (**(code **)(iVar5 + 8))(iVar5,piVar1);
        return iVar6;
      }
    }
    iVar5 = 0x40;
  }
  return iVar5;
}

