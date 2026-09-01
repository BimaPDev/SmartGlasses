/* FUN_1002f5bc @ 0x1002f5bc */

void FUN_1002f5bc(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,param_1);
  iVar4 = *DAT_1002f61c;
  if (param_1 != 0) goto LAB_1002f5e2;
  do {
    uVar1 = 0;
    while( true ) {
      if (*DAT_1002f61c == iVar4) {
        return;
      }
      uVar7 = FUN_1013cdc0(uVar1);
LAB_1002f5e2:
      iVar2 = (int)((ulonglong)uVar7 >> 0x20);
      if (iVar2 == 0) break;
      piVar5 = (int *)uVar7;
      while (piVar5 != (int *)uVar7 + iVar2) {
        piVar6 = piVar5 + 1;
        iVar3 = *piVar5;
        piVar5 = piVar6;
        if (iVar3 != 0) {
          FUN_1002e994(iVar3,1);
        }
      }
      if ((param_2 <= param_3) || (iVar2 = *(int *)(param_1 + param_3 * 4), iVar2 == 0)) break;
      FUN_1002e994(iVar2,0);
      uVar1 = 1;
    }
  } while( true );
}

