/* FUN_2c5367a8 @ 0x2c5367a8 */

void FUN_2c5367a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_c;
  
  local_c = *DAT_2c53681c;
  FUN_2c5e8e18();
  FUN_2c674268(auStack_60,0,0x50);
  local_54 = FUN_2c5e2e8c(DAT_2c536820);
  local_50 = registry_lookup(0x6121);
  iVar1 = FUN_2c66c4ec(param_2);
  uVar2 = FUN_2c669578(iVar1 + 1);
  FUN_2c674668(uVar2,param_2,iVar1 + 1);
  local_4c = uVar2;
  FUN_2c5e8f34(auStack_60);
  if (*DAT_2c53681c == local_c) {
    FUN_2c669588(uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

