/* FUN_140486bc @ 0x140486bc */

undefined4 FUN_140486bc(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_14048718;
  puVar2 = (undefined4 *)FUN_140e5728(*DAT_14048718,0);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1404871c);
  }
  uVar3 = FUN_140e5998();
  puVar2[2] = param_1;
  *puVar2 = uVar3;
  puVar2[1] = 6;
  if (param_2 == (undefined4 *)0x0) {
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  else {
    uVar3 = param_2[1];
    puVar2[3] = *param_2;
    puVar2[4] = uVar3;
  }
  puVar2[5] = param_3;
  iVar4 = FUN_140e56b8(*puVar1,puVar2);
  if (iVar4 == 0) {
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14048720);
}

