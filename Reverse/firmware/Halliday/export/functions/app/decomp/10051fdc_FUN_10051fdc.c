/* FUN_10051fdc @ 0x10051fdc */

int FUN_10051fdc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *extraout_r1;
  int *piVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  int iVar5;
  int extraout_r3;
  int iVar6;
  
  iVar4 = *DAT_10052044;
  FUN_1011dbf4(DAT_10052048,0xffffffff,param_3,0,param_1,iVar4,param_3);
  iVar3 = 0;
  piVar1 = DAT_1005204c;
LAB_10051ff8:
  piVar2 = piVar1 + 1;
  iVar6 = *piVar1;
  if (iVar6 == 0) goto LAB_1005202c;
  iVar5 = *(int *)(iVar6 + 0x54);
  if (*(int *)(iVar5 + 0x14) != param_1) goto LAB_1005201a;
  do {
    FUN_10051ee4(DAT_10052048);
    while( true ) {
      if (*DAT_10052044 == iVar4) {
        return iVar6;
      }
      FUN_1013cdc0();
      piVar2 = extraout_r1;
      iVar3 = extraout_r2;
      iVar5 = extraout_r3;
LAB_1005201a:
      if (((*(int *)(iVar5 + 0x18) == param_1) || (*(int *)(iVar5 + 0x1c) == param_1)) ||
         (*(int *)(iVar5 + 0x20) == param_1)) break;
LAB_1005202c:
      iVar3 = iVar3 + 1;
      piVar1 = piVar2;
      if (iVar3 != 5) goto LAB_10051ff8;
      FUN_10051ee4(DAT_10052048);
      iVar6 = 0;
    }
  } while( true );
}

