/* FUN_10015354 @ 0x10015354 */

undefined4 FUN_10015354(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar3 = *DAT_100153f0;
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, piVar2 = param_2, iVar1 != 0))
  goto LAB_10015396;
  FUN_100a5b78((DAT_100153f8 - DAT_100153f4) * 0x20 & 0xff00U | 0x750011,DAT_10015400,DAT_100153fc,
               DAT_100153f4,param_1,iVar3,param_3);
  uVar5 = 0xfffffff2;
  while( true ) {
    if (*DAT_100153f0 == iVar3) break;
    uVar6 = FUN_1013cdc0();
    piVar2 = (int *)((ulonglong)uVar6 >> 0x20);
    iVar1 = (int)uVar6;
LAB_10015396:
    iVar1 = FUN_100a955c(iVar1,2,piVar2,8);
    if (iVar1 == 0) {
      uVar5 = 0;
      if (*param_2 < 0) {
        uVar4 = (DAT_100153f8 - DAT_100153f4) * 0x20 & 0xff00;
        FUN_100a5b78(uVar4 | 0x7e0011,DAT_10015400,DAT_10015408,uVar4,param_1,iVar3,param_3);
      }
    }
    else {
      FUN_100a5b78((DAT_100153f8 - DAT_100153f4) * 0x20 & 0xff00U | 0x790011,DAT_10015400,
                   DAT_10015404,DAT_100153f4,param_1,iVar3,param_3);
      uVar5 = 0xffffffea;
    }
  }
  return uVar5;
}

