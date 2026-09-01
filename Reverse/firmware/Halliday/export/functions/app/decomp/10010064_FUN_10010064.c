/* FUN_10010064 @ 0x10010064 */

void FUN_10010064(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  
  if (param_1 == 1) {
    if (*DAT_100100a4 == *DAT_100100a4) goto LAB_10010084;
  }
  else if (*DAT_100100a4 == *DAT_100100a4) {
    return;
  }
  FUN_1013cdc0();
  param_2 = extraout_r2;
LAB_10010084:
  uVar1 = DAT_100100a8;
  uVar9 = 16000;
  iVar7 = *DAT_100104f8;
  iVar3 = thunk_FUN_1009f30c(0x4c,DAT_100104fc,param_2,0,DAT_100100a8,16000,param_2);
  piVar2 = DAT_10010500;
  *DAT_10010500 = iVar3;
  if (iVar3 != 0) goto LAB_100103dc;
LAB_100103ca:
  do {
    uVar4 = 0;
    while( true ) {
      if (*DAT_100104f8 == iVar7) {
        return;
      }
      iVar3 = FUN_1013cdc0(uVar4);
LAB_100103dc:
      FUN_1011ea48(iVar3,0,0x4c);
      puVar10 = (undefined4 *)*piVar2;
      puVar10[4] = uVar9;
      puVar10[5] = param_2;
      uVar4 = thunk_FUN_1009f30c(0x3e0,DAT_100104fc);
      *puVar10 = uVar4;
      piVar11 = (int *)*piVar2;
      if (*piVar11 == 0) goto LAB_100103ca;
      iVar3 = thunk_FUN_1009f30c(0x3e0,DAT_100104fc);
      piVar11[1] = iVar3;
      iVar3 = *piVar2;
      if (*(int *)(iVar3 + 4) == 0) goto LAB_100103ca;
      uVar4 = thunk_FUN_1009f30c(0x200,DAT_100104fc);
      iVar6 = *piVar2;
      *(undefined4 *)(iVar3 + 8) = uVar4;
      puVar8 = *(undefined1 **)(iVar6 + 8);
      if (puVar8 == (undefined1 *)0x0) goto LAB_100103ca;
      *(undefined1 **)(iVar6 + 0x3c) = puVar8;
      param_2 = 0;
      *puVar8 = 0x16;
      *(short *)(puVar8 + 10) = (short)uVar9;
      *(undefined2 *)(puVar8 + 2) = 0x1f8;
      *(undefined4 *)(puVar8 + 0xc) = 0;
      uVar4 = FUN_100edc3c(0xf0000);
      puVar10 = DAT_10010504;
      *DAT_10010504 = uVar4;
      FUN_10119dc2(DAT_10010508,uVar4);
      iVar3 = *piVar2;
      uVar4 = FUN_1009f374(*puVar10,0xf0000);
      *(undefined4 *)(iVar3 + 0x44) = uVar4;
      uVar4 = 1;
      iVar3 = FUN_100a7450(5,uVar9 / 1000,uVar9 / 1000,1,1,*(undefined4 *)(*piVar2 + 0x44));
      uVar9 = (DAT_1001050c - DAT_10010510) * 0x20 & 0xff00;
      if (iVar3 == 0) break;
      iVar12 = *piVar2;
      *(int *)(iVar12 + 0x40) = iVar3;
      uVar5 = FUN_1012e022();
      iVar6 = *piVar2;
      *(undefined4 *)(iVar12 + 0x48) = uVar5;
      uVar5 = FUN_1012d654(*(undefined4 *)(iVar6 + 0x48));
      FUN_100a5b78(uVar9 | 0x7b0031,DAT_10010518,DAT_1001051c,uVar5);
      FUN_1012df9a(iVar3);
      FUN_101164a0(*piVar2 + 0x20,uVar1,0);
      FUN_10116500(*piVar2 + 0x20,5);
    }
    FUN_100a5b78(uVar9 | 0x730011,DAT_10010518,DAT_10010514);
    param_2 = 0;
  } while( true );
}

