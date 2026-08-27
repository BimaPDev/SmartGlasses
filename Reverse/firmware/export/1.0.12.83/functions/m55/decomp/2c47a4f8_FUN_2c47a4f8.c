/* FUN_2c47a4f8 @ 0x2c47a4f8 */

void FUN_2c47a4f8(int param_1,int param_2,ushort param_3,undefined1 param_4,undefined4 param_5)

{
  ushort *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  uVar9 = (uint)param_3;
  if (*DAT_2c47a57c != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x8f,DAT_2c47a594,DAT_2c47a598,DAT_2c47a590,uVar9);
  }
  if ((59999 < (uVar9 - 1 & 0xffff)) || (param_2 == 0)) {
    FUN_2c6741e8(0x712,DAT_2c47a58c,DAT_2c47a588,uVar9);
    return;
  }
  if (*(char *)(DAT_2c47a580 + 1) != '\0') {
    FUN_2c6741e8(0x711,DAT_2c47a59c,DAT_2c47a588);
    return;
  }
  *(undefined4 *)(DAT_2c47a584 + 4) = param_5;
  iVar6 = DAT_2c47a148;
  piVar7 = *(int **)(DAT_2c47a148 + 4);
  if (*piVar7 == 0) {
    FUN_2c6741e8(0x711,DAT_2c47a144,DAT_2c47a140);
    return;
  }
  *(undefined1 *)((int)piVar7 + 0x20a) = param_4;
  puVar1 = DAT_2c47a14c;
  piVar7[1] = 0;
  *(undefined2 *)(piVar7 + 0x82) = 0;
  piVar7[0x83] = 0;
  *(undefined2 *)(piVar7 + 0x84) = 0;
  FUN_2c674668();
  uVar4 = (uint)*puVar1;
  piVar7[1] = uVar9;
  puVar2 = DAT_2c47a150;
  if (uVar4 == 0) {
    iVar5 = 0x1fa;
    uVar3 = 0x1fb;
  }
  else {
    uVar3 = uVar4 - 5;
    iVar5 = uVar4 - 6;
  }
  if (param_1 == 0) {
    param_1 = 8;
  }
  *(undefined2 *)((int)piVar7 + 0x20e) = 0;
  *(ushort *)(piVar7 + 0x83) = (short)((uVar9 - 1) / uVar3) + 1U & 0xff;
  if ((int)uVar9 < iVar5) {
    param_1 = 9;
    puVar2[1] = 3;
    FUN_2c479f14(1,1000);
  }
  else {
    (**(code **)(DAT_2c47a13c + (uint)(byte)puVar2[1] * 4))(0,1);
  }
  uVar4 = (uint)*puVar1;
  *(char *)(piVar7 + 0x84) = (char)param_1;
  puVar8 = *(undefined4 **)(iVar6 + 4);
  if (uVar4 == 0) {
    uVar4 = 0x200;
    iVar6 = 0x1fa;
  }
  else {
    iVar6 = uVar4 - 6;
  }
  if ((int)uVar9 < iVar6) {
    if (param_1 == 2) {
      *(undefined2 *)(puVar8 + 2) = 0;
      *(undefined1 *)((int)puVar8 + 0xb) = param_4;
      *(undefined1 *)((int)puVar8 + 10) = 2;
      FUN_2c674668(puVar8 + 3,param_2,uVar9);
      *(ushort *)(puVar8 + 0x82) = param_3 + 4;
      iVar6 = FUN_2c46db64();
      (**(code **)(iVar6 + 0x10))(puVar8 + 2,*(undefined2 *)(puVar8 + 0x82),0xa2);
      *puVar2 = 2;
    }
    else if (param_1 == 9) {
      *(undefined1 *)((int)puVar8 + 10) = 9;
      *(undefined1 *)((int)puVar8 + 0xb) = param_4;
      *(undefined2 *)(puVar8 + 2) = 0;
      FUN_2c674668(puVar8 + 3,param_2,uVar9);
      *(ushort *)(puVar8 + 0x82) = param_3 + 4;
      goto LAB_2c47a036;
    }
    return;
  }
  if (param_1 == 6) {
    *(undefined1 *)((int)puVar8 + 0xb) = param_4;
    *(undefined1 *)((int)puVar8 + 10) = 6;
    *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(puVar8 + 0x83);
    *(undefined2 *)(puVar8 + 0x82) = 6;
    *(undefined2 *)(puVar8 + 2) = 0;
    *(undefined1 *)((int)puVar8 + 0xd) = 0;
  }
  else {
    if (param_1 != 8) {
      return;
    }
    iVar6 = (uVar4 - 5 & 0xffff) - 4;
    *(undefined2 *)((int)puVar8 + 0x20e) = 0;
    *(ushort *)(puVar8 + 0x83) = (short)((uint)((puVar8[1] + -1) - iVar6) / (uVar4 - 5)) + 1U & 0xff
    ;
    FUN_2c674668(*puVar8,param_2 + iVar6,uVar9 - iVar6);
    *(undefined2 *)(puVar8 + 3) = *(undefined2 *)(puVar8 + 0x83);
    puVar8[1] = uVar9 - iVar6;
    *(undefined2 *)(puVar8 + 2) = 0;
    *(undefined1 *)((int)puVar8 + 10) = 8;
    *(undefined1 *)((int)puVar8 + 0xb) = param_4;
    FUN_2c674668((int)puVar8 + 0xe,param_2,iVar6);
    *(short *)(puVar8 + 0x82) = (short)uVar4 + -3;
  }
LAB_2c47a036:
  iVar6 = FUN_2c46db64();
                    /* WARNING: Could not recover jumptable at 0x2c47a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar6 + 0x10))(puVar8 + 2,*(undefined2 *)(puVar8 + 0x82),0xa2);
  return;
}

