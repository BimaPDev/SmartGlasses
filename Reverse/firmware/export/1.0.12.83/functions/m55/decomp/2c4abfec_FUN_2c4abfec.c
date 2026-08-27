/* FUN_2c4abfec @ 0x2c4abfec */

/* WARNING: Removing unreachable block (ram,0x2c4ac0d6) */

undefined4 FUN_2c4abfec(int *param_1)

{
  ushort local_16;
  int local_14;
  
  local_14 = *DAT_2c4ac11c;
  if (*param_1 != 0) {
    *param_1 = 0;
    if ((code *)param_1[0xe4] != (code *)0x0) {
      (*(code *)param_1[0xe4])();
    }
    FUN_2c4aa5dc(param_1,1);
    FUN_2c6444fc(4);
    if ((code *)param_1[0xd7] != (code *)0x0) {
      (*(code *)param_1[0xd7])(param_1,0);
    }
    FUN_2c6444fc(1);
    (*(code *)param_1[0xce])(param_1,(char)param_1[0x32],(short)param_1[0x34]);
    local_16 = 0;
    FUN_2c4ab134(param_1,&local_16);
    if ((param_1[0x36] & (uint)local_16) != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x3bd,DAT_2c4ac12c,DAT_2c4ac128,DAT_2c4ac134,(char)param_1[0x28],DAT_2c4ac130,
            (uint)local_16);
    }
    FUN_2c4ab4ec(param_1,0);
    (*(code *)param_1[0xd0])(param_1,(char)param_1[0xa5],(short)param_1[0xa6],(short)param_1[0xa7]);
    if ((param_1[0x36] & (uint)*(ushort *)(param_1 + 0x37)) != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x3ab,DAT_2c4ac12c,DAT_2c4ac128,DAT_2c4ac124,(char)param_1[0x28],DAT_2c4ac120,
            (uint)*(ushort *)(param_1 + 0x37));
    }
    *(undefined2 *)(param_1 + 0x37) = 0;
    (*(code *)param_1[0xd0])(param_1,(char)param_1[0x38],(short)param_1[0x39],(short)param_1[0x3a]);
  }
  if (*DAT_2c4ac11c != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

