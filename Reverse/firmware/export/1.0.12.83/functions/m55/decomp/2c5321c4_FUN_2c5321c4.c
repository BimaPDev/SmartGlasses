/* FUN_2c5321c4 @ 0x2c5321c4 */

/* WARNING: Type propagation algorithm not settling */

void FUN_2c5321c4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_2c532318;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c532334,0xca,DAT_2c532330,DAT_2c53232c);
  }
  iVar3 = FUN_2c48e85c();
  uVar2 = DAT_2c53233c;
  uVar1 = DAT_2c53231c;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c532334,0xce,DAT_2c532330,DAT_2c532338,*(int *)(param_1 + 0xc) != 0);
  }
  piVar5 = *(int **)(param_1 + 8);
joined_r0x2c5321ec:
  do {
    if (piVar5 == (int *)0x0) {
      if (*DAT_2c532318 != local_2c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
    FUN_2c48e424(piVar5,uVar1);
    iVar3 = FUN_2c48e82c(piVar5);
    if ((iVar3 == 0) && (iVar3 = FUN_2c48e424(piVar5,uVar1), iVar3 != 0)) {
      uVar9 = *(undefined4 *)(iVar3 + 0x10);
    }
    else {
      uVar9 = 0;
    }
    iVar3 = FUN_2c48e82c(piVar5);
    if ((iVar3 == 0) && (iVar3 = FUN_2c48e424(piVar5,uVar2), iVar3 != 0)) {
      uVar7 = *(undefined4 *)(iVar3 + 0x10);
      iVar3 = FUN_2c48e82c(piVar5);
      uVar8 = uVar7;
      if (iVar3 != 0) goto LAB_2c5322a6;
LAB_2c532212:
      iVar3 = FUN_2c48e424(piVar5,DAT_2c532320);
      uVar8 = uVar7;
      if (iVar3 == 0) goto LAB_2c5322a6;
      pcVar6 = *(char **)(iVar3 + 0x10);
    }
    else {
      uVar7 = 0;
      iVar3 = FUN_2c48e82c(piVar5);
      uVar8 = 0;
      if (iVar3 == 0) goto LAB_2c532212;
LAB_2c5322a6:
      pcVar6 = (char *)0x0;
      uVar7 = uVar8;
    }
    iVar3 = FUN_2c48e82c(piVar5);
    if (iVar3 == 0) {
      FUN_2c48e424(piVar5,DAT_2c532324);
    }
    iVar3 = FUN_2c48e82c(piVar5);
    if (iVar3 == 0) {
      FUN_2c48e424(piVar5,DAT_2c532328);
    }
    local_30 = 0;
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      local_30 = FUN_2c53159c(uVar7,uVar9);
      puVar4 = *(undefined4 **)(param_2 + 4);
      if (puVar4 == *(undefined4 **)(param_2 + 8)) goto LAB_2c5322c4;
LAB_2c532262:
      *puVar4 = local_30;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 4;
      piVar5 = (int *)*piVar5;
      goto joined_r0x2c5321ec;
    }
    local_30 = FUN_2c53159c(uVar7,pcVar6);
    puVar4 = *(undefined4 **)(param_2 + 4);
    if (puVar4 != *(undefined4 **)(param_2 + 8)) goto LAB_2c532262;
LAB_2c5322c4:
    FUN_2c530f1c(param_2,puVar4,&local_30);
    piVar5 = (int *)*piVar5;
  } while( true );
}

