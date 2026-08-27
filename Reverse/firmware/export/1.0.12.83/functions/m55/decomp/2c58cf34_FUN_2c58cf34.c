/* FUN_2c58cf34 @ 0x2c58cf34 */

int FUN_2c58cf34(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  piVar1 = DAT_2c58d1ec;
  if (param_1 == 0) {
    return -1;
  }
  if (*DAT_2c58d1ec == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x34);
  FUN_2c674268(puVar2,0,0x34);
  uVar5 = DAT_2c58d1c0;
  *puVar2 = DAT_2c58d1c0;
  puVar2[1] = puVar2 + 3;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  puVar2[7] = puVar2 + 9;
  puVar6 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 4) = puVar2;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = uVar5;
    if ((undefined4 *)puVar6[7] != puVar6 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
    if ((undefined4 *)puVar6[1] == puVar6 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  iVar3 = FUN_2c48e42c(param_1,DAT_2c58d1c4);
  iVar7 = *(int *)(param_2 + 4);
  if (((iVar3 != 0) && (iVar4 = FUN_2c55700c(iVar3,DAT_2c58d1c8,iVar7 + 4,1), -1 < iVar4)) &&
     (iVar3 = FUN_2c55700c(iVar3,DAT_2c58d1cc,iVar7 + 0x1c,1), -1 < iVar3)) {
    if (*piVar1 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,0xa4);
    FUN_2c674268(puVar2,0,0xa4);
    uVar5 = DAT_2c58d1d0;
    *puVar2 = DAT_2c58d1d0;
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
    *(undefined1 *)(puVar2 + 0x23) = 0;
    puVar2[0x21] = puVar2 + 0x23;
    puVar6 = *(undefined4 **)(param_2 + 8);
    *(undefined4 **)(param_2 + 8) = puVar2;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = uVar5;
      if ((undefined4 *)puVar6[0x21] != puVar6 + 0x23) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      if ((undefined4 *)puVar6[0x1b] != puVar6 + 0x1d) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar2 = (undefined4 *)puVar6[0x1a];
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = DAT_2c58d1d4;
        if ((undefined4 *)puVar2[0xd] != puVar2 + 0xf) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar2[7] == puVar2 + 9) {
          if ((undefined4 *)puVar2[1] == puVar2 + 3) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar2);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
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
      if ((undefined4 *)puVar6[1] == puVar6 + 3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,puVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    uVar5 = FUN_2c48e42c(param_1,DAT_2c58d1d8);
    iVar3 = FUN_2c58cdb0(uVar5,*(undefined4 *)(param_2 + 8));
    if (-1 < iVar3) {
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puVar2 = (undefined4 *)FUN_2c47245c(0,0x34);
      FUN_2c674268(puVar2,0,0x34);
      uVar5 = DAT_2c58d1dc;
      *puVar2 = DAT_2c58d1dc;
      puVar2[1] = puVar2 + 3;
      *(undefined1 *)(puVar2 + 3) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      puVar2[7] = puVar2 + 9;
      puVar6 = *(undefined4 **)(param_2 + 0xc);
      *(undefined4 **)(param_2 + 0xc) = puVar2;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = uVar5;
        if ((undefined4 *)puVar6[7] != puVar6 + 9) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680();
        }
        if ((undefined4 *)puVar6[1] == puVar6 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar6);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar3 = FUN_2c48e42c(param_1,DAT_2c58d1e0);
      iVar7 = *(int *)(param_2 + 0xc);
      if ((iVar3 != 0) && (iVar4 = FUN_2c55700c(iVar3,DAT_2c58d1e4,iVar7 + 4,0), -1 < iVar4)) {
        iVar3 = FUN_2c55700c(iVar3,DAT_2c58d1e8,iVar7 + 0x1c,0);
        return iVar3 >> 0x1f;
      }
    }
  }
  return -1;
}

