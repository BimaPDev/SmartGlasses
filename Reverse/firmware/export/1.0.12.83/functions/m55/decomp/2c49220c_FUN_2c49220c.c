/* FUN_2c49220c @ 0x2c49220c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49220c(undefined1 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  uVar5 = _LAB_2c492240;
  if (*_LAB_2c492234 == '\0') {
    *_LAB_2c492234 = '\x01';
    func_0x2c63b4b8(uVar5);
  }
  puVar3 = _LAB_2c49223c;
  *_LAB_2c492238 = param_2;
  *puVar3 = param_1;
  puVar4 = DAT_2c492054;
  puVar3 = DAT_2c492050;
  uVar5 = thunk_FUN_2c489a64();
  uVar1 = *puVar3;
  uVar2 = *puVar4;
  uVar6 = FUN_2c4932f0();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x6ea,DAT_2c492064,DAT_2c492060,DAT_2c49205c,DAT_2c492058,uVar5,uVar1,uVar2,uVar6,unaff_r4
        ,unaff_r5);
}

