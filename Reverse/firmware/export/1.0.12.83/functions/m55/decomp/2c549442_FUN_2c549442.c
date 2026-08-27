/* FUN_2c549442 @ 0x2c549442 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c549442(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  piVar1 = _LAB_2c54959c;
  if (*_LAB_2c54959c == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0xc0);
  FUN_2c674268(puVar2,0,0xc0);
  uVar3 = _LAB_2c5495a0;
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
  *(undefined1 *)(puVar2 + 0x2c) = 0;
  puVar2[0x2a] = puVar2 + 0x2c;
  puVar6 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 4) = puVar2;
  if (puVar6 == (undefined4 *)0x0) {
    uVar3 = FUN_2c48e42c(param_1,_LAB_2c5495ac);
    iVar4 = func_0x2c5491f8(uVar3,*(undefined4 *)(param_2 + 4));
    return iVar4 >> 0x1f;
  }
  puVar2 = puVar6 + 0x2c;
  *puVar6 = uVar3;
  if ((undefined4 *)puVar6[0x2a] != puVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  *puVar6 = _LAB_2c5495a4;
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
    *puVar5 = _LAB_2c5495a8;
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

