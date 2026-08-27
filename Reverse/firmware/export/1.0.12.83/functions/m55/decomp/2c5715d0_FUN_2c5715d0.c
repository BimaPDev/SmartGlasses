/* FUN_2c5715d0 @ 0x2c5715d0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c5715d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 *local_54;
  int iStack_50;
  undefined1 auStack_4c [16];
  undefined1 *local_3c;
  int iStack_38;
  undefined1 auStack_34 [16];
  int local_24;
  
  local_24 = *DAT_2c571714;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_2c55fad8();
    FUN_2c571de0(*(undefined4 *)(param_1 + 8),2);
    if (*DAT_2c571714 == local_24) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  local_54 = auStack_4c;
  FUN_2c571224(&local_54,DAT_2c571718 + -6,DAT_2c571718,0);
  piVar4 = DAT_2c571720;
  local_3c = auStack_34;
  FUN_2c571224(&local_3c,DAT_2c57171c);
  if (*piVar4 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x60);
  *puVar2 = DAT_2c571724;
  uVar1 = DAT_2c571728;
  *(undefined2 *)(puVar2 + 6) = 0;
  puVar2[5] = uVar1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[7] = 2;
  puVar2[8] = puVar2 + 10;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_2c5711a8(puVar2 + 8,local_54,local_54 + iStack_50);
  puVar2[0xe] = puVar2 + 0x10;
  FUN_2c5711a8(puVar2 + 0xe,local_3c,local_3c + iStack_38);
  puVar2[0x15] = 0xc;
  puVar2[0x17] = param_1;
  puVar2[0x14] = 0;
  puVar2[0x16] = 0;
  *(undefined2 *)(puVar2 + 5) = 0xf8;
  *(undefined4 **)(param_1 + 4) = puVar2;
  if (local_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (param_2 != 0) {
    piVar4 = *(int **)(param_1 + 4);
    iVar3 = FUN_2c606c34(param_2);
    if (iVar3 != 0) {
      piVar4[1] = param_2;
      (**(code **)(*piVar4 + 4))(piVar4);
      (**(code **)*piVar4)(piVar4);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

