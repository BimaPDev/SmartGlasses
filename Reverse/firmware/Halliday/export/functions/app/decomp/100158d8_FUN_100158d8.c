/* FUN_100158d8 @ 0x100158d8 */

void FUN_100158d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = DAT_10015954;
  iVar6 = *DAT_10015954;
  iVar4 = *DAT_10015958;
  if (iVar6 != 0) goto LAB_1001594c;
  iVar2 = thunk_FUN_1009f30c(0x268,DAT_1001595c,param_3,0,param_1,iVar4,param_3);
  iVar1 = DAT_10015960;
  *piVar5 = iVar2;
  piVar5 = (int *)((DAT_10015964 - iVar1) * 0x20 & 0xff00);
  if (iVar2 != 0) goto LAB_10015926;
  FUN_100a5b78((uint)piVar5 | 0x640011,DAT_1001596c,DAT_10015968);
  uVar3 = 0xfffffff4;
  while( true ) {
    if (*DAT_10015958 == iVar4) break;
    iVar2 = FUN_1013cdc0(uVar3);
LAB_10015926:
    FUN_1011ea48(iVar2,iVar6,0x268);
    FUN_1001754c();
    FUN_100a49c4();
    FUN_10016708();
    FUN_100a5b78((uint)piVar5 | 0x740031,DAT_1001596c,DAT_10015970);
LAB_1001594c:
    uVar3 = 0;
  }
  return;
}

