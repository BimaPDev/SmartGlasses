/* FUN_10070204 @ 0x10070204 */

void FUN_10070204(char *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  
  FUN_10055b54(0xc);
  UNRECOVERED_JUMPTABLE = DAT_10070248;
  (*DAT_10070248)(1);
  FUN_10055b98(0xc);
  iVar1 = DAT_1007024c;
  *DAT_10070250 = 0;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xfffffcff | 0x200;
  *(undefined4 *)(iVar1 + 0x304) = 0;
  uVar2 = DAT_10070254;
  if (*param_1 == '\0') {
    uVar2 = 0xc0000000;
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x10070246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

