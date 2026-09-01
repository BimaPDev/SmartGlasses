/* FUN_1001ac40 @ 0x1001ac40 */

void FUN_1001ac40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r2;
  int iVar3;
  uint uVar4;
  uint extraout_r3;
  longlong lVar5;
  undefined4 *puVar6;
  
  lVar5 = CONCAT44(param_2,param_1);
  uVar2 = (uint)*(byte *)((int)param_1 + 6);
  iVar3 = *DAT_1001ad0c;
  uVar4 = (uint)*(byte *)((int)param_1 + 5);
  if (uVar2 == uVar4) goto LAB_1001acfc;
  puVar6 = param_1;
  if (uVar4 == 0) {
    FUN_100a58ac(0x10);
    FUN_1001a7c0(*param_1);
    uVar2 = extraout_r2;
    uVar4 = extraout_r3;
  }
  FUN_1011dbf4(param_1 + 0xf,0xffffffff,uVar2,uVar4,puVar6,iVar3,param_3);
  FUN_1011ea48((int)param_1 + 10,0,0x10);
  *(undefined1 *)((int)param_1 + 7) = *(undefined1 *)(param_1 + 2);
  FUN_10113e2c(param_1 + 0xf);
  uVar2 = param_1[7];
  param_1[7] = 0;
  lVar5 = (ulonglong)uVar2 << 0x20;
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)param_1 + 6);
  switch(*(undefined1 *)((int)param_1 + 6)) {
  case 0:
    FUN_100a5880(0x10,DAT_1001ad10,param_1);
    lVar5 = FUN_10116500(param_1 + 8,10);
    break;
  case 1:
    goto switchD_1001aca2_caseD_1;
  case 2:
    uVar1 = 0;
    goto LAB_1001acd6;
  case 3:
    uVar1 = 2;
    goto LAB_1001acd6;
  case 4:
    uVar1 = 3;
    goto LAB_1001acd6;
  }
  do {
    if (*(char *)((int)param_1 + 5) == '\0') {
LAB_1001acfc:
      if (*DAT_1001ad0c == iVar3) {
        return;
      }
    }
    else if (*DAT_1001ad0c == iVar3) {
      FUN_10116500(param_1 + 8,0x32);
      return;
    }
    FUN_1013cdc0((int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
switchD_1001aca2_caseD_1:
    uVar1 = 1;
LAB_1001acd6:
    lVar5 = FUN_1001ab98(param_1,uVar1);
  } while( true );
}

