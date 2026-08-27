/* FUN_140be7cc @ 0x140be7cc */

void FUN_140be7cc(undefined1 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = DAT_140be7fc;
  cVar1 = *DAT_140be7f8;
  *DAT_140be7fc = param_1;
  if (cVar1 != '\0') {
    FUN_14029fb8(puVar2,1);
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_140be698();
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x140be7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar2,1);
    return;
  }
  return;
}

