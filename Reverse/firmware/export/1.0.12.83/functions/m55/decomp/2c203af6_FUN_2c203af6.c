/* FUN_2c203af6 @ 0x2c203af6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c203af6(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *unaff_lr;
  longlong lVar5;
  
  puVar1 = (undefined1 *)0x3e8;
  puVar2 = (undefined1 *)0x3f0;
  puVar3 = (undefined1 *)0x3f8;
  puVar4 = (undefined1 *)0x400;
  lVar5 = 8;
  while( true ) {
    *unaff_lr = *puVar1;
    unaff_lr[1] = *puVar2;
    unaff_lr[2] = *puVar3;
    unaff_lr[3] = *puVar4;
    unaff_lr = unaff_lr + 4;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

