/* FUN_2c64849c @ 0x2c64849c */

void FUN_2c64849c(undefined1 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = DAT_2c6484cc;
  cVar1 = *DAT_2c6484c8;
  *DAT_2c6484cc = param_1;
  if (cVar1 != '\0') {
    FUN_2c673a28(puVar2,1);
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_2c648328();
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c6484c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar2,1);
    return;
  }
  return;
}

