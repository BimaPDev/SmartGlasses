/* FUN_2c53e632 @ 0x2c53e632 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c53e632(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  piVar1 = _LAB_2c53e84c;
  if (*_LAB_2c53e84c == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x138);
  FUN_2c674268(puVar2,0,0x138);
  uVar3 = _LAB_2c53e850;
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
  puVar2[0x35] = puVar2 + 0x37;
  *(undefined1 *)(puVar2 + 0x37) = 0;
  puVar2[0x3b] = puVar2 + 0x3d;
  *(undefined1 *)(puVar2 + 0x3d) = 0;
  puVar2[0x41] = puVar2 + 0x43;
  puVar5 = puVar2 + 0x49;
  *(undefined1 *)(puVar2 + 0x43) = 0;
  *(undefined1 *)(puVar2 + 0x49) = 0;
  puVar2[0x47] = puVar5;
  puVar6 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 4) = puVar2;
  if (puVar6 == (undefined4 *)0x0) {
    uVar3 = FUN_2c48e42c(param_1,_LAB_2c53e860);
    iVar4 = func_0x2c53e8d8(uVar3,*(undefined4 *)(param_2 + 4));
    return iVar4 >> 0x1f;
  }
  puVar2 = (undefined4 *)puVar6[0x4d];
  *puVar6 = uVar3;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = _LAB_2c53e854;
    if ((undefined4 *)puVar2[1] != puVar2 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
  if ((undefined4 *)puVar6[0x47] != puVar6 + 0x49) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0x41] != puVar6 + 0x43) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0x3b] != puVar6 + 0x3d) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0x35] != puVar6 + 0x37) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0x2f] != puVar6 + 0x31) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0x29] != puVar6 + 0x2b) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *puVar6 = _LAB_2c53e858;
  if ((undefined4 *)puVar6[0x21] != puVar6 + 0x23) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[0x1b] != puVar6 + 0x1d) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar2 = (undefined4 *)puVar6[0x1a];
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = _LAB_2c53e85c;
    if ((undefined4 *)puVar2[0xd] != puVar2 + 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[7] != puVar2 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar2[1] != puVar2 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2,puVar5,puVar2 + 3,param_4);
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
  FUN_2c472680(0,puVar6,puVar5,puVar6 + 3,param_4);
}

