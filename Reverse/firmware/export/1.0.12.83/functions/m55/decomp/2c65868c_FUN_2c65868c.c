/* FUN_2c65868c @ 0x2c65868c */

void FUN_2c65868c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined4 *local_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_24 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_2c66c4ec(param_1);
  local_1c = &uStack_c;
  FUN_2c65e5c0(auStack_28 + -(iVar1 + 0x207U & 0xfffffff8),iVar1 + 0x200,local_24,&uStack_c);
                    /* WARNING: Subroutine does not return */
  FUN_2c668474();
}

