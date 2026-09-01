/* FUN_100f8ad0 @ 0x100f8ad0 */

void FUN_100f8ad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_3 + 0xc);
  if (*(code **)(param_2 + 0x78) != (code *)0x0) {
    (**(code **)(param_2 + 0x78))(*(undefined4 *)(param_2 + 0x74));
  }
  iVar6 = *(int *)(param_2 + 0x54);
  do {
    if (iVar6 == 0) {
      if ((param_2 != -0x6c) && (param_1 != 0)) {
        iVar6 = *(int *)(param_2 + 0x6c);
        while (iVar6 != 0) {
          iVar1 = *(int *)(iVar6 + 4);
          iVar2 = *(int *)(iVar6 + 8);
          if (*(code **)(iVar2 + 8) != (code *)0x0) {
            (**(code **)(iVar2 + 8))(iVar2);
          }
          pcVar5 = *(code **)(*(int *)(param_3 + 0xc) + 0x3c);
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(iVar2);
          }
          if (*(int *)(iVar2 + 0x28) != 0) {
            (**(code **)(param_1 + 8))(param_1);
            *(undefined4 *)(iVar2 + 0x28) = 0;
          }
          (**(code **)(param_1 + 8))(param_1,iVar2);
          (**(code **)(param_1 + 8))(param_1,iVar6);
          iVar6 = iVar1;
        }
        *(undefined4 *)(param_2 + 0x6c) = 0;
        *(undefined4 *)(param_2 + 0x70) = 0;
      }
      *(undefined4 *)(param_2 + 0x58) = 0;
      if (*(code **)(param_2 + 0x30) != (code *)0x0) {
        (**(code **)(param_2 + 0x30))(param_2);
      }
      FUN_100f8340(param_2,param_1);
      pcVar5 = *(code **)(iVar8 + 0x34);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(param_2);
      }
      iVar8 = *(int *)(param_2 + 0x68);
      if (iVar8 != 0) {
        iVar6 = *(int *)(param_2 + 8);
        iVar1 = *(int *)(iVar8 + 0x1c);
        if (*(code **)(iVar8 + 0x18) != (code *)0x0) {
          (**(code **)(iVar8 + 0x18))(iVar8);
        }
        if (-1 < iVar6 << 0x15) {
          (**(code **)(iVar1 + 8))(iVar1,iVar8);
        }
      }
      *(undefined4 *)(param_2 + 0x68) = 0;
      if (*(int *)(param_2 + 0x80) != 0) {
        (**(code **)(param_1 + 8))(param_1);
        *(undefined4 *)(param_2 + 0x80) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x100f8bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 8))(param_1,param_2);
      return;
    }
    iVar1 = *(int *)(iVar6 + 4);
    iVar2 = *(int *)(iVar1 + 0x54);
    iVar7 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    while( true ) {
      if (iVar2 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar4 = iVar2;
      if (iVar6 == iVar2) break;
      while (iVar3 = iVar4, iVar4 = *(int *)(iVar3 + 8), iVar4 != 0) {
        if (iVar6 == iVar4) {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 8);
          goto LAB_100f8b0e;
        }
      }
    }
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar6 + 8);
LAB_100f8b0e:
    if (*(code **)(iVar6 + 0x14) != (code *)0x0) {
      (**(code **)(iVar6 + 0x14))(iVar6);
    }
    FUN_100f8a54(iVar6);
    (**(code **)(iVar7 + 8))(iVar7,iVar6);
    iVar6 = *(int *)(param_2 + 0x54);
  } while( true );
}

