/* FUN_2c58cb1c @ 0x2c58cb1c */

int FUN_2c58cb1c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = DAT_2c58cbc4;
  if (param_1 == 0) {
    return -1;
  }
  if (*DAT_2c58cbc4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x4c);
  FUN_2c674268(puVar2,0,0x4c);
  uVar3 = DAT_2c58cbc8;
  *puVar2 = DAT_2c58cbc8;
  puVar2[1] = puVar2 + 3;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[7] = puVar2 + 9;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  puVar2[0xd] = puVar2 + 0xf;
  puVar5 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 4) = puVar2;
  if (puVar5 == (undefined4 *)0x0) {
    uVar3 = FUN_2c48e42c(param_1,DAT_2c58cbcc,uVar3,puVar2 + 0xf,param_4);
    iVar4 = FUN_2c58cac8(uVar3,*(undefined4 *)(param_2 + 4));
    return iVar4 >> 0x1f;
  }
  *puVar5 = uVar3;
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

