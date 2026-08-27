/* FUN_140489b8 @ 0x140489b8 */

undefined4
FUN_140489b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_14048a1c;
  puVar2 = (undefined4 *)FUN_140e5728(*DAT_14048a1c,0,param_3,param_4,param_4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14048a14);
  }
  uVar3 = FUN_140e5998();
  *puVar2 = uVar3;
  puVar2[3] = param_1;
  puVar2[4] = param_2;
  puVar2[2] = param_5;
  puVar2[5] = param_3;
  puVar2[6] = param_4;
  puVar2[1] = 0xf;
  iVar4 = FUN_140e56b8(*puVar1,puVar2);
  if (iVar4 == 0) {
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14048a18);
}

