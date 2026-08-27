/* FUN_14050f9c @ 0x14050f9c */

void FUN_14050f9c(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  
  if (*(char *)(DAT_1405103c + 0x123) == -1) {
    if (*(char *)(DAT_1405103c + 0x122) == -1) {
      cVar2 = FUN_14050e38(param_1,3,4,0);
      goto LAB_14050fde;
    }
    cVar2 = FUN_14050e38(param_1,3,4,0);
    uVar1 = *(undefined1 *)(param_1 + 10);
    uVar3 = 0x552;
    uVar4 = DAT_14051040;
  }
  else {
    cVar2 = FUN_14050e38(param_1,2,4,0);
    uVar1 = *(undefined1 *)(param_1 + 10);
    uVar3 = 0x54d;
    uVar4 = DAT_14051050;
  }
  FUN_1402a6e8(4,uVar3,DAT_14051048,DAT_14051044,uVar4,uVar1,cVar2);
LAB_14050fde:
  if (cVar2 != '\x01') {
    FUN_1402a6e8(4,0x567,DAT_14051048,DAT_14051044,DAT_1405104c);
    return;
  }
  FUN_1402a6e8(4,0x55b,DAT_14051048,DAT_14051044,DAT_14051054);
  if ((*DAT_1409e6f8 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*DAT_1409e6f8 + 0xc), UNRECOVERED_JUMPTABLE != (code *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x1409e6f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0x15,*(undefined1 *)(param_1 + 10));
    return;
  }
  return;
}

