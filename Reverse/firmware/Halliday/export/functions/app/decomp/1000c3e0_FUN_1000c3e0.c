/* FUN_1000c3e0 @ 0x1000c3e0 */

undefined4 FUN_1000c3e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_r4;
  
  iVar5 = *DAT_1000c460;
  if (param_1 == 2) {
    FUN_100a18bc(DAT_1000c464,param_2,param_3,0,2);
    iVar4 = 0;
    uVar3 = 1;
    uVar1 = DAT_1000c464;
  }
  else {
    FUN_100a18bc(DAT_1000c464,param_2,param_3,0,param_1);
    iVar4 = FUN_1001238c();
    if ((iVar4 == 0) && (iVar4 = *DAT_1000c468, unaff_r4 = iVar4, iVar4 == 0)) goto LAB_1000c426;
    iVar4 = 1;
    uVar3 = 8;
    uVar1 = DAT_1000c46c;
  }
  do {
    FUN_100a1690(uVar1,uVar3,iVar4);
    iVar4 = unaff_r4;
    do {
      if (*DAT_1000c460 == iVar5) {
        return 0;
      }
      FUN_1013cdc0();
LAB_1000c426:
      FUN_100a5b78((DAT_1000c474 - DAT_1000c470) * 0x20 & 0xff00U | 0x530031,DAT_1000c47c,
                   DAT_1000c478,DAT_1000c464);
      iVar2 = FUN_100a1690(DAT_1000c464,8,iVar4);
    } while (iVar2 != 0xff);
    uVar3 = 8;
    uVar1 = DAT_1000c464;
    unaff_r4 = iVar4;
  } while( true );
}

