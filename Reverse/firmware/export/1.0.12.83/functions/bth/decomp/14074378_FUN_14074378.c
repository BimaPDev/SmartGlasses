/* FUN_14074378 @ 0x14074378 */

undefined4 * FUN_14074378(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14073fdc(param_4 + 0x10,2);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 1) = param_1;
    *(undefined2 *)((int)puVar1 + 6) = param_2;
    *(undefined2 *)(puVar1 + 2) = param_3;
    *(short *)((int)puVar1 + 10) = (short)param_4;
    *puVar1 = 0xffffffff;
    FUN_140e5658(puVar1 + 3,0,param_4);
    return puVar1 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_140743cc,0x3c,DAT_140743c8);
}

