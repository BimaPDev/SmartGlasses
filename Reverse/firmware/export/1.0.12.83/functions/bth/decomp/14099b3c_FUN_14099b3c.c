/* FUN_14099b3c @ 0x14099b3c */

void FUN_14099b3c(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_14099b78;
  FUN_140e5148(*DAT_14099b78,0xffffffff);
  if (param_2 < 3) {
    FUN_14030a1c(param_1);
    FUN_140e52d8(*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14099b80,DAT_14099b7c,param_2);
}

