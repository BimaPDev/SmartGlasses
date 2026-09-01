/* FUN_1011b4a2 @ 0x1011b4a2 */

undefined4 FUN_1011b4a2(void)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_1005b8b8();
  if (((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x18) != (undefined4 *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(iVar1 + 0x18),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1011b4b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}

