/* FUN_2c57e4f8 @ 0x2c57e4f8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c57e4f8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uStack_58;
  uint *puStack_54;
  uint uStack_50;
  uint auStack_4c [4];
  undefined1 *puStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [16];
  int iStack_24;
  
  piVar4 = DAT_2c57e54c;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 == (undefined4 *)0x0) {
    if (*DAT_2c57e54c == 0) {
      FUN_2c4723c4();
      *piVar4 = 1;
    }
    puVar7 = (undefined4 *)FUN_2c47245c(0,0xc);
    uVar1 = DAT_2c57e550;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = uVar1;
    piVar4 = (int *)param_1[1];
    param_1[1] = (int)puVar7;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10))(piVar4);
      puVar7 = (undefined4 *)param_1[1];
    }
  }
  FUN_2c57e018(puVar7,param_2);
  iVar9 = *param_1;
  iVar8 = param_1[1];
  iStack_24 = *DAT_2c57dc50;
  if (*(int *)(iVar8 + 4) != 0) {
    if (*DAT_2c57dc50 != iStack_24) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    FUN_2c55fad8(*(int *)(iVar8 + 4));
    return;
  }
  FUN_2c60438c(iVar9);
  puVar2 = (undefined1 *)registry_lookup(0x6203);
  puStack_54 = auStack_4c;
  if (puVar2 == (undefined1 *)0x0) goto LAB_2c57dc46;
  uVar3 = FUN_2c66c4ec();
  uStack_58 = uVar3;
  if (uVar3 < 0x10) {
    puVar6 = auStack_4c;
    if (uVar3 == 1) {
      auStack_4c[0] = CONCAT31(auStack_4c[0]._1_3_,*puVar2);
    }
    else if (uVar3 != 0) goto LAB_2c57dbcc;
  }
  else {
    puStack_54 = (uint *)FUN_2c57d85c(&uStack_58,0);
    auStack_4c[0] = uStack_58;
    puVar6 = puStack_54;
LAB_2c57dbcc:
    FUN_2c674668(puVar6,puVar2,uVar3);
    puVar6 = puStack_54;
  }
  piVar4 = DAT_2c57dc54;
  *(undefined1 *)((int)puVar6 + uStack_58) = 0;
  uStack_38 = 0;
  auStack_34[0] = 0;
  uStack_50 = uStack_58;
  puStack_3c = auStack_34;
  if (*DAT_2c57dc54 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  piVar4 = (int *)FUN_2c47245c(0,0x60);
  uVar3 = uStack_50;
  puVar6 = puStack_54;
  *(undefined2 *)(piVar4 + 6) = 0;
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar5 = piVar4 + 10;
  *piVar4 = DAT_2c57dc58;
  piVar4[5] = DAT_2c57dc5c;
  piVar4[7] = 3;
  piVar4[8] = (int)piVar5;
  if (((undefined1 *)((int)puStack_54 + uStack_50) != (undefined1 *)0x0) &&
     (puStack_54 == (uint *)0x0)) goto LAB_2c57dc46;
  uStack_58 = uStack_50;
  if (uStack_50 < 0x10) {
    if (uStack_50 == 1) {
      *(char *)(piVar4 + 10) = (char)*puStack_54;
    }
    else if (uStack_50 != 0) goto LAB_2c57dbec;
  }
  else {
    piVar5 = (int *)FUN_2c57d85c(&uStack_58,0);
    piVar4[8] = (int)piVar5;
    piVar4[10] = uStack_58;
LAB_2c57dbec:
    FUN_2c674668(piVar5,puVar6,uVar3);
    piVar5 = (int *)piVar4[8];
  }
  uVar3 = uStack_38;
  puVar2 = puStack_3c;
  piVar4[9] = uStack_58;
  *(undefined1 *)((int)piVar5 + uStack_58) = 0;
  piVar5 = piVar4 + 0x10;
  piVar4[0xe] = (int)piVar5;
  if ((puStack_3c + uStack_38 != (undefined1 *)0x0) && (puStack_3c == (undefined1 *)0x0)) {
LAB_2c57dc46:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c57dc70);
  }
  uStack_58 = uStack_38;
  if (uStack_38 < 0x10) {
    if (uStack_38 == 1) {
      *(undefined1 *)(piVar4 + 0x10) = *puStack_3c;
      goto LAB_2c57db2a;
    }
    if (uStack_38 == 0) goto LAB_2c57db2a;
  }
  else {
    piVar5 = (int *)FUN_2c57d85c(&uStack_58,0);
    piVar4[0xe] = (int)piVar5;
    piVar4[0x10] = uStack_58;
  }
  FUN_2c674668(piVar5,puVar2,uVar3);
  piVar5 = (int *)piVar4[0xe];
LAB_2c57db2a:
  piVar4[0xf] = uStack_58;
  *(undefined1 *)((int)piVar5 + uStack_58) = 0;
  piVar4[0x15] = 8;
  piVar4[0x17] = iVar8;
  piVar4[0x14] = 0;
  piVar4[0x16] = 0;
  *(undefined2 *)(piVar4 + 5) = 0xa4;
  if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_54 == auStack_4c) {
    piVar5 = *(int **)(iVar8 + 4);
    *(int **)(iVar8 + 4) = piVar4;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
      piVar4 = *(int **)(iVar8 + 4);
    }
    if ((iVar9 != 0) && (iVar8 = FUN_2c606c34(iVar9), iVar8 != 0)) {
      piVar4[1] = iVar9;
      (**(code **)(*piVar4 + 4))(piVar4);
      (**(code **)*piVar4)(piVar4);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

