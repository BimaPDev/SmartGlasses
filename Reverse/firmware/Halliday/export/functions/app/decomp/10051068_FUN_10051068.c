/* FUN_10051068 @ 0x10051068 */

undefined4 FUN_10051068(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint unaff_r5;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar6 = *DAT_10051174;
  iVar3 = thunk_FUN_1009f30c(0x96,DAT_10051178,param_3,0);
  if (iVar3 == 0) goto LAB_10051152;
  FUN_1011ea48(iVar3,0,0x96);
  unaff_r5 = (DAT_1005117c - DAT_10051180) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_10051184 | unaff_r5,DAT_1005118c,DAT_10051188,param_1,param_2);
  uVar2 = DAT_100511b4;
  uVar1 = DAT_100511b0;
  puVar8 = DAT_10051190 + 0xc;
  puVar7 = DAT_10051190;
  do {
    if (*(byte *)(puVar7 + 1) == param_1) {
      FUN_1011ea28(iVar3,uVar1);
      FUN_1011ea28(iVar3,*puVar7);
      FUN_1011ea28(iVar3,uVar2);
      FUN_1011ea28(iVar3,param_2);
    }
    puVar7 = puVar7 + 2;
  } while (puVar7 != puVar8);
  if (param_1 == 1) {
    (*(code *)*DAT_10051194)(param_2);
    iVar4 = FUN_100ee9e0();
    if (iVar4 == 0x62) {
      *(byte *)(DAT_10051198 + 2) = *(byte *)(DAT_10051198 + 2) | 8;
      FUN_10138bb0(0x62,0);
    }
  }
  iVar4 = FUN_1006c2a0(iVar3);
  if (-1 < iVar4) goto LAB_10051160;
  FUN_1011ea28(iVar3,DAT_1005119c);
  iVar4 = FUN_1006c2a0(iVar3);
  if (iVar4 < 0) {
    uVar5 = unaff_r5 | 0x1680011;
  }
  else {
    uVar5 = unaff_r5 | 0x16a0031;
  }
  while( true ) {
    FUN_100a5b78(uVar5,DAT_1005118c);
    FUN_1012d1f4(iVar3);
LAB_10051152:
    if (*DAT_10051174 == iVar6) break;
    FUN_1013cdc0();
LAB_10051160:
    uVar5 = DAT_100511a8 | unaff_r5;
  }
  return 0;
}

