/* FUN_2c582a14 @ 0x2c582a14 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c582a14(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_4c [4];
  undefined1 *local_3c;
  int local_38;
  undefined1 local_34 [16];
  int local_24;
  
  piVar1 = DAT_2c582bb8;
  local_24 = *DAT_2c582bb4;
  if (*(int *)(param_1 + 4) != 0) {
    if (*DAT_2c582bb4 != local_24) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    FUN_2c55fad8();
    return;
  }
  if (*DAT_2c582bb8 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  piVar1 = (int *)FUN_2c47245c(0,0x88);
  puVar2 = (undefined1 *)registry_lookup(DAT_2c582bbc);
  local_54 = local_4c;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c582bc0);
  }
  uVar3 = FUN_2c66c4ec();
  local_58 = uVar3;
  if (uVar3 < 0x10) {
    puVar5 = local_4c;
    if (uVar3 == 1) {
      local_4c[0] = CONCAT31(local_4c[0]._1_3_,*puVar2);
      goto LAB_2c582a8c;
    }
    if (uVar3 == 0) goto LAB_2c582a8c;
  }
  else {
    local_54 = (uint *)FUN_2c5826a0(&local_58,0);
    local_4c[0] = local_58;
    puVar5 = local_54;
  }
  FUN_2c674668(puVar5,puVar2,uVar3);
  puVar5 = local_54;
LAB_2c582a8c:
  *(undefined1 *)((int)puVar5 + local_58) = 0;
  local_34[0] = 0;
  local_38 = 0;
  *piVar1 = DAT_2c582bc4;
  iVar4 = DAT_2c582bc8;
  *(undefined2 *)(piVar1 + 6) = 0;
  piVar1[5] = iVar4;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[7] = 2;
  piVar1[8] = (int)(piVar1 + 10);
  piVar1[3] = 0;
  piVar1[4] = 0;
  local_50 = local_58;
  local_3c = local_34;
  FUN_2c582710(piVar1 + 8,local_54,local_58 + (int)local_54);
  piVar1[0xe] = (int)(piVar1 + 0x10);
  FUN_2c582710(piVar1 + 0xe,local_3c,local_3c + local_38);
  piVar1[0x15] = 0xc;
  piVar1[0x17] = param_1;
  piVar1[0x14] = 0;
  piVar1[0x16] = 0;
  *(undefined2 *)(piVar1 + 5) = 0xf8;
  if (local_3c != local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_54 == local_4c) {
    *piVar1 = DAT_2c582bcc;
    FUN_2c674268(piVar1 + 0x18,0,0x28);
    *(int **)(param_1 + 4) = piVar1;
    if ((param_2 != 0) && (iVar4 = FUN_2c606c34(param_2), iVar4 != 0)) {
      piVar1[1] = param_2;
      (**(code **)(*piVar1 + 4))(piVar1);
      (**(code **)*piVar1)(piVar1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

