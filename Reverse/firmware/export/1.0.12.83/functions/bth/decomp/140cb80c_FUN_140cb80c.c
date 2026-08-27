/* FUN_140cb80c @ 0x140cb80c */

void FUN_140cb80c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_140dd3a4(param_1);
  local_1c = &uStack_c;
  FUN_140d1548(auStack_28 + -(iVar1 + 0x207U & 0xfffffff8),iVar1 + 0x200,local_24,&uStack_c);
                    /* WARNING: Subroutine does not return */
  FUN_140da8b8();
}

