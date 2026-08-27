/* FUN_2c58cdb0 @ 0x2c58cdb0 */

int FUN_2c58cdb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar2 = FUN_2c55700c(param_1,DAT_2c58cf04,param_2 + 4,1,param_4);
  if ((((((iVar2 < 0) || (iVar2 = FUN_2c556d3c(param_1,DAT_2c58cf08,param_2 + 0x1c,0), iVar2 < 0))
        || (iVar2 = FUN_2c55700c(param_1,DAT_2c58cf0c,param_2 + 0x20,0,param_4), iVar2 < 0)) ||
       ((iVar2 = FUN_2c55700c(param_1,DAT_2c58cf10,param_2 + 0x38,1,param_4), iVar2 < 0 ||
        (iVar2 = FUN_2c55700c(param_1,DAT_2c58cf14,param_2 + 0x50,1,param_4), iVar2 < 0)))) ||
      ((iVar2 = FUN_2c55700c(param_1,DAT_2c58cf18,param_2 + 0x6c,1), iVar2 < 0 ||
       ((iVar2 = FUN_2c556db0(param_1,DAT_2c58cf1c,param_2 + 0x9c,1), iVar2 < 0 ||
        (iVar2 = FUN_2c55700c(param_1,DAT_2c58cf20,param_2 + 0x84,1), iVar2 < 0)))))) ||
     (iVar2 = FUN_2c556d3c(param_1,DAT_2c58cf24,param_2 + 0xa0,1), piVar1 = DAT_2c58cf28, iVar2 < 0)
     ) {
    return -1;
  }
  if (*DAT_2c58cf28 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x4c);
  FUN_2c674268(puVar3,0,0x4c);
  uVar4 = DAT_2c58cf2c;
  *puVar3 = DAT_2c58cf2c;
  puVar3[1] = puVar3 + 3;
  *(undefined1 *)(puVar3 + 3) = 0;
  puVar3[7] = puVar3 + 9;
  *(undefined1 *)(puVar3 + 9) = 0;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  puVar3[0xd] = puVar3 + 0xf;
  puVar5 = *(undefined4 **)(param_2 + 0x68);
  *(undefined4 **)(param_2 + 0x68) = puVar3;
  if (puVar5 == (undefined4 *)0x0) {
    uVar4 = FUN_2c48e42c(param_1,DAT_2c58cf30);
    iVar2 = FUN_2c58cd5c(uVar4,*(undefined4 *)(param_2 + 0x68));
    return iVar2 >> 0x1f;
  }
  *puVar5 = uVar4;
  if ((undefined4 *)puVar5[0xd] != puVar5 + 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
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
  FUN_2c472680(0,puVar5);
}

