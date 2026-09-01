/* FUN_100f83ac @ 0x100f83ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f83ac(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int *piVar4;
  
  iVar9 = *(int *)(param_1 + 0xc);
  iVar11 = *(int *)(iVar9 + 0x24);
  if (iVar11 < 1) {
    if (iVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)software_udf(0xff,0x100f850e);
      _DAT_00000060 = param_1;
      (*pcVar10)();
    }
    if (*(code **)(iVar9 + 0x34) == (code *)0x0) {
      iVar11 = 6;
    }
    else {
      (**(code **)(iVar9 + 0x34))(0);
      iVar11 = 6;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 8);
    iVar1 = (**(code **)(iVar7 + 4))(iVar7,iVar11);
    if (iVar1 == 0) {
      if (*(code **)(iVar9 + 0x34) == (code *)0x0) {
        iVar11 = 0x40;
      }
      else {
        (**(code **)(iVar9 + 0x34))();
        iVar11 = 0x40;
      }
    }
    else {
      FUN_1011ea48(iVar1,0,iVar11);
      uVar5 = *param_2;
      *(int *)(iVar1 + 0x60) = param_1;
      *(int *)(iVar1 + 100) = iVar7;
      *(undefined4 *)(iVar1 + 0x68) = uVar5;
      if (param_3 != 0) {
        *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x400;
      }
      iVar2 = (**(code **)(iVar7 + 4))(iVar7,0x40);
      if (iVar2 == 0) {
        FUN_100f8340(iVar1,iVar7);
        if (*(code **)(iVar9 + 0x34) != (code *)0x0) {
          (**(code **)(iVar9 + 0x34))(iVar1);
        }
        iVar11 = 0x40;
      }
      else {
        FUN_1011ea48(iVar2,0,0x40);
        pcVar10 = *(code **)(iVar9 + 0x30);
        *(int *)(iVar1 + 0x80) = iVar2;
        *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
        if (pcVar10 == (code *)0x0) {
          *param_2 = *(undefined4 *)(iVar1 + 0x68);
LAB_100f8480:
          piVar8 = *(int **)(iVar1 + 0x28);
          if ((piVar8 != (int *)0x0) &&
             (piVar6 = piVar8 + *(int *)(iVar1 + 0x24) + -1, piVar3 = piVar6, piVar8 <= piVar6)) {
            do {
              piVar4 = piVar3 + -1;
              iVar9 = *piVar3;
              if ((*(int *)(iVar9 + 4) == DAT_100f8510) &&
                 ((*(int *)(iVar9 + 8) == DAT_100f8514 || (*(int *)(iVar9 + 8) == 0x40000)))) {
                *(int *)(iVar1 + 0x5c) = iVar9;
                goto LAB_100f84b4;
              }
              piVar3 = piVar4;
            } while (piVar8 <= piVar4);
            do {
              if (piVar6 < piVar8) goto LAB_100f84b4;
              iVar9 = *piVar6;
              piVar6 = piVar6 + -1;
            } while (*(int *)(iVar9 + 4) != DAT_100f8510);
            *(int *)(iVar1 + 0x5c) = iVar9;
          }
LAB_100f84b4:
          *param_7 = iVar1;
          return 0;
        }
        iVar11 = (*pcVar10)(*param_2,iVar1,param_4,param_5,param_6);
        *param_2 = *(undefined4 *)(iVar1 + 0x68);
        if (iVar11 == 0) goto LAB_100f8480;
        FUN_100f8340(iVar1,iVar7);
        if (*(code **)(iVar9 + 0x34) != (code *)0x0) {
          (**(code **)(iVar9 + 0x34))(iVar1);
        }
        (**(code **)(iVar7 + 8))(iVar7,iVar2);
      }
      (**(code **)(iVar7 + 8))(iVar7,iVar1);
    }
  }
  *param_7 = 0;
  return iVar11;
}

