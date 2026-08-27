/* FUN_2c53dcc0 @ 0x2c53dcc0 */

void FUN_2c53dcc0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 *local_64 [2];
  undefined1 auStack_5c [16];
  undefined1 *local_4c;
  int iStack_48;
  undefined1 auStack_44 [16];
  int local_34;
  
  local_34 = *DAT_2c53ddd8;
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar4 != iVar3) {
    do {
      local_70 = DAT_2c53dddc;
      local_6c = *(undefined4 *)(iVar4 + 4);
      local_68 = *(undefined4 *)(iVar4 + 8);
      local_64[0] = auStack_5c;
      FUN_2c53d720(local_64,*(int *)(iVar4 + 0xc),*(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 0xc));
      local_4c = auStack_44;
      FUN_2c53d720(&local_4c,*(int *)(iVar4 + 0x24),*(int *)(iVar4 + 0x28) + *(int *)(iVar4 + 0x24))
      ;
      iVar2 = FUN_2c64ca5c(0x2c);
      *(undefined4 *)(iVar2 + 0x10) = local_6c;
      *(int *)(iVar2 + 0x14) = iVar2 + 0x1c;
      FUN_2c53d720(iVar2 + 0x14,local_4c,local_4c + iStack_48);
      FUN_2c53dc50(&local_78,param_1 + 0x10,iVar2 + 0x10);
      if (local_74 == 0) {
        if (iVar2 + 0x1c != *(int *)(iVar2 + 0x14)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        thunk_FUN_2c669588(iVar2,0x2c);
      }
      else {
        if ((local_78 == 0) && (local_74 != param_1 + 0x14)) {
          bVar1 = *(int *)(iVar2 + 0x10) < *(int *)(local_74 + 0x10);
        }
        else {
          bVar1 = true;
        }
        FUN_2c64e496(bVar1,iVar2,local_74,param_1 + 0x14);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      local_70 = DAT_2c53dddc;
      if (local_4c != auStack_44) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (local_64[0] != auStack_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar4 = iVar4 + 0x3c;
    } while (iVar3 != iVar4);
  }
  if (*DAT_2c53ddd8 != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

