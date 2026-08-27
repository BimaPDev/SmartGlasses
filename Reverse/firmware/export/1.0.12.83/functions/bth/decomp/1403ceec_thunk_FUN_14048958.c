/* thunk_FUN_14048958 @ 0x1403ceec */

undefined4 thunk_FUN_14048958(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_140489ac;
  puVar2 = (undefined4 *)FUN_140e5728(*DAT_140489ac,0);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140489b0);
  }
  uVar3 = FUN_140e5998();
  *puVar2 = uVar3;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[2] = param_3;
  puVar2[3] = param_1;
  puVar2[4] = param_2;
  puVar2[1] = 0xf;
  iVar4 = FUN_140e56b8(*puVar1,puVar2);
  if (iVar4 == 0) {
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140489b4);
}

