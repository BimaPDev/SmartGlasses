/* FUN_2c57e398 @ 0x2c57e398 */

void FUN_2c57e398(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar2;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  piVar2 = DAT_2c57e4f4;
  if (param_1[2] != 0) {
    return;
  }
  if (*DAT_2c57e4f4 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar1 = (undefined4 *)FUN_2c47245c(0,0x70);
  puVar1[0xd] = 0x3c0000;
  puVar1[0xc] = 0;
  puVar1[0xe] = puVar1 + 0x10;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x15] = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x14] = puVar1 + 0x16;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  piVar2 = (int *)param_1[2];
  param_1[2] = puVar1;
  if (piVar2 == (int *)0x0) {
    FUN_2c57ee04(puVar1,param_2,puVar1 + 0x16,puVar1,param_4);
    if (*(int *)(param_3 + 4) != 0) {
      FUN_2c57edf8(param_1[2],param_3);
    }
    FUN_2c60438c(*param_1);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c57f2c8,0xdb,DAT_2c57f2c0,DAT_2c57f2c4,DAT_2c57f2c0,unaff_r4,unaff_r5,
                 unaff_r6,unaff_lr);
  }
  if ((int *)piVar2[0x14] != piVar2 + 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  if ((int *)piVar2[0xe] != piVar2 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (piVar2[0xc] != 0) {
    FUN_2c58d410(piVar2 + 0xc);
  }
  if (piVar2[0xb] != 0) {
    FUN_2c58d410(piVar2 + 0xb);
  }
  if (piVar2[10] != 0) {
    FUN_2c58d410(piVar2 + 10);
  }
  if (piVar2[9] != 0) {
    FUN_2c58d410(piVar2 + 9);
  }
  if (piVar2[8] != 0) {
    FUN_2c58d410(piVar2 + 8);
  }
  if (piVar2[7] != 0) {
    FUN_2c58d410(piVar2 + 7);
  }
  if (piVar2[6] != 0) {
    FUN_2c58d410(piVar2 + 6);
  }
  if (piVar2[5] != 0) {
    FUN_2c58d410(piVar2 + 5);
  }
  if (piVar2[4] != 0) {
    FUN_2c58d410(piVar2 + 4);
  }
  if (piVar2[3] != 0) {
    FUN_2c58d410(piVar2 + 3);
  }
  if (piVar2[2] != 0) {
    FUN_2c58d410(piVar2 + 2);
  }
  if (piVar2[1] != 0) {
    FUN_2c58d410(piVar2 + 1);
  }
  if (*piVar2 != 0) {
    FUN_2c58d410(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar2);
}

