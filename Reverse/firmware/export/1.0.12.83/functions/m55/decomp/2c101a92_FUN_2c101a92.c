/* FUN_2c101a92 @ 0x2c101a92 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c101a92(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined2 *)(param_2 + -0xed);
  puVar1 = (undefined2 *)0x390;
  puVar2 = (undefined2 *)0x3a0;
  lVar4 = 4;
  while( true ) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

