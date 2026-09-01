/* FUN_1004f6f8 @ 0x1004f6f8 */

void FUN_1004f6f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *DAT_1004f808;
  iVar3 = thunk_FUN_1009f30c(0x214,DAT_1004f80c,param_3,0,param_1,iVar7,param_3);
  if (iVar3 == 0) goto LAB_1004f7fe;
  FUN_1011ea48(iVar3,0,0x214);
  iVar4 = FUN_10050194(DAT_1004f810);
  iVar1 = DAT_1004f818;
  iVar5 = DAT_1004f814;
  *(int *)(iVar3 + 0x18) = iVar4;
  uVar8 = (iVar5 - iVar1) * 0x20 & 0xff00;
  if (iVar4 == 0) {
    FUN_100a5b78(uVar8 | 0x1680011,DAT_1004f820,DAT_1004f81c);
  }
  FUN_100a5b78(uVar8 | 0x16a0031,DAT_1004f820,DAT_1004f824,*(undefined4 *)(iVar3 + 0x18));
  uVar6 = DAT_1004f828;
  *(undefined4 *)(iVar3 + 0x100) = DAT_1004f828;
  FUN_1011ea48(uVar6,0,0x1000);
  uVar6 = DAT_1004f82c;
  *(undefined4 *)(iVar3 + 0x104) = DAT_1004f82c;
  FUN_1011ea48(uVar6,0,0x800);
  iVar5 = FUN_10050194(DAT_1004f830);
  *(int *)(iVar3 + 0x3c) = iVar5;
  if (iVar5 == 0) {
    FUN_100a5b78(DAT_1004f834 | uVar8,DAT_1004f820,DAT_1004f838);
  }
  FUN_100a5b78(DAT_1004f83c | uVar8,DAT_1004f820,DAT_1004f840,*(undefined4 *)(iVar3 + 0x3c));
  uVar6 = DAT_1004f844;
  *(undefined4 *)(iVar3 + 0x34) = DAT_1004f844;
  FUN_1011ea48(uVar6,0,0x1000);
  FUN_10051dcc();
  iVar5 = FUN_1009e9f8(DAT_1004f848);
  if (iVar5 == 0) {
    FUN_1009e86c(DAT_1004f848);
  }
  uVar2 = DAT_1004f854;
  uVar6 = DAT_1004f820;
  uVar8 = DAT_1004f84c | uVar8;
  *DAT_1004f850 = iVar3;
  FUN_100a5b78(uVar8,uVar6,uVar2);
  FUN_10119dc2(DAT_1004f858,1);
  FUN_10119dc2(DAT_1004f85c,1,6,4);
  FUN_10119dc2(DAT_1004f860,0);
  FUN_10119dc2(DAT_1004f864,2);
  uVar6 = 0;
  while( true ) {
    if (*DAT_1004f808 == iVar7) break;
    FUN_1013cdc0(uVar6);
LAB_1004f7fe:
    uVar6 = 0xfffffff4;
  }
  return;
}

