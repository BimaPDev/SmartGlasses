/* FUN_2c5f52a4 @ 0x2c5f52a4 */

void FUN_2c5f52a4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *extraout_r1;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *local_1c;
  int local_18;
  uint local_14;
  
  local_18 = param_1[0x18];
  local_14 = *DAT_2c5f5348;
  local_1c = (char *)param_1[0x16];
  if (local_18 == 0) {
    iVar2 = 0;
  }
  else {
    do {
      if ((*local_1c != '[') || (iVar2 = FUN_2c5f904c(*param_1,&local_1c,param_1[1]), iVar2 == 0)) {
        iVar2 = param_1[0x18] - local_18;
        goto LAB_2c5f52ea;
      }
      local_1c = local_1c + iVar2;
      local_18 = local_18 - iVar2;
    } while (local_18 != 0);
    iVar2 = param_1[0x18];
  }
LAB_2c5f52ea:
  FUN_2c5f6be0(param_1 + 0x15,iVar2);
  puVar3 = extraout_r1;
  if ((int)param_1[0x18] < 1) {
switchD_2c5f5308_caseD_a:
    uVar1 = 0;
LAB_2c5f5326:
    if ((*DAT_2c5f5348 ^ local_14) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,puVar3,*DAT_2c5f5348 ^ local_14,0);
  }
  puVar4 = (undefined1 *)(param_1[0x16] + -1);
  puVar3 = (undefined1 *)(param_1[0x18] + param_1[0x16] + -1);
LAB_2c5f52fe:
  puVar4 = puVar4 + 1;
  switch(*puVar4) {
  case 9:
  case 0x20:
    break;
  case 10:
  case 0xd:
    goto switchD_2c5f5308_caseD_a;
  default:
    uVar1 = 1;
    goto LAB_2c5f5326;
  }
  if (puVar4 == puVar3) goto switchD_2c5f5308_caseD_a;
  goto LAB_2c5f52fe;
}

