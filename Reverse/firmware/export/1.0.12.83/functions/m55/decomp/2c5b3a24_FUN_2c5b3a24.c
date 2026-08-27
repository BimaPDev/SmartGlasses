/* FUN_2c5b3a24 @ 0x2c5b3a24 */

void FUN_2c5b3a24(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_2c5b3aa4;
  if (*DAT_2c5b3aa4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0xc4);
  *puVar3 = DAT_2c5b3aa8;
  if (*piVar1 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x20);
  *puVar4 = DAT_2c5b3aac;
  uVar2 = DAT_2c5b3ab0;
  puVar3[1] = puVar4;
  puVar3[2] = uVar2;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  FUN_2c674268(puVar3 + 8,0,0x7c);
  puVar3[0x29] = 0;
  *(undefined2 *)(puVar3 + 0x2a) = 0;
  puVar3[0x2f] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x30) = 1;
  puVar3[0x27] = 0;
  puVar3[0x28] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0xffffffff;
  *(undefined4 **)(param_1 + 0x14) = puVar3;
  return;
}

