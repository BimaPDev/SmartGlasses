/* FUN_140a59e8 @ 0x140a59e8 */

void FUN_140a59e8(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_130 [248];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 in_stack_ffffffe4;
  undefined2 in_stack_ffffffe8;
  
  iVar4 = *DAT_140a5a74;
  uVar2 = thunk_FUN_14094f7c();
  thunk_FUN_14094f84(uVar2,DAT_140a5a78);
  iVar3 = FUN_140a1e34(&stack0xffffffe4);
  puVar1 = DAT_140a5a8c;
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_140a5a8c + 1) = in_stack_ffffffe4;
    *(undefined2 *)(puVar1 + 5) = in_stack_ffffffe8;
    FUN_1402a9fc(DAT_140a5a90,1,6,puVar1 + 2);
  }
  local_38 = DAT_140a5a80;
  uStack_34 = DAT_140a5a7c;
  local_2c = 0;
  uStack_28 = 0;
  local_30 = 0xf;
  FUN_1402a6e8(4,0x90,DAT_140a5a88,DAT_140a5a84);
  FUN_1402a9fc(DAT_140a5a90,1,0xf,DAT_140a5a8c);
  puVar1 = DAT_140a5a8c;
  if (*DAT_140a5a74 == iVar4) {
    local_2c = *DAT_14095d28;
    FUN_140e5658(auStack_130,0,0x104,0);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x47,DAT_14095d2c,*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],
                 puVar1[6]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

