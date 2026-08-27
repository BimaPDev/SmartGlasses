/* FUN_1404866c @ 0x1404866c */

undefined4 FUN_1404866c(undefined2 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_140486b0;
  puVar2 = (undefined4 *)FUN_140e5728(*DAT_140486b0,0,param_3,param_4,param_4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140486b4);
  }
  uVar3 = FUN_140e5998();
  *puVar2 = uVar3;
  puVar2[1] = 5;
  *(undefined2 *)(puVar2 + 2) = param_1;
  *(undefined2 *)((int)puVar2 + 10) = param_2;
  iVar4 = FUN_140e56b8(*puVar1,puVar2);
  if (iVar4 == 0) {
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140486b8);
}

