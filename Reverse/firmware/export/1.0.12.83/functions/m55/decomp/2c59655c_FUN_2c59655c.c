/* FUN_2c59655c @ 0x2c59655c */

void FUN_2c59655c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint uStack_1c;
  undefined1 local_18;
  int local_14;
  
  local_14 = *DAT_2c596620;
  piVar2 = (int *)FUN_2c621080(param_2,param_2,param_3,0);
  pcVar3 = (char *)FUN_2c62107c(param_2);
  cVar1 = *pcVar3;
  *(char *)((int)piVar2 + 0x2a) = cVar1;
  if ((cVar1 == '\0') && (iVar4 = FUN_2c5964e4(piVar2), iVar4 != 0)) {
    if (*(code **)(*piVar2 + 0x18) == DAT_2c596624) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c596630,0x5c6,DAT_2c596628,DAT_2c59662c,DAT_2c596628);
    }
    (**(code **)(*piVar2 + 0x18))(piVar2,DAT_2c596634);
    local_24 = *DAT_2c596638;
    local_20 = DAT_2c596638[1];
    uStack_1c = DAT_2c596638[2];
    local_28 = 0xc;
    local_18 = 0;
    local_2c = &local_24;
    FUN_2c5939c8(*(undefined4 *)(piVar2[0x11] + 0x24),&local_2c);
    if (local_2c != &local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*DAT_2c596620 == local_14) {
      return;
    }
  }
  else if (*DAT_2c596620 == local_14) {
    local_20 = (uint)*(byte *)((int)piVar2 + 0x2a);
    local_24 = (uint)*(byte *)((int)piVar2 + 0x29);
    local_28 = (uint)*(byte *)((int)piVar2 + 0x21);
    local_2c = (uint *)(uint)*(byte *)((int)piVar2 + 0x23);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c59546c,0x444,DAT_2c595464,DAT_2c595468,DAT_2c595464,0,
                 *(undefined1 *)((int)piVar2 + 0x25),(char)piVar2[9],
                 *(undefined1 *)((int)piVar2 + 0x26),*(undefined1 *)((int)piVar2 + 0x27),
                 (char)piVar2[10],*(undefined1 *)((int)piVar2 + 0x22));
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

