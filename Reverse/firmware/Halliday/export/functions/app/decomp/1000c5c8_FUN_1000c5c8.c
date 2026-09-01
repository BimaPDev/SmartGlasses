/* FUN_1000c5c8 @ 0x1000c5c8 */

void FUN_1000c5c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = DAT_1000c648;
  iVar4 = *DAT_1000c644;
  FUN_1011aab8(1,param_2,param_3,0,param_1,iVar4,param_3);
  uVar5 = (iVar2 - DAT_1000c64c) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0x460031,DAT_1000c654,DAT_1000c650,param_1);
  uVar1 = FUN_100a22ac();
  if (uVar1 < 0x321) goto LAB_1000c61e;
  iVar2 = FUN_100a2338();
  if (iVar2 == 0) goto LAB_1000c61e;
  FUN_100e7dc8(param_1);
  while( true ) {
    if (*DAT_1000c644 == iVar4) break;
    FUN_1013cdc0();
LAB_1000c61e:
    uVar3 = FUN_100a22ac();
    FUN_100a5b78(uVar5 | 0x5a0031,DAT_1000c654,DAT_1000c658,uVar3);
  }
  FUN_1011aabe(1);
  return;
}

