/* FUN_2c549624 @ 0x2c549624 */

int FUN_2c549624(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  piVar1 = DAT_2c5497c0;
  if (param_1 == 0) {
    return -1;
  }
  if (*DAT_2c5497c0 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0xec);
  FUN_2c674268(puVar2,0,0xec);
  uVar3 = DAT_2c5497c4;
  puVar2[1] = puVar2 + 3;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[8] = puVar2 + 10;
  *(undefined1 *)(puVar2 + 10) = 0;
  puVar2[0xe] = puVar2 + 0x10;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puVar2[0x14] = puVar2 + 0x16;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  puVar2[0x1b] = puVar2 + 0x1d;
  *(undefined1 *)(puVar2 + 0x1d) = 0;
  puVar2[0x21] = puVar2 + 0x23;
  *(undefined1 *)(puVar2 + 0x23) = 0;
  *puVar2 = uVar3;
  puVar2[0x29] = puVar2 + 0x2b;
  *(undefined1 *)(puVar2 + 0x2b) = 0;
  puVar2[0x2f] = puVar2 + 0x31;
  *(undefined1 *)(puVar2 + 0x31) = 0;
  *(undefined1 *)(puVar2 + 0x37) = 0;
  puVar2[0x35] = puVar2 + 0x37;
  puVar6 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 4) = puVar2;
  if (puVar6 == (undefined4 *)0x0) {
    uVar3 = FUN_2c48e42c(param_1,DAT_2c5497d0);
    iVar4 = FUN_2c549358(uVar3,*(undefined4 *)(param_2 + 4));
    return iVar4 >> 0x1f;
  }
  puVar2 = puVar6 + 0x37;
  *puVar6 = uVar3;
  if ((undefined4 *)puVar6[0x35] != puVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  if ((undefined4 *)puVar6[0x2f] != puVar6 + 0x31) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0x29] != puVar6 + 0x2b) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *puVar6 = DAT_2c5497c8;
  if ((undefined4 *)puVar6[0x21] != puVar6 + 0x23) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0x1b] != puVar6 + 0x1d) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar5 = (undefined4 *)puVar6[0x1a];
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = DAT_2c5497cc;
    if ((undefined4 *)puVar5[0xd] != puVar5 + 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar5[7] != puVar5 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar5[1] != puVar5 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar5,puVar2,puVar5 + 3,param_4);
  }
  if ((undefined4 *)puVar6[0x14] != puVar6 + 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0xe] != puVar6 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[8] != puVar6 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[1] != puVar6 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar6,puVar2,puVar6 + 3,param_4);
}

