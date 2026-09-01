/* FUN_10039954 @ 0x10039954 */

uint FUN_10039954(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  puVar2 = DAT_100399ec;
  uVar7 = (uint)(byte)DAT_100399ec[10];
  iVar5 = *DAT_100399f0;
  if (uVar7 == 0) goto LAB_1003997c;
  do {
    uVar7 = 0;
    while( true ) {
      while( true ) {
        if (*DAT_100399f0 == iVar5) {
          return uVar7;
        }
        FUN_1013cdc0();
LAB_1003997c:
        uVar4 = DAT_10039a04;
        uVar3 = DAT_10039a00;
        iVar6 = DAT_100399f4 - DAT_100399f8;
        uVar8 = uVar7;
        puVar10 = puVar2;
        do {
          puVar10 = puVar10 + 1;
          uVar9 = uVar8 + 1;
          FUN_100a5b78(iVar6 * 0x20 & 0xff00U | 0x6b0033,uVar4,uVar3,uVar8,
                       *(undefined1 *)(param_1 + uVar8),*puVar10);
          uVar8 = uVar9;
        } while (uVar9 != 3);
        iVar6 = FUN_1011ea18(DAT_100399fc,param_1);
        if (iVar6 != 0) break;
        uVar7 = 1;
        puVar2[9] = 0;
      }
      cVar1 = puVar2[9];
      puVar2[9] = cVar1 + 1U;
      if ((byte)(cVar1 + 1U) < 5) break;
      FUN_10039770();
    }
  } while( true );
}

