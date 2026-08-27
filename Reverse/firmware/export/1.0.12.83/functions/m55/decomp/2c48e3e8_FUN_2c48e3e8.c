/* FUN_2c48e3e8 @ 0x2c48e3e8 */

int FUN_2c48e3e8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_40;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  puVar1 = DAT_2c48dd80;
  local_1c = *DAT_2c48dd7c;
  FUN_2c674268(&local_40,0,0x24,0);
  local_40 = (*(code *)*puVar1)(0x100);
  local_3c = 0x100;
  local_2c = 0;
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  iVar3 = 0;
  if (local_40 == 0) goto LAB_2c48dd26;
  if ((param_1 != 0) && (iVar2 = FUN_2c48d800(param_1,&local_40), iVar3 = local_40, iVar2 != 0)) {
    if (local_40 != 0) {
      iVar2 = FUN_2c66c4ec(local_40 + local_38);
      local_38 = iVar2 + local_38;
    }
    if ((code *)puVar1[2] == (code *)0x0) {
      iVar3 = (*(code *)*puVar1)(local_38 + 1);
      if (iVar3 != 0) {
        uVar4 = local_38 + 1U;
        if (local_3c <= local_38 + 1U) {
          uVar4 = local_3c;
        }
        FUN_2c674668(iVar3,local_40,uVar4);
        *(undefined1 *)(iVar3 + local_38) = 0;
        (*(code *)puVar1[1])(local_40);
        goto LAB_2c48dd26;
      }
    }
    else {
      iVar3 = (*(code *)puVar1[2])(iVar3,local_38 + 1);
      if (iVar3 != 0) goto LAB_2c48dd26;
    }
  }
  iVar3 = 0;
  if (local_40 != 0) {
    iVar3 = 0;
    (*(code *)puVar1[1])(local_40);
  }
LAB_2c48dd26:
  if (*DAT_2c48dd7c != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar3;
}

