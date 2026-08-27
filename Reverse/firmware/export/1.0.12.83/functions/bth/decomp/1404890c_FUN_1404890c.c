/* FUN_1404890c @ 0x1404890c */

undefined4 FUN_1404890c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_1404894c;
  puVar2 = (undefined4 *)FUN_140e5728(*DAT_1404894c,0);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14048950);
  }
  uVar3 = FUN_140e5998();
  *puVar2 = uVar3;
  puVar2[1] = 0xd;
  puVar2[2] = param_1;
  iVar4 = FUN_140e56b8(*puVar1,puVar2);
  if (iVar4 == 0) {
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14048954);
}

