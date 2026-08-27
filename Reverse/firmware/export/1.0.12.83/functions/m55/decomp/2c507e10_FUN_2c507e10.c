/* FUN_2c507e10 @ 0x2c507e10 */

void FUN_2c507e10(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_2c5067f4();
  uVar3 = DAT_2c508030;
  iVar5 = DAT_2c50802c + 0x50;
  *param_1 = DAT_2c50802c;
  param_1[0x12] = 0;
  param_1[4] = iVar5;
  piVar2 = DAT_2c508038;
  uVar1 = DAT_2c508034;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_2c50eb88(param_1 + 0x14,uVar3,uVar1);
  FUN_2c50eb88(param_1 + 0x3b,DAT_2c508040,DAT_2c50803c);
  FUN_2c50eb88(param_1 + 0x62,DAT_2c508040,DAT_2c50803c);
  FUN_2c50eb88(param_1 + 0x89,DAT_2c508048,DAT_2c508044);
  uVar3 = DAT_2c50804c;
  *(undefined2 *)(param_1 + 5) = 0x500;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar3 = FUN_2c5e2e8c(uVar3);
  if (*piVar2 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x50);
  uVar1 = DAT_2c508050;
  puVar4[5] = uVar3;
  puVar4[4] = uVar1;
  *(undefined1 *)((int)puVar4 + 0x4e) = 0;
  puVar4[6] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_2c674268(puVar4 + 7,0,0x32);
  uVar3 = DAT_2c508054;
  param_1[10] = (int)puVar4;
  uVar3 = FUN_2c5e2e8c(uVar3);
  if (*piVar2 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x50);
  uVar1 = DAT_2c508058;
  puVar4[5] = uVar3;
  puVar4[4] = uVar1;
  puVar4[6] = 0;
  *(undefined1 *)((int)puVar4 + 0x4e) = 1;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_2c674268(puVar4 + 7,0,0x32);
  uVar3 = DAT_2c50805c;
  param_1[0xb] = (int)puVar4;
  uVar3 = FUN_2c5e2e8c(uVar3);
  if (*piVar2 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x50);
  puVar4[4] = DAT_2c508060;
  puVar4[5] = uVar3;
  *(undefined1 *)((int)puVar4 + 0x4e) = 2;
  puVar4[6] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_2c674268(puVar4 + 7,0,0x32);
  uVar3 = DAT_2c508064;
  param_1[0xc] = (int)puVar4;
  uVar3 = FUN_2c5e2e8c(uVar3);
  if (*piVar2 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x50);
  puVar4[4] = DAT_2c508068;
  puVar4[5] = uVar3;
  *(undefined1 *)((int)puVar4 + 0x4e) = 3;
  puVar4[6] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_2c674268(puVar4 + 7,0,0x32);
  uVar3 = DAT_2c50806c;
  param_1[0xd] = (int)puVar4;
  uVar3 = FUN_2c5e2e8c(uVar3);
  if (*piVar2 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x50);
  puVar4[4] = DAT_2c508070;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[5] = uVar3;
  *(undefined1 *)((int)puVar4 + 0x4e) = 4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  FUN_2c674268(puVar4 + 7,0,0x32);
  param_1[0xe] = (int)puVar4;
  FUN_2c504998();
  iVar5 = FUN_2c504af0();
  if (iVar5 != 0) {
    FUN_2c5229e8();
    iVar5 = FUN_2c522634();
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c50807c,0x2c,DAT_2c508078,DAT_2c508080);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c50807c,0x29,DAT_2c508078,DAT_2c508074);
}

