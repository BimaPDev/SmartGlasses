/* FUN_2c5580bc @ 0x2c5580bc */

void FUN_2c5580bc(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c5581a0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar5 = param_2 + param_3 * 6;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  piVar1 = DAT_2c5581a8;
  do {
    if (param_2 == puVar5) {
      if (*DAT_2c5581a0 == local_2c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    if (*piVar1 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    iVar2 = FUN_2c47245c(0,0x20);
    iVar6 = iVar2 + 0x10;
    *(int *)(iVar2 + 8) = iVar6;
    puVar3 = (undefined1 *)*param_2;
    uVar4 = param_2[1];
    if ((puVar3 + uVar4 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(DAT_2c5581a4);
    }
    local_30 = uVar4;
    if (uVar4 < 0x10) {
      if (uVar4 == 1) {
        *(undefined1 *)(iVar2 + 0x10) = *puVar3;
      }
      else if (uVar4 != 0) goto LAB_2c55816e;
    }
    else {
      iVar6 = FUN_2c557f50(&local_30,0);
      *(uint *)(iVar2 + 0x10) = local_30;
      *(int *)(iVar2 + 8) = iVar6;
LAB_2c55816e:
      FUN_2c674668(iVar6,puVar3,uVar4);
      iVar6 = *(int *)(iVar2 + 8);
    }
    *(uint *)(iVar2 + 0xc) = local_30;
    *(undefined1 *)(iVar6 + local_30) = 0;
    FUN_2c64cdb4(iVar2,param_1);
    param_2 = param_2 + 6;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  } while( true );
}

