/* FUN_140c054c @ 0x140c054c */

void FUN_140c054c(int param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 uVar8;
  
  pbVar1 = DAT_140c05d4;
  piVar4 = DAT_140c05d8;
  if ((-1 < (int)((uint)*DAT_140c05d4 << 0x1f)) &&
     (iVar2 = FUN_140bff16(DAT_140c05d4), piVar4 = DAT_140c05d8, iVar2 != 0)) {
    FUN_140bff2e(pbVar1);
    piVar4 = DAT_140c05d8;
  }
  do {
    if (*piVar4 == 0) {
      iVar2 = -1;
LAB_140c0584:
      iVar5 = *(int *)(param_1 + 0xc);
      if (*(int *)(iVar5 + param_3 * 4) == 0) {
        iVar7 = param_2[1];
        param_2[1] = iVar7 + 1;
        *(int **)(iVar5 + param_3 * 4) = param_2;
        if (iVar2 != -1) {
          param_2[1] = iVar7 + 2;
          *(int **)(iVar5 + iVar2 * 4) = param_2;
        }
      }
      else if (param_2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x140c0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 4))(param_2);
        return;
      }
      return;
    }
    uVar8 = FUN_140c03c0();
    uVar3 = *(undefined4 *)((int)((ulonglong)uVar8 >> 0x20) + 4);
    if ((int)uVar8 == param_3) {
      iVar2 = FUN_140c03c0(uVar3);
      goto LAB_140c0584;
    }
    uVar8 = FUN_140c03c0(uVar3);
    puVar6 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == param_3) {
      iVar5 = FUN_140c03c0(*puVar6);
      iVar2 = param_3;
      param_3 = iVar5;
      goto LAB_140c0584;
    }
    piVar4 = puVar6 + 2;
  } while( true );
}

